params ["_obj", "_cargo", "_inventory"];

//handle cargo
{
    _x params ["_type", "_magClass", "_cargo_obj"];

    private _l = _type createVehicle [0, 0, 0];
    if (_magClass != "") then {
        _l setVariable ["ace_rearm_magazineClass", _magClass, true]
    };
    btc_log_obj_created pushBack _l;
    btc_curator addCuratorEditableObjects [[_l], false];

    clearWeaponCargoGlobal _l;
    clearItemCargoGlobal _l;
    clearMagazineCargoGlobal _l;

    _cargo_obj params ["_weap_obj", "_mags_obj", "_items_obj"];

    if !(_weap_obj isEqualTo []) then {
        for "_i" from 0 to ((count (_weap_obj select 0)) - 1) do {
            _l addWeaponCargoGlobal [(_weap_obj select 0) select _i, (_weap_obj select 1) select _i];
        };
    };

    if !(_mags_obj isEqualTo []) then {
        for "_i" from 0 to ((count (_mags_obj select 0)) - 1) do {
            _l addMagazineCargoGlobal [(_mags_obj select 0) select _i, (_mags_obj select 1) select _i];
        };
    };

    if !(_items_obj isEqualTo []) then {
        for "_i" from 0 to ((count (_items_obj select 0)) - 1) do {
            _l addItemCargoGlobal [(_items_obj select 0) select _i, (_items_obj select 1) select _i];
        };
    };
    [_l, _obj] call ace_cargo_fnc_loadItem;
} forEach _cargo;

//set inventory content for weapons, magazines and items
_inventory params ["_weap", "_mags", "_items"];

clearWeaponCargoGlobal _obj;
clearItemCargoGlobal _obj;
clearMagazineCargoGlobal _obj;

if !(_weap isEqualTo []) then {
    for "_i" from 0 to ((count (_weap select 0)) - 1) do {
        _obj addWeaponCargoGlobal [(_weap select 0) select _i, (_weap select 1) select _i];
    };
};
if !(_mags isEqualTo []) then {
    for "_i" from 0 to ((count (_mags select 0)) - 1) do {
        _obj addMagazineCargoGlobal [(_mags select 0) select _i, (_mags select 1) select _i];
    };
};
if !(_items isEqualTo []) then {
    for "_i" from 0 to ((count (_items select 0)) - 1) do {
        _obj addItemCargoGlobal [(_items select 0) select _i, (_items select 1) select _i];
    };
};

_obj
