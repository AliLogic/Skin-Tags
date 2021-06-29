/*_______________________________________________________________________*\
|                                                                         |
|     Skin Tag Library                                                    |
| _______________________________________________________________________ |
|                                                                         |
|     Author: Crayder                                                     |
/     Maintainer: AliLogic                                                |
|     Date: 29/06/2021                                                    |
|     Version: 3.00                                                       |
| _______________________________________________________________________ |
|                                                                         |
|     Functions:                                                          |
|                                                                         |
|     - GetSkinName(skinid, output[], outlen = sizeof(output))            |
|     - GetSkinModelName(skinid, output[], outlen = sizeof(output))       |
|     - GetSkinSex(skinid)                                                |
|     - GetSkinGender(skinid)                                             |
|     - GetSkinGenderName(skinid, output[], outlen = sizeof(output))      |
|     - GetSkinRace(skinid)                                               |
|     - GetSkinRaceName(skinid, output[], outlen = sizeof(output))        |
|     - GetSkinGang(skinid)                                               |
|     - GetSkinGangName(skinid, output[], outlen = sizeof(output))        |
|     - GetSkinService(skinid)                                            |
|     - GetSkinServiceName(skinid, output[], outlen = sizeof(output))     |
|     - GetSkinType(skinid)                                               |
|     - GetSkinAnimGroup(skinid)                                          |
|     - GetSkinAnimGroupName(skinid, output[], outlen = sizeof(output))   |
|     - GetSkinGroup(skinid)                                              |
|     - GetSkinGroupName(skinid, output[], outlen = sizeof(output))       |
|     - GetSkinFear(skinid)                                               |
|     - GetSkinTemper(skinid)                                             |
|     - GetSkinLawfullness(skinid)                                        |
|     - GetSkinSexAppeal(skinid)                                          |
|     - GetSkinAppeal(skinid)                                             |
|     - GetSkinFOF(skinid)                                                |
|     - Float:GetSkinStrength(skinid)                                     |
|     - Float:GetSkinDefence(skinid)                                      |
|     - IsPlayerMale(playerid)                                            |
|     - IsPlayerFemale(playerid)                                          |
| _______________________________________________________________________ |
|                                                                         |
|     Definitions:                                                        |
|                                                                         |
|     - SKIN_RACE_WHITE                                                   |
|     - SKIN_GENDER_MALE                                                  |
|     - SKIN_GENDER_FEMALE                                                |
|                                                                         |
|     - SKIN_RACE_WHITE                                                   |
|     - SKIN_RACE_BLACK                                                   |
|     - SKIN_RACE_ASIAN                                                   |
|     - SKIN_RACE_LATIN                                                   |
|                                                                         |
|     - SKIN_GANG_NONE                                                    |
|     - SKIN_GANG_GROVE                                                   |
|     - SKIN_GANG_BALLA                                                   |
|     - SKIN_GANG_AZTECA                                                  |
|     - SKIN_GANG_VAGO                                                    |
|     - SKIN_GANG_DANANG                                                  |
|     - SKIN_GANG_RIFA                                                    |
|     - SKIN_GANG_TRIAD                                                   |
|     - SKIN_GANG_BIKER                                                   |
|     - SKIN_GANG_RUSSIAN                                                 |
|     - SKIN_GANG_ITALIAN                                                 |
|                                                                         |
|     - SKIN_SERVICE_NONE                                                 |
|     - SKIN_SERVICE_LAW                                                  |
|     - SKIN_SERVICE_POLICE                                               |
|     - SKIN_SERVICE_MIB                                                  |
|     - SKIN_SERVICE_SHERIFF                                              |
|     - SKIN_SERVICE_SWAT                                                 |
|     - SKIN_SERVICE_FBI                                                  |
|     - SKIN_SERVICE_ARMY                                                 |
|     - SKIN_SERVICE_FIRE                                                 |
|     - SKIN_SERVICE_MEDIC                                                |
|                                                                         |
|     - SKIN_TYPE_OTHER                                                   |
|     - SKIN_TYPE_BEACH                                                   |
|     - SKIN_TYPE_FARMER                                                  |
|     - SKIN_TYPE_WHORE                                                   |
|     - SKIN_TYPE_SPORT                                                   |
|     - SKIN_TYPE_HOMELESS                                                |
|     - SKIN_TYPE_DEALER                                                  |
|     - SKIN_TYPE_FOOD                                                    |
|     - SKIN_TYPE_SECURITY                                                |
|     - SKIN_TYPE_CONSTRUCTION                                            |
|     - SKIN_TYPE_LAW                                                     |
|     - SKIN_TYPE_MEDIC                                                   |
|     - SKIN_TYPE_FIRE                                                    |
|     - SKIN_TYPE_GANG                                                    |
|                                                                         |
|     - SKIN_GROUP_PLAYER                                                 |
|     - SKIN_GROUP_COP                                                    |
|     - SKIN_GROUP_MEDIC                                                  |
|     - SKIN_GROUP_FIREMAN                                                |
|     - SKIN_GROUP_GANG                                                   |
|     - SKIN_GROUP_STREET_GUY                                             |
|     - SKIN_GROUP_SUIT_GUY                                               |
|     - SKIN_GROUP_SENSIBLE_GUY                                           |
|     - SKIN_GROUP_GEEK_GUY                                               |
|     - SKIN_GROUP_OLD_GUY                                                |
|     - SKIN_GROUP_TOUGH_GUY                                              |
|     - SKIN_GROUP_STREET_GIRL                                            |
|     - SKIN_GROUP_SUIT_GIRL                                              |
|     - SKIN_GROUP_SENSIBLE_GIRL                                          |
|     - SKIN_GROUP_GEEK_GIRL                                              |
|     - SKIN_GROUP_OLD_GIRL                                               |
|     - SKIN_GROUP_TOUGH_GIRL                                             |
|     - SKIN_GROUP_TRAMP_MALE                                             |
|     - SKIN_GROUP_TRAMP_FEMALE                                           |
|     - SKIN_GROUP_TOURIST                                                |
|     - SKIN_GROUP_PROSTITUTE                                             |
|     - SKIN_GROUP_CRIMINAL                                               |
|     - SKIN_GROUP_BUSKER                                                 |
|     - SKIN_GROUP_TAXI_DRIVER                                             |
|     - SKIN_GROUP_PSYCHO                                                 |
|     - SKIN_GROUP_STEWARD                                                |
|     - SKIN_GROUP_SPORTSFAN                                              |
|     - SKIN_GROUP_SHOPPER                                                |
|     - SKIN_GROUP_OLDSHOPPER                                             |
|     - SKIN_GROUP_BEACH_GUY                                              |
|     - SKIN_GROUP_BEACH_GIRL                                             |
|     - SKIN_GROUP_SKATER                                                 |
|     - SKIN_GROUP_MISSION                                                |
|     - SKIN_GROUP_COWARD                                                 |
|                                                                         |
|     - SKIN_FOF_WEAK                                                     |
|     - SKIN_FOF_NORMAL                                                   |
|     - SKIN_FOF_TOUGH                                                    |
|                                                                         |
|     - SKIN_ANIM_BUSY_WOMAN                                              |
|     - SKIN_ANIM_FAT_MAN                                                 |
|     - SKIN_ANIM_GANG                                                    |
|     - SKIN_ANIM_JOGGER                                                  |
|     - SKIN_ANIM_JOG_WOMAN                                               |
|     - SKIN_ANIM_MAN                                                     |
|     - SKIN_ANIM_OLD_FAT_WOMAN                                           |
|     - SKIN_ANIM_OLD_MAN                                                 |
|     - SKIN_ANIM_OLD_WOMAN                                               |
|     - SKIN_ANIM_PLAYER                                                  |
|     - SKIN_ANIM_PROSTITUTE                                              |
|     - SKIN_ANIM_SEXY_WOMAN                                              |
|     - SKIN_ANIM_SKATER                                                  |
|     - SKIN_ANIM_SWAT                                                    |
|     - SKIN_ANIM_WOMAN                                                   |
| _______________________________________________________________________ |
\*                                                                       */

#include <a_samp>

#define SKIN_INVALID				(-1)
#define SKIN_INVALID_FLOAT			(-1.0)

#define SKIN_FLAG_GENDER			(0b00000000000000000000000000000001)
#define SKIN_GENDER_FEMALE			(0b00000000000000000000000000000000)
#define SKIN_GENDER_MALE			(0b00000000000000000000000000000001)

#define SKIN_FLAG_RACE				(0b00000000000000000000000000000110)
#define SKIN_RACE_WHITE				(0b00000000000000000000000000000000)
#define SKIN_RACE_BLACK				(0b00000000000000000000000000000010)
#define SKIN_RACE_ASIAN				(0b00000000000000000000000000000100)
#define SKIN_RACE_LATIN				(0b00000000000000000000000000000110)

#define SKIN_FLAG_GANG				(0b00000000000000000000000001111000)
#define SKIN_GANG_NONE				(0b00000000000000000000000000000000)
#define SKIN_GANG_GROVE				(0b00000000000000000000000000001000)
#define SKIN_GANG_BALLA				(0b00000000000000000000000000010000)
#define SKIN_GANG_AZTECA			(0b00000000000000000000000000011000)
#define SKIN_GANG_VAGO				(0b00000000000000000000000000100000)
#define SKIN_GANG_DANANG			(0b00000000000000000000000000101000)
#define SKIN_GANG_RIFA				(0b00000000000000000000000000110000)
#define SKIN_GANG_TRIAD				(0b00000000000000000000000000111000)
#define SKIN_GANG_BIKER				(0b00000000000000000000000001000000)
#define SKIN_GANG_RUSSIAN			(0b00000000000000000000000001001000)
#define SKIN_GANG_ITALIAN			(0b00000000000000000000000001010000)

#define SKIN_FLAG_SERVICE			(0b00000000000000000000111110000000)
#define SKIN_SERVICE_NONE			(0b00000000000000000000000000000000)
#define SKIN_SERVICE_LAW			(0b00000000000000000000001110000000)
#define SKIN_SERVICE_POLICE			(0b00000000000000000000000010000000)
#define SKIN_SERVICE_MIB			(0b00000000000000000000000100000000)
#define SKIN_SERVICE_SHERIFF		(0b00000000000000000000000110000000)
#define SKIN_SERVICE_SWAT			(0b00000000000000000000001000000000)
#define SKIN_SERVICE_FBI			(0b00000000000000000000001010000000)
#define SKIN_SERVICE_ARMY			(0b00000000000000000000001110000000)
#define SKIN_SERVICE_FIRE			(0b00000000000000000000010000000000)
#define SKIN_SERVICE_MEDIC			(0b00000000000000000000100000000000)

#define SKIN_FLAG_TYPE				(0b00000000000000001111111111111000)
#define SKIN_TYPE_OTHER				(0b00000000000000000000000000000000)
#define SKIN_TYPE_BEACH				(0b00000000000000000001000000000000)
#define SKIN_TYPE_FARMER			(0b00000000000000000010000000000000)
#define SKIN_TYPE_WHORE				(0b00000000000000000011000000000000)
#define SKIN_TYPE_SPORT				(0b00000000000000000100000000000000)
#define SKIN_TYPE_HOMELESS			(0b00000000000000000101000000000000)
#define SKIN_TYPE_DEALER			(0b00000000000000000110000000000000)
#define SKIN_TYPE_FOOD				(0b00000000000000000111000000000000)
#define SKIN_TYPE_SECURITY			(0b00000000000000001000000000000000)
#define SKIN_TYPE_CONSTRUCTION		(0b00000000000000001001000000000000)

