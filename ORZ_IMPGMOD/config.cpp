#define _ARMA_

class CfgPatches 
{
	class ORZ_IMPGMOD 
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"IMPCOREMOD", "IMPGMOD"};
	};
};

class CfgMods {
	class ORZ_IMPGMOD {
		dir = ORZ_IMPGMOD;
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = ORZ_IMPGMOD;
		credits = "https://origemz.com";
		author = "https://origemz.com";
		authorID = "0";
		version = 0.1;
		extra = 0;
		type = "mod";
		dependencies[] = {"World", "Game", "Mission"};
		class defs {
			
			class imageSets
			{
				files[]=
				{
					"IMPCOREMOD/GUI/imagesets/Slots.imageset"
				};
			};
			
			class gameScriptModule {
				value = "";
				files[] = {"IMPGMOD/scripts/3_Game"};
			};
			
			class worldScriptModule {
				value = "";
				files[] = {"IMPGMOD/scripts/4_World"};
			};
			
			class missionScriptModule {
				value = "";
				files[] = {"IMPGMOD/scripts/5_Mission"};
			};
		};
	};
};