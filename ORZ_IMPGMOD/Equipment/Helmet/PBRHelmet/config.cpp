class CfgPatches 
{
	class IMP_Helmet_PBR 
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data", "DZ_Characters", "DZ_Scripts", "DZ_Characters_Headgear"};
	};
};

class cfgVehicles 
{
	class Clothing_Base;
	class Clothing: Clothing_Base {};
	
	class IMP_Helmet_PBR_ColorBase : Clothing 
	{
		scope = 0;
		RankLevel = 3;
		displayName = "$STR_IMP_PBRHelmet";
		descriptionShort = "$STR_IMP_PBRHelmetD";
		model = "IMPGMOD\Equipment\Helmet\PBRHelmet\models\PBR_Helmet_g.p3d";
		attachments[] = {"NVG", "helmetFlashlight", "HPouch"};
		repairableWithKits[] = {8};
		repairCosts[] = {25.0};
		inventorySlot[] = {"Headgear", "Helmet1", "Helmet2"};
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing", "Headgear"};
		weight = 3000;
		quickBarBonus=1;
		itemSize[] = {4, 4};
		noMask = 0;
		noNVStrap = 0;
		noEyewear = 0;
		varWetMax=0.048999999;
		heatIsolation=0.5;
		headSelectionsToHide[] = {"Clipping_Mich2001"};
		hiddenSelections[] = {"camoflage", "mask"};
		
		class ClothingTypes 
		{
			male = "IMPGMOD\Equipment\Helmet\PBRHelmet\models\PBR_Helmet.p3d";
			female = "IMPGMOD\Equipment\Helmet\PBRHelmet\models\PBR_Helmet.p3d";
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
						{1.0, {"IMPGMOD\Equipment\Helmet\PBRHelmet\data\PBRHelmet.rvmat"}}, 
						{0.7, {"IMPGMOD\Equipment\Helmet\PBRHelmet\data\PBRHelmet.rvmat"}}, 
						{0.5, {"IMPGMOD\Equipment\Helmet\PBRHelmet\data\PBRHelmet_damage.rvmat"}}, 
						{0.3, {"IMPGMOD\Equipment\Helmet\PBRHelmet\data\PBRHelmet_damage.rvmat"}}, 
						{0.0, {"IMPGMOD\Equipment\Helmet\PBRHelmet\data\PBRHelmet_destruct.rvmat"}}
					};
				};
			};
			
			class GlobalArmor
            {
                class Projectile
                {
                    class Health
                    {
                        damage = 0.2;
                    };
                    class Blood
                    {
                        damage = 0.2;
                    };
                    class Shock
                    {
                        damage = 0.2;
                    };
                };
                class Melee
                {
                    class Health
                    {
                        damage = 0.2;
                    };
                    class Blood
                    {
                        damage = 0.2;
                    };
                    class Shock
                    {
                        damage = 0.2;
                    };
                };
                class Infected
                {
                    class Health
                    {
                        damage = 0.2;
                    };
                    class Blood
                    {
                        damage = 0.2;
                    };
                    class Shock
                    {
                        damage = 0.2;
                    };
                };
                class FragGrenade
                {
                    class Health
                    {
                        damage = 0.2;
                    };
                    class Blood
                    {
                        damage = 0.2;
                    };
                    class Shock
                    {
                        damage = 0.2;
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
	
	class IMP_Helmet_PBR : IMP_Helmet_PBR_ColorBase 
	{
        scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\PBRHelmet\data\PBRHelmet_co.paa", "IMPGMOD\Equipment\Helmet\PBRHelmet\data\PBRHelmet_net.paa"};
    };
};