#define SKIN_TYPE_LAW				(SKIN_SERVICE_LAW)
#define SKIN_TYPE_MEDIC				(SKIN_SERVICE_MEDIC)
#define SKIN_TYPE_FIRE				(SKIN_SERVICE_FIRE)
#define SKIN_TYPE_GANG				(SKIN_FLAG_GANG)

#define SKIN_GROUP_PLAYER        ( 0)
#define SKIN_GROUP_COP           ( 1)
#define SKIN_GROUP_MEDIC         ( 2)
#define SKIN_GROUP_FIREMAN       ( 3)
#define SKIN_GROUP_GANG          ( 4)
#define SKIN_GROUP_STREET_GUY    ( 5)
#define SKIN_GROUP_SUIT_GUY      ( 6)
#define SKIN_GROUP_SENSIBLE_GUY  ( 7)
#define SKIN_GROUP_GEEK_GUY      ( 8)
#define SKIN_GROUP_OLD_GUY       ( 9)
#define SKIN_GROUP_TOUGH_GUY     (10)
#define SKIN_GROUP_STREET_GIRL   (11)
#define SKIN_GROUP_SUIT_GIRL     (12)
#define SKIN_GROUP_SENSIBLE_GIRL (13)
#define SKIN_GROUP_GEEK_GIRL     (14)
#define SKIN_GROUP_OLD_GIRL      (15)
#define SKIN_GROUP_TOUGH_GIRL    (16)
#define SKIN_GROUP_TRAMP_MALE    (17)
#define SKIN_GROUP_TRAMP_FEMALE  (18)
#define SKIN_GROUP_TOURIST       (19)
#define SKIN_GROUP_PROSTITUTE    (20)
#define SKIN_GROUP_CRIMINAL      (21)
#define SKIN_GROUP_BUSKER        (22)
#define SKIN_GROUP_TAXI_DRIVER   (23)
#define SKIN_GROUP_PSYCHO        (24)
#define SKIN_GROUP_STEWARD       (25)
#define SKIN_GROUP_SPORTS_FAN    (26)
#define SKIN_GROUP_SHOPPER       (27)
#define SKIN_GROUP_OLD_SHOPPER   (28)
#define SKIN_GROUP_BEACH_GUY     (29)
#define SKIN_GROUP_BEACH_GIRL    (30)
#define SKIN_GROUP_SKATER        (31)
#define SKIN_GROUP_MISSION       (32)
#define SKIN_GROUP_COWARD        (33)

#define SKIN_FOF_WEAK				(1)
#define SKIN_FOF_NORMAL				(2)
#define SKIN_FOF_TOUGH				(3)

#define SKIN_ANIM_BUSY_WOMAN     ( 0)
#define SKIN_ANIM_FAT_MAN        ( 1)
#define SKIN_ANIM_GANG           ( 2)
#define SKIN_ANIM_JOGGER         ( 3)
#define SKIN_ANIM_JOG_WOMAN      ( 4)
#define SKIN_ANIM_MAN            ( 5)
#define SKIN_ANIM_OLD_FAT_WOMAN  ( 6)
#define SKIN_ANIM_OLD_MAN        ( 7)
#define SKIN_ANIM_OLD_WOMAN      ( 8)
#define SKIN_ANIM_PLAYER         ( 9)
#define SKIN_ANIM_PROSTITUTE     (10)
#define SKIN_ANIM_SEXY_WOMAN     (11)
#define SKIN_ANIM_SKATER         (12)
#define SKIN_ANIM_SWAT           (13)
#define SKIN_ANIM_WOMAN          (14)

static const s_GangNames[][18 char] = {
	!"Grove Street",             // SKIN_GANG_GROVE
	!"Ballas",                   // SKIN_GANG_BALLA
	!"Los Aztecas",              // SKIN_GANG_AZTECA
	!"Los Santos Vagos",         // SKIN_GANG_VAGO
	!"Da Nang Boys",             // SKIN_GANG_DANANG
	!"San Fierro Rifa",          // SKIN_GANG_RIFA
	!"Triads",                   // SKIN_GANG_TRIAD
	!"Bikers",                   // SKIN_GANG_BIKER
	!"The Russian Mafia",        // SKIN_GANG_RUSSIAN
	!"The Italian Mafia"         // SKIN_GANG_ITALIAN
};

static const s_ServiceNames[][13 char] = {
	!"Policeman",                // SKIN_SERVICE_POLICE
	!"M.I.B.",                   // SKIN_SERVICE_MIB
	!"Sheriff",                  // SKIN_SERVICE_SHERIFF
	!"S.W.A.T.",                 // SKIN_SERVICE_SWAT
	!"F.B.I. agent",             // SKIN_SERVICE_FBI
	!"Army",                     // SKIN_SERVICE_ARMY
	!"Fireman",                  // SKIN_SERVICE_FIRE
	!"Paramedic"                 // SKIN_SERVICE_MEDIC
};

static const s_AnimGroupNames[][14 char] = {
	!"Busy Woman",               // SKIN_ANIM_BUSY_WOMAN   
	!"Fat Man",                  // SKIN_ANIM_FAT_MAN      
	!"Gang",                     // SKIN_ANIM_GANG         
	!"Jogger",                   // SKIN_ANIM_JOGGER       
	!"Jogger",                   // SKIN_ANIM_JOG_WOMAN    
	!"Man",                      // SKIN_ANIM_MAN          
	!"Old Fat Woman",            // SKIN_ANIM_OLD_FAT_WOMAN
	!"Old Man",                  // SKIN_ANIM_OLD_MAN      
	!"Old Woman",                // SKIN_ANIM_OLD_WOMAN    
	!"Player",                   // SKIN_ANIM_PLAYER       
	!"Prostitute",               // SKIN_ANIM_PROSTITUTE   
	!"Sexy Woman",               // SKIN_ANIM_SEXY_WOMAN   
	!"Skater",                   // SKIN_ANIM_SKATER       
	!"S.W.A.T.",                 // SKIN_ANIM_SWAT         
	!"Woman"                     // SKIN_ANIM_WOMAN        
};

enum e_PEDGRP_INFO {
	e_GRP_NAME[14 char],
	e_FEAR,                      //Fear                     (0-100) 100 = Scared of everything
	e_TEMPER,                    //Temper                   (0-100) 100 = Bad Tempered
	e_LAWFUL,                    //Lawfullness              (0-100) 100 = Boy Scout
	e_APPEAL,                    //Sexiness                 (0-100)
	Float:e_STRENGTH,            //Attack strength          (float multiplier to attack damages)
	Float:e_DEFENCE,             //Defend weakness          (float multiplier to received damages)
	e_FOF                        //Default Decision Maker   (FOF = Fight or Flight) (0: group member, 1:cop, 2:rand_norm 3:rand_tough 4:rand_weak)
};
static const pedGroups[][e_PEDGRP_INFO] = {
	{!"Player"       , 50 , 50 , 50 , 50 , 3.0, 0.4, SKIN_FOF_NORMAL},
	{!"Cop"          , 10 , 30 , 100, 50 , 1.0, 1.0, SKIN_FOF_TOUGH}, // FOF is actually "cop", tough for simplification
	{!"Medic"        , 70 , 30 , 60 , 40 , 0.8, 1.4, SKIN_FOF_NORMAL},
	{!"Fireman"      , 10 , 20 , 60 , 80 , 1.2, 0.8, SKIN_FOF_TOUGH}, // FOF is actually "fireman", tough for simplification
	{!"Gang"         , 20 , 65 , 10 , 40 , 1.0, 1.0, SKIN_FOF_TOUGH},
	{!"Street Guy"   , 45 , 30 , 30 , 60 , 1.0, 1.0, SKIN_FOF_NORMAL},
	{!"Suit Guy"     , 35 , 60 , 60 , 30 , 0.8, 1.2, SKIN_FOF_NORMAL},
	{!"Sensible Guy" , 65 , 30 , 70 , 20 , 0.7, 1.1, SKIN_FOF_WEAK},
	{!"Geek Guy"     , 56 , 10 , 40 , 5  , 0.5, 1.7, SKIN_FOF_WEAK},
	{!"Old Guy"      , 40 , 10 , 40 , 5  , 0.4, 2.5, SKIN_FOF_NORMAL},
	{!"Tough Guy"    , 30 , 70 , 50 , 60 , 1.1, 1.5, SKIN_FOF_TOUGH},
	{!"Street Girl"  , 45 , 30 , 30 , 60 , 0.9, 1.0, SKIN_FOF_NORMAL},
	{!"Suit Girl"    , 30 , 60 , 60 , 30 , 0.6, 1.6, SKIN_FOF_NORMAL},
	{!"Sensible Girl", 65 , 30 , 70 , 20 , 0.5, 1.1, SKIN_FOF_WEAK},
	{!"Geek Girl"    , 80 , 10 , 40 , 5  , 0.4, 1.9, SKIN_FOF_WEAK},
	{!"Old Girl"     , 80 , 10 , 40 , 5  , 0.3, 3.0, SKIN_FOF_NORMAL},
	{!"Tough Girl"   , 30 , 70 , 50 , 60 , 1.1, 1.5, SKIN_FOF_TOUGH},
	{!"Male Tramp"   , 60 , 50 , 20 , 10 , 0.9, 1.6, SKIN_FOF_TOUGH},
	{!"Female Tramp" , 30 , 30 , 20 , 10 , 0.9, 1.6, SKIN_FOF_TOUGH},
	{!"Tourist"      , 100, 20 , 70 , 30 , 0.8, 1.8, SKIN_FOF_NORMAL},
	{!"Prostitute"   , 40 , 20 , 40 , 100, 0.7, 1.0, SKIN_FOF_TOUGH},
	{!"Criminal"     , 30 , 55 , 10 , 60 , 1.2, 1.3, SKIN_FOF_TOUGH},
	{!"Busker"       , 49 , 20 , 40 , 90 , 1.0, 1.0, SKIN_FOF_TOUGH},
	{!"Taxi Driver"  , 16 , 80 , 30 , 30 , 0.8, 1.5, SKIN_FOF_TOUGH},
	{!"Psycho"       , 0  , 100, 0  , 50 , 1.0, 1.0, SKIN_FOF_TOUGH},
	{!"Steward"      , 40 , 30 , 70 , 20 , 0.7, 1.1, SKIN_FOF_WEAK},
	{!"Sportsfan"    , 40 , 50 , 70 , 20 , 0.7, 1.1, SKIN_FOF_TOUGH},
	{!"Shopper"      , 30 , 75 , 50 , 40 , 1.5, 1.5, SKIN_FOF_WEAK},
	{!"Old Shopper"  , 45 , 65 , 70 , 20 , 1.0, 2.5, SKIN_FOF_WEAK},
	{!"Beach Guy"    , 52 , 60 , 60 , 30 , 0.8, 1.2, SKIN_FOF_NORMAL},
	{!"Beach Girl"   , 59 , 30 , 30 , 60 , 0.9, 1.0, SKIN_FOF_NORMAL},
	{!"Skater"       , 40 , 40 , 60 , 80 , 0.7, 1.0, SKIN_FOF_WEAK},
	{!"Special"      , 50 , 50 , 50 , 50 , 1.0, 1.0, SKIN_FOF_TOUGH},
	{!"Coward"       , 65 , 30 , 70 , 20 , 0.7, 1.1, SKIN_FOF_WEAK}
};

