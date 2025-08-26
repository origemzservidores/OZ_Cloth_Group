class CfgPatches 
{
	class IMP_Helmet_ACHHC 
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
	
	class IMP_Helmet_ACHHC_ColorBase : Clothing {
		scope = 0;
		RankLevel = 2;
		displayName = "$STR_IMP_StrikerACHHC";
		descriptionShort = "$STR_IMP_HelmetALL";
		model = "IMPGMOD\Equipment\Helmet\ACHHC\models\ACHHC_g.p3d";
		attachments[] = {};
		repairableWithKits[] = {8};
		repairCosts[] = {25.0};
		inventorySlot[] = {"Headgear", "Helmet1", "Helmet2"};
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing", "Headgear"};
		weight = 1000;
		quickBarBonus=1;
		itemSize[] = {4, 4};
		noMask = 0;
		noNVStrap = 1;
		noEyewear = 0;
		varWetMax=0.048999999;
		heatIsolation=1;
		hiddenSelections[] = {"camoflage", "balaclava", "golova"};
		headSelectionsToHide[] = {"Clipping_Mich2001"};
				
		class ClothingTypes 
		{
			male = "IMPGMOD\Equipment\Helmet\ACHHC\models\ACHHC_m.p3d";
			female = "IMPGMOD\Equipment\Helmet\ACHHC\models\ACHHC_f.p3d";
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
						{1.0, {"IMPGMOD\Equipment\Helmet\ACHHC\data\ACHHC.rvmat"}}, 
						{0.7, {"IMPGMOD\Equipment\Helmet\ACHHC\data\ACHHC.rvmat"}}, 
						{0.5, {"IMPGMOD\Equipment\Helmet\ACHHC\data\ACHHC_damage.rvmat"}}, 
						{0.3, {"IMPGMOD\Equipment\Helmet\ACHHC\data\ACHHC_damage.rvmat"}}, 
						{0.0, {"IMPGMOD\Equipment\Helmet\ACHHC\data\ACHHC_destruct.rvmat"}}
					};
				};
			};
			
			class GlobalArmor
            {
                class Projectile
                {
                    class Health
                    {
                        damage = 0.4;
                    };
                    class Blood
                    {
                        damage = 0.4;
                    };
                    class Shock
                    {
                        damage = 0.4;
                    };
                };
                class Melee
                {
                    class Health
                    {
                        damage = 0.4;
                    };
                    class Blood
                    {
                        damage = 0.4;
                    };
                    class Shock
                    {
                        damage = 0.4;
                    };
                };
                class Infected
                {
                    class Health
                    {
                        damage = 0.4;
                    };
                    class Blood
                    {
                        damage = 0.4;
                    };
                    class Shock
                    {
                        damage = 0.4;
                    };
                };
                class FragGrenade
                {
                    class Health
                    {
                        damage = 0.4;
                    };
                    class Blood
                    {
                        damage = 0.4;
                    };
                    class Shock
                    {
                        damage = 0.4;
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
	
	class IMP_Helmet_ACHHC_Green : IMP_Helmet_ACHHC_ColorBase 
	{
		scope = 2;
		simpleHiddenSelections[] = { "balaclava","golova"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\ACHHC\data\ACHHC_Green_co.paa", "IMPGMOD\Equipment\Helmet\6B47CoveredT\data\6B47CoveredT_co.paa", "IMPGMOD\Equipment\Helmet\6B47CoveredT\data\6B47CoveredT_co.paa"};
	};
	
	class IMP_Helmet_ACHHC_Black : IMP_Helmet_ACHHC_ColorBase 
	{
		scope = 2;
		simpleHiddenSelections[] = { "balaclava", "golova"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\ACHHC\data\ACHHC_Black_co.paa", "IMPGMOD\Equipment\Helmet\6B47CoveredT\data\6B47CoveredT_black.paa", "IMPGMOD\Equipment\Helmet\6B47CoveredT\data\6B47CoveredT_black.paa"};
	};
};