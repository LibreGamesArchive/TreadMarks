// This file is part of Tread Marks
// 
// Tread Marks is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// Tread Marks is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// 
// You should have received a copy of the GNU General Public License
// along with Tread Marks.  If not, see <http://www.gnu.org/licenses/>.

#ifndef _TEXTLINE_H
#define _TEXTLINE_H

#define MAX_TEXTLINES 1024

class CText {
private:
	char *Buffer;
	int NumLines;
	char *Lines[MAX_TEXTLINES];
public:
	CText() {Buffer=NULL; NumLines=0; Free();}
	~CText() {Free();}
	bool Free();
	int Load(const char *file);
	char *Get(int id);

};

extern CText Text;
extern CText Names;
extern CText Weapons;
extern CText Insignia;
extern CText Language;
extern CText Paths;
extern CText SoundPaths;
extern CText ControlText;

extern bool Text_FreeText();
extern int Text_LoadLines(char *file);
extern char *Text_GetLine(int line);

enum {
	TEXT_MENU1,
	TEXT_MENU2,
	TEXT_MENU3,
	TEXT_MENU4,
	TEXT_MENU5,
	TEXT_MENU6,
	TEXT_MENU7,
	TEXT_MENU8,
	TEXT_MENU9,
	TEXT_MENU10,
	TEXT_HELP,
	TEXT_OKAY,
	TEXT_CANCEL,
	TEXT_INSERTHDR,
	TEXT_INSERT1,
	TEXT_INSERT2,
	TEXT_BACK,
	TEXT_YES,
	TEXT_NO,
	TEXT_APPLY,
	TEXT_ON,
	TEXT_OFF,
	TEXT_ENABLED,
	TEXT_DISABLED,
	TEXT_DONE,
	TEXT_DEMO,
	TEXT_FULL,

	TEXT_IGMHDR,
	TEXT_IGMRETURN,
	TEXT_IGMTANK,
	TEXT_IGMSERVER,
	TEXT_IGMGAME,
	TEXT_IGMSTOP,

	TEXT_OPTIONSHDR,
	TEXT_OPTIONS1,
	TEXT_OPTIONS2,
	TEXT_OPTIONS3,
	TEXT_OPTIONS4,
	TEXT_OPTIONS5,

	TEXT_GRAPHICSHDR,
	TEXT_GRAPHICSRES,
	TEXT_GRAPHICSBPPDESK,
	TEXT_GRAPHICSBPP,
	TEXT_GRAPHICSFULL,
	TEXT_GRAPHICSWINDOW,
	TEXT_GRAPHICSTEXRES,
	TEXT_GRAPHICSS3TC,
	TEXT_GRAPHICSTRILINEAR,
	TEXT_GRAPHICSFOG,
	TEXT_GRAPHICSDUST,
	TEXT_GRAPHICSFIRE,
	TEXT_GRAPHICSVENDOR,
	TEXT_GRAPHICSTEXELS,
	TEXT_GRAPHICSTRIS,
	TEXT_GRAPHICSMESHES,
	TEXT_GRAPHICSDETAIL,
	TEXT_GRAPHICSVIEWDIST,
	TEXT_GRAPHICSTREADMARKS,
	TEXT_HIGH,
	TEXT_LOW,

	TEXT_SOUNDHDR,
	TEXT_SOUNDMUSIC,
//	TEXT_SOUNDOUT,
	TEXT_SOUNDQUALITY,
//	TEXT_SOUNDA3D,
//	TEXT_SOUNDWAVEOUT,
//	TEXT_SOUNDDSOUND,
	TEXT_SOUNDMUSICVOLUME,
	TEXT_SOUNDSOUNDVOLUME,

	TEXT_INPUTHDR,
	TEXT_INPUTTANK,
	TEXT_INPUTCAMERA,
	TEXT_INPUTJOYSTICKSETTINGS,
	TEXT_INPUTMOUSESETTINGS,

