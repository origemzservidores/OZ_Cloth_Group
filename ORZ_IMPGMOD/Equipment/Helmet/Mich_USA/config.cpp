class CfgPatches
{
	class IMP_Helmet_Mich_USA
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[] = {"DZ_Data", "DZ_Characters", "DZ_Scripts", "DZ_Characters_Headgear"};
	};
};

class cfgVehicles 
{
	class Clothing_Base;
	class Clothing: Clothing_Base {};

	class IMP_Helmet_Mich_USA_ColorBase : Clothing 
	{
		scope = 0;
		RankLevel = 3;
		displayName="$STR_CfgVehicles_Mich2001Helmet0";
		descriptionShort="$STR_CfgVehicles_Mich2001Helmet1";
		model = "\IMPGMOD\Equipment\Helmet\Mich_USA\models\Mich_USA_g.p3d";
		attachments[] = {"NVG", "HPouch"};
		repairableWithKits[] = {8};
		repairCosts[] = {25.0};
		inventorySlot[] = {"Headgear", "Helmet1", "Helmet2"};
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing", "Headgear"};
		weight = 2600;
		quickBarBonus=1;
		itemSize[] = {4, 4};
		noMask = 0;
		noNVStrap = 0;
		noEyewear = 0;
		varWetMax=0.048999999;
		heatIsolation=1;
		headSelectionsToHide[] = {"Clipping_Mich2001"};
		hiddenSelections[] = {"camoflage"};
		
		class ClothingTypes 
		{
			male = "\IMPGMOD\Equipment\Helmet\Mich_USA\models\Mich_USA_m.p3d";
			female = "\IMPGMOD\Equipment\Helmet\Mich_USA\models\Mich_USA_m.p3d";
		};
		
		class DamageSystem 
		{
			class GlobalHealth 
			{
				class Health 
				{
					hitpoints = 500;
					healthLevels[] = 
					{
						{1.0, {"IMPGMOD\Equipment\Helmet\Mich_USA\data\Helmet_color.rvmat"}}, 
						{0.7, {"IMPGMOD\Equipment\Helmet\Mich_USA\data\Helmet_color.rvmat"}}, 
						{0.5, {"IMPGMOD\Equipment\Helmet\Mich_USA\data\Helmet_color_damage.rvmat"}}, 
						{0.3, {"IMPGMOD\Equipment\Helmet\Mich_USA\data\Helmet_color_damage.rvmat"}}, 
						{0.0, {"IMPGMOD\Equipment\Helmet\Mich_USA\data\Helmet_color_destruct.rvmat"}}
					};
				};
			};
			
			class GlobalArmor
            {
                class Projectile
                {
                    class Health
                    {
                        damage = 0.3;
                    };
                    class Blood
                    {
                        damage = 0.3;
                    };
                    class Shock
                    {
                        damage = 0.3;
                    };
                };
                class Melee
                {
                    class Health
                    {
                        damage = 0.3;
                    };
                    class Blood
                    {
                        damage = 0.3;
                    };
                    class Shock
                    {
                        damage = 0.3;
                    };
                };
                class Infected
                {
                    class Health
                    {
                        damage = 0.3;
                    };
                    class Blood
                    {
                        damage = 0.3;
                    };
                    class Shock
                    {
                        damage = 0.3;
                    };
                };
                class FragGrenade
                {
                    class Health
                    {
                        damage = 0.3;
                    };
                    class Blood
                    {
                        damage = 0.3;
                    };
                    class Shock
                    {
                        damage = 0.3;
                    };
                };
            };
        };
		
		class AnimEvents 
		{
			class SoundWeapon 
			{
				class pickUpItem 
				{
					soundSet = "pickUpPot_SoundSet";
					id = 797;
				};
				class drop 
				{
					soundset = "BallisticHelmet_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	
	class IMP_Helmet_Mich_USA : IMP_Helmet_Mich_USA_ColorBase 
	{
        scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\Mich_USA\data\Helmet_color.paa"};
    };
	
	class IMP_Helmet_Mich_USSR : IMP_Helmet_Mich_USA_ColorBase 
	{
        scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\Mich_USA\data\Helmet_USSR.paa"};
    };
	
	class IMP_Helmet_Mich_German : IMP_Helmet_Mich_USA_ColorBase 
	{
        scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\Mich_USA\data\Helmet_German.paa"};
    };
	
	class IMP_Helmet_Mich_Poland : IMP_Helmet_Mich_USA_ColorBase 
	{
        scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\Mich_USA\data\Helmet_Poland.paa"};
    };
	
	class IMP_Helmet_Mich_UK : IMP_Helmet_Mich_USA_ColorBase 
	{
        scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\Mich_USA\data\Helmet_UK.paa"};
    };
};