enum e_SKIN_INFO {
	e_SKIN_MODEL_ID,
	e_SKIN_MODEL_NAME[8 char],
	e_SKIN_NAME[52 char],
	e_SKIN_PEDGRP,
	e_SKIN_ANIMGRP,
	e_SKIN_FLAGS
};
static const skinInfoList[][e_SKIN_INFO] = {
	// SAN ANDREAS
	{0, !"cj"     , !"Carl \"CJ\" Johnson (Main Character)"               , SKIN_GROUP_PLAYER      , SKIN_ANIM_PLAYER       , SKIN_GENDER_MALE   | SKIN_RACE_BLACK},
	{1, !"truth"  , !"The Truth"                                          , SKIN_GROUP_MISSION     , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_WHITE},
	{2, !"maccer" , !"Maccer"                                             , SKIN_GROUP_MISSION     , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_WHITE},
	{3, !"andre"  , !"Andre"                                              , SKIN_GROUP_MISSION     , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_WHITE},
	{4, !"bbthin" , !"Barry \"Big Bear\" Thorne [Thin]"                   , SKIN_GROUP_MISSION     , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_BLACK},
	{5, !"bb"     , !"Barry \"Big Bear\" Thorne [Big]"                    , SKIN_GROUP_MISSION     , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_BLACK},
	{6, !"emmet"  , !"Emmet"                                              , SKIN_GROUP_MISSION     , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_BLACK},
	{7, !"male01" , !"Taxi Driver/Train Driver"                           , SKIN_GROUP_SENSIBLE_GUY, SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_BLACK},
	{8, !"janitor", !"Janitor"                                            , SKIN_GROUP_MISSION     , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_LATIN},
	{9, !"bfori"  , !"Normal Ped"                                         , SKIN_GROUP_COWARD      , SKIN_ANIM_WOMAN        , SKIN_GENDER_FEMALE | SKIN_RACE_BLACK},
	{10, !"bfost"  , !"Old Woman"                                          , SKIN_GROUP_STREET_GIRL , SKIN_ANIM_OLD_FAT_WOMAN, SKIN_GENDER_FEMALE | SKIN_RACE_BLACK},
	{11, !"vbfycrp", !"Casino croupier"                                    , SKIN_GROUP_SUIT_GIRL   , SKIN_ANIM_WOMAN        , SKIN_GENDER_FEMALE | SKIN_RACE_BLACK},
	{12, !"bfyri"  , !"Rich Woman"                                         , SKIN_GROUP_COWARD      , SKIN_ANIM_SEXY_WOMAN   , SKIN_GENDER_FEMALE | SKIN_RACE_BLACK},
	{13, !"bfyst"  , !"Street Girl"                                        , SKIN_GROUP_STREET_GIRL , SKIN_ANIM_WOMAN        , SKIN_GENDER_FEMALE | SKIN_RACE_BLACK},
	{14, !"bmori"  , !"Normal Ped"                                         , SKIN_GROUP_COWARD      , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_BLACK},
	{15, !"bmost"  , !"Mr.Whittaker (RS Haul Owner)"                       , SKIN_GROUP_STREET_GUY  , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_BLACK},
	{16, !"bmyap"  , !"Airport Ground Worker"                              , SKIN_GROUP_COWARD      , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_BLACK | SKIN_TYPE_CONSTRUCTION},
	{17, !"bmybu"  , !"Businessman"                                        , SKIN_GROUP_SUIT_GUY    , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_BLACK},
	{18, !"bmybe"  , !"Beach Visitor"                                      , SKIN_GROUP_BEACH_GUY   , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_BLACK | SKIN_TYPE_BEACH},
	{19, !"bmydj"  , !"DJ"                                                 , SKIN_GROUP_STREET_GUY  , SKIN_ANIM_GANG         , SKIN_GENDER_MALE   | SKIN_RACE_BLACK},
	{20, !"bmyri"  , !"Rich Guy (Madd Dogg's Manager)"                     , SKIN_GROUP_COWARD      , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_BLACK},
	{21, !"bmycr"  , !"Normal Ped"                                         , SKIN_GROUP_CRIMINAL    , SKIN_ANIM_GANG         , SKIN_GENDER_MALE   | SKIN_RACE_BLACK},
	{22, !"bmyst"  , !"Normal Ped"                                         , SKIN_GROUP_STREET_GUY  , SKIN_ANIM_GANG         , SKIN_GENDER_MALE   | SKIN_RACE_BLACK},
	{23, !"wmybmx" , !"BMXer"                                              , SKIN_GROUP_STREET_GUY  , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_WHITE | SKIN_TYPE_SPORT},
	{24, !"wbdyg1" , !"Madd Dogg Bodyguard"                                , SKIN_GROUP_TOUGH_GUY   , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_BLACK},
	{25, !"wbdyg2" , !"Madd Dogg Bodyguard"                                , SKIN_GROUP_TOUGH_GUY   , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_BLACK},
	{26, !"wmybp"  , !"Backpacker"                                         , SKIN_GROUP_GEEK_GUY    , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_WHITE | SKIN_TYPE_SPORT},
	{27, !"wmycon" , !"Construction Worker"                                , SKIN_GROUP_SUIT_GUY    , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_WHITE | SKIN_TYPE_CONSTRUCTION},
	{28, !"bmydrug", !"Drug Dealer"                                        , SKIN_GROUP_CRIMINAL    , SKIN_ANIM_GANG         , SKIN_GENDER_MALE   | SKIN_RACE_BLACK},
	{29, !"wmydrug", !"Drug Dealer"                                        , SKIN_GROUP_CRIMINAL    , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_WHITE},
	{30, !"hmydrug", !"Drug Dealer"                                        , SKIN_GROUP_CRIMINAL    , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_LATIN},
	{31, !"dwfolc" , !"Farm-Town inhabitant"                               , SKIN_GROUP_OLD_GIRL    , SKIN_ANIM_OLD_FAT_WOMAN, SKIN_GENDER_FEMALE | SKIN_RACE_WHITE | SKIN_TYPE_FARMER},
	{32, !"dwmolc1", !"Farm-Town inhabitant"                               , SKIN_GROUP_OLD_GUY     , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_WHITE | SKIN_TYPE_FARMER},
	{33, !"dwmolc2", !"Farm-Town inhabitant"                               , SKIN_GROUP_OLD_GUY     , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_WHITE | SKIN_TYPE_FARMER},
	{34, !"dwmylc1", !"Farm-Town inhabitant"                               , SKIN_GROUP_TOUGH_GUY   , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_WHITE | SKIN_TYPE_FARMER},
	{35, !"hmogar" , !"Gardener"                                           , SKIN_GROUP_OLD_GUY     , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_LATIN},
	{36, !"wmygol1", !"Golfer"                                             , SKIN_GROUP_COWARD      , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_LATIN | SKIN_TYPE_SPORT},
	{37, !"wmygol2", !"Golfer"                                             , SKIN_GROUP_COWARD      , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_WHITE | SKIN_TYPE_SPORT},
	{38, !"hfori"  , !"Normal Ped"                                         , SKIN_GROUP_COWARD      , SKIN_ANIM_WOMAN        , SKIN_GENDER_FEMALE   | SKIN_RACE_WHITE},
	{39, !"hfost"  , !"Normal Ped"                                         , SKIN_GROUP_OLD_GIRL    , SKIN_ANIM_OLD_FAT_WOMAN, SKIN_GENDER_FEMALE | SKIN_RACE_WHITE},
	{40, !"hfyri"  , !"Normal Ped"                                         , SKIN_GROUP_COWARD      , SKIN_ANIM_SEXY_WOMAN   , SKIN_GENDER_FEMALE | SKIN_RACE_BLACK},
	{41, !"hfyst"  , !"Normal Ped"                                         , SKIN_GROUP_STREET_GIRL , SKIN_ANIM_WOMAN        , SKIN_GENDER_FEMALE | SKIN_RACE_LATIN},
	{42, !"jethro" , !"Jethro"                                             , SKIN_GROUP_MISSION     , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_WHITE},
	{43, !"hmori"  , !"Normal Ped"                                         , SKIN_GROUP_COWARD      , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_LATIN},
	{44, !"hmost"  , !"Normal Ped"                                         , SKIN_GROUP_STREET_GUY  , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_LATIN},
	{45, !"hmybe"  , !"Beach Visitor"                                      , SKIN_GROUP_BEACH_GUY   , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_WHITE | SKIN_TYPE_BEACH},
	{46, !"hmyri"  , !"Normal Ped"                                         , SKIN_GROUP_SUIT_GUY    , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_LATIN},
	{47, !"hmycr"  , !"Normal Ped"                                         , SKIN_GROUP_CRIMINAL    , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_LATIN},
	{48, !"hmyst"  , !"Normal Ped"                                         , SKIN_GROUP_TOURIST     , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_LATIN},
	{49, !"omokung", !"Snakehead (Da Nang)"                                , SKIN_GROUP_OLD_GUY     , SKIN_ANIM_OLD_MAN      , SKIN_GENDER_MALE   | SKIN_RACE_ASIAN},
	{50, !"wmymech", !"Mechanic"                                           , SKIN_GROUP_TOUGH_GUY   , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_WHITE},
	{51, !"bmymoun", !"Mountain Biker"                                     , SKIN_GROUP_SENSIBLE_GUY, SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_BLACK | SKIN_TYPE_SPORT},
	{52, !"wmymoun", !"Mountain Biker"                                     , SKIN_GROUP_SENSIBLE_GUY, SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_WHITE | SKIN_TYPE_SPORT},
	{53, !"ofori"  , !"Unknown"                                            , SKIN_GROUP_OLD_GIRL    , SKIN_ANIM_OLD_WOMAN    , SKIN_GENDER_FEMALE | SKIN_RACE_WHITE},
	{54, !"ofost"  , !"Normal Ped"                                         , SKIN_GROUP_STREET_GIRL , SKIN_ANIM_OLD_WOMAN    , SKIN_GENDER_FEMALE | SKIN_RACE_WHITE},
	{55, !"ofyri"  , !"Normal Ped"                                         , SKIN_GROUP_COWARD      , SKIN_ANIM_WOMAN        , SKIN_GENDER_FEMALE | SKIN_RACE_WHITE},
	{56, !"ofyst"  , !"Normal Ped"                                         , SKIN_GROUP_TOURIST     , SKIN_ANIM_WOMAN        , SKIN_GENDER_FEMALE | SKIN_RACE_WHITE},
	{57, !"omori"  , !"Oriental Ped"                                       , SKIN_GROUP_COWARD      , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_WHITE},
	{58, !"omost"  , !"Oriental Ped"                                       , SKIN_GROUP_STREET_GUY  , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_WHITE},
	{59, !"omyri"  , !"Normal Ped"                                         , SKIN_GROUP_COWARD      , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_ASIAN},
	{60, !"omyst"  , !"Normal Ped"                                         , SKIN_GROUP_TOURIST     , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_WHITE},
	{61, !"wmyplt" , !"Pilot"                                              , SKIN_GROUP_SUIT_GUY    , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_WHITE},
	{62, !"wmopj"  , !"Colonel Fuhrberger"                                 , SKIN_GROUP_OLD_GUY     , SKIN_ANIM_OLD_MAN      , SKIN_GENDER_MALE   | SKIN_RACE_WHITE},
	{63, !"bfypro" , !"Prostitute"                                         , SKIN_GROUP_PROSTITUTE  , SKIN_ANIM_PROSTITUTE   , SKIN_GENDER_FEMALE | SKIN_RACE_BLACK | SKIN_TYPE_WHORE},
	{64, !"hfypro" , !"Prostitute"                                         , SKIN_GROUP_PROSTITUTE  , SKIN_ANIM_PROSTITUTE   , SKIN_GENDER_FEMALE | SKIN_RACE_BLACK | SKIN_TYPE_WHORE},
	{65, !"kendl"  , !"Kendl Johnson"                                      , SKIN_GROUP_MISSION     , SKIN_ANIM_WOMAN        , SKIN_GENDER_FEMALE | SKIN_RACE_BLACK},
	{66, !"bmypol1", !"Pool Player"                                        , SKIN_GROUP_TOUGH_GUY   , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_BLACK},
	{67, !"bmypol2", !"Pool Player"                                        , SKIN_GROUP_TOUGH_GUY   , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_BLACK},
	{68, !"wmoprea", !"Priest/Preacher"                                    , SKIN_GROUP_SUIT_GUY    , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_WHITE},
	{69, !"sbfyst" , !"Normal Ped"                                         , SKIN_GROUP_TOURIST     , SKIN_ANIM_WOMAN        , SKIN_GENDER_FEMALE | SKIN_RACE_BLACK},
	{70, !"wmosci" , !"Scientist"                                          , SKIN_GROUP_OLD_GUY     , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_WHITE},
	{71, !"wmysgrd", !"Security Guard"                                     , SKIN_GROUP_TOUGH_GUY   , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_WHITE | SKIN_TYPE_SECURITY},
	{72, !"swmyhp1", !"Hippy"                                              , SKIN_GROUP_TOUGH_GUY   , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_WHITE},
	{73, !"swmyhp2", !"Hippy"                                              , SKIN_GROUP_COWARD      , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_WHITE},
	{74, !"-"      , !"-"                                                  , 0                     , 0                      , 0}, // Nothing here!
	{75, !"swfopro", !"Prostitute"                                         , SKIN_GROUP_PROSTITUTE  , SKIN_ANIM_PROSTITUTE   , SKIN_GENDER_FEMALE | SKIN_RACE_WHITE | SKIN_TYPE_WHORE},
	{76, !"wfystew", !"Stewardess"                                         , SKIN_GROUP_GEEK_GIRL   , SKIN_ANIM_SEXY_WOMAN   , SKIN_GENDER_FEMALE | SKIN_RACE_BLACK},
	{77, !"swmotr1", !"Homeless"                                           , SKIN_GROUP_TRAMP_MALE  , SKIN_ANIM_MAN          , SKIN_GENDER_FEMALE | SKIN_RACE_WHITE | SKIN_TYPE_HOMELESS},
	{78, !"wmotr1" , !"Homeless"                                           , SKIN_GROUP_TRAMP_MALE  , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_WHITE | SKIN_TYPE_HOMELESS},
	{79, !"bmotr1" , !"Homeless"                                           , SKIN_GROUP_TRAMP_MALE  , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_WHITE | SKIN_TYPE_HOMELESS},
	{80, !"vbmybox", !"Boxer"                                              , SKIN_GROUP_TOUGH_GUY   , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_BLACK | SKIN_TYPE_SPORT},
	{81, !"vwmybox", !"Boxer"                                              , SKIN_GROUP_TOUGH_GUY   , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_WHITE | SKIN_TYPE_SPORT},
	{82, !"vhmyelv", !"Black Elvis"                                        , SKIN_GROUP_COWARD      , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_BLACK},
	{83, !"vbmyelv", !"White Elvis"                                        , SKIN_GROUP_TOUGH_GUY   , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_BLACK},
	{84, !"vimyelv", !"Blue Elvis"                                         , SKIN_GROUP_COWARD      , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_BLACK},
	{85, !"vwfypro", !"Prostitute"                                         , SKIN_GROUP_PROSTITUTE  , SKIN_ANIM_PROSTITUTE   , SKIN_GENDER_FEMALE | SKIN_RACE_WHITE | SKIN_TYPE_WHORE},
	{86, !"ryder3" , !"Ryder with robbery mask"                            , SKIN_GROUP_MISSION     , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_BLACK},
	{87, !"vwfyst1", !"Stripper"                                           , SKIN_GROUP_STREET_GIRL , SKIN_ANIM_SEXY_WOMAN   , SKIN_GENDER_FEMALE | SKIN_RACE_WHITE | SKIN_TYPE_WHORE},
	{88, !"wfori"  , !"Normal Ped"                                         , SKIN_GROUP_COWARD      , SKIN_ANIM_OLD_WOMAN    , SKIN_GENDER_FEMALE | SKIN_RACE_WHITE},
	{89, !"wfost"  , !"Normal Ped"                                         , SKIN_GROUP_STREET_GIRL , SKIN_ANIM_OLD_FAT_WOMAN, SKIN_GENDER_FEMALE | SKIN_RACE_WHITE},
	{90, !"wfyjg"  , !"Jogger"                                             , SKIN_GROUP_COWARD      , SKIN_ANIM_JOG_WOMAN    , SKIN_GENDER_FEMALE | SKIN_RACE_WHITE | SKIN_TYPE_SPORT},
	{91, !"wfyri"  , !"Rich Woman"                                         , SKIN_GROUP_COWARD      , SKIN_ANIM_SEXY_WOMAN   , SKIN_GENDER_FEMALE | SKIN_RACE_WHITE},
	{92, !"wfyro"  , !"Rollerskater"                                       , SKIN_GROUP_SKATER      , SKIN_ANIM_SKATER       , SKIN_GENDER_FEMALE | SKIN_RACE_WHITE | SKIN_TYPE_BEACH},
	{93, !"wfyst"  , !"Normal Ped"                                         , SKIN_GROUP_STREET_GIRL , SKIN_ANIM_SEXY_WOMAN   , SKIN_GENDER_FEMALE | SKIN_RACE_WHITE},
	{94, !"wmori"  , !"Normal Ped"                                         , SKIN_GROUP_SUIT_GUY    , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_WHITE},
	{95, !"wmost"  , !"Normal Ped, Works at or owns Dillimore Gas Station" , SKIN_GROUP_OLD_GUY     , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_WHITE},
	{96, !"wmyjg"  , !"Jogger"                                             , SKIN_GROUP_SENSIBLE_GUY, SKIN_ANIM_JOGGER       , SKIN_GENDER_MALE   | SKIN_RACE_WHITE | SKIN_TYPE_SPORT},
	{97, !"wmylg"  , !"Lifeguard"                                          , SKIN_GROUP_GEEK_GUY    , SKIN_ANIM_JOGGER       , SKIN_GENDER_MALE   | SKIN_RACE_WHITE | SKIN_TYPE_BEACH},
	{98, !"wmyri"  , !"Normal Ped"                                         , SKIN_GROUP_SHOPPER     , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_LATIN},
	{99, !"wmyro"  , !"Rollerskater"                                       , SKIN_GROUP_SKATER      , SKIN_ANIM_SKATER       , SKIN_GENDER_MALE   | SKIN_RACE_WHITE | SKIN_TYPE_SPORT},
	{100, !"wmycr"  , !"Biker"                                              , SKIN_GROUP_CRIMINAL    , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_WHITE},
	{101, !"wmyst"  , !"Normal Ped"                                         , SKIN_GROUP_STREET_GUY  , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_WHITE},
	{102, !"ballas1", !"Balla"                                              , SKIN_GROUP_GANG        , SKIN_ANIM_GANG         , SKIN_GENDER_MALE   | SKIN_RACE_BLACK | SKIN_GANG_BALLA},
	{103, !"ballas2", !"Balla"                                              , SKIN_GROUP_GANG        , SKIN_ANIM_GANG         , SKIN_GENDER_MALE   | SKIN_RACE_BLACK | SKIN_GANG_BALLA},
	{104, !"ballas3", !"Balla"                                              , SKIN_GROUP_GANG        , SKIN_ANIM_GANG         , SKIN_GENDER_MALE   | SKIN_RACE_BLACK | SKIN_GANG_BALLA},
	{105, !"fam1"   , !"Grove Street Families"                              , SKIN_GROUP_GANG        , SKIN_ANIM_GANG         , SKIN_GENDER_MALE   | SKIN_RACE_BLACK | SKIN_GANG_GROVE},
	{106, !"fam2"   , !"Grove Street Families"                              , SKIN_GROUP_GANG        , SKIN_ANIM_GANG         , SKIN_GENDER_MALE   | SKIN_RACE_BLACK | SKIN_GANG_GROVE},
	{107, !"fam3"   , !"Grove Street Families"                              , SKIN_GROUP_GANG        , SKIN_ANIM_GANG         , SKIN_GENDER_MALE   | SKIN_RACE_BLACK | SKIN_GANG_GROVE},
	{108, !"lsv1"   , !"Los Santos Vagos"                                   , SKIN_GROUP_GANG        , SKIN_ANIM_GANG         , SKIN_GENDER_MALE   | SKIN_RACE_LATIN | SKIN_GANG_VAGO},
	{109, !"lsv2"   , !"Los Santos Vagos"                                   , SKIN_GROUP_GANG        , SKIN_ANIM_GANG         , SKIN_GENDER_MALE   | SKIN_RACE_LATIN | SKIN_GANG_VAGO},
	{110, !"lsv3"   , !"Los Santos Vagos"                                   , SKIN_GROUP_GANG        , SKIN_ANIM_GANG         , SKIN_GENDER_MALE   | SKIN_RACE_LATIN | SKIN_GANG_VAGO},
	{111, !"maffa"  , !"The Russian Mafia"                                  , SKIN_GROUP_CRIMINAL    , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_WHITE | SKIN_GANG_RUSSIAN},
	{112, !"maffb"  , !"The Russian Mafia"                                  , SKIN_GROUP_CRIMINAL    , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_WHITE | SKIN_GANG_RUSSIAN},
	{113, !"mafboss", !"The Russian Mafia"                                  , SKIN_GROUP_CRIMINAL    , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_WHITE | SKIN_GANG_RUSSIAN},
	{114, !"vla1"   , !"Varios Los Aztecas"                                 , SKIN_GROUP_GANG        , SKIN_ANIM_GANG         , SKIN_GENDER_MALE   | SKIN_RACE_LATIN | SKIN_GANG_AZTECA},
	{115, !"vla2"   , !"Varios Los Aztecas"                                 , SKIN_GROUP_GANG        , SKIN_ANIM_GANG         , SKIN_GENDER_MALE   | SKIN_RACE_LATIN | SKIN_GANG_AZTECA},
	{116, !"vla3"   , !"Varios Los Aztecas"                                 , SKIN_GROUP_GANG        , SKIN_ANIM_GANG         , SKIN_GENDER_MALE   | SKIN_RACE_LATIN | SKIN_GANG_AZTECA},
	{117, !"triada" , !"Triad"                                              , SKIN_GROUP_GANG        , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_ASIAN | SKIN_GANG_TRIAD},
	{118, !"triadb" , !"Triad"                                              , SKIN_GROUP_GANG        , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_ASIAN | SKIN_GANG_TRIAD},
	{119, !"sindaco", !"Johhny Sindacco"                                    , SKIN_GROUP_MISSION     , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_WHITE},
	{120, !"triboss", !"Triad Boss"                                         , SKIN_GROUP_GANG        , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_ASIAN | SKIN_GANG_TRIAD},
	{121, !"dnb1"   , !"Da Nang Boy"                                        , SKIN_GROUP_GANG        , SKIN_ANIM_GANG         , SKIN_GENDER_MALE   | SKIN_RACE_ASIAN | SKIN_GANG_DANANG},
	{122, !"dnb2"   , !"Da Nang Boy"                                        , SKIN_GROUP_GANG        , SKIN_ANIM_GANG         , SKIN_GENDER_MALE   | SKIN_RACE_ASIAN | SKIN_GANG_DANANG},
	{123, !"dnb3"   , !"Da Nang Boy"                                        , SKIN_GROUP_GANG        , SKIN_ANIM_GANG         , SKIN_GENDER_MALE   | SKIN_RACE_ASIAN | SKIN_GANG_DANANG},
	{124, !"vmaff1" , !"The Mafia"                                          , SKIN_GROUP_GANG        , SKIN_ANIM_GANG         , SKIN_GENDER_MALE   | SKIN_RACE_WHITE | SKIN_GANG_ITALIAN},
	{125, !"vmaff2" , !"The Mafia"                                          , SKIN_GROUP_GANG        , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_WHITE | SKIN_GANG_ITALIAN},
	{126, !"vmaff3" , !"The Mafia"                                          , SKIN_GROUP_GANG        , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_WHITE | SKIN_GANG_ITALIAN},
	{127, !"vmaff4" , !"The Mafia"                                          , SKIN_GROUP_GANG        , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_WHITE | SKIN_GANG_ITALIAN},
	{128, !"dnmylc" , !"Farm Inhabitant"                                    , SKIN_GROUP_TOUGH_GUY   , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_WHITE | SKIN_TYPE_FARMER},
	{129, !"dnfolc1", !"Farm Inhabitant"                                    , SKIN_GROUP_COWARD      , SKIN_ANIM_OLD_WOMAN    , SKIN_GENDER_FEMALE | SKIN_RACE_WHITE | SKIN_TYPE_FARMER},
	{130, !"dnfolc2", !"Farm Inhabitant"                                    , SKIN_GROUP_COWARD      , SKIN_ANIM_OLD_WOMAN    , SKIN_GENDER_FEMALE | SKIN_RACE_WHITE | SKIN_TYPE_FARMER},
	{131, !"dnfylc" , !"Farm Inhabitant"                                    , SKIN_GROUP_COWARD      , SKIN_ANIM_SEXY_WOMAN   , SKIN_GENDER_FEMALE | SKIN_RACE_WHITE | SKIN_TYPE_FARMER},
	{132, !"dnmolc1", !"Farm Inhabitant"                                    , SKIN_GROUP_OLD_GUY     , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_WHITE | SKIN_TYPE_FARMER},
	{133, !"dnmolc2", !"Farm Inhabitant"                                    , SKIN_GROUP_OLD_GUY     , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_WHITE | SKIN_TYPE_FARMER},
	{134, !"sbmotr2", !"Homeless"                                           , SKIN_GROUP_TRAMP_MALE  , SKIN_ANIM_OLD_MAN      , SKIN_GENDER_MALE   | SKIN_RACE_BLACK | SKIN_TYPE_HOMELESS},
	{135, !"swmotr2", !"Homeless"                                           , SKIN_GROUP_TRAMP_MALE  , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_WHITE | SKIN_TYPE_HOMELESS},
	{136, !"sbmytr3", !"Normal Ped"                                         , SKIN_GROUP_TRAMP_MALE  , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_BLACK},
	{137, !"swmotr3", !"Homeless"                                           , SKIN_GROUP_TRAMP_MALE  , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_WHITE | SKIN_TYPE_HOMELESS},
	{138, !"wfybe"  , !"Beach Visitor"                                      , SKIN_GROUP_COWARD      , SKIN_ANIM_WOMAN        , SKIN_GENDER_FEMALE | SKIN_RACE_WHITE | SKIN_TYPE_BEACH},
	{139, !"bfybe"  , !"Beach Visitor"                                      , SKIN_GROUP_BEACH_GIRL  , SKIN_ANIM_WOMAN        , SKIN_GENDER_FEMALE | SKIN_RACE_BLACK | SKIN_TYPE_BEACH},
	{140, !"hfybe"  , !"Beach Visitor"                                      , SKIN_GROUP_BEACH_GIRL  , SKIN_ANIM_WOMAN        , SKIN_GENDER_FEMALE | SKIN_RACE_WHITE | SKIN_TYPE_BEACH},
	{141, !"sofybu" , !"Businesswoman"                                      , SKIN_GROUP_SUIT_GIRL   , SKIN_ANIM_BUSY_WOMAN   , SKIN_GENDER_FEMALE | SKIN_RACE_WHITE},
	{142, !"sbmyst" , !"Taxi Driver"                                        , SKIN_GROUP_STREET_GUY  , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_BLACK},
	{143, !"sbmycr" , !"Crack Maker"                                        , SKIN_GROUP_CRIMINAL    , SKIN_ANIM_GANG         , SKIN_GENDER_MALE   | SKIN_RACE_BLACK},
	{144, !"bmycg"  , !"Crack Maker"                                        , SKIN_GROUP_CRIMINAL    , SKIN_ANIM_GANG         , SKIN_GENDER_MALE   | SKIN_RACE_BLACK},
	{145, !"wfycrk" , !"Crack Maker"                                        , SKIN_GROUP_CRIMINAL    , SKIN_ANIM_WOMAN        , SKIN_GENDER_FEMALE | SKIN_RACE_WHITE | SKIN_TYPE_BEACH},
	{146, !"hmycm"  , !"Crack Maker"                                        , SKIN_GROUP_CRIMINAL    , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_WHITE | SKIN_TYPE_BEACH},
	{147, !"wmybu"  , !"Businessman"                                        , SKIN_GROUP_COWARD      , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_WHITE},
	{148, !"bfybu"  , !"Businesswoman"                                      , SKIN_GROUP_SUIT_GIRL   , SKIN_ANIM_BUSY_WOMAN   , SKIN_GENDER_FEMALE | SKIN_RACE_BLACK},
	{149, !"smokev" , !"Big Smoke Armored"                                  , SKIN_GROUP_MISSION     , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_BLACK},
	{150, !"wfybu"  , !"Businesswoman"                                      , SKIN_GROUP_SUIT_GIRL   , SKIN_ANIM_BUSY_WOMAN   , SKIN_GENDER_FEMALE | SKIN_RACE_WHITE},
	{151, !"dwfylc1", !"Normal Ped"                                         , SKIN_GROUP_TOUGH_GIRL  , SKIN_ANIM_SEXY_WOMAN   , SKIN_GENDER_FEMALE | SKIN_RACE_WHITE},
	{152, !"wfypro" , !"Prostitute"                                         , SKIN_GROUP_PROSTITUTE  , SKIN_ANIM_PROSTITUTE   , SKIN_GENDER_FEMALE | SKIN_RACE_WHITE | SKIN_TYPE_WHORE},
	{153, !"wmyconb", !"Construction Worker"                                , SKIN_GROUP_SUIT_GUY    , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_WHITE | SKIN_TYPE_CONSTRUCTION},
	{154, !"wmybe"  , !"Beach Visitor"                                      , SKIN_GROUP_SENSIBLE_GUY, SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_WHITE | SKIN_TYPE_BEACH},
	{155, !"wmypizz", !"Well Stacked Pizza Worker"                          , SKIN_GROUP_SENSIBLE_GUY, SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_WHITE | SKIN_TYPE_FOOD},
	{156, !"bmobar" , !"Barber"                                             , SKIN_GROUP_OLD_GUY     , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_BLACK},
	{157, !"cwfyhb" , !"Hillbilly"                                          , SKIN_GROUP_TOUGH_GIRL  , SKIN_ANIM_WOMAN        , SKIN_GENDER_FEMALE | SKIN_RACE_WHITE | SKIN_TYPE_FARMER},
	{158, !"cwmofr" , !"Farmer"                                             , SKIN_GROUP_OLD_GUY     , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_WHITE | SKIN_TYPE_FARMER},
	{159, !"cwmohb1", !"Hillbilly"                                          , SKIN_GROUP_OLD_GUY     , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_WHITE | SKIN_TYPE_FARMER},
	{160, !"cwmohb2", !"Hillbilly"                                          , SKIN_GROUP_OLD_GUY     , SKIN_ANIM_OLD_MAN      , SKIN_GENDER_MALE   | SKIN_RACE_WHITE | SKIN_TYPE_FARMER},
	{161, !"cwmyfr" , !"Farmer"                                             , SKIN_GROUP_TOUGH_GUY   , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_WHITE | SKIN_TYPE_FARMER},
	{162, !"cwmyhb1", !"Hillbilly"                                          , SKIN_GROUP_TOUGH_GUY   , SKIN_ANIM_OLD_MAN      , SKIN_GENDER_MALE   | SKIN_RACE_WHITE | SKIN_TYPE_FARMER},
	{163, !"bmyboun", !"Black Bouncer"                                      , SKIN_GROUP_TOUGH_GUY   , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_BLACK | SKIN_TYPE_SECURITY},
	{164, !"wmyboun", !"White Bouncer"                                      , SKIN_GROUP_TOUGH_GUY   , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_WHITE | SKIN_TYPE_SECURITY},
	{165, !"wmomib" , !"White MIB agent"                                    , SKIN_GROUP_SUIT_GUY    , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_WHITE | SKIN_SERVICE_MIB},
	{166, !"bmymib" , !"Black MIB agent"                                    , SKIN_GROUP_SUIT_GUY    , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_BLACK | SKIN_SERVICE_MIB},
	{167, !"wmybell", !"Cluckin' Bell Worker"                               , SKIN_GROUP_SENSIBLE_GUY, SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_WHITE | SKIN_TYPE_FOOD},
	{168, !"bmochil", !"Hotdog/Chilli Dog Vendor"                           , SKIN_GROUP_SENSIBLE_GUY, SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_BLACK | SKIN_TYPE_FOOD},
	{169, !"sofyri" , !"Normal Ped"                                         , SKIN_GROUP_COWARD      , SKIN_ANIM_SEXY_WOMAN   , SKIN_GENDER_FEMALE | SKIN_RACE_ASIAN},
	{170, !"somyst" , !"Normal Ped"                                         , SKIN_GROUP_COWARD      , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_WHITE},
	{171, !"vwmybjd", !"Blackjack Dealer"                                   , SKIN_GROUP_SUIT_GUY    , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_WHITE},
	{172, !"vwfycrp", !"Casino croupier"                                    , SKIN_GROUP_SUIT_GIRL   , SKIN_ANIM_BUSY_WOMAN   , SKIN_GENDER_FEMALE | SKIN_RACE_WHITE},
	{173, !"sfr1"   , !"San Fierro Rifa"                                    , SKIN_GROUP_GANG        , SKIN_ANIM_GANG         , SKIN_GENDER_MALE   | SKIN_RACE_LATIN | SKIN_GANG_RIFA},
	{174, !"sfr2"   , !"San Fierro Rifa"                                    , SKIN_GROUP_GANG        , SKIN_ANIM_GANG         , SKIN_GENDER_MALE   | SKIN_RACE_LATIN | SKIN_GANG_RIFA},
	{175, !"sfr3"   , !"San Fierro Rifa"                                    , SKIN_GROUP_GANG        , SKIN_ANIM_GANG         , SKIN_GENDER_MALE   | SKIN_RACE_LATIN | SKIN_GANG_RIFA},
	{176, !"bmybar" , !"Barber"                                             , SKIN_GROUP_SENSIBLE_GUY, SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_BLACK},
	{177, !"wmybar" , !"Barber"                                             , SKIN_GROUP_SENSIBLE_GUY, SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_WHITE},
	{178, !"wfysex" , !"Whore"                                              , SKIN_GROUP_STREET_GIRL , SKIN_ANIM_SEXY_WOMAN   , SKIN_GENDER_FEMALE | SKIN_RACE_WHITE | SKIN_TYPE_WHORE},
	{179, !"wmyammo", !"Ammunation Salesman"                                , SKIN_GROUP_TOUGH_GUY   , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_WHITE},
	{180, !"bmytatt", !"Tattoo Artist"                                      , SKIN_GROUP_TOUGH_GUY   , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_BLACK},
	{181, !"vwmycr" , !"Punk"                                               , SKIN_GROUP_CRIMINAL    , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_WHITE},
	{182, !"vbmocd" , !"Cab Driver"                                         , SKIN_GROUP_TAXI_DRIVER  , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_BLACK},
	{183, !"vbmycr" , !"Normal Ped"                                         , SKIN_GROUP_CRIMINAL    , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_BLACK},
	{184, !"vhmycr" , !"Normal Ped"                                         , SKIN_GROUP_CRIMINAL    , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_LATIN},
	{185, !"sbmyri" , !"Normal Ped"                                         , SKIN_GROUP_STREET_GUY  , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_BLACK},
	{186, !"somyri" , !"Normal Ped"                                         , SKIN_GROUP_SUIT_GUY    , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_ASIAN},
	{187, !"somybu" , !"Businessman"                                        , SKIN_GROUP_SUIT_GUY    , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_ASIAN},
	{188, !"swmyst" , !"Normal Ped"                                         , SKIN_GROUP_TOURIST     , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_WHITE},
	{189, !"wmyva"  , !"Valet"                                              , SKIN_GROUP_STREET_GUY  , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_WHITE},
	{190, !"copgrl3", !"Barbara Schternvart"                                , SKIN_GROUP_STREET_GIRL , SKIN_ANIM_BUSY_WOMAN   , SKIN_GENDER_FEMALE | SKIN_RACE_BLACK},
	{191, !"gungrl3", !"Helena Wankstein"                                   , SKIN_GROUP_STREET_GIRL , SKIN_ANIM_WOMAN        , SKIN_GENDER_FEMALE | SKIN_RACE_WHITE},
	{192, !"mecgrl3", !"Michelle Cannes"                                    , SKIN_GROUP_STREET_GIRL , SKIN_ANIM_SEXY_WOMAN   , SKIN_GENDER_FEMALE | SKIN_RACE_WHITE},
	{193, !"nurgrl3", !"Katie Zhan"                                         , SKIN_GROUP_SUIT_GIRL   , SKIN_ANIM_SEXY_WOMAN   , SKIN_GENDER_FEMALE | SKIN_RACE_WHITE},
	{194, !"crogrl3", !"Millie Perkins"                                     , SKIN_GROUP_SUIT_GIRL   , SKIN_ANIM_SEXY_WOMAN   , SKIN_GENDER_FEMALE | SKIN_RACE_WHITE},
	{195, !"gangrl3", !"Denise Robinson"                                    , SKIN_GROUP_STREET_GIRL , SKIN_ANIM_WOMAN        , SKIN_GENDER_FEMALE | SKIN_RACE_BLACK},
	{196, !"cwfofr" , !"Farm-Town inhabitant"                               , SKIN_GROUP_COWARD      , SKIN_ANIM_OLD_WOMAN    , SKIN_GENDER_FEMALE | SKIN_RACE_WHITE | SKIN_TYPE_FARMER},
	{197, !"cwfohb" , !"Hillbilly"                                          , SKIN_GROUP_OLD_GIRL    , SKIN_ANIM_OLD_WOMAN    , SKIN_GENDER_FEMALE | SKIN_RACE_WHITE | SKIN_TYPE_FARMER},
	{198, !"cwfyfr1", !"Farm-Town inhabitant"                               , SKIN_GROUP_TOUGH_GIRL  , SKIN_ANIM_WOMAN        , SKIN_GENDER_FEMALE | SKIN_RACE_WHITE | SKIN_TYPE_FARMER},
	{199, !"cwfyfr2", !"Farm-Town inhabitant"                               , SKIN_GROUP_STREET_GIRL , SKIN_ANIM_WOMAN        , SKIN_GENDER_FEMALE | SKIN_RACE_WHITE | SKIN_TYPE_FARMER},
	{200, !"cwmyhb2", !"Hillbilly"                                          , SKIN_GROUP_TOUGH_GUY   , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_WHITE | SKIN_TYPE_FARMER},
	{201, !"dwfylc2", !"Farmer"                                             , SKIN_GROUP_STREET_GIRL , SKIN_ANIM_WOMAN        , SKIN_GENDER_FEMALE | SKIN_RACE_WHITE | SKIN_TYPE_FARMER},
	{202, !"dwmylc2", !"Farmer"                                             , SKIN_GROUP_TOUGH_GUY   , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_WHITE | SKIN_TYPE_FARMER},
	{203, !"omykara", !"Karate Teacher"                                     , SKIN_GROUP_TOUGH_GUY   , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_WHITE},
	{204, !"wmykara", !"Karate Teacher"                                     , SKIN_GROUP_TOUGH_GUY   , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_WHITE},
	{205, !"wfyburg", !"Burger Shot Cashier"                                , SKIN_GROUP_STREET_GIRL , SKIN_ANIM_WOMAN        , SKIN_GENDER_FEMALE | SKIN_RACE_WHITE | SKIN_TYPE_FOOD},
	{206, !"vwmycd" , !"Cab Driver"                                         , SKIN_GROUP_TAXI_DRIVER  , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_WHITE},
	{207, !"vhfypro", !"Prostitute"                                         , SKIN_GROUP_PROSTITUTE  , SKIN_ANIM_PROSTITUTE   , SKIN_GENDER_FEMALE | SKIN_RACE_WHITE | SKIN_TYPE_WHORE},
	{208, !"suzie"  , !"Su Xi Mu (Suzie)"                                   , SKIN_GROUP_MISSION     , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_ASIAN},
	{209, !"omonood", !"Oriental Noodle stand vendor"                       , SKIN_GROUP_OLD_GUY     , SKIN_ANIM_OLD_MAN      , SKIN_GENDER_MALE   | SKIN_RACE_WHITE | SKIN_TYPE_FOOD},
	{210, !"omoboat", !"Oriental Boating School Instructor"                 , SKIN_GROUP_OLD_GUY     , SKIN_ANIM_OLD_MAN      , SKIN_GENDER_MALE   | SKIN_RACE_ASIAN},
	{211, !"wfyclot", !"Clothes shop staff"                                 , SKIN_GROUP_STREET_GIRL , SKIN_ANIM_WOMAN        , SKIN_GENDER_FEMALE | SKIN_RACE_WHITE | SKIN_TYPE_SECURITY},
	{212, !"vwmotr1", !"Homeless"                                           , SKIN_GROUP_TRAMP_MALE  , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_WHITE | SKIN_TYPE_HOMELESS},
	{213, !"vwmotr2", !"Weird old man"                                      , SKIN_GROUP_TRAMP_MALE  , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_WHITE | SKIN_TYPE_HOMELESS},
	{214, !"vwfywai", !"Waitress (Maria Latore)"                            , SKIN_GROUP_STREET_GIRL , SKIN_ANIM_WOMAN        , SKIN_GENDER_FEMALE | SKIN_RACE_WHITE},
	{215, !"sbfori" , !"Normal Ped"                                         , SKIN_GROUP_COWARD      , SKIN_ANIM_WOMAN        , SKIN_GENDER_FEMALE | SKIN_RACE_BLACK},
	{216, !"swfyri" , !"Normal Ped"                                         , SKIN_GROUP_SHOPPER     , SKIN_ANIM_WOMAN        , SKIN_GENDER_FEMALE | SKIN_RACE_WHITE},
	{217, !"wmyclot", !"Clothes shop staff"                                 , SKIN_GROUP_STREET_GUY  , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_WHITE | SKIN_TYPE_SECURITY},
	{218, !"sbfost" , !"Normal Ped"                                         , SKIN_GROUP_STREET_GIRL , SKIN_ANIM_WOMAN        , SKIN_GENDER_FEMALE | SKIN_RACE_BLACK},
	{219, !"sbfyri" , !"Rich Woman"                                         , SKIN_GROUP_COWARD      , SKIN_ANIM_WOMAN        , SKIN_GENDER_FEMALE | SKIN_RACE_BLACK},
	{220, !"sbmocd" , !"Cab Driver"                                         , SKIN_GROUP_TAXI_DRIVER  , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_BLACK},
	{221, !"sbmori" , !"Normal Ped"                                         , SKIN_GROUP_SUIT_GUY    , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_BLACK},
	{222, !"sbmost" , !"Normal Ped"                                         , SKIN_GROUP_STREET_GUY  , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_BLACK},
	{223, !"shmycr" , !"Normal Ped"                                         , SKIN_GROUP_CRIMINAL    , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_LATIN},
	{224, !"sofori" , !"Normal Ped"                                         , SKIN_GROUP_OLD_GIRL    , SKIN_ANIM_WOMAN        , SKIN_GENDER_FEMALE | SKIN_RACE_ASIAN},
	{225, !"sofost" , !"Normal Ped"                                         , SKIN_GROUP_STREET_GIRL , SKIN_ANIM_WOMAN        , SKIN_GENDER_FEMALE | SKIN_RACE_ASIAN},
	{226, !"sofyst" , !"Normal Ped"                                         , SKIN_GROUP_STREET_GIRL , SKIN_ANIM_WOMAN        , SKIN_GENDER_FEMALE | SKIN_RACE_WHITE},
	{227, !"somobu" , !"Oriental Businessman"                               , SKIN_GROUP_SUIT_GUY    , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_WHITE},
	{228, !"somori" , !"Oriental Ped"                                       , SKIN_GROUP_COWARD      , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_ASIAN},
	{229, !"somost" , !"Oriental Ped"                                       , SKIN_GROUP_STREET_GUY  , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_ASIAN},
	{230, !"swmotr5", !"Homeless"                                           , SKIN_GROUP_TRAMP_MALE  , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_WHITE | SKIN_TYPE_HOMELESS},
	{231, !"swfori" , !"Normal Ped"                                         , SKIN_GROUP_COWARD      , SKIN_ANIM_WOMAN        , SKIN_GENDER_FEMALE | SKIN_RACE_WHITE},
	{232, !"swfost" , !"Normal Ped"                                         , SKIN_GROUP_STREET_GIRL , SKIN_ANIM_WOMAN        , SKIN_GENDER_FEMALE | SKIN_RACE_WHITE},
	{233, !"swfyst" , !"Normal Ped"                                         , SKIN_GROUP_STREET_GIRL , SKIN_ANIM_WOMAN        , SKIN_GENDER_FEMALE | SKIN_RACE_WHITE},
	{234, !"swmocd" , !"Cab Driver"                                         , SKIN_GROUP_TAXI_DRIVER  , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_WHITE},
	{235, !"swmori" , !"Normal Ped"                                         , SKIN_GROUP_SUIT_GUY    , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_WHITE},
	{236, !"swmost" , !"Normal Ped"                                         , SKIN_GROUP_STREET_GUY  , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_WHITE},
	{237, !"shfypro", !"Prostitute"                                         , SKIN_GROUP_PROSTITUTE  , SKIN_ANIM_PROSTITUTE   , SKIN_GENDER_FEMALE | SKIN_RACE_WHITE | SKIN_TYPE_WHORE},
	{238, !"sbfypro", !"Prostitute"                                         , SKIN_GROUP_PROSTITUTE  , SKIN_ANIM_PROSTITUTE   , SKIN_GENDER_FEMALE | SKIN_RACE_BLACK | SKIN_TYPE_WHORE},
	{239, !"swmotr4", !"Homeless"                                           , SKIN_GROUP_TRAMP_MALE  , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_WHITE | SKIN_TYPE_HOMELESS},
	{240, !"swmyri" , !"The D.A"                                            , SKIN_GROUP_COWARD      , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_WHITE},
	{241, !"smyst"  , !"Afro-American"                                      , SKIN_GROUP_STREET_GUY  , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_WHITE},
	{242, !"smyst2" , !"Mexican"                                            , SKIN_GROUP_STREET_GUY  , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_WHITE},
	{243, !"sfypro" , !"Prostitute"                                         , SKIN_GROUP_PROSTITUTE  , SKIN_ANIM_PROSTITUTE   , SKIN_GENDER_FEMALE | SKIN_RACE_BLACK | SKIN_TYPE_WHORE},
	{244, !"vbfyst2", !"Stripper"                                           , SKIN_GROUP_STREET_GIRL , SKIN_ANIM_SEXY_WOMAN   , SKIN_GENDER_FEMALE | SKIN_RACE_BLACK | SKIN_TYPE_WHORE},
	{245, !"vbfypro", !"Prostitute"                                         , SKIN_GROUP_PROSTITUTE  , SKIN_ANIM_PROSTITUTE   , SKIN_GENDER_FEMALE | SKIN_RACE_BLACK | SKIN_TYPE_WHORE},
	{246, !"vhfyst3", !"Stripper"                                           , SKIN_GROUP_STREET_GIRL , SKIN_ANIM_SEXY_WOMAN   , SKIN_GENDER_FEMALE | SKIN_RACE_WHITE | SKIN_TYPE_WHORE},
	{247, !"bikera" , !"Biker"                                              , SKIN_GROUP_TOUGH_GUY   , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_WHITE | SKIN_GANG_BIKER},
	{248, !"bikerb" , !"Biker"                                              , SKIN_GROUP_TOUGH_GUY   , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_WHITE | SKIN_GANG_BIKER},
	{249, !"bmypimp", !"Pimp"                                               , SKIN_GROUP_STREET_GUY  , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_BLACK},
	{250, !"swmycr" , !"Normal Ped"                                         , SKIN_GROUP_CRIMINAL    , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_WHITE},
	{251, !"wfylg"  , !"Lifeguard"                                          , SKIN_GROUP_BEACH_GIRL  , SKIN_ANIM_WOMAN        , SKIN_GENDER_FEMALE | SKIN_RACE_WHITE | SKIN_TYPE_BEACH},
	{252, !"wmyva2" , !"Naked Valet"                                        , SKIN_GROUP_STREET_GUY  , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_WHITE},
	{253, !"bmosec" , !"Bus Driver"                                         , SKIN_GROUP_OLD_GUY     , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_BLACK},
	{254, !"bikdrug", !"Biker Drug Dealer"                                  , SKIN_GROUP_CRIMINAL    , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_WHITE | SKIN_GANG_BIKER},
	{255, !"wmych"  , !"Chauffeur (Limo Driver)"                            , SKIN_GROUP_TOUGH_GUY   , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_WHITE},
	{256, !"sbfystr", !"Stripper"                                           , SKIN_GROUP_STREET_GIRL , SKIN_ANIM_SEXY_WOMAN   , SKIN_GENDER_FEMALE | SKIN_RACE_BLACK | SKIN_TYPE_WHORE},
	{257, !"swfystr", !"Stripper"                                           , SKIN_GROUP_STREET_GIRL , SKIN_ANIM_SEXY_WOMAN   , SKIN_GENDER_FEMALE | SKIN_RACE_WHITE | SKIN_TYPE_WHORE},
	{258, !"heck1"  , !"Heckler"                                            , SKIN_GROUP_TOUGH_GUY   , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_WHITE | SKIN_TYPE_SPORT},
	{259, !"heck2"  , !"Heckler"                                            , SKIN_GROUP_TOUGH_GUY   , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_WHITE | SKIN_TYPE_SPORT},
	{260, !"bmycon" , !"Construction Worker"                                , SKIN_GROUP_TOUGH_GUY   , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_BLACK | SKIN_TYPE_CONSTRUCTION},
	{261, !"wmycd1" , !"Cab driver"                                         , SKIN_GROUP_TAXI_DRIVER  , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_WHITE},
	{262, !"bmocd"  , !"Cab driver"                                         , SKIN_GROUP_TAXI_DRIVER  , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_BLACK},
	{263, !"vwfywa2", !"Normal Ped"                                         , SKIN_GROUP_STREET_GIRL , SKIN_ANIM_WOMAN        , SKIN_GENDER_FEMALE | SKIN_RACE_ASIAN},
	{264, !"wmoice" , !"Clown (Ice-cream Van Driver)"                       , SKIN_GROUP_STREET_GUY  , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_WHITE},
	{265, !"tenpen" , !"Officer Frank Tenpenny (Corrupt Cop)"               , SKIN_GROUP_COP         , SKIN_ANIM_SWAT         , SKIN_GENDER_MALE   | SKIN_RACE_BLACK},
	{266, !"pulaski", !"Officer Eddie Pulaski (Corrupt Cop)"                , SKIN_GROUP_COP         , SKIN_ANIM_SWAT         , SKIN_GENDER_MALE   | SKIN_RACE_WHITE},
	{267, !"hern"   , !"Officer Jimmy Hernandez"                            , SKIN_GROUP_COP         , SKIN_ANIM_SWAT         , SKIN_GENDER_MALE   | SKIN_RACE_LATIN},
	{268, !"dwayne" , !"Dwaine/Dwayne"                                      , SKIN_GROUP_MISSION     , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_WHITE},
	{269, !"smoke"  , !"Melvin \"Big Smoke\" Harris (Mission)"              , SKIN_GROUP_MISSION     , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_BLACK},
	{270, !"sweet"  , !"Sean 'Sweet' Johnson"                               , SKIN_GROUP_MISSION     , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_BLACK},
	{271, !"ryder"  , !"Lance 'Ryder' Wilson"                               , SKIN_GROUP_MISSION     , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_BLACK},
	{272, !"forelli", !"Mafia Boss"                                         , SKIN_GROUP_MISSION     , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_WHITE},
	{273, !"tbone"  , !"T-Bone Mendez"                                      , SKIN_GROUP_MISSION     , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_LATIN},
	{274, !"laemt1" , !"Paramedic (Emergency Medical Technician)"           , SKIN_GROUP_MEDIC       , SKIN_ANIM_SWAT         , SKIN_GENDER_MALE   | SKIN_RACE_BLACK | SKIN_SERVICE_MEDIC},
	{275, !"lvemt1" , !"Paramedic (Emergency Medical Technician)"           , SKIN_GROUP_MEDIC       , SKIN_ANIM_SWAT         , SKIN_GENDER_MALE   | SKIN_RACE_LATIN | SKIN_SERVICE_MEDIC},
	{276, !"sfemt1" , !"Paramedic (Emergency Medical Technician)"           , SKIN_GROUP_MEDIC       , SKIN_ANIM_SWAT         , SKIN_GENDER_MALE   | SKIN_RACE_WHITE | SKIN_SERVICE_MEDIC},
	{277, !"lafd1"  , !"Firefighter"                                        , SKIN_GROUP_FIREMAN     , SKIN_ANIM_SWAT         , SKIN_GENDER_MALE   | SKIN_RACE_WHITE | SKIN_SERVICE_FIRE},
	{278, !"lvfd1"  , !"Firefighter"                                        , SKIN_GROUP_FIREMAN     , SKIN_ANIM_SWAT         , SKIN_GENDER_MALE   | SKIN_RACE_BLACK | SKIN_SERVICE_FIRE},
	{279, !"sffd1"  , !"Firefighter"                                        , SKIN_GROUP_FIREMAN     , SKIN_ANIM_SWAT         , SKIN_GENDER_MALE   | SKIN_RACE_WHITE | SKIN_SERVICE_FIRE},
	{280, !"lapd1"  , !"Los Santos Police Officer"                          , SKIN_GROUP_COP         , SKIN_ANIM_SWAT         , SKIN_GENDER_MALE   | SKIN_RACE_WHITE | SKIN_SERVICE_POLICE},
	{281, !"sfpd1"  , !"San Fierro Police Officer"                          , SKIN_GROUP_COP         , SKIN_ANIM_SWAT         , SKIN_GENDER_MALE   | SKIN_RACE_WHITE | SKIN_SERVICE_POLICE},
	{282, !"lvpd1"  , !"Las Venturas Police Officer"                        , SKIN_GROUP_COP         , SKIN_ANIM_SWAT         , SKIN_GENDER_MALE   | SKIN_RACE_WHITE | SKIN_SERVICE_POLICE},
	{283, !"csher"  , !"County Sheriff"                                     , SKIN_GROUP_COP         , SKIN_ANIM_SWAT         , SKIN_GENDER_MALE   | SKIN_RACE_WHITE | SKIN_SERVICE_SHERIFF},
	{284, !"lapdm1" , !"LSPD Motorbike Cop"                                 , SKIN_GROUP_COP         , SKIN_ANIM_SWAT         , SKIN_GENDER_MALE   | SKIN_RACE_BLACK | SKIN_SERVICE_POLICE},
	{285, !"swat"   , !"S.W.A.T Special Forces"                             , SKIN_GROUP_COP         , SKIN_ANIM_SWAT         , SKIN_GENDER_MALE   | SKIN_RACE_WHITE | SKIN_SERVICE_SWAT},
	{286, !"fbi"    , !"Federal Agent"                                      , SKIN_GROUP_COP         , SKIN_ANIM_SWAT         , SKIN_GENDER_MALE   | SKIN_RACE_WHITE | SKIN_SERVICE_FBI},
	{287, !"army"   , !"San Andreas Army"                                   , SKIN_GROUP_COP         , SKIN_ANIM_SWAT         , SKIN_GENDER_MALE   | SKIN_RACE_WHITE | SKIN_SERVICE_ARMY},
	{288, !"dsher"  , !"Desert Sheriff"                                     , SKIN_GROUP_COP         , SKIN_ANIM_SWAT         , SKIN_GENDER_MALE   | SKIN_RACE_WHITE | SKIN_SERVICE_SHERIFF},
	{289, !"zero"   , !"Zero"                                               , SKIN_GROUP_MISSION     , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_WHITE},
	{290, !"rose"   , !"Ken Rosenberg"                                      , SKIN_GROUP_MISSION     , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_WHITE},
	{291, !"paul"   , !"Kent Paul"                                          , SKIN_GROUP_MISSION     , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_WHITE},
	{292, !"cesar"  , !"Cesar Vialpando"                                    , SKIN_GROUP_MISSION     , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_LATIN},
	{293, !"ogloc"  , !"Jeffery \"OG Loc\" Martin/Cross"                    , SKIN_GROUP_MISSION     , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_BLACK},
	{294, !"wuzimu" , !"Wu Zi Mu (Woozie)"                                  , SKIN_GROUP_MISSION     , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_ASIAN},
	{295, !"torino" , !"Michael Toreno"                                     , SKIN_GROUP_MISSION     , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_WHITE},
	{296, !"jizzy"  , !"Jizzy B."                                           , SKIN_GROUP_MISSION     , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_BLACK},
	{297, !"maddogg", !"Madd Dogg"                                          , SKIN_GROUP_MISSION     , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_BLACK},
	{298, !"cat"    , !"Catalina"                                           , SKIN_GROUP_MISSION     , SKIN_ANIM_MAN          , SKIN_GENDER_FEMALE | SKIN_RACE_LATIN},
	{299, !"claude" , !"Claude Speed"                                       , SKIN_GROUP_MISSION     , SKIN_ANIM_FAT_MAN      , SKIN_GENDER_MALE   | SKIN_RACE_WHITE},
	{300, !"lapdna" , !"Los Santos Police Officer (Without gun holster)"    , SKIN_GROUP_COP         , SKIN_ANIM_SWAT         , SKIN_GENDER_MALE   | SKIN_RACE_WHITE},
	{301, !"sfpdna" , !"San Fierro Police Officer (Without gun holster)"    , SKIN_GROUP_COP         , SKIN_ANIM_SWAT         , SKIN_GENDER_MALE   | SKIN_RACE_WHITE},
	{302, !"lvpdna" , !"Las Venturas Police Officer (Without gun holster)"  , SKIN_GROUP_COP         , SKIN_ANIM_SWAT         , SKIN_GENDER_MALE   | SKIN_RACE_WHITE},
	{303, !"lapdpc" , !"Los Santos Police Officer (Without uniform)"        , SKIN_GROUP_STREET_GUY  , SKIN_ANIM_SWAT         , SKIN_GENDER_MALE   | SKIN_RACE_WHITE},
	{304, !"lapdpd" , !"Los Santos Police Officer (Without uniform)"        , SKIN_GROUP_STREET_GUY  , SKIN_ANIM_SWAT         , SKIN_GENDER_MALE   | SKIN_RACE_WHITE},
	{305, !"lvpdpc" , !"Las Venturas Police Officer (Without uniform)"      , SKIN_GROUP_STREET_GUY  , SKIN_ANIM_SWAT         , SKIN_GENDER_MALE   | SKIN_RACE_WHITE},
	{306, !"wfyclpd", !"Los Santos Police Officer"                          , SKIN_GROUP_COP         , SKIN_ANIM_WOMAN        , SKIN_GENDER_FEMALE | SKIN_RACE_WHITE},
	{307, !"vbfycpd", !"San Fierro Police Officer"                          , SKIN_GROUP_COP         , SKIN_ANIM_WOMAN        , SKIN_GENDER_FEMALE | SKIN_RACE_BLACK},
	{308, !"wfyclem", !"San Fierro Paramedic (Emergency Medical Technician)", SKIN_GROUP_MEDIC       , SKIN_ANIM_SEXY_WOMAN   , SKIN_GENDER_FEMALE | SKIN_RACE_WHITE},
	{309, !"wfycllv", !"Las Venturas Police Officer"                        , SKIN_GROUP_COP         , SKIN_ANIM_WOMAN        , SKIN_GENDER_FEMALE | SKIN_RACE_WHITE},
	{310, !"csherna", !"Country Sheriff (Without hat)"                      , SKIN_GROUP_COP         , SKIN_ANIM_SWAT         , SKIN_GENDER_MALE   | SKIN_RACE_WHITE},
	{311, !"dsherna", !"Desert Sheriff (Without hat)"                       , SKIN_GROUP_COP         , SKIN_ANIM_SWAT         , SKIN_GENDER_MALE   | SKIN_RACE_WHITE}
};