	TEXT_JOYSTICKHDR,
	TEXT_JOYSTICKLIST,
	TEXT_NONE,
	TEXT_JOYSTICKBUTTONS,
	TEXT_JOYSTICKAXES,
	TEXT_JOYSTICKHAT,
	TEXT_JOYSTICKXAXIS,
	TEXT_JOYSTICKYAXIS,
	TEXT_JOYSTICKZAXIS,
	TEXT_JOYSTICKRAXIS,
	TEXT_JOYSTICKUAXIS,
	TEXT_JOYSTICKVAXIS,
	TEXT_JOYSTICKHATX,
	TEXT_JOYSTICKHATY,
	TEXT_JOYSTICKTANKLR,
	TEXT_JOYSTICKTANKFB,
	TEXT_JOYSTICKTURRETLR,
	TEXT_JOYSTICKCAMLR,
	TEXT_JOYSTICKCAMUD,
	TEXT_JOYSTICKDEADZONE,

	TEXT_MOUSEHDR,
	TEXT_MOUSEENABLE,
	TEXT_MOUSESPEED,
	TEXT_MOUSEY,
	TEXT_INVERTED,
	TEXT_NORMAL,

	TEXT_MISCHDR,
	TEXT_MISCRATE,
	TEXT_MISCCAMPITCH,
	TEXT_MISCFOLLOWTERRAIN,
	TEXT_MISCFOLLOWTANK,

	TEXT_CAMERAHDR,
	
	TEXT_TANKHDR,

	TEXT_BUTTON,
	TEXT_PRISECTER,

	TEXT_LANGHDR,
	TEXT_LANGDISCLAIM,

	TEXT_TROPHYTOTAL,

	TEXT_LADDERROSTER,
	TEXT_LADDERPLAYERS,
	TEXT_LADDERNAME,
	TEXT_LADDERRANK,
	TEXT_LADDERSTARTED,
	TEXT_LADDERFINISHED,
	TEXT_LADDERTROPHIES,
	TEXT_LADDERFRAGS,
	TEXT_LADDERDEATHS,
	TEXT_LADDERNEW,
	TEXT_LADDERDELETE,

	TEXT_NEWLADDERCREATE,
	TEXT_NEWLADDERSTART,
	TEXT_NEWLADDERRANK40,
	TEXT_NEWLADDERRANK55,
	TEXT_NEWLADDERRANK70,
	TEXT_NEWLADDERRANK85,
	TEXT_NEWLADDERRANK00,

	TEXT_DELLADDERHDR,
	TEXT_DELLADDERCONFIRM,

	TEXT_LADDERPROGRESS,
	TEXT_LADDERMAP,
	TEXT_LADDEROPPONENTS,	
	TEXT_LADDERLAPS,
	TEXT_LADDERLADDER,
	TEXT_START,
	TEXT_VIEW,
	TEXT_STATS,

	TEXT_STATHALL,
	TEXT_STATBATTLE,
	TEXT_STATRACE,
	TEXT_STATUNKNOWN,
	TEXT_STATHDR,

	TEXT_TANKSELECT,
	TEXT_TANKTREADS,
	TEXT_TANKNAME,
	TEXT_TANKINSIGNIA,
	TEXT_TANKTEAM,

	TEXT_TUTHDR,
	TEXT_TUTCHAPTER,
	TEXT_TUTDESC,

	TEXT_MAPHDR,
	TEXT_MAPMAP,
	TEXT_MAPTYPEBATTLE,
	TEXT_MAPTYPERACE,
	TEXT_MAPLAPS,
	TEXT_MAPAI,
	TEXT_MAPTIME,
	TEXT_MAPFRAG,
	TEXT_MAPSKILL,
	TEXT_MAPTANKALL,
	TEXT_MAPTANKSTEEL,
	TEXT_MAPTANKLIQUID,
	TEXT_MAPDELAY,
	TEXT_MAPMIRROR,
	TEXT_MAPJOINS,
	TEXT_NUMTEAMS,
	TEXT_TEAMSCORES,
	TEXT_TEAMDAMAGE,
	TEXT_BATTLE,
	TEXT_RACE,

