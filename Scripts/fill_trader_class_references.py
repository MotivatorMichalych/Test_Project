import json

import unreal

ITEMS_ROOT = "/Game/_Project/ItemsData/DataTable/Items"
TRADERS_ROOT = "/Game/_Project/ItemsData/DataTable/Traders"
TOOL_CLASSES_ROOT = "/Game/_Project/Classes/MainItemClasses/Tools"
ITEM_TABLES_WITHOUT_CLASS = {"DT_Enchant", "DT_Tools"}
TOOL_ITEM_CLASSES = {
    "bg_cavalry_saddlebags": "BP_CavalrySaddle",
    "bg_elven_saddlebags": "BP_ElvenSaddle",
    "bg_guards_saddlebags": "BP_GuardSaddle",
    "bg_soldiers_saddlebags": "BP_SoldierSaddle",
    "bg_worn_saddlebags": "BP_WornSaddle",
    "tl_disemb_throwing_knives": "BP_ThrowKnifeBlood",
    "tl_fire_bomb": "BP_FireBomb",
    "tl_hiding_bomb": "BP_HideBomb",
    "tl_icy_bomb": "BP_IceBomb",
    "tl_poison_throwing_knives": "BP_ThrowKnifePoison",
    "tl_throwing_knives": "BP_ThrowKnife",
    "tl_torch": "BP_Torch",
}
CLASS_COLUMN_PREFIX = "Class"
CLASS_KEY = "Class"
ROW_NAME_KEY = "Name"
UNRESOLVED_MARKER = "None"
EMPTY_VALUES = {"", UNRESOLVED_MARKER}
GENERATED_CLASS_PREFIX = "/Script/Engine.BlueprintGeneratedClass"


class Report:
    def __init__(self):
        self.filled = 0
        self.filled_cells = 0
        self.skipped = 0
        self.unresolved = {}

    def line(self, text):
        unreal.log("FILL {}".format(text))


def to_package_path(object_path):
    return object_path.split(".")[0] if "." in object_path else object_path


def class_column_of(data_table):
    column_names = unreal.DataTableFunctionLibrary.get_data_table_column_names(data_table)
    return next((column for column in column_names if str(column).startswith(CLASS_COLUMN_PREFIX)), None)


def read_pairs(data_table):
    class_column = class_column_of(data_table)
    if class_column is None:
        return []
    row_names = unreal.DataTableFunctionLibrary.get_data_table_row_names(data_table)
    values = unreal.DataTableFunctionLibrary.get_data_table_column_as_string(data_table, class_column)
    return [(str(name), str(value)) for name, value in zip(row_names, values)]


def build_tool_class_map():
    mapping = {}
    for row_name, asset_name in TOOL_ITEM_CLASSES.items():
        package_path = "{}/{}".format(TOOL_CLASSES_ROOT, asset_name)
        asset = unreal.load_asset(package_path)
        if asset is None:
            continue
        mapping[row_name] = "{}'{}.{}_C'".format(GENERATED_CLASS_PREFIX, package_path, asset_name)
    return mapping


def build_canonical_map():
    mapping = {}
    for object_path in unreal.EditorAssetLibrary.list_assets(ITEMS_ROOT, True, False):
        package_path = to_package_path(object_path)
        data_table = unreal.load_asset(package_path)
        if not isinstance(data_table, unreal.DataTable):
            continue
        if package_path.split("/")[-1] in ITEM_TABLES_WITHOUT_CLASS:
            continue
        for row_name, value in read_pairs(data_table):
            if value.strip() not in EMPTY_VALUES:
                mapping[row_name] = value
    mapping.update(build_tool_class_map())
    return mapping


def apply_to_table(package_path, canonical_map, report):
    data_table = unreal.load_asset(package_path)
    exported = unreal.DataTableFunctionLibrary.export_data_table_to_json_string(data_table)
    rows = json.loads(exported)

    changed = 0
    unresolved = []
    for row in rows:
        current = row.get(CLASS_KEY, UNRESOLVED_MARKER)
        if str(current).strip() not in EMPTY_VALUES:
            continue
        row_name = row.get(ROW_NAME_KEY, "")
        replacement = canonical_map.get(row_name)
        if replacement is None:
            unresolved.append(row_name)
            continue
        row[CLASS_KEY] = replacement
        changed += 1

    if changed == 0:
        report.skipped += 1
        report.line("SKIP {} changed=0 unresolved={}".format(package_path, len(unresolved)))
        return unresolved

    unreal.DataTableFunctionLibrary.fill_data_table_from_json_string(data_table, json.dumps(rows))
    unreal.EditorAssetLibrary.save_asset(package_path)
    report.filled += 1
    report.filled_cells += changed
    report.line("SAVED {} cells={} unresolved={}".format(package_path, changed, len(unresolved)))
    return unresolved


def main():
    report = Report()
    canonical_map = build_canonical_map()
    report.line("CANONICAL {}".format(len(canonical_map)))

    for object_path in unreal.EditorAssetLibrary.list_assets(TRADERS_ROOT, True, False):
        package_path = to_package_path(object_path)
        if not isinstance(unreal.load_asset(package_path), unreal.DataTable):
            continue
        for row_name in apply_to_table(package_path, canonical_map, report):
            report.unresolved.setdefault(row_name, []).append(package_path)

    report.line("TABLES_FILLED {} TABLES_SKIPPED {} CELLS {} UNRESOLVED_NAMES {}".format(
        report.filled, report.skipped, report.filled_cells, len(report.unresolved)))
    for row_name, tables in sorted(report.unresolved.items()):
        report.line("UNRESOLVED {} -> {}".format(row_name, [t.split("/")[-1] for t in tables]))
    unreal.log("FILL_DONE")


main()