static stock FindSkinIndex(skinid) {

	if (skinid != 74) {
		return SKIN_INVALID;
	}

	if (0 <= skinid <= 311) {
		return skinid;
	}

	for (new index = 312; index != sizeof skinInfoList; ++ index) {

		if (skinInfoList[index][e_SKIN_MODEL_ID] != skinid) {
			continue;
		}

		return index;
	}

	return SKIN_INVALID;
}

stock bool: GetSkinName(skinid, output[], outlen = sizeof(output)) {

	new index = FindSkinIndex(skinid);

	if (index == SKIN_INVALID)
		return false;

	strunpack(output, skinInfoList[index][e_SKIN_NAME], outlen);

	return true;
}

stock bool: GetSkinModelName(skinid, output[], outlen = sizeof(output)) {

	new index = FindSkinIndex(skinid);

	if (index == SKIN_INVALID)
		return false;

	strunpack(output, skinInfoList[index][e_SKIN_MODEL_NAME], outlen);

	return true;
}

stock bool: IsPlayerFemale(playerid) {

	return !IsPlayerMale(playerid);
}

stock bool: IsPlayerMale(playerid) {

	return GetSkinGender(GetPlayerSkin(playerid)) == SKIN_GENDER_MALE);
}

stock GetSkinSex(skinid) = GetSkinGender;