	TEXT_CHATHDR,
	TEXT_CHATCHANNEL,
	//TEXT_CHAT
	TEXT_CHATCHANNELS,
	TEXT_CHATUSERS,
	TEXT_CHATCHAT,


	TEXT_WORLDKILL,
	TEXT_WORLDKILLPLAYER,
	TEXT_KILLSELF,
	TEXT_KILLSELFSUICIDE,
	TEXT_KILLOTHER,
	TEXT_OTHERKILLSELF,
	TEXT_OTHERKILLSELFSUICIDE,
	TEXT_OTHERKILLPLAYER,
	TEXT_OTHERKILLOTHER,
	TEXT_FLAGKILL,

	TEXT_STATUSDOWNLOAD,
	TEXT_STATUSWEB,
	TEXT_STATUSFAIL,
	TEXT_STATUSLOOKUP,
	TEXT_STATUSPAUSED,
	TEXT_STATUSWAIT,
	TEXT_STATUSRESTART,
	TEXT_STATUSWRONGVERSION,
	TEXT_STATUSSERVERFULL,
	TEXT_STATUSNAMELOOKUP,
	TEXT_STATUSTIMEOUT,
	TEXT_STATUSMISSINGRES,
	TEXT_STATUSDISCONNECTED,
	TEXT_STATUSTRYING,
	TEXT_STATUSACCEPTED,
	TEXT_STATUSSENTINFO,
	TEXT_STATUSMAPLOAD,
	TEXT_STATUSMAPFAIL,
	TEXT_STATUSSYNCENTITIES,
	TEXT_STATUSLOADINGMAP,
	TEXT_STATUSSHADING,
	TEXT_STATUSCREATING,

	TEXT_PRESSFIRE,
	TEXT_UPDATINGCRATERS,
	TEXT_PLEASEWAIT,
	TEXT_CHAT,
	TEXT_NAMEDUMMY,
	TEXT_NAMETARGET,

	TEXT_KPH,
	TEXT_MPH,
	TEXT_FPS,
	TEXT_PING,
	TEXT_WEAPONMAIN,
	TEXT_WEAPON,
	TEXT_AMMO,
	TEXT_HEALTH,
	TEXT_FRAGS,
	TEXT_RELOADING,
	TEXT_HUDSTATS,
	TEXT_HUDSTATSLINE,
	TEXT_HUDSTATSTEAMLINE,
	TEXT_HUDSTATSTEAMLINE2,

	TEXT_FREELOOKON,
	TEXT_CAMATTACHTOTURRET,
	TEXT_CAMATTACHEDTOFRONT,
	TEXT_FREELOOKOFF,
	TEXT_PLAYERJOINTEAM,
	TEXT_RACEWONBY,
	TEXT_TIMELIMITELAPSED,
	TEXT_FRAGLIMITREACHED,
	TEXT_NOWPLAYINGMUSIC,
	TEXT_DEDI_LISTHEADER,
	TEXT_DEDI_TOTAL,
	TEXT_DEDI_KICKINGPLAYER,
	TEXT_DEDI_KICKINGPLAYERFORTIME,
	TEXT_DEDI_DISCSENT,
	TEXT_DEDI_KICKEDBYSERVEROP,
	TEXT_DEDI_NOPLAYERSBYNAME,
	TEXT_DEDI_JOINEDSERVER,
	TEXT_DEDI_LISTAIHEADER,
	TEXT_DEDI_REMOVEFROMGAME,
	TEXT_PLAYERDISCONNECTED,
	TEXT_PLAYERISCONNECTING,
	TEXT_PLAYERCHANGEDVEHICLE,
	TEXT_PLAYERCHANGEDNAME,
	TEXT_PLAYERCHANGEDBYTERATE,
	TEXT_SERVEROPERATOR,
	
