_host = _this select 0;
_caller = _this select 1;
_id = _this select 2;
_params = _this select 3;
_typehalo = _params select 0;//true for all group, false for player only.
_althalo = _params select 1;//altitude of halo jump
_altchute = _params select 2;//altitude for autochute deployment

if (not alive _host) exitwith {
hint "Halo Not Available"; 
_host removeaction _id;
};

_caller groupchat "";

openMap true;

mapclick = false;

onMapSingleClick "clickpos = _pos; mapclick = true; onMapSingleClick """";true;";

waituntil {mapclick or !(visiblemap)};
if (!visibleMap) exitwith {
	_caller groupchat "";
	};
_pos = clickpos;

if (_typehalo) then {
_grp1 = group _caller;

{_x setpos [_pos select 0, _pos select 1, _althalo];} foreach units _grp1;

{_x spawn bis_fnc_halo} foreach units _grp1;

} else {
_caller setpos [_pos select 0, _pos select 1, _althalo];

_caller spawn bis_fnc_halo;

};
sleep 1;

[_caller] spawn bis_fnc_halo;

openMap false;

_bis_fnc_halo_action = _caller addaction ["<t color='#ff0000'>开伞</t>","A3\functions_f\misc\fn_HALO.sqf",[],1,true,true,"Eject"];

sleep 5;

_caller groupchat "";// ";

//auto open before impact
waituntil {(position _caller select 2) <= _altchute};

_caller removeaction _bis_fnc_halo_action;

if ((vehicle _caller) iskindof "ParachuteBase") exitwith {};

_caller groupchat "";

[_caller] spawn bis_fnc_halo;