stock GetSkinGender(skinid) {

	new index = FindSkinIndex(skinid);

	if (index == SKIN_INVALID)
		return SKIN_INVALID;

	return (skinInfoList[index][e_SKIN_FLAGS] & SKIN_FLAG_GENDER);
}

stock GetSkinGenderName(skinid, output[], outlen = sizeof(output)) {

	new index = FindSkinIndex(skinid);

	if (index == SKIN_INVALID)
		return false;

	output[0] = '\0';
	strcat(output, GetSkinGender(skin) ? ("male") : ("female"), outlen);

	return 1;
}

stock GetSkinRace(skinid) {

	new index = FindSkinIndex(skinid);

	if (index == SKIN_INVALID)
		return false;

	return ((skinInfoList[index][e_SKIN_FLAGS] & SKIN_FLAG_RACE));
}

stock bool: GetSkinRaceName(skinid, output[], outlen = sizeof(output)) {

	new index = FindSkinIndex(skinid);

	if (index == SKIN_INVALID)
		return false;

	output[0] = '\0';

	switch(GetSkinRace(skinid)) {

		case SKIN_RACE_WHITE:
			strcat(output, "caucasian", outlen);

		case SKIN_RACE_BLACK:
			strcat(output, "black", outlen);

		case SKIN_RACE_ASIAN:
			strcat(output, "asian", outlen);

		case SKIN_RACE_LATIN:
			strcat(output, "latino", outlen);
	}
	
	return true;
}

