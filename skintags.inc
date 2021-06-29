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
	{311, !"dsherna", !"Desert Sheriff (Without hat)"                       , SKIN_GROUP_COP         , SKIN_ANIM_SWAT         , SKIN_GENDER_MALE   | SKIN_RACE_WHITE},

	// Vice City Stories

	{26000, !"VCS_ALBERTO",  !"Alberto Robina"                               , SKIN_GROUP_MISSION      , SKIN_ANIM_OLD_MAN      , SKIN_GENDER_MALE   | SKIN_RACE_LATIN},
	{26001, !"VCS_ARMANDO",  !"Armando Mendez"                               , SKIN_GROUP_MISSION      , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_LATIN},
	{26002, !"VCS_ARMY",     !"VCS Army"                                     , SKIN_GROUP_COP          , SKIN_ANIM_SWAT         , SKIN_GENDER_MALE   | SKIN_RACE_WHITE | SKIN_SERVICE_ARMY},
	{26003, !"VCS_BCOP",     !"VCS Cop"                                      , SKIN_GROUP_COP          , SKIN_ANIM_SWAT         , SKIN_GENDER_MALE   | SKIN_RACE_WHITE | SKIN_SERVICE_POLICE},
	{26004, !"VCS_BFOBE",    !"VCS Old Fat Woman"                            , SKIN_GROUP_TOURIST      , SKIN_ANIM_OLD_WOMAN    , SKIN_GENDER_FEMALE | SKIN_RACE_BLACK},
	{26005, !"VCS_BFORI",    !"VCS Old Black Woman"                          , SKIN_GROUP_OLD_GIRL     , SKIN_ANIM_WOMAN        , SKIN_GENDER_FEMALE | SKIN_RACE_BLACK},
	{26006, !"VCS_BFOST",    !"VCS Old Black Woman"                          , SKIN_GROUP_OLD_GIRL     , SKIN_ANIM_OLD_WOMAN    , SKIN_GENDER_FEMALE | SKIN_RACE_BLACK},
	{26007, !"VCS_BFOTR",    !"VCS Old Black Woman Shopper"                  , SKIN_GROUP_OLD_SHOPPER  , SKIN_ANIM_OLD_WOMAN    , SKIN_GENDER_FEMALE | SKIN_RACE_BLACK},
	{26008, !"VCS_BFYBE",    !"VCS Black Young Woman"                        , SKIN_GROUP_BEACH_GIRL   , SKIN_ANIM_WOMAN        , SKIN_GENDER_FEMALE | SKIN_RACE_BLACK | SKIN_TYPE_BEACH},
	{26009, !"VCS_BFYPR",    !"VCS Black Prostitute"                         , SKIN_GROUP_PROSTITUTE   , SKIN_ANIM_PROSTITUTE   , SKIN_GENDER_FEMALE | SKIN_RACE_BLACK | SKIN_TYPE_WHORE},
	{26010, !"VCS_BFYRI",    !"VCS Black Rich Woman"                         , SKIN_GROUP_STREET_GIRL  , SKIN_ANIM_BUSY_WOMAN   , SKIN_GENDER_FEMALE | SKIN_RACE_BLACK},
	{26011, !"VCS_BFYST",    !"VCS Black Street Woman"                       , SKIN_GROUP_SENSIBLE_GIRL, SKIN_ANIM_SEXY_WOMAN   , SKIN_GENDER_FEMALE | SKIN_RACE_BLACK},
	{26012, !"VCS_BMOBE",    !"VCS Old Black Male Beach"                     , SKIN_GROUP_TOUGH_GUY    , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_BLACK},
	{26013, !"VCS_BMODK",    !"VCS Old Black Male Docks Worker"              , SKIN_GROUP_SENSIBLE_GUY , SKIN_ANIM_GANG         , SKIN_GENDER_MALE   | SKIN_RACE_BLACK},
	{26014, !"VCS_BMOST",    !"VCS Old Black Male Sreet"                     , SKIN_GROUP_PSYCHO       , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_BLACK},
	{26015, !"VCS_BMOTR",    !"VCS Old Black Male Tramp Homeless"            , SKIN_GROUP_TRAMP_MALE   , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_BLACK | SKIN_TYPE_HOMELESS},
	{26016, !"VCS_BMYBB",    !"VCS Black Male Young Busker"                  , SKIN_GROUP_BUSKER       , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_BLACK},
	{26017, !"VCS_BMYBE",    !"VCS Black Male Young Beach Busker"            , SKIN_GROUP_BEACH_GUY    , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_BLACK},
	{26018, !"VCS_BMYBU",    !"VCS Black Male Young BU"                      , SKIN_GROUP_SUIT_GUY     , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_BLACK},
	{26019, !"VCS_BMYCR",    !"VCS Black Male Young Criminal"                , SKIN_GROUP_CRIMINAL     , SKIN_ANIM_GANG         , SKIN_GENDER_MALE   | SKIN_RACE_BLACK},
	{26020, !"VCS_BMYPI",    !"VCS Black Male Young P"                       , SKIN_GROUP_STREET_GUY   , SKIN_ANIM_GANG         , SKIN_GENDER_MALE   | SKIN_RACE_BLACK},
	{26021, !"VCS_BMYRI",    !"VCS Black Male Young Rich"                    , SKIN_GROUP_COWARD       , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_BLACK},
	{26022, !"VCS_BMYST",    !"VCS Black Male Young Street"                  , SKIN_GROUP_STREET_GUY   , SKIN_ANIM_GANG         , SKIN_GENDER_MALE   | SKIN_RACE_BLACK},
	{26023, !"VCS_BURGER",   !"VCS King Knuts"                               , SKIN_GROUP_SENSIBLE_GUY , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_WHITE}, 
	{26024, !"VCS_COKHED",   !"Spitz (Cokehead)"                             , SKIN_GROUP_MISSION      , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_WHITE},
	{26025, !"VCS_COP",      !"VCS Cop"                                      , SKIN_GROUP_COP          , SKIN_ANIM_SWAT         , SKIN_GENDER_MALE   | SKIN_RACE_WHITE | SKIN_SERVICE_POLICE},
	{26026, !"VCS_CS_DASS1", !"VCS Ricardo Diaz's Assistant (1)"             , SKIN_GROUP_MISSION      , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_LATIN},
	{26027, !"VCS_CS_DASS2", !"VCS Ricardo Diaz's Assistant (2)"             , SKIN_GROUP_MISSION      , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_LATIN},
	{26028, !"VCS_CS_DIAZ",  !"VCS Ricardo Diaz"                             , SKIN_GROUP_MISSION      , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_LATIN},
	{26029, !"VCS_CS_FORBES",!"VCS Bryan Forbes"                             , SKIN_GROUP_MISSION      , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_WHITE},
	{26030, !"VCS_CS_JANET", !"VCS Janet Vance"                              , SKIN_GROUP_MISSION      , SKIN_ANIM_WOMAN        , SKIN_GENDER_FEMALE | SKIN_RACE_WHITE},
	{26031, !"VCS_CS_LOUISE3", !"Louise Cassidy-Williams"                    , SKIN_GROUP_MISSION      , SKIN_ANIM_WOMAN        , SKIN_GENDER_FEMALE | SKIN_RACE_WHITE},
	{26032, !"VCS_CS_MAN1",  !"VCS_CS_MAN1"                                  , SKIN_GROUP_MISSION      , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_WHITE},
	{26033, !"VCS_CS_MARYJ", !"Mary-Jo Cassidy"                              , SKIN_GROUP_MISSION      , SKIN_ANIM_WOMAN        , SKIN_GENDER_FEMALE | SKIN_RACE_WHITE},
	{26034, !"VCS_CS_PED1",  !"Cutscene Ped"                                 , SKIN_GROUP_MISSION      , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_BLACK},
	{26035, !"VCS_CS_PHCOLLINS2", !"Phil Collins"                            , SKIN_GROUP_MISSION      , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_WHITE},
	{26036, !"VCS_CS_RENOP", !"Reni Wassulmaier"                             , SKIN_GROUP_MISSION      , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_WHITE},
	{26037, !"VCS_CS_TROY",  !"Troy"                                         , SKIN_GROUP_MISSION      , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_WHITE},
	{26038, !"VCS_CWMYHB2",  !"Jerry Martinez"                               , SKIN_GROUP_MISSION      , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_WHITE},
	{26039, !"VCS_DEA1",     !"VCS Drug Enforcement Agency (1)"              , SKIN_GROUP_COP          , SKIN_ANIM_SWAT         , SKIN_GENDER_MALE   | SKIN_RACE_WHITE},
	{26040, !"VCS_DEA2",     !"VCS Drug Enforcement Agency (2)"              , SKIN_GROUP_COP          , SKIN_ANIM_SWAT         , SKIN_GENDER_MALE   | SKIN_RACE_WHITE},
	{26041, !"VCS_DIAZ",     !"VCS Ricardo Diaz"                             , SKIN_GROUP_SUIT_GUY     , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_WHITE},
	{26042, !"VCS_DIEGO",    !"VCS Diego Mendez"                             , SKIN_GROUP_SUIT_GUY     , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_WHITE},
	{26043, !"VCS_FBI",      !"VCS FBI"                                      , SKIN_GROUP_COP          , SKIN_ANIM_SWAT         , SKIN_GENDER_MALE   | SKIN_RACE_WHITE | SKIN_SERVICE_FBI},
	{26044, !"VCS_FILMCRW",  !"VCS Filmcrew"                                 , SKIN_GROUP_GANG         , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_WHITE},
	{26045, !"VCS_FIREMEN",  !"VCS Firefighter"                              , SKIN_GROUP_FIREMAN      , SKIN_ANIM_SWAT         , SKIN_GENDER_MALE   | SKIN_RACE_WHITE | SKIN_SERVICE_FIRE},

	{26046, !"VCS_GANG1A",   !"VCS GANG1A"                                   , SKIN_GROUP_GANG         , SKIN_ANIM_GANG         , 110f | 1 | man | 0},
	{26047, !"VCS_GANG1B",   !"VCS GANG1B"                                   , SKIN_GROUP_GANG         , SKIN_ANIM_GANG         , 110f | 1 | man | 0},
	{26048, !"VCS_GANG1C",   !"VCS GANG1C"                                   , SKIN_GROUP_GANG         , SKIN_ANIM_GANG         , 110f | 1 | man | 0},
	{26049, !"VCS_GANG1D",   !"VCS GANG1D"                                   , SKIN_GROUP_GANG         , SKIN_ANIM_GANG         , 110f | 1 | man | 0},
	{26050, !"VCS_GANG2A",   !"VCS GANG2A"                                   , SKIN_GROUP_GANG         , SKIN_ANIM_GANG         , 110f | 1 | man | 0},
	{26051, !"VCS_GANG2B",   !"VCS GANG2B"                                   , SKIN_GROUP_GANG         , SKIN_ANIM_GANG         , 110f | 1 | man | 0},
	{26052, !"VCS_GANG3A",   !"VCS GANG3A"                                   , SKIN_GROUP_GANG         , SKIN_ANIM_GANG         , 110f | 1 | man | 0},
	{26053, !"VCS_GANG3B",   !"VCS GANG3B"                                   , SKIN_GROUP_GANG         , SKIN_ANIM_GANG         , 110f | 1 | man | 0},
	{26054, !"VCS_GANG4A",   !"VCS GANG4A"                                   , SKIN_GROUP_COP          , SKIN_ANIM_SWAT         , SKIN_GENDER_MALE   | SKIN_RACE_WHITE | SKIN_SERVICE_FBI},
	{26055, !"VCS_GANG4B",   !"VCS GANG4B"                                   , SKIN_GROUP_COP          , SKIN_ANIM_SWAT         , SKIN_GENDER_MALE   | SKIN_RACE_WHITE | SKIN_SERVICE_FBI},
	{26056, !"VCS_GANG5A",   !"VCS GANG5A"                                   , SKIN_GROUP_COP          , SKIN_ANIM_SWAT         , SKIN_GENDER_MALE   | SKIN_RACE_WHITE | SKIN_SERVICE_FBI},
	{26057, !"VCS_GANG5B",   !"VCS GANG5B"                                   , SKIN_GROUP_COP          , SKIN_ANIM_SWAT         , SKIN_GENDER_MALE   | SKIN_RACE_WHITE | SKIN_SERVICE_FBI},
	{26058, !"VCS_GANG6A",   !"VCS GANG6A"                                   , SKIN_GROUP_GANG         , SKIN_ANIM_GANG         , 110F | 1 | man | 0},
	{26059, !"VCS_GANG6B",   !"VCS GANG6B"                                   , SKIN_GROUP_GANG         , SKIN_ANIM_GANG         , 110F | 1 | man | 0},
	{26060, !"VCS_GANG7A",   !"VCS GANG7A"                                   , SKIN_GROUP_GANG         , SKIN_ANIM_GANG         , 110F | 1 | man | 0},
	{26061, !"VCS_GANG7B",   !"VCS_GANG7B"                                   , SKIN_GROUP_GANG         , SKIN_ANIM_GANG         , 110F | 1 | man | 0},
	{26062, !"VCS_GANG8A",   !"VCS_GANG8A"                                   , SKIN_GROUP_SUIT_GUY     , SKIN_ANIM_GANG         , SKIN_GENDER_MALE | SKIN_RACE_WHITE},
	{26063, !"VCS_GANG8B",   !"VCS_GANG8B"                                   , SKIN_GROUP_SUIT_GUY     , SKIN_ANIM_GANG         , SKIN_GENDER_MALE | SKIN_RACE_WHITE},
	{26064, !"VCS_LOW_EMPA", !"VCS_LOW_EMPA"                                 , SKIN_GROUP_GANG         , SKIN_ANIM_GANG         , 110F | 1 | man | 3},
	{26065, !"VCS_LOW_EMPB", !"VCS_LOW_EMPB"                                 , SKIN_GROUP_GANG         , SKIN_ANIM_GANG         , 110F | 1 | man | 3},
	{26066, !"VCS_GON_GOONA", !"VCS_GON_GOONA"                               , SKIN_GROUP_GANG         , SKIN_ANIM_GANG         , 110F | 1 | man | 0},
	{26067, !"VCS_GON_GOONB", !"VCS_GON_GOONB"                               , SKIN_GROUP_GANG         , SKIN_ANIM_GANG         , 110F | 1 | man | 0},
	{26068, !"VCS_GTR1",     !"VCS_GTR1", STAT_SUIT_GUY, man, 28f | 0 | null | 5},
	{26069, !"VCS_GTR2",     !"VCS_GTR2", STAT_SUIT_GUY, man, 28f | 0 | null | 5},
	{26070, !"VCS_HFOBE",    !"VCS_HFOBE", STAT_OLD_GIRL, oldfatwoman, 28f | 0 | null | 2},
	{26071, !"VCS_HFORI", !"VCS_HFORI", STAT_COWARD, woman, 28d | 0 | man | 2},
	{26072, !"VCS_HFOST", !"VCS_HFOST", STAT_TOUGH_GIRL, woman, 417 | 0 | null | 2},
	{26073, !"VCS_HFOTR", !"VCS_HFOTR", STAT_TRAMP_FEMALE, woman, 0 |0 | null | 9 | 9},
	{26074, !"VCS_HFYBE", !"VCS_HFYBE", STAT_GEEK_GIRL, SKIN_ANIM_SEXY_WOMAN, 28f | 0 | beach | 6},
	{26075, !"VCS_HFYBU", !"VCS_HFYBU", STAT_SUIT_GIRL, busywoman, 8d | 0 | null | 2},
	{26076, !"VCS_HFYCG", !"VCS_HFYCG", STAT_STREET_GIRL, woman, 1000 | 1 | man | 2},
	{26077, !"VCS_HFYMD", !"VCS_HFYMD", STAT_SENSIBLE_GIRL, SKIN_ANIM_SEXY_WOMAN, 100c | 1 | null | 4},
	{26078, !"VCS_HFYPR", !"VCS_HFYPR", STAT_PROSTITUTE, pro, 1000 | 1 | man | 1},
	{26079, !"VCS_HFYRI", !"VCS_HFYRI", STAT_COWARD, busywoman, 28d | 1 | null | 7},
	{26080, !"VCS_HFYST", !"VCS_HFYST", STAT_STREET_GIRL, SKIN_ANIM_SEXY_WOMAN, 13 | 1 | man | 6},
	{26081, !"VCS_HIGH_EMPA", !"VCS_HIGH_EMPA", STAT_GANG6, gang1, 110f | 1 | man | 3}, 
	{26082, !"VCS_HIGH_EMPB", !"VCS_HIGH_EMPB", STAT_GANG6, gang2, 110f | 1 | man | 3},
	{26083, !"VCS_HITMAN", !"VCS_HITMAN", SKIN_GROUP_COP         , SKIN_ANIM_SWAT         , SKIN_GENDER_MALE   | SKIN_RACE_WHITE | SKIN_SERVICE_FBI},
	{26084, !"VCS_HMOBE", !"VCS_HMOBE", STAT_TOURIST, man, 437 | 0 | null | 7},
	{26085, !"VCS_HMOCA", !"VCS_HMOCA", STAT_TAXIDRIVER, man, 40 | 0 | null | 6 | 5},
	{26086, !"VCS_HMORI", !"VCS_HMORI", STAT_SENSIBLE_GUY, man, 20d | 0 | null | 5},
	{26087, !"VCS_HMOST", !"VCS_HMOST", STAT_OLD_GUY, man, 437 | 0 | null | 5},
	{26088, !"VCS_HMOTR", !"VCS_HMOTR",  SKIN_GROUP_TRAMP_MALE  , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_WHITE | SKIN_TYPE_HOMELESS},
	{26089, !"VCS_HMYAP", !"VCS_HMYAP", STAT_SENSIBLE_GUY, gang1, 1bf | 0 | null | 4},
	{26090, !"VCS_HMYBE", !"VCS_HMYBE", STAT_TOUGH_GUY, gang2, 38d | 0 | sunbathe | 6},
	{26091, !"VCS_HMYRI", !"VCS_HMYRI", STAT_SUIT_GUY, man, 30d | 0 | null | 6},
	{26092, !"VCS_HMYST", !"VCS_HMYST", STAT_GEEK_GUY, gang1, 5ab | 0 | man | 1},
	{26125, !"VCS_JERRY", !"VCS_JERRY", STAT_GANG2, man, 120c | 0 | man | 7},
	{26126, !"VCS_JFOTO", !"VCS_JFOTO", STAT_TOURIST, woman, 0 | 1 | null | 6 | 6},
	{26127, !"VCS_JMOTO", !"VCS_JMOTO", STAT_TOURIST, man, 30f | 0 | null | 1},
	{26128, !"VCS_MALE01", !"VCS_MALE01", STAT_SENSIBLE_GUY, man, 1bf | 0 | man | 1},
	{26129, !"VCS_MEDIC", !"VCS_MEDIC",  STAT_MEDIC, swat, 0 | 0 | medic | 9 | 9},
	{26130, !"VCS_MENDEZ1", !"VCS_MENDEZ1", STAT_GANG2, gang2, 110f | 1 | man | 0}, 
	{26131, !"VCS_MENDEZ2", !"VCS_MENDEZ2", STAT_GANG2, gang1, 110f | 1 | man | 0},
	{26132, !"VCS_MENGGA", !"VCS_MENGGA", STAT_GANG2, gang2, 110F | 1 | man | 0}, 
	{26133, !"VCS_MENGGB", !"VCS_MENGGB", STAT_GANG2, gang1, 110F | 1 | man | 0},
	{26134, !"VCS_PHIL", !"VCS_PHIL", STAT_GANG2, man, 120C | 0 | man | 7},
	{26135, !"VCS_PHILC1", !"VCS_PHILC1", STAT_GANG2, man, 120C | 0 | man | 7},
	{26136, !"VCS_ROBBER", !"VCS_ROBBER", SKIN_GROUP_COP         , SKIN_ANIM_SWAT         , SKIN_GENDER_MALE   | SKIN_RACE_WHITE | SKIN_SERVICE_FBI},
	{26137, !"VCS_SARGE", !"VCS_SARGE", STAT_GANG2, man, 120C | 0 | man | 7},
	{26138, !"VCS_SHOPKPR", !"VCS_SHOPKPR", STAT_TOUGH_GUY, man, 1000 | 1 | man | 1},
	{26139, !"VCS_SWAT", !"VCS_SWAT", SKIN_GROUP_COP         , SKIN_ANIM_SWAT         , SKIN_GENDER_MALE   | SKIN_RACE_WHITE | SKIN_SERVICE_FBI},
	{26140, !"VCS_VICE1", !"VCS_VICE1", SKIN_GROUP_COP         , SKIN_ANIM_SWAT         , SKIN_GENDER_MALE   | SKIN_RACE_WHITE | SKIN_SERVICE_FBI},
	{26141, !"VCS_VICE2", !"VCS_VICE2", SKIN_GROUP_COP         , SKIN_ANIM_SWAT         , SKIN_GENDER_MALE   | SKIN_RACE_WHITE | SKIN_SERVICE_FBI}, 
	{26142, !"VCS_WFOBE", !"VCS_WFOBE", STAT_OLD_GIRL, oldfatwoman, 20f | 0 | null | 2},
	{26143, !"VCS_WFOGO", !"VCS_WFOGO", STAT_OLD_GIRL, oldwoman, 28d | 1 | null | 2},
	{26144, !"VCS_WFORI", !"VCS_WFORI", STAT_COWARD, woman, 28d | 0 | null | 10},
	{26145, !"VCS_WFOSH", !"VCS_WFOSH", STAT_BEACH_GIRL, woman, 0 | 0 | man | 9 | 9},
	{26146, !"VCS_WFOST", !"VCS_WFOST", STAT_STREET_GIRL, oldwoman, 4b7 | 0 | null | 1},
	{26147, !"VCS_WFOTR", !"VCS_WFOTR", STAT_OLD_GIRL, oldwoman, 1003 | 0 | null | 1},
	{26148, !"VCS_WFYBE", !"VCS_WFYBE", STAT_COWARD, woman, 1000 | 0 | beach | 1},
	{26149, !"VCS_WFYBU", !"VCS_WFYBU", STAT_SUIT_GIRL, busywoman, D | 1 | man | 9 | 2},
	{26150, !"VCS_WFYJG", !"VCS_WFYJG", STAT_COWARD, jogwoman, 1000 | 0 | beach | 9},
	{26151, !"VCS_WFYLG", !"VCS_WFYLG", STAT_BEACH_GIRL, woman, 1000 | 0 | beach | 1},
	{26152, !"VCS_WFYPR", !"VCS_WFYPR", STAT_PROSTITUTE, pro, 1000 | 1 | man | 1},
	{26153, !"VCS_WFYRI", !"VCS_WFYRI", STAT_COWARD, SKIN_ANIM_SEXY_WOMAN, 28C | 1 | null | 4},
	{26154, !"VCS_WFYSH", !"VCS_WFYSH", STAT_BEACH_GIRL, woman, 0 | 0 | 9 | 9}
	{26155, !"VCS_WFYSK", !"VCS_WFYSK", STAT_SKATER, skate, 0 | 0 | 9 | 9}
	{26156, !"VCS_WFYST", !"VCS_WFYST", STAT_STREET_GIRL, SKIN_ANIM_SEXY_WOMAN, 9F | 1 | null | 4},
	{26157, !"VCS_WMOBE", !"VCS_WMOBE", STAT_BEACH_GUY, man, 67f | 0 | null | 1},
	{26158, !"VCS_WMOBU", !"VCS_WMOBU", STAT_SUIT_GUY, man, 20D | 0 | man | 1},
	{26159, !"VCS_WMOCA", !"VCS_WMOCA", STAT_TAXIDRIVER, man, 40 | 0 | man | 1},
	{26160, !"VCS_WMOGO", !"VCS_WMOGO", STAT_SUIT_GUY, oldman, 28F | 1 | null | 3},
	{26161, !"VCS_WMORI", !"VCS_WMORI", STAT_SUIT_GUY, man, 20D | 0 | man | 10},
	{26162, !"VCS_WMOST", !"VCS_WMOST", STAT_OLD_GUY, man, 4F7 | 0 | man | 8},
	{26163, !"VCS_WMOTR", !"VCS_WMOTR", SKIN_GROUP_TRAMP_MALE  , SKIN_ANIM_MAN          , SKIN_GENDER_MALE   | SKIN_RACE_WHITE | SKIN_TYPE_HOMELESS},
	{26164, !"VCS_WMYBE", !"VCS_WMYBE", STAT_SENSIBLE_GUY, man, 1000 | 1 | man | 1}, 
	{26165, !"VCS_WMYBU", !"VCS_WMYBU", STAT_COWARD, man, 20C | 1 | man | 6},
	{26166, !"VCS_WMYCR", !"VCS_WMYCR", STAT_CRIMINAL, man, 7FE | 1 | man | 2},
	{26167, !"VCS_WMYCW", !"VCS_WMYCW", STAT_SUIT_GUY, man, 4B3 | 1 | man | 1},
	{26168, !"VCS_WMYJG", !"VCS_WMYJG", STAT_SENSIBLE_GUY, jogger, 1000 | 0 | null | 9},
	{26169, !"VCS_WMYLG", !"VCS_WMYLG", STAT_GEEK_GUY, jogger, 1000 | 0 | null | 9}, 
	{26170, !"VCS_WMYPI", !"VCS_WMYPI", STAT_CRIMINAL, man, 110F | 1 | man | 0},
	{26171, !"VCS_WMYRI", !"VCS_WMYRI", STAT_SHOPPER, man, 30D | 1 | null | 6},
	{26172, !"VCS_WMYSK", !"VCS_WMYSK", STAT_SKATER, skate, 0 | 0 | skate | 9 | 9},
	{26173, !"VCS_WMYST", !"VCS_WMYST", STAT_STREET_GUY, man, 53F | 1 | null | 4},
	{26174, !"VCS_ZOMA", !"VCS_ZOMA", STAT_GANG2, man, 120C | 0 | man | 7}

	// Liberty City Stories

	// {26176, !"LCS_BIKER01", !"LCS_BIKER01", GANG10, SKIN_GROUP_GANG10, gang1, 0, 1, man, 5, 2}, 
	// {26177, !"LCS_BIKER02", !"LCS_BIKER02", GANG10, SKIN_GROUP_GANG10, gang2, 0, 1, man, 5, 2},
	// {26178, !"LCS_BIKER03", !"LCS_BIKER03", GANG10, SKIN_GROUP_GANG10, gang1, 0, 1, man, 5, 2}, 
	// {26179, !"LCS_BIKER04", !"LCS_BIKER04", GANG10, SKIN_GROUP_GANG10, gang2, 0, 1, man, 5, 2},
	// {26180, !"LCS_CAS_WOM", !"LCS_CAS_WOM", SKIN_GROUP_SUIT_GIRL, woman, 130C | 0 | null | 3}, 
	// {26181, !"LCS_COLUMBIAN01", !"LCS_COLUMBIAN01", SKIN_GROUP_GANG3, gang2, 110F | 1 | man | 3},
	// {26182, !"LCS_COLUMBIAN02", !"LCS_COLUMBIAN02", SKIN_GROUP_GANG3, gang1, 110F | 1 | man | 3},
	// {26183, !"LCS_CONST1", !"LCS_CONST1", CIVMALE, SKIN_GROUP_TOUGH_GUY, man, 0, 1, null, 5, 2},
	// {26184, !"LCS_CONST2", !"LCS_CONST2", CIVMALE, SKIN_GROUP_TOUGH_GUY, man, 0, 1, null, 5, 2},
	// {26185, !"LCS_CRIMINAL01", !"LCS_CRIMINAL01", SKIN_GROUP_CRIMINAL, gang1, 110F | 1 | man | 5},  
	// {26186, !"LCS_CRIMINAL02", !"LCS_CRIMINAL02", SKIN_GROUP_CRIMINAL, gang1, 110F | 1 | man | 5},  
	// {26187, !"LCS_CSCHERYL", !"LCS_CSCHERYL", SKIN_GROUP_SUIT_GIRL, woman, 130C | 0 | null | 3}, 
	// {26188, !"LCS_CSGIMP", !"LCS_CSGIMP", CIVMALE, SKIN_GROUP_TOUGH_GUY, man, 0, 1, null, 5, 2},
	// {26189, !"LCS_CSGUARD", !"LCS_CSGUARD", SKIN_GROUP_OLD_GUY, man, 1003 | 0 | null | 8},
	// {26190, !"LCS_CSHOBO", !"LCS_CSHOBO", CIVMALE, SKIN_GROUP_TOUGH_GUY, man, 0, 1, null, 5, 2},
	// {26191, !"LCS_CSKAS", !"LCS_CSKAS", SKIN_GROUP_SUIT_GIRL, woman, 130C | 0 | null | 3}, 
	// {26192, !"LCS_CSLOVE", !"LCS_CSLOVE", CIVMALE, SKIN_GROUP_TOUGH_GUY, man, 0, 1, null, 5, 2},
	// {26193, !"LCS_CSMAC", !"LCS_CSMAC", CIVMALE, SKIN_GROUP_TOUGH_GUY, man, 0, 1, null, 5, 2},
	// {26194, !"LCS_CSMAR", !"LCS_CSMAR", SKIN_GROUP_SUIT_GIRL, woman, 130C | 0 | null | 3}, 
	// {26195, !"LCS_CSMARB", !"LCS_CSMARB", SKIN_GROUP_SUIT_GIRL, woman, 130C | 0 | null | 3}, 
	// {26196, !"LCS_CSRAY", !"LCS_CSRAY", CIVMALE, SKIN_GROUP_TOUGH_GUY, man, 0, 1, null, 5, 2},
	// {26197, !"LCS_CSSAL", !"LCS_CSSAL", CIVMALE, SKIN_GROUP_TOUGH_GUY, man, 0, 1, null, 5, 2},
	// {26198, !"LCS_CSSALP", !"LCS_CSSALP", CIVMALE, SKIN_GROUP_TOUGH_GUY, man, 0, 1, null, 5, 2},
	// {26199, !"LCS_CSTOOL", !"LCS_CSTOOL", CIVMALE, SKIN_GROUP_TOUGH_GUY, man, 0, 1, null, 5, 2},
	// {26200, !"LCS_CSUNCLE", !"LCS_CSUNCLE", CIVMALE, SKIN_GROUP_TOUGH_GUY, man, 0, 1, null, 5, 2},
	// {26201, !"LCS_CSVINC", !"LCS_CSVINC", CIVMALE, SKIN_GROUP_TOUGH_GUY, man, 0, 1, null, 5, 2},
	// {26202, !"LCS_CT_MAN1", !"LCS_CT_MAN1", SKIN_GROUP_SENSIBLE_GUY, man, 110F | 1 | man | 4}, 
	// {26203, !"LCS_CT_MAN2", !"LCS_CT_MAN2", SKIN_GROUP_SENSIBLE_GUY, man, 110F | 1 | man | 4}, 
	// {26204, !"LCS_CT_WOM1", !"LCS_CT_WOM1", SKIN_GROUP_SENSIBLE_GUY, woman, 110F | 1 | null | 4}, 
	// {26205, !"LCS_CT_WOM2", !"LCS_CT_WOM2", SKIN_GROUP_SENSIBLE_GUY, woman, 110F | 1 | null | 4},
	// {26206, !"LCS_DELIASS", !"LCS_DELIASS", SKIN_GROUP_TOUGH_GUY, man, 120C | 0 | man | 7},
	// {26207, !"LCS_DIABLO01", !"LCS_DIABLO01", SKIN_GROUP_GANG8, gang1, 110F | 1 | man | 2}, 
	// {26208, !"LCS_DIABLO02", !"LCS_DIABLO02", SKIN_GROUP_GANG8, gang2, 110F | 1 | man | 2}, 
	// {26209, !"LCS_DOCKER1", !"LCS_DOCKER1", SKIN_GROUP_SUIT_GUY, man, 170F | 1 | man | 6}, 
	// {26210, !"LCS_DOCKER2", !"LCS_DOCKER2", SKIN_GROUP_SUIT_GUY, man, 170F | 1 | man | 6},  
	// {26211, !"LCS_DONOVAN", !"LCS_DONOVAN", CIVMALE, SKIN_GROUP_TOUGH_GUY, man, 0, 1, null, 5, 2},
	// {26212, !"LCS_FAN_MAN1", !"LCS_FAN_MAN1", SKIN_GROUP_COWARD, man, 170F | 0 | null | 2}, 
	// {26213, !"LCS_FAN_MAN2", !"LCS_FAN_MAN2", SKIN_GROUP_COWARD, man, 170F | 0 | null | 2}, 
	// {26214, !"LCS_FAN_WOM", !"LCS_FAN_WOM", SKIN_GROUP_COWARD, woman, 170F | 0 | null | 2}, 
	// {26215, !"LCS_FATFEMALE01", !"LCS_FATFEMALE01", CIVFEMALE, SKIN_GROUP_TOUGH_GUY, oldfatwoman, 0, 0, man, 9, 9},
	// {26216, !"LCS_FATFEMALE02", !"LCS_FATFEMALE02", CIVFEMALE, SKIN_GROUP_TOUGH_GUY, oldfatwoman, 0, 0, man, 9, 9},
	// {26217, !"LCS_FATMALE01", !"LCS_FATMALE01", CIVMALE, SKIN_GROUP_SENSIBLE_GUY, man, 0, 0, man, 1, 4},
	// {26218, !"LCS_FATMALE02", !"LCS_FATMALE02", CIVMALE, SKIN_GROUP_SENSIBLE_GUY, man, 0, 0, man, 1, 4},
	// {26219, !"LCS_FEMALE01", !"LCS_FEMALE01", CIVFEMALE, SKIN_GROUP_SENSIBLE_GUY, woman, 0, 0, null, 1, 4},
	// {26220, !"LCS_FEMALE02", !"LCS_FEMALE02", CIVFEMALE, SKIN_GROUP_SENSIBLE_GUY, woman, 0, 0, null, 1, 4},
	// {26221, !"LCS_FEMALE03", !"LCS_FEMALE03", CIVFEMALE, SKIN_GROUP_SENSIBLE_GUY, woman, 0, 0, null, 1, 4},
	// {26222, !"LCS_FIREMAN", !"LCS_FIREMAN", SKIN_GROUP_FIREMAN, swat, 1FFF | 0 | null | 9},
	// {26223, !"LCS_FORELLI1", !"LCS_FORELLI1", SKIN_GROUP_GANG4, gang2, 110F | 1 | man | 9},
	// {26224, !"LCS_FORELLI2", !"LCS_FORELLI2", SKIN_GROUP_GANG4, gang1, 110F | 1 | man | 9},
	// {26225, !"LCS_GRDANG1", !"LCS_GRDANG1", CIVMALE, SKIN_GROUP_TOUGH_GUY, man, 0, 1, null, 5, 2},
	// {26226, !"LCS_GRDANG2", !"LCS_GRDANG2", CIVMALE, SKIN_GROUP_TOUGH_GUY, man, 0, 1, null, 5, 2},
	// {26227, !"LCS_GUN_ASS", !"LCS_GUN_ASS", CIVMALE, SKIN_GROUP_TOUGH_GUY, man, 0, 1, null, 5, 2},
	// {26228, !"LCS_HOLEJOG", !"LCS_HOLEJOG", CIVMALE, SKIN_GROUP_TOUGH_GUY, man, 0, 1, null, 5, 2},
	// {26229, !"LCS_HOPPER", !"LCS_HOPPER", CIVFEMALE, SKIN_GROUP_TOUGH_GIRL, woman, 0, 1, null, 5, 2},
	// {26230, !"LCS_HOS_MAN", !"LCS_HOS_MAN", SKIN_GROUP_MEDIC, swat, 1FFF | 0 | medic | 9},
	// {26231, !"LCS_HOS_WOM", !"LCS_HOS_WOM", SKIN_GROUP_MEDIC, swat, 1FFF | 0 | medic | 9},
	// {26232, !"LCS_KAZUKI", !"LCS_KAZUKI", CIVMALE, SKIN_GROUP_TOUGH_GUY, man, 0, 1, null, 5, 2},
	// {26233, !"LCS_LEONE01", !"LCS_LEONE01", SKIN_GROUP_GANG1, gang2, 110F | 1 | man | 9},
	// {26234, !"LCS_LEONE02", !"LCS_LEONE02", SKIN_GROUP_GANG1, gang1, 110F | 1 | man | 9},
	// {26235, !"LCS_LI_MAN1", !"LCS_LI_MAN1", SKIN_GROUP_COWARD, man, 120C | 1 | null | 2},
	// {26236, !"LCS_LI_MAN2", !"LCS_LI_MAN2", SKIN_GROUP_COWARD, man, 120C | 1 | null | 2},
	// {26237, !"LCS_LI_WOM1", !"LCS_LI_WOM1", SKIN_GROUP_COWARD, sexywoman, 120C | 1 | null | 7},
	// {26238, !"LCS_LI_WOM2", !"LCS_LI_WOM2", SKIN_GROUP_COWARD, sexywoman, 120C | 1 | null | 7},
	// {26239, !"LCS_M_HOLE", !"LCS_M_HOLE", CIVMALE, SKIN_GROUP_TOUGH_GUY, man, 0, 1, null, 5, 2},
	// {26240, !"LCS_MALE01", !"LCS_MALE01", CIVMALE, SKIN_GROUP_SENSIBLE_GUY, man, 0, 0, man, 1, 4},
	// {26241, !"LCS_MALE02", !"LCS_MALE02", CIVMALE, SKIN_GROUP_SENSIBLE_GUY, man, 0, 0, man, 1, 4},
	// {26242, !"LCS_MALE03", !"LCS_MALE03", CIVMALE, SKIN_GROUP_SENSIBLE_GUY, man, 0, 0, man, 1, 4},
	// {26243, !"LCS_MASTOR", !"LCS_MASTOR", CIVMALE, SKIN_GROUP_TOUGH_GUY, man, 0, 1, null, 5, 2},
	// {26244, !"LCS_MICKEYH", !"LCS_MICKEYH", SKIN_GROUP_GANG9, man, 110F | 1 | null | 2},
	// {26245, !"LCS_MIGUEL", !"LCS_MIGUEL", SKIN_GROUP_TOUGH_GUY, man, 110F | 1 | man | 3},
	// {26246, !"LCS_MOD_MAN", !"LCS_MOD_MAN", SKIN_GROUP_SUIT_GUY, man, 120C | 1 | man | 7}, 
	// {26247, !"LCS_MOD_WOM", !"LCS_MOD_WOM", SKIN_GROUP_SUIT_GIRL, busywoman, 120C | 1 | man | 3},
	// {26248, !"LCS_NED_01", !"LCS_NED_01", CIVMALE, SKIN_GROUP_TOUGH_GUY, man, 0, 1, null, 5, 2},
	// {26249, !"LCS_P_MAN1", !"LCS_P_MAN1", CIVMALE, SKIN_GROUP_SENSIBLE_GUY, man, 0, 0, man, 1, 4},
	// {26250, !"LCS_P_MAN2", !"LCS_P_MAN2", CIVMALE, SKIN_GROUP_TOUGH_GUY, man, 0, 0, man, 1, 4},
	// {26251, !"LCS_P_WOM1", !"LCS_P_WOM1", CIVFEMALE,  SKIN_GROUP_STREET_GIRL, woman, 1983, 1, null, 0, 3}, 
	// {26252, !"LCS_P_WOM2", !"LCS_P_WOM2", SKIN_GROUP_COWARD, sexywoman, 120C | 1 | null | 7},
	// {26253, !"LCS_PAULIE", !"LCS_PAULIE", CIVMALE, SKIN_GROUP_TOUGH_GUY, man, 0, 1, null, 5, 2}, 
	// {26254, !"LCS_PHIL", !"LCS_PHIL", SKIN_GROUP_TOUGH_GUY, man, 1000 | 1 | man | 1},
	// {26255, !"LCS_PIMP", !"LCS_PIMP", SKIN_GROUP_STREET_GUY, man, 130C | 1 | null | 3}, 
	// {26256, !"LCS_PMAN2", !"LCS_PMAN2", CIVMALE, SKIN_GROUP_TOUGH_GUY, man, 0, 0, man, 1, 4},
	// {26257, !"LCS_PROSTITUTE", !"LCS_PROSTITUTE", SKIN_GROUP_PROSTITUTE, pro, 1000 | 1 | man | 1},
	// {26258, !"LCS_PROSTITUTE2", !"LCS_PROSTITUTE2", SKIN_GROUP_PROSTITUTE, pro, 1000 | 1 | man | 1},
	// {26259, !"LCS_SCUM_MAN", !"LCS_SCUM_MAN", SKIN_GROUP_TOUGH_GUY, man, 170F | 1 | man | 10},
	// {26260, !"LCS_SCUM_WOM", !"LCS_SCUM_WOM", SKIN_GROUP_TOUGH_GUY, woman, 170F | 1 | man | 10},
	// {26261, !"LCS_SHOPPER1", !"LCS_SHOPPER1", SKIN_GROUP_SHOPPER, woman, 120C | 0 | null | 4}, 
	// {26262, !"LCS_SHOPPER2", !"LCS_SHOPPER2", SKIN_GROUP_SHOPPER, oldfatwoman, 120C | 0 | null | 4}, 
	// {26263, !"LCS_SHOPPER3", !"LCS_SHOPPER3", SKIN_GROUP_SHOPPER, woman, 120C | 0 | null | 4},
	// {26264, !"LCS_SINDACCO01", !"LCS_SINDACCO01", SKIN_GROUP_GANG9, gang1, 110F | 1 | man | 9},
	// {26265, !"LCS_SINDACCO02", !"LCS_SINDACCO02", SKIN_GROUP_GANG9, gang2, 110F | 1 | man | 9},
	// {26266, !"LCS_SINDACCO03", !"LCS_SINDACCO03", SKIN_GROUP_GANG9, gang1, 110F | 1 | man | 9},
	// {26267, !"LCS_ST_MAN", !"LCS_ST_MAN", SKIN_GROUP_SUIT_GUY, man, 1000 | 1 | null | 1}, 
	// {26268, !"LCS_ST_WOM", !"LCS_ST_WOM", SKIN_GROUP_SUIT_GUY, woman, 1000 | 1 | null | 1}, 
	// {26269, !"LCS_STUD_MAN", !"LCS_STUD_MAN", GANG10, SKIN_GROUP_TOUGH_GUY, gang1, 0, 1, man, 5, 2},
	// {26270, !"LCS_STUD_WOM", !"LCS_STUD_WOM", GANG10, SKIN_GROUP_TOUGH_GIRL, woman, 0, 1, null, 5, 2},
	// {26271, !"LCS_TAXI_D", !"LCS_TAXI_D", SKIN_GROUP_TAXIDRIVER, man, 40 | 0 | null | 8},
	// {26272, !"LCS_THUG_01", !"LCS_THUG_01", CIVMALE, SKIN_GROUP_TOUGH_GUY, man, 0, 1, null, 5, 2},
	// {26273, !"LCS_THUG_02", !"LCS_THUG_02", CIVMALE, SKIN_GROUP_TOUGH_GUY, man, 0, 1, null, 5, 2},
	// {26274, !"LCS_WOM3", !"LCS_WOM3", CIVFEMALE, SKIN_GROUP_SENSIBLE_GUY, woman, 0, 0, null, 1, 4},
	// {26275, !"LCS_WORKER1", !"LCS_WORKER1", SKIN_GROUP_SUIT_GUY, man, 170F | 1 | man | 6},
	// {26276, !"LCS_WORKER2", !"LCS_WORKER2", SKIN_GROUP_SUIT_GUY, man, 170F | 1 | man | 6},
	// {26277, !"LCS_YAKUZA01", !"LCS_YAKUZA01", SKIN_GROUP_GANG2, gang2, 110F | 1 | man | 4},
	// {26278, !"LCS_YAKUZA02", !"LCS_YAKUZA02", SKIN_GROUP_GANG2, gang1, 110F | 1 | man | 9},

	// Vice City

	// Liberty City

	// Carcer City

	// Bullworth

	// Midway
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