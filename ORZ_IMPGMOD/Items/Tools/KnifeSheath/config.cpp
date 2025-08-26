#define _ARMA_

class CfgPatches
{
	class Knife_Sheath
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[] = 
		{
			"DZ_Data",
			"DZ_Characters_Vests",
			"DZ_Characters_Backpacks",
			"DZ_Scripts",
			"DZ_Characters",
			"DZ_Gear_Drinks",
			"DZ_Gear_Medical",
			"DZ_Gear_Containers",
			"DZ_Weapons_Magazines"
		};
	};
};


class cfgVehicles
{	
	class NylonKnifeSheath;
	
	class IMP_Sheath_Base: NylonKnifeSheath
	{
		scope = 0;
		displayName="$STR_cfgvehicles_knifesheath0";
        descriptionShort="$STR_cfgvehicles_knifesheath1";
		model = "\IMPGMOD\Items\Tools\KnifeSheath\models\knife_sheath.p3d";
		hiddenSelections[] = {"camoflage"};
		inventorySlot[]={"Belt_Back", "KnifeHolster"};
		hiddenSelectionsTextures[] = 
		{
			"\IMPGMOD\Items\Tools\KnifeSheath\data\sheath_emr_co.paa"
		};
        hiddenSelectionsMaterials[]=
        {
            "IMPGMOD\Items\Tools\KnifeSheath\data\sheath.rvmat"
        };
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
                    healthLevels[] = 
                    {
                        {1.0,{"IMPGMOD\Items\Tools\KnifeSheath\data\sheath.rvmat"}},
                        {0.7,{"IMPGMOD\Items\Tools\KnifeSheath\data\sheath.rvmat"}},
                        {0.5,{"IMPGMOD\Items\Tools\KnifeSheath\data\sheath_damage.rvmat"}},
                        {0.3,{"IMPGMOD\Items\Tools\KnifeSheath\data\sheath_damage.rvmat"}},
                        {0.0,{"IMPGMOD\Items\Tools\KnifeSheath\data\sheath_destruct.rvmat"}}
                    };
				};
			};
		};		
	};
	class IMP_Sheath_EMR: IMP_Sheath_Base
	{
		scope=2;
		hiddenSelectionsTextures[] = 
		{
			"\IMPGMOD\Items\Tools\KnifeSheath\data\sheath_emr_co.paa"
		};
	};
	class IMP_Sheath_MARPAT: IMP_Sheath_Base
	{
		scope=2;
		hiddenSelectionsTextures[] = 
		{
			"\IMPGMOD\Items\Tools\KnifeSheath\data\sheath_marpat_co.paa"
		};
	};
	class IMP_Sheath_NWU: IMP_Sheath_Base
	{
		scope=2;
		hiddenSelectionsTextures[] = 
		{
			"\IMPGMOD\Items\Tools\KnifeSheath\data\sheath_nwu_co.paa"
		};
	};
	class IMP_Sheath_UCP: IMP_Sheath_Base
	{
		scope=2;
		hiddenSelectionsTextures[] = 
		{
			"\IMPGMOD\Items\Tools\KnifeSheath\data\sheath_ucp_co.paa"
		};
	};
};