stock GetSkinGang(skinid) {

	new index = FindSkinIndex(skinid);

	if (index == SKIN_INVALID)
		return SKIN_INVALID;

	return ((skinInfoList[index][e_SKIN_FLAGS] & SKIN_FLAG_GANG));
}

stock bool: GetSkinGangName(skinid, output[], outlen = sizeof(output)) {

	new index = FindSkinIndex(skinid);

	if (index == SKIN_INVALID)
		return false;

	strunpack(output, s_GangNames[GetSkinGang(skinid) >> 3], outlen);

	return true;
}

stock GetSkinService(skinid) {

	new index = FindSkinIndex(skinid);

	if (index == SKIN_INVALID)
		return SKIN_INVALID;

	return ((skinInfoList[index][e_SKIN_FLAGS] & SKIN_FLAG_SERVICE));
}

stock bool: GetSkinServiceName(skinid, output[], outlen = sizeof(output)) {

	new index = FindSkinIndex(skinid);

	if (index == SKIN_INVALID)
		return false;

	strunpack(output, s_ServiceNames[GetSkinService(skinid) >> 7], outlen);

	return true;
}

stock GetSkinType(skinid) {

	new index = FindSkinIndex(skinid);

	if (index == SKIN_INVALID)
		return SKIN_INVALID;

	new type = skinInfoList[index][e_SKIN_FLAGS] & SKIN_FLAG_TYPE;

	if (type & SKIN_SERVICE_LAW)
		type = SKIN_SERVICE_LAW;
	else if (type & SKIN_SERVICE_MEDIC)
		type = SKIN_SERVICE_MEDIC;
	else if (type & SKIN_SERVICE_FIRE)
		type = SKIN_SERVICE_FIRE;
	else if (type & SKIN_FLAG_GANG)
		type = SKIN_FLAG_GANG;

	return type;
}

stock GetSkinAnimGroup(skinid) {

	new index = FindSkinIndex(skinid);

	if (index == SKIN_INVALID)
		return SKIN_INVALID;

	return skinInfoList[index][e_SKIN_ANIMGRP];
}

stock bool: GetSkinAnimGroupName(skinid, output[], outlen = sizeof(output)) {

	new index = FindSkinIndex(skinid);

	if (index == SKIN_INVALID)
		return false;
	
	strunpack(output, s_AnimGroupNames[skinInfoList[index][e_SKIN_ANIMGRP]], outlen);
	
	return true;
}

stock GetSkinGroup(skinid) {
	
	new index = FindSkinIndex(skinid);

	if (index == SKIN_INVALID)
		return SKIN_INVALID;
	
	return skinInfoList[index][e_SKIN_PEDGRP];
}

stock bool: GetSkinGroupName(skinid, output[], outlen = sizeof(output)) {

	new index = FindSkinIndex(skinid);

	if (index == SKIN_INVALID)
		return false;
	
	strunpack(output, pedGroups[skinInfoList[index][e_SKIN_PEDGRP]][e_GRP_NAME], outlen);
	
	return true;
}

stock GetSkinFear(skinid) {
	new index = FindSkinIndex(skinid);

	if (index == SKIN_INVALID)
		return SKIN_INVALID;

	return pedGroups[skinInfoList[index][e_SKIN_PEDGRP]][e_FEAR];
}

