class CfgPatches 
{
	class IMP_Helmet_RoninMedium {
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
	
	class IMP_Helmet_RoninMedium_ColorBase : Clothing 
	{
		scope = 0;
		RankLevel = 4;
		displayName = "$STR_IMP_DevRoninMedium";
		descriptionShort = "$STR_IMP_DevRoninMediumD";
		model = "IMPGMOD\Equipment\Helmet\DevtacRoninMedium\models\RoninMedium_g.p3d";
		attachments[] = {"NVG", "helmetFlashlight"};
		repairableWithKits[] = {8};
		repairCosts[] = {25.0};
		inventorySlot[] = {"Headgear", "Helmet1", "Helmet2"};
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing", "Headgear"};
		quickBarBonus=2;
		weight = 3000;
		itemSize[] = {4, 4};
		noMask = 1;
		noNVStrap = 1;
		noEyewear = 1;
		varWetMax=0.048999999;
		heatIsolation=0.5;
		hiddenSelections[] = {"camoflage"};
		headSelectionsToHide[] = {"Clipping_GP5GasMask"};
		
		class ClothingTypes 
		{
			male = "IMPGMOD\Equipment\Helmet\DevtacRoninMedium\models\RoninMedium.p3d";
			female = "IMPGMOD\Equipment\Helmet\DevtacRoninMedium\models\RoninMedium_f.p3d";
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
						{1.0, {"IMPGMOD\Equipment\Helmet\DevtacRoninMedium\data\RoninMedium.rvmat"}}, 
						{0.7, {"IMPGMOD\Equipment\Helmet\DevtacRoninMedium\data\RoninMedium.rvmat"}}, 
						{0.5, {"IMPGMOD\Equipment\Helmet\DevtacRoninMedium\data\RoninMedium_damage.rvmat"}}, 
						{0.3, {"IMPGMOD\Equipment\Helmet\DevtacRoninMedium\data\RoninMedium_damage.rvmat"}}, 
						{0.0, {"IMPGMOD\Equipment\Helmet\DevtacRoninMedium\data\RoninMedium_destruct.rvmat"}}
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
	
	class IMP_Helmet_RoninMedium : IMP_Helmet_RoninMedium_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\DevtacRoninMedium\data\RoninMedium_ca.paa"};
	};
};