	TEXT_FLAG_PICKUP,
	TEXT_FLAG_DROP,
	TEXT_FLAG_CAPTURE,
	TEXT_FLAG_RETURN,
	TEXT_FLAG_ENEMYHASFLAG,
	TEXT_FLAG_RETURNTOBASE,

	TEXT_1ST,
	TEXT_2ND,
	TEXT_3RD,
	TEXT_4TH,
	TEXT_5TH,
	TEXT_6TH,
	TEXT_7TH,
	TEXT_8TH,
	TEXT_9TH,
	TEXT_10TH,
	TEXT_11TH,
	TEXT_12TH,
	TEXT_13TH,
	TEXT_14TH,
	TEXT_15TH,
	TEXT_16TH,
	TEXT_17TH,
	TEXT_18TH,
	TEXT_19TH,
	TEXT_20TH,

	TEXT_21ST,
	TEXT_22ND,
	TEXT_23RD,
	TEXT_24TH,
	TEXT_25TH,
	TEXT_26TH,
	TEXT_27TH,
	TEXT_28TH,
	TEXT_29TH,
	TEXT_30TH,

	TEXT_31ST,
	TEXT_32ND,
	TEXT_33RD,
	TEXT_34TH,
	TEXT_35TH,
	TEXT_36TH,
	TEXT_37TH,
	TEXT_38TH,
	TEXT_39TH,
	TEXT_40TH,

	TEXT_41ST,
	TEXT_42ND,
	TEXT_43RD,
	TEXT_44TH,
	TEXT_45TH,
	TEXT_46TH,
	TEXT_47TH,
	TEXT_48TH,
	TEXT_49TH,
	TEXT_50TH,

	TEXT_51ST,
	TEXT_52ND,
	TEXT_53RD,
	TEXT_54TH,
	TEXT_55TH,
	TEXT_56TH,
	TEXT_57TH,
	TEXT_58TH,
	TEXT_59TH,
	TEXT_60TH,

	TEXT_61ST,
	TEXT_62ND,
	TEXT_63RD,
	TEXT_64TH,
	TEXT_65TH,
	TEXT_66TH,
	TEXT_67TH,
	TEXT_68TH,
	TEXT_69TH,
	TEXT_70TH,

	TEXT_71ST,
	TEXT_72ND,
	TEXT_73RD,
	TEXT_74TH,
	TEXT_75TH,
	TEXT_76TH,
	TEXT_77TH,
	TEXT_78TH,
	TEXT_79TH,
	TEXT_80TH,

	TEXT_81ST,
	TEXT_82ND,
	TEXT_83RD,
	TEXT_84TH,
	TEXT_85TH,
	TEXT_86TH,
	TEXT_87TH,
	TEXT_88TH,
	TEXT_89TH,
	TEXT_90TH,

	TEXT_91ST,
	TEXT_92ND,
	TEXT_93RD,
	TEXT_94TH,
	TEXT_95TH,
	TEXT_96TH,
	TEXT_97TH,
	TEXT_98TH,
	TEXT_99TH,
	TEXT_100TH,

	TEXT_NUMSTRINGS
};

enum {
	CONTROL_TURNLEFT,
	CONTROL_TURNRIGHT,
	CONTROL_FORWARD,
	CONTROL_REVERSE,
	CONTROL_GUNLEFT,
	CONTROL_GUNRIGHT,
	CONTROL_FIRE,
	CONTROL_CHAT,
	CONTROL_TEAMCHAT,
	CONTROL_SCORES,
	CONTROL_GUNTOFRONT,
	CONTROL_GUNTOBACK,
	CONTROL_GUNTOCAM,
	CONTROL_FREELOOK,
	CONTROL_TURRETCAM,
	CONTROL_TILTUP,
	CONTROL_TILTDOWN,
	CONTROL_LOOKLEFT,
	CONTROL_LOOKRIGHT,
	CONTROL_LOOKBACK,
	CONTROL_RESET
};

#endif /*_TEXTLINE_H*/