stock GetSkinTemper(skinid) {
	new index = FindSkinIndex(skinid);

	if (index == SKIN_INVALID)
		return SKIN_INVALID;

	return pedGroups[skinInfoList[index][e_SKIN_PEDGRP]][e_TEMPER];
}

stock GetSkinLawfullness(skinid) {
	new index = FindSkinIndex(skinid);

	if (index == SKIN_INVALID)
		return SKIN_INVALID;

	return pedGroups[skinInfoList[index][e_SKIN_PEDGRP]][e_LAWFUL];
}

stock GetSkinSexAppeal(skinid) = GetSkinAppeal;

stock GetSkinAppeal(skinid) {

	new index = FindSkinIndex(skinid);

	if (index == SKIN_INVALID)
		return SKIN_INVALID;

	return pedGroups[skinInfoList[index][e_SKIN_PEDGRP]][e_APPEAL];
}

stock GetSkinFOF(skinid) {

	new index = FindSkinIndex(skinid);

	if (index == SKIN_INVALID)
		return SKIN_INVALID;

	return pedGroups[skinInfoList[index][e_SKIN_PEDGRP]][e_FOF];
}

stock Float: GetSkinStrength(skinid) {

	new index = FindSkinIndex(skinid);

	if (index == SKIN_INVALID)
		return SKIN_INVALID_FLOAT;

	return pedGroups[skinInfoList[index][e_SKIN_PEDGRP]][e_STRENGTH];
}

stock Float: GetSkinDefence(skinid) {

	new index = FindSkinIndex(skinid);

	if (index == SKIN_INVALID)
		return SKIN_INVALID_FLOAT;

	return pedGroups[skinInfoList[index][e_SKIN_PEDGRP]][e_DEFENCE];
}

#undef SKIN_FLAG_GENDER
#undef SKIN_FLAG_RACE
#undef SKIN_FLAG_GANG
#undef SKIN_FLAG_SERVICE
#undef SKIN_FLAG_TYPE