class CfgPatches
{
	class IMP_Helmet_KiverNew
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

    class IMP_Helmet_KiverNew_ColorBase : Clothing 
	{
        scope = 0;
		RankLevel = 3;
        displayName = "$STR_IMP_KiverM";
		descriptionShort = "$STR_IMP_KiverMD";
		model = "\IMPGMOD\Equipment\Helmet\KiverNew\models\KiverNew_g.p3d";
		repairableWithKits[] = {8};
		attachments[] = {"HPouch"};
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
		hiddenSelections[] = {"camoflage", "glass", "balaclava", "golova"};
		
		class ClothingTypes
		{
			male = "\IMPGMOD\Equipment\Helmet\KiverNew\models\KiverNew.p3d";
			female = "\IMPGMOD\Equipment\Helmet\KiverNew\models\KiverNew.p3d";
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
                        {1.0,{"IMPGMOD\Equipment\Helmet\KiverNew\data\kiver.rvmat", "IMPGMOD\Equipment\data\GlassNew.rvmat"}},
                        {0.7,{"IMPGMOD\Equipment\Helmet\KiverNew\data\kiver.rvmat", "IMPGMOD\Equipment\data\GlassNew.rvmat"}},
                        {0.5,{"IMPGMOD\Equipment\Helmet\KiverNew\data\kiver_damage.rvmat", "IMPGMOD\Equipment\data\GlassNew_damage.rvmat"}},
                        {0.3,{"IMPGMOD\Equipment\Helmet\KiverNew\data\kiver_damage.rvmat", "IMPGMOD\Equipment\data\GlassNew_damage.rvmat"}},
                        {0.0,{"IMPGMOD\Equipment\Helmet\KiverNew\data\kiver_destruct.rvmat", "IMPGMOD\Equipment\data\GlassNew_destruct.rvmat"}}
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

    class IMP_Helmet_KiverNew_Black : IMP_Helmet_KiverNew_ColorBase 
	{
        scope = 2;
		color="Black";
		simpleHiddenSelections[] = {"balaclava", "golova"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\KiverNew\data\kiver_ca.paa", "impgmod\equipment\data\glass_light_ca.paa", "IMPGMOD\Equipment\Helmet\6B47CoveredT\data\6B47CoveredT_black.paa", "IMPGMOD\Equipment\Helmet\6B47CoveredT\data\6B47CoveredT_black.paa"};
    };
	
	class IMP_Helmet_KiverNew_Raised_ColorBase : Clothing 
	{
        scope = 0;

        displayName = "$STR_IMP_KiverM";
		descriptionShort = "$STR_IMP_KiverMD";
		model = "\IMPGMOD\Equipment\Helmet\KiverNew\models\KiverNew_g_Raised.p3d";
		repairableWithKits[] = {8};
		attachments[] = {"HPouch"};
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
		heatIsolation=0.5;
		headSelectionsToHide[] = {"Clipping_Mich2001"};
		hiddenSelections[] = {"camoflage", "glass", "balaclava", "golova"};
		
		class ClothingTypes
		{
			male = "\IMPGMOD\Equipment\Helmet\KiverNew\models\KiverNew_Raised.p3d";
			female = "\IMPGMOD\Equipment\Helmet\KiverNew\models\KiverNew_Raised.p3d";
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
                        {1.0,{"IMPGMOD\Equipment\Helmet\KiverNew\data\kiver.rvmat", "IMPGMOD\Equipment\data\GlassNew.rvmat"}},
                        {0.7,{"IMPGMOD\Equipment\Helmet\KiverNew\data\kiver.rvmat", "IMPGMOD\Equipment\data\GlassNew.rvmat"}},
                        {0.5,{"IMPGMOD\Equipment\Helmet\KiverNew\data\kiver_damage.rvmat", "IMPGMOD\Equipment\data\GlassNew_damage.rvmat"}},
                        {0.3,{"IMPGMOD\Equipment\Helmet\KiverNew\data\kiver_damage.rvmat", "IMPGMOD\Equipment\data\GlassNew_damage.rvmat"}},
                        {0.0,{"IMPGMOD\Equipment\Helmet\KiverNew\data\kiver_destruct.rvmat", "IMPGMOD\Equipment\data\GlassNew_destruct.rvmat"}}
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

    class IMP_Helmet_KiverNew_Raised_Black : IMP_Helmet_KiverNew_Raised_ColorBase 
	{
        scope = 2;
		color="Black";
		simpleHiddenSelections[] = {"balaclava", "golova"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\KiverNew\data\kiver_ca.paa", "impgmod\equipment\data\glass_light_ca.paa", "IMPGMOD\Equipment\Helmet\6B47CoveredT\data\6B47CoveredT_black.paa", "IMPGMOD\Equipment\Helmet\6B47CoveredT\data\6B47CoveredT_black.paa"};
    };
};