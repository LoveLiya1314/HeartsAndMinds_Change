class Params {
    class btc_p_time_title { // << Time options >>时间选项
        title = $STR_BTC_HAM_PARAM_TIME_TITLE;
        values[]={0};
        texts[]={""};
        default = 0;
    };
    class btc_p_time { // Set the start time:设置开始时间
        title = __EVAL(format ["      %1", localize "STR_A3_CFGVEHICLES_MODULEDATE_F_ARGUMENTS_HOUR_0"]);
        values[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24};
        texts[]={"1","2","3","4","5","6","7","8","9","10","11","12","13","14","15","16","17","18","19","20","21","22","23","24"};
        default = 5;
    };
    class btc_p_acctime { // Acceleration time multiplier:加速时间乘数
        title = __EVAL(format ["      %1", localize "STR_USRACT_TIME_INC"]);
        values[]={1,2,3,4,5,6,7,8,9,10,11,12};
        texts[]={"1","2","3","4","5","6","7","8","9","10","11","12"};
        default = 4;
    };
    class btc_p_db_title { // << Server management >>
        title = $STR_BTC_HAM_PARAM_DB_TITLE;
        values[]={0};
        texts[]={""};
        default = 0;
    };
    class btc_p_load { // Load the savegame (if available)加载保存游戏
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_DB_LOAD"]);
        values[]={0,1};
        texts[]={$STR_DISABLED,$STR_ENABLED};
        default = 1;
    };
    class btc_p_auto_db { // Auto savegame when all players disconnected： 当所有人离开服务器时存档
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_DB_ASAVE"]);
        values[]={0,1};
        texts[]={$STR_DISABLED,$STR_ENABLED}; // texts[]={"Off","On"};
        default = 1;
    };
    class btc_p_db_autoRestart { // Auto restart/shutdown server (Must define in server.cfg: serverCommandPassword = "btc_password")自动重启/关闭服务器
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_DB_ARESTART"]);
        values[]={0,1,2,3,4};
        texts[]={$STR_DISABLED,$STR_DISP_MP_DS_RESTART,$STR_BTC_HAM_PARAM_DB_SHUTDOWN,$STR_BTC_HAM_PARAM_DB_SAVERESTART, $STR_BTC_HAM_PARAM_DB_SAVESHUTDOWN}; // texts[]={"Off","Restart", "Shutdown","Save and restart", "Save and shutdown"};
        default = 3;
    };
    class btc_p_db_autoRestartTime { // Time before auto restart/shutdown server
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_DB_ARESTARTTIME"]);
        values[]={1,2,3,4,5,6,7,8,9,10,11,12,24,48,72};
        texts[]={"1h","2h","3h","4h","5h","6h","7h","8h","9h","10h","11h","12h","24h","48h","72h"};
        default = 12;
    };
    //     class btc_p_change_time { // Enable change day time for officer on the arsenal box:
    //     title = __EVAL(format ["      %1", localize "STR_BTC_HAM_CHANGE_TIME_ENABLEARSENAL"]);
    //     values[]={0,1};
    //     texts[]={$STR_DISABLED,$STR_ENABLED};
    //     default = 0;
    // };    
    // class btc_p_change_weather { // Enable change weather for officer on the arsenal box
    //     title = __EVAL(format ["      %1", localize "STR_BTC_HAM_CHANGE_WEATHER_ENABLEARSENAL"]);
    //     values[]={0,1};
    //     texts[]={$STR_DISABLED,$STR_ENABLED};
    //     default = 0;
    // };
    class btc_p_respawn_title { // << Respawn options重生选项 >> 
        title = $STR_BTC_HAM_RESP_TITLE;
        values[]={0};
        texts[]={""};
        default = 0;
    };
    class btc_p_respawn_location { // Respawn locations available:重生位置
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_RESP_LOCATION"]);
        values[]={0,1,2,3,4};
        texts[]={$STR_BTC_HAM_RESP_FOBRALLY, $STR_BTC_HAM_RESP_FOBRALLYHELO, $STR_BTC_HAM_RESP_FOBRALLYHELI, $STR_BTC_HAM_RESP_FOBRALLYHELIVEHI, $STR_BTC_HAM_RESP_FOBRALLYHELIVEHILEADER};
        default = 2;
    };
    class btc_p_respawn_fromFOBToBase { // Allow respawn from FOB to base:允许在fob重生
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_RESP_FOBTOBASE"]);
        values[]={0,1};
        texts[]={$STR_DISABLED, $STR_ENABLED};
        default = 1;
    };
    class btc_p_rallypointTimer { // Time before rallypoint self-destruction:集结点自毁时间
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_RESP_RALLYTIMER"]);
        values[]={0,5,10,30,60};
        texts[]={$STR_DISABLED,"5 min","10 min","30 min","60 min"};
        default = 60;
    };
    class btc_p_respawn_ticketsAtStart { // Number of tickets at mission start:任务开始前重生票数
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_RESP_TICKETSATSTART"]);
        values[]={-1,0,1,2,3,4,5,10,15,20,25,30,50,70,100,150,200};
        texts[]={$STR_DISABLED,"0","1","2","3","4","5","10","15","20","25","30","50","70","100","150","200"};
        default = -1;
    };
    class btc_p_respawn_ticketsLost { // Number of tickets lost per death:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_RESP_TICKETSLOST"]);
        values[]={1,2,3,4,5,6,7,8,9,10};
        texts[]={"1","2","3","4","5","6","7","8","9","10"};
        default = 1;
    };
    class btc_p_respawn_ticketsShare { // Tickets are share between:共享票数
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_RESP_TICKETSHARE"]);
        values[]={0,1};
        texts[]={$STR_BTC_HAM_RESP_SAMEFACTION, $STR_BTC_HAM_RESP_NOTSHARE};
        default = 1;
    };
    class btc_p_respawn_ticketsFromPrisoners { // Attribute tickets from prisoners to (Enable only if tickets are not share):
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_RESP_TICKETPRISONER"]);
        values[]={1,2,3,4};
        texts[]={$STR_BTC_HAM_RESP_ALLCONNECTED, $STR_BTC_HAM_RESP_PLAYER, $STR_BTC_HAM_RESP_DEADPLAYER, $STR_BTC_HAM_RESP_LOWESTPLAYER};
        default = 1;
    };
    class btc_p_body_timeBeforeShowMarker { // Time before showing marker of dead player's body:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_RESP_TIMEBEFORESHOWMARKER"]);
        values[]={-1,0,5,10,30,60};
        texts[]={$STR_DISABLED,"0 min","5 min","10 min","30 min","60 min"};
        default = 10;
    };
    class btc_p_respawn_arsenal { // ACE Arsenal available on respawn after been killed:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_RESP_ENABLEARSENAL"]);
        values[]={0,1};
        texts[]={$STR_DISABLED,$STR_ENABLED};
        default = 0;
    };
        class btc_p_slot_isShare { // Each slot is share between players
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_SLOT_ISSHARE"]);
        values[]={0,1};
        texts[]={$STR_DISABLED, $STR_ENABLED};
        default = 0;
    };
    class btc_p_slot_isSaved { // Slot info is saved between disconnects断开连接后会保存插槽信息
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_SLOT_ISSAVED"]);
        values[]={0,1};
        texts[]={$STR_DISABLED, $STR_ENABLED};
        default = 0;
    };
    class btc_p_type_title { // << Faction options >>
        title = $STR_BTC_HAM_PARAM_FAC_TITLE;
        values[]={0};
        texts[]={""};
        default = 0;
    };
    class btc_p_en { // Enemy type:敌人类型
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_FAC_ETYPE"]);
        values[]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68};
        texts[]={"0 - Bohemia Interactive: åŠ«åŒª (Side: GUER)","1 - Bohemia Interactive: AAF (Side: GUER)","2 - Bohemia Interactive: CSAT (Side: EAST)","3 - Bohemia Interactive: FIA (Side: EAST)","4 - Bohemia Interactive: FIA (Side: GUER)","5 - Bohemia Interactive: FIA (Side: WEST)","6 - Bohemia Interactive: LDF (Side: GUER)","7 - Bohemia Interactive: NATO (Side: WEST)","8 - Bohemia Interactive: Secret Weapons (Side: EAST)","9 - Bohemia Interactive: Secret Weapons (Side: GUER)","10 - Bohemia Interactive: Secret Weapons (Side: WEST)","11 - Bohemia Interactive: Syndikat (Side: GUER)","12 - EMP Bohemia Interactive: Greystone PMC (Side: EAST)","13 - EMP Bohemia Interactive: Greystone PMC (Side: WEST)","14 - Enoch Bohemia Interactive: ä¿„ç½—æ–¯ç‰¹ç§éƒ¨é˜Ÿ (Side: EAST)","15 - Enoch Phenosi and Jakes: åªå…µé˜Ÿ (Side: WEST)","16 - Expansion Bohemia Interactive: åŒ—çº¦ï¼ˆå¤ªå¹³æ´‹ï¼‰ (Side: WEST)","17 - Expansion Bohemia Interactive: åªå…µé˜Ÿ (Side: EAST)","18 - Expansion Bohemia Interactive: CSATï¼ˆå¤ªå¹³æ´‹ï¼‰ (Side: EAST)","19 - Expansion Bohemia Interactive: CTRG (Side: WEST)","20 - Expansion PhoenixTREAL: Russian Federation Expedition Corp (Side: EAST)","21 - Expansion PhoenixTREAL: Russian Federation Expedition Winter Corp (Side: EAST)","22 - Expansion PhoenixTREAL: Russian Federation Regular Army (Side: EAST)","23 - Expansion PhoenixTREAL: Russian Federation Spec Ops (Side: EAST)","24 - Expansion PhoenixTREAL: Sinigami G.E.C. Special Forces (Side: EAST)","25 - FIR Bohemia Interactive: AWS - BLU SIDE (Side: WEST)","26 - FIR Firewill: AWS - RED SIDE (Side: EAST)","27 - FZA Rosd6(Dryden): AH-64D Project (Side: WEST)","28 - GREATEASTERNCOALITION PhoenixTREAL&Arrive: The Great Eastern Coalition (Side: EAST)","29 - JK joker006: BAF (Side: WEST)","30 - JK joker006: Italian Armed Forces (Side: WEST)","31 - JK joker006: Takistan Army (Side: EAST)","32 - JK joker006: USA (Side: WEST)","33 - JK joker006: Wolves PMC (Side: WEST)","34 - Mark Bohemia Interactive: NATOï¼ˆæž—åœ°ï¼‰ (Side: WEST)","35 - Orange Jakes: Gendarmerie Expansion CBRN Division (Side: WEST)","36 - PLA [CN]Lurker1011: PLA Armored Force (Side: EAST)","37 - RHS John_Spartan & Saul: Russia (VVS - Camo) (Side: EAST)","38 - RHS Red Hammer Studios: Russia (VMF) (Side: EAST)","39 - RHS_AFRF Red Hammer Studios: Russia (MSV) (Side: EAST)","40 - RHS_AFRF Red Hammer Studios: Russia (RVA) (Side: EAST)","41 - RHS_AFRF Red Hammer Studios: Russia (TV) (Side: EAST)","42 - RHS_AFRF Red Hammer Studios: Russia (VDV) (Side: EAST)","43 - RHS_AFRF Red Hammer Studios: Russia (VPVO) (Side: EAST)","44 - RHS_AFRF Red Hammer Studios: Russia (VV) (Side: EAST)","45 - RHS_AFRF Red Hammer Studios: Russia (VVS - Grey) (Side: EAST)","46 - RHS_USAF Red Hammer Studios: USA (Army - D) (Side: WEST)","47 - RHS_USAF Red Hammer Studios: USA (Army - W) (Side: WEST)","48 - RHS_USAF Red Hammer Studios: USA (Navy) (Side: WEST)","49 - RHS_USAF Red Hammer Studios: USA (SOCOM) (Side: WEST)","50 - RHS_USAF Red Hammer Studios: USA (USAF) (Side: WEST)","51 - RHS_USAF Red Hammer Studios: USA (USMC - D) (Side: WEST)","52 - RHS_USAF Red Hammer Studios: USA (USMC - W) (Side: WEST)","53 - RHSGREF Brigada Team:  (Side: GUER)","54 - RHSGREF Brigada Team:  (Side: WEST)","55 - RHSSAF Brigada Team:  (Side: GUER)","56 - SAB [Dust]Sabre: Flying Legends (Side: EAST)","57 - SAB [Dust]Sabre: Flying Legends (Side: GUER)","58 - SAB [Dust]Sabre: Flying Legends (Side: WEST)","59 - UKMARINE PhoenixTREAL: United Kingdom Marine Corp (Side: WEST)","60 - USAF Mod Team: USAF (Side: WEST)","61 - WBK Splendid Modder: Melee Ai (Side: EAST)","62 - WBK Splendid Modder: WebKnight's Ai (Side: EAST)","63 - WBK WebKnight and PhoenixTREAL: WBK Zombies (Side: EAST)","64 - WEBNIX PhoenixTREAL&Arrive: WebNiX Corporation Assalt Group (Side: GUER)","65 - WEBNIX PhoenixTREAL: WebNiX Corporation Official (Side: GUER)","66 - WEBNIX PhoenixTREAL: WebNiX Corporation Spec Ops Group (Side: GUER)","67 - WEST PhoenixTREAL&Arrive: West Asian radicals (Side: EAST)","68 - WEST PhoenixTREAL: West Asian radicals Spec Ops (Side: EAST)"};
        default = 3;
    };
    class btc_p_AA { // Anti-Air infantry:防空步兵
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_FAC_EAA"]);
        values[]={0,1};
        texts[]={$STR_DISABLED,$STR_ENABLED};
        default = 0;
    };
    class btc_p_tank { // Enemy uses Tank:敌人使用坦克
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_FAC_ETANK"]);
        values[]={0,1};
        texts[]={$STR_DISABLED,$STR_ENABLED};
        default = 0;
    };
    class btc_p_civ { // Civil type 平民类型:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_FAC_CTYPE"]);
        values[]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};
        texts[]={"0 - Bohemia Interactive: Civilians (Side: CIV)","1 - Bohemia Interactive: Other (Side: CIV)","2 - CFP Drew: Civilians (Afghanistan) (Side: CIV)","3 - CFP Drew: Civilians (African Christian) (Side: CIV)","4 - CFP Drew: Civilians (African Islamic) (Side: CIV)","5 - CFP Drew: Civilians (Asian) (Side: CIV)","6 - CFP Drew: Civilians (Chernarus Winter) (Side: CIV)","7 - CFP Drew: Civilians (Malden) (Side: CIV)","8 - CFP Drew: Civilians (Middle Eastern) (Side: CIV)","9 - CSLA ÄŒSLA Studio: Civilians [ÄŒSLA] (Side: CIV)","10 - CUP_Units Community Upgrade Project: Civilians (Russian) (Side: CIV)","11 - CUP_Vehicles $CUP_AUTHOR_STRING: Civilians (Chernarus) (Side: CIV)","12 - CUP_Vehicles $CUP_AUTHOR_STRING: Civilians (Sahrani) (Side: CIV)","13 - CUP_Vehicles $CUP_AUTHOR_STRING: Civilians (Takistan) (Side: CIV)","14 - cwr3_dlc CWR III Modification: Civilians (CWR III) (Side: CIV)","15 - EricJ: Afghan Civilians (Side: CIV)","16 - gm Global Mobilization: East Germany (Civilians) (Side: CIV)","17 - gm Global Mobilization: West Germany (Civilians) (Side: CIV)","18 - LIB Reyhard & Joarius: 40s Civilians (Side: CIV)","19 - LOP_LeightsOPFOR Project OPFOR: Civilians (African) (Side: CIV)","20 - LOP_LeightsOPFOR Project OPFOR: Civilians (Eastern European) (Side: CIV)","21 - LOP_LeightsOPFOR Project OPFOR: Civilians (Middle Eastern) (Side: CIV)","22 - OPTRE Article 2 Studios: Civilians (UEG) (Side: CIV)","23 - OPTRE Article 2 Studios: IDAP (Side: CIV)","24 - RDS_CIV_PACK RDS (BIS A2 Port): Polish (Side: CIV)","25 - RDS_CIV_PACK RDS (BIS A2 Port): Russians (Side: CIV)","26 - Savage Game Design: Vietnamese (Side: CIV)","27 - UK3CB_Factions www.3commandobrigade.com: 3CB African Desert Civilians (Side: CIV)","28 - UK3CB_Factions www.3commandobrigade.com: 3CB Chernarus Civilians (Side: CIV)","29 - UK3CB_Factions www.3commandobrigade.com: 3CB Takistan Civilians (Side: CIV)","30 - UNSUNG Bohemia Interactive: Vietnamese (UNSUNG) (Side: CIV)"};
        default = 0;
    };
    class btc_p_civ_veh { // Civil vehicle type:民用载具类型
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_FAC_CTYPEVEH"]);
        values[]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};
        texts[]={"0 - Bohemia Interactive: Civilians (Side: CIV)","1 - Bohemia Interactive: Other (Side: CIV)","2 - CFP Drew: Civilians (Afghanistan) (Side: CIV)","3 - CFP Drew: Civilians (African Christian) (Side: CIV)","4 - CFP Drew: Civilians (African Islamic) (Side: CIV)","5 - CFP Drew: Civilians (Asian) (Side: CIV)","6 - CFP Drew: Civilians (Chernarus Winter) (Side: CIV)","7 - CFP Drew: Civilians (Malden) (Side: CIV)","8 - CFP Drew: Civilians (Middle Eastern) (Side: CIV)","9 - CSLA ÄŒSLA Studio: Civilians [ÄŒSLA] (Side: CIV)","10 - CUP_Units Community Upgrade Project: Civilians (Russian) (Side: CIV)","11 - CUP_Vehicles $CUP_AUTHOR_STRING: Civilians (Chernarus) (Side: CIV)","12 - CUP_Vehicles $CUP_AUTHOR_STRING: Civilians (Sahrani) (Side: CIV)","13 - CUP_Vehicles $CUP_AUTHOR_STRING: Civilians (Takistan) (Side: CIV)","14 - cwr3_dlc CWR III Modification: Civilians (CWR III) (Side: CIV)","15 - EricJ: Afghan Civilians (Side: CIV)","16 - gm Global Mobilization: East Germany (Civilians) (Side: CIV)","17 - gm Global Mobilization: West Germany (Civilians) (Side: CIV)","18 - LIB Reyhard & Joarius: 40s Civilians (Side: CIV)","19 - LOP_LeightsOPFOR Project OPFOR: Civilians (African) (Side: CIV)","20 - LOP_LeightsOPFOR Project OPFOR: Civilians (Eastern European) (Side: CIV)","21 - LOP_LeightsOPFOR Project OPFOR: Civilians (Middle Eastern) (Side: CIV)","22 - OPTRE Article 2 Studios: Civilians (UEG) (Side: CIV)","23 - OPTRE Article 2 Studios: IDAP (Side: CIV)","24 - RDS_CIV_PACK RDS (BIS A2 Port): Polish (Side: CIV)","25 - RDS_CIV_PACK RDS (BIS A2 Port): Russians (Side: CIV)","26 - Savage Game Design: Vietnamese (Side: CIV)","27 - UK3CB_Factions www.3commandobrigade.com: 3CB African Desert Civilians (Side: CIV)","28 - UK3CB_Factions www.3commandobrigade.com: 3CB Chernarus Civilians (Side: CIV)","29 - UK3CB_Factions www.3commandobrigade.com: 3CB Takistan Civilians (Side: CIV)","30 - UNSUNG Bohemia Interactive: Vietnamese (UNSUNG) (Side: CIV)"};
        default = 0;
    };
    class btc_p_spawn_title { // << Spawn options >>
        title = $STR_BTC_HAM_PARAM_SPAWN_TITLE;
        values[]={0};
        texts[]={""};
        default = 0;
    };
    class btc_p_density_of_occupiedCity { // Density of city occupied:占领城市密度
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_SPWAN_ISOCCUPIED_DENSITY"]);
        values[]={0,10,20,30,40,45,50,60,70,80,90,100};
        texts[]={"0%","10%","20%","30%","40%","45%","50%","60%","70%","80%","90%","100%"};
        default = 80;
    };
    class btc_p_mil_group_ratio { // Enemy density:敌方密度
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_SPWAN_ENEMY_DENSITY"]);
        values[]={0,10,20,30,40,50,60,70,80,90,100};
        texts[]={"0%","10%","20%","30%","40%","50%","60%","70%","80%","90%","100%"};
        default = 50;
    };
    class btc_p_mil_static_group_ratio { // Enemy static density:敌方静态密度
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_SPWAN_ENEMY_STATIC_DENSITY"]);
        values[]={0,10,20,30,40,50,60,70,80,90,100};
        texts[]={"0%","10%","20%","30%","40%","50%","60%","70%","80%","90%","100%"};
        default = 20;
    };
    class btc_p_civ_group_ratio { // Civilian density:平民密度
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_SPWAN_CIVILIAN_DENSITY"]);
        values[]={0,10,20,30,40,50,60,70,80,90,100};
        texts[]={"0%","10%","20%","30%","40%","50%","60%","70%","80%","90%","100%"};
        default = 10;
    };
    class btc_p_animals_group_ratio { // Animal density:动物密度
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_SPWAN_ANIMALS_DENSITY"]);
        values[]={0,10,20,30,40,50,60,70,80,90,100};
        texts[]={"0%","10%","20%","30%","40%","50%","60%","70%","80%","90%","100%"};
        default = 0;
    };
    class btc_p_wp_houseDensity { // Density of military in house:房屋内军队密度
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_SPWAN_MIL_INHOUSE_DENSITY"]);
        values[]={0,10,20,30,40,50,60,70,80,90,100};
        texts[]={"0%","10%","20%","30%","40%","50%","60%","70%","80%","90%","100%"};
        default = 10;
    };
    class btc_p_veh_armed_ho { // Add armed vehicles in Hideout:在藏身处添加武装车辆
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_SPAWN_ARMEDHIDEOUT"]);
        values[] = {0,1};
        texts[] = {$STR_DISABLED,$STR_ENABLED};
        default = 0;
    };
    class btc_p_veh_armed_spawn_more { // Add armed vehicles in Side mission/Cache:在支线任务/缓存中添加武装车辆
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_SPAWN_ARMEDOTHER"]);
        values[] = {0,1};
        texts[] = {$STR_DISABLED,$STR_ENABLED};
        default = 1;
    };
    class btc_p_patrol_max { // Maximum number of military patrol:最大军事巡逻队数
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_SPWAN_PATROL_MAX"]);
        values[]={0,1,2,3,4,5,6,7,8,9,10};
        texts[]={"1","2","3","4","5","6","7","8","9","10"};
        default = 2;
    };
    class btc_p_civ_max_veh { // Maximum number of civilian patrol:最大平民巡逻数
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_SPWAN_CIV_MAX_VEH"]);
        values[]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
        texts[]={"1","2","3","4","5","6","7","8","9","10","11","12","13","14","15"};
        default = 1;
    };
    class btc_p_IED_title { // << IED options >>
        title = $STR_BTC_HAM_PARAM_IED_TITLE;
        values[]={0};
        texts[]={""};
        default = 0;
    };
    class btc_p_ied { // IEDs ratio:简易爆炸装置比率
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_IED_RATIO"]);
        values[]={0, 1, 2, 3};
        texts[]={$STR_DISABLED,$STR_A3_TIME_TRIALS_MISCTT_ROF_25,$STR_3DEN_ATTRIBUTES_SPEEDMODE_NORMAL,$STR_A3_TIME_TRIALS_MISCTT_ROF_21}; //texts[]={"Off","Low","Normal","High"};
        default = 2;
    };
    class btc_p_ied_spot { // IEDs spotting difficulty: 简易爆炸装置发现难度
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_IED_SPOT"]);
        values[]={0, 1, 2};
        texts[]={$STR_BTC_HAM_PARAM_IED_SPOT_VERYEASY,$STR_BTC_HAM_PARAM_IED_SPOT_EASY,$STR_3DEN_ATTRIBUTES_SPEEDMODE_NORMAL}; //texts[]={"Very easy","Easy","Normal"};
        default = 1;
    };
    class btc_p_ied_placement { // IEDs type of placement:简易爆炸装置的放置类型
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_IED_PLACEMENT"]);
        values[]={2, -1, 3};
        texts[]={$STR_BTC_HAM_PARAM_IED_PLACEMENT_ROADSIDE,$STR_BTC_HAM_PARAM_IED_PLACEMENT_MIDDLE,$STR_3DEN_ATTRIBUTES_OBJECTTEXTURE_RANDOM_TEXT}; //texts[]={"Roadside", "Middle", "Random"};
        default = 3;
    };
    class btc_p_ied_drone { // Drone bomber:无人轰炸机
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_IED_DRONE"]);
        values[]={0, 1};
        texts[]={$STR_DISABLED,$STR_ENABLED};
        default = 1;
    };
    class btc_p_hideout_cache_title { // << Hideout/Cache options >>
        title = $STR_BTC_HAM_PARAM_HIDE_TITLE;
        values[]={0};
        texts[]={""};
        default = 0;
    };
    class btc_p_hideout_n { // Hideout numbers:藏身处数量
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_HIDE_NUMBERS"]);
        values[]={99,0,1,2,3,4,5};
        texts[]={$STR_3DEN_ATTRIBUTES_OBJECTTEXTURE_RANDOM_TEXT,"0","1","2","3","4","5","6","7","8","9","10"}; //texts[]={"Random","0","1","2","3","4","5"};
        default = 4;
    };
    class btc_p_cache_info_def { // Info cache distance:信息缓存距离
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_CACHE_DISTANCE"]);
        values[]={500,1000,1500,2000,2500,3000,3500,4000,5000};
        texts[]={"500 m","1000 m","1500 m","2000 m","2500 m","3000 m","3500 m","4000 m","5000 m"};
        default = 1000;
    };
    class btc_p_cache_info_ratio { //Cache info ratio:缓存信息比率
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_CACHE_RATIO"]);
        values[]={50,100};
        texts[]={"50 m","100 m"};
        default = 100;
    };
    class btc_p_info_chance { // Intel from dead bodies chance:在尸体上找到Intel平板信息
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_CACHE_DEADINFO"]);
        values[]={0,10,20,30,40,50,60,70,80,90,100};
        texts[]={"100 %","90 %","80 %","70 %","60 %","50 %","40 %","30 %","20 %","10 %","0 %"};
        default = 10;
    };
    class btc_p_info_houseDensity { // Density of intel in house:在房屋里找到Intel平板信息
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_CACHE_HOUSEINFO"]);
        values[]={0,1,2,3,4,5,6,7,8,9,10,20,30,40,50,60,70,80,90,100};
        texts[]={"0%","1%","2%","3%","4%","5%","6%","7%","8%","9%","10%","20%","30%","40%","50%","60%","70%","80%","90%","100%"};
        default = 10;
    };
    class btc_p_skill_title { // << A3 Skill options >>
        title = $STR_BTC_HAM_PARAM_SKILL_TITLE;
        values[]={0};
        texts[]={""};
        default = 0;
    };
    class btc_p_set_skill { // Set skill?
        title = __EVAL(format ["      %1?", localize "STR_A3_CFGVEHICLES_MODULESKILL_F_0"]);
        values[]={0,1};
        texts[]={$STR_DISABLED,$STR_ENABLED};
        default = 1;
    };
    class btc_p_set_skill_general { // Set skill, general
        title = __EVAL(format ["      %1, %2", localize "STR_A3_CFGVEHICLES_MODULESKILL_F_0", localize "STR_3DEN_SCENARIO_TEXTSINGULAR"]);
        values[]={0,1,2,3,4,5,6,7,8,9,10};
        texts[]={"0","0.1","0.2","0.3","0.4","0.5","0.6","0.7","0.8","0.9","1"};
        default = 10;
    };
    class btc_p_set_skill_aimingAccuracy { // Set skill, aimingAccuracy
        title = __EVAL(format ["      %1, %2", localize "STR_A3_CFGVEHICLES_MODULESKILL_F_0", localize "STR_BTC_HAM_PARAM_SKILL_AIMACC"]);
        values[]={0,1,2,3,4,5,6,7,8,9,10};
        texts[]={"0","0.1","0.2","0.3","0.4","0.5","0.6","0.7","0.8","0.9","1"};
        default = 10;
    };
    class btc_p_set_skill_aimingShake { // Set skill, aimingShake
        title = __EVAL(format ["      %1, %2", localize "STR_A3_CFGVEHICLES_MODULESKILL_F_0", localize "STR_BTC_HAM_PARAM_SKILL_AIMSKILL"]);
        values[]={0,1,2,3,4,5,6,7,8,9,10};
        texts[]={"0","0.1","0.2","0.3","0.4","0.5","0.6","0.7","0.8","0.9","1"};
        default = 10;
    };
    class btc_p_set_skill_aimingSpeed { // Set skill, aimingSpeed
        title = __EVAL(format ["      %1, %2", localize "STR_A3_CFGVEHICLES_MODULESKILL_F_0", localize "STR_BTC_HAM_PARAM_SKILL_AIMSPEED"]);
        values[]={0,1,2,3,4,5,6,7,8,9,10};
        texts[]={"0","0.1","0.2","0.3","0.4","0.5","0.6","0.7","0.8","0.9","1"};
        default = 10;
    };
    class btc_p_set_skill_endurance { // Set skill, endurance
        title = __EVAL(format ["      %1, %2", localize "STR_A3_CFGVEHICLES_MODULESKILL_F_0", localize "STR_A3_VR_STAMINA"]);
        values[]={0,1,2,3,4,5,6,7,8,9,10};
        texts[]={"0","0.1","0.2","0.3","0.4","0.5","0.6","0.7","0.8","0.9","1"};
        default = 10;
    };
    class btc_p_set_skill_spotDistance { // Set skill, spotDistance
        title = __EVAL(format ["      %1, %2", localize "STR_A3_CFGVEHICLES_MODULESKILL_F_0", localize "STR_BTC_HAM_PARAM_SKILL_SPOTDIST"]);
        values[]={0,1,2,3,4,5,6,7,8,9,10};
        texts[]={"0","0.1","0.2","0.3","0.4","0.5","0.6","0.7","0.8","0.9","1"};
        default = 10;
    };
    class btc_p_set_skill_spotTime { // Set skill, spotTime
        title = __EVAL(format ["      %1, %2", localize "STR_A3_CFGVEHICLES_MODULESKILL_F_0", localize "STR_BTC_HAM_PARAM_SKILL_SPOTTIME"]);
        values[]={0,1,2,3,4,5,6,7,8,9,10};
        texts[]={"0","0.1","0.2","0.3","0.4","0.5","0.6","0.7","0.8","0.9","1"};
        default = 10;
    };
    class btc_p_set_skill_courage { // Set skill, courage
        title = __EVAL(format ["      %1, %2", localize "STR_A3_CFGVEHICLES_MODULESKILL_F_0", localize "STR_BTC_HAM_PARAM_SKILL_COURAGE"]);
        values[]={0,1,2,3,4,5,6,7,8,9,10};
        texts[]={"0","0.1","0.2","0.3","0.4","0.5","0.6","0.7","0.8","0.9","1"};
        default = 10;
    };
    class btc_p_set_skill_reloadSpeed { // Set skill, reloadSpeed
        title = __EVAL(format ["      %1, %2", localize "STR_A3_CFGVEHICLES_MODULESKILL_F_0", localize "STR_BTC_HAM_PARAM_SKILL_RELOAD"]);
        values[]={0,1,2,3,4,5,6,7,8,9,10};
        texts[]={"0","0.1","0.2","0.3","0.4","0.5","0.6","0.7","0.8","0.9","1"};
        default = 10;
    };
    class btc_p_set_skill_commanding { // Set skill, commanding
        title = __EVAL(format ["      %1, %2", localize "STR_A3_CFGVEHICLES_MODULESKILL_F_0", localize "STR_A3_CFGHINTS0"]);
        values[]={0,1,2,3,4,5,6,7,8,9,10};
        texts[]={"0","0.1","0.2","0.3","0.4","0.5","0.6","0.7","0.8","0.9","1"};
        default = 10;
    };
    class btc_p_gameplay_title { // << Gameplay options >>
        title = $STR_BTC_HAM_PARAM_GAMEPLAY_TITLE;
        values[]={0};
        texts[]={""};
        default = 0;
    };
    class btc_p_sea { // Extend battlefield to sea:将战场延伸至海上
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_GAMEPLAY_SEA"]);
        values[] = {0,1};
        texts[] = {$STR_DISABLED,$STR_ENABLED};
        default = 1;
    };
    class btc_p_chem { // Chemical warfare:化学战
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_GAMEPLAY_CHEM"]);
        values[] = {0,1};
        texts[] = {$STR_DISABLED,$STR_ENABLED};
        default = 1;
    };
    class btc_p_spect { // Spectrum devices:频谱设备
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_GAMEPLAY_SPECT"]);
        values[] = {0,1};
        texts[] = {$STR_DISABLED,$STR_ENABLED};
        default = 1;
    };
    class btc_p_side_mission_cycle { // Side mission cycle:支线任务循环
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_GAMEPLAY_SIDEM"]);
        values[] = {0,1,2,3,4};
        texts[] = {$STR_DISABLED,1,2,3,4};
        default = 2;
    };
    class btc_p_arsenal_title { // << Arsenal options >>
        title = $STR_BTC_HAM_PARAM_ARSENAL_TITLE;
        values[]={0};
        texts[]={""};
        default = 0;
    };
    class btc_p_arsenal_Type { // Type of the arsenal:兵工厂类型
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_ARSENAL_ARSENALTYPE"]);
        values[]={0,1,2,3,4};
        texts[]={$STR_BTC_HAM_PARAM_ARSENAL_ARSENALTYPE_BIS,$STR_BTC_HAM_PARAM_ARSENAL_ARSENALTYPE_BA,$STR_BTC_HAM_PARAM_ARSENAL_ARSENALTYPE_BA_PLUS,$STR_BTC_HAM_PARAM_ARSENAL_ARSENALTYPE_ACE,$STR_BTC_HAM_PARAM_ARSENAL_ARSENALTYPE_ACE_PLUS}; //texts[]={"BIS - Vanilla","BIS - Vanilla and ACE 3","BIS - Vanilla and ACE 3 (scroll wheel action)","ACE 3","ACE 3 (scroll wheel action)"};
        default = 4;
    };
    class btc_p_arsenal_Restrict { // Restricted arsenal (See /define_mod.sqf):受限武器库
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_ARSENAL_ARSENALRESTR"]);
        values[]={0,1,2,3};
        texts[] = {$STR_DISABLED,$STR_3DEN_ATTRIBUTES_SPEEDMODE_FULL,$STR_BTC_HAM_PARAM_ARSENAL_ARSENALRESTR_REMOVEONLY,$STR_BTC_HAM_PARAM_ARSENAL_ARSENALRESTR_FILTER}; //texts[]={"Off","Full","Remove only (works only with ACE3-Arsenal)","Filter on player role (works only with ACE3-Arsenal)"};
        default = 0;
    };
    class btc_p_autoloadout { // loadout:
        title = __EVAL(format ["      %1:", localize "STR_ACE_Interaction_Equipment"]);
        values[]={0,1,2};
        texts[]={$STR_DISABLED,$STR_BTC_HAM_PARAM_ARSENAL_AUTOLOADOUT, $STR_BTC_HAM_PARAM_ARSENAL_RMVWEAPONS};
        default = 0;
    };
    class btc_p_garage { // Activate garage for admin:为管理员激活车库：
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_ARSENAL_GARAGEADMIN"]);
        values[]={0,1};
        texts[]={$STR_DISABLED,$STR_ENABLED};
        default = 1;
    };
    class btc_p_main_title { // << Other options >>
        title = $STR_BTC_HAM_PARAM_OTHER_TITLE;
        values[]={0};
        texts[]={""};
        default = 0;
    };
    class btc_p_rep { // Reputation at start:开始时的声誉
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_OTHER_REPSTART"]);
        values[]={0, 200, 500, 750};
        texts[]={$STR_ACE_ViewDistance_object_verylow,$STR_A3_TIME_TRIALS_MISCTT_ROF_25,$STR_3DEN_ATTRIBUTES_SPEEDMODE_NORMAL,$STR_A3_TIME_TRIALS_MISCTT_ROF_21}; //texts[]={"Very Low","Low","Normal","High"};
        default = 500;
    };
    class btc_p_rep_notify { // Show reputation change above of:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_OTHER_SHOWREP"]);
        values[]={-1, 0, 1, 2, 3, 5, 10, 25, 50, 100, 200};
        texts[]={$STR_DISABLED, 0, 1, 2, 3, 5, 10, 25, 50, 100, 200};
        default = 5;
    };
    class btc_p_city_radiusOffset { // Spawn city radius offset:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_OTHER_SPAWNRAD"]);
        values[]={0,1,2,3,4,5,6,7,8};
        texts[]={"0 m","100 m","200 m",$STR_BTC_HAM_PARAM_OTHER_SPAWNRAD_DEF,"400 m","500 m (Takistan)","600 m","700 m","800 m"}; // texts[]={"0 m","100 m","200 m","300 m","400 m","500 m (Takistan)","600 m","700 m","800 m"};
        default = 2;
    };
    class btc_p_trigger { // Disable city activation when a plane or helicopter (>190Km/h) is flying above:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_OTHER_DISABLESPAWN"]);
        values[]={0,1};
        texts[]={$STR_DISABLED,$STR_ENABLED};
        default = 1;
    };
    class btc_p_city_free_trigger { // City will be free if number of enemies is equal or lower than:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_OTHER_CITYFREE"]);
        values[]={0,1,2,3};
        texts[]={$STR_DISABLED,"1","2","3"};
        default = 0;
    };
    class btc_p_flag { // Allow the use of flag:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_OTHER_ALLOWFLAG"]);
        values[]={0,1,2};
        texts[]={$STR_DISABLED,$STR_BTC_HAM_PARAM_OTHER_FLAGVEH,$STR_BTC_HAM_PARAM_OTHER_FLAGVEHPLAYER};
        default = 2;
    };
    class btc_p_auto_headless { // Autodetect Headless client:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_OTHER_AUTOHEADLESS"]);
        values[]={0,1};
        texts[]={$STR_DISABLED,$STR_ENABLED};
        default = 1;
    };
    class btc_p_debug { // Debug:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_OTHER_DEBUG"]);
        values[]={0,1,2};
        texts[]={$STR_DISABLED,$STR_ENABLED, $STR_BTC_HAM_PARAM_OTHER_DEBUG_LOGONLY}; // texts[]={"Off","On","Log only"};
        default = 0;
    };
};
