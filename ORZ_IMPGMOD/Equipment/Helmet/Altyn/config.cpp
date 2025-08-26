class CfgPatches
{
	class IMP_Helmet_Altyn
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

    class IMP_Helmet_Altyn_ColorBase : Clothing
	{
		scope = 0;
		RankLevel = 5;
		displayName = "$STR_IMP_ALTYNH";
		descriptionShort = "$STR_IMP_ALTYNHD";
		model = "\IMPGMOD\Equipment\Helmet\Altyn\models\altyn_g.p3d";
		attachments[] = {"HPouch", "HelmetLight"};
		repairableWithKits[] = {8};
		repairCosts[] = {25.0};
		inventorySlot[] = {"Headgear", "Helmet1", "Helmet2"};
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing", "Headgear"};
		weight = 4000;
		itemSize[] = {4, 4};
		noMask = 0;
		noNVStrap = 0;
		noEyewear = 0;
		heatIsolation=0.1;
		varWetMax=0.048999999;
		headSelectionsToHide[] = {"Clipping_Mich2001"};
		hiddenSelections[] = {"camoflage"};

		class ClothingTypes
		{
			male = "\IMPGMOD\Equipment\Helmet\Altyn\models\altyn.p3d";
			female = "\IMPGMOD\Equipment\Helmet\Altyn\models\altyn.p3d";
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
                        {1.0,{"IMPGMOD\Equipment\Helmet\Altyn\data\altyn.rvmat"}},
                        {0.7,{"IMPGMOD\Equipment\Helmet\Altyn\data\altyn.rvmat"}},
                        {0.5,{"IMPGMOD\Equipment\Helmet\Altyn\data\altyn_damage.rvmat"}},
                        {0.3,{"IMPGMOD\Equipment\Helmet\Altyn\data\altyn_damage.rvmat"}},
                        {0.0,{"IMPGMOD\Equipment\Helmet\Altyn\data\altyn_destruct.rvmat"}}
                    };
				};
			};

			class GlobalArmor
            {
                class Projectile
                {
                    class Health
                    {
                        damage = 0.1;
                    };
                    class Blood
                    {
                        damage = 0.1;
                    };
                    class Shock
                    {
                        damage = 0.1;
                    };
                };
                class Melee
                {
                    class Health
                    {
                        damage = 0.1;
                    };
                    class Blood
                    {
                        damage = 0.1;
                    };
                    class Shock
                    {
                        damage = 0.1;
                    };
                };
                class Infected
                {
                    class Health
                    {
                        damage = 0.1;
                    };
                    class Blood
                    {
                        damage = 0.1;
                    };
                    class Shock
                    {
                        damage = 0.1;
                    };
                };
                class FragGrenade
                {
                    class Health
                    {
                        damage = 0.1;
                    };
                    class Blood
                    {
                        damage = 0.1;
                    };
                    class Shock
                    {
                        damage = 0.1;
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

	class IMP_Helmet_Altyn_Green : IMP_Helmet_Altyn_ColorBase 
	{
		scope = 2;
		color="Green";
		simpleHiddenSelections[] = {"balaclava","golova"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\Altyn\data\altyn_green_ca.paa"};
	};

	class IMP_Helmet_Altyn_Black : IMP_Helmet_Altyn_ColorBase 
	{
		scope = 2;
		color="Black";
		simpleHiddenSelections[] = {"balaclava","golova"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\Altyn\data\altyn_black_ca.paa"};
	};
	
	class IMP_Helmet_Altyn_Tan : IMP_Helmet_Altyn_ColorBase 
	{
		scope = 2;
		color="Tan";
		simpleHiddenSelections[] = {"balaclava","golova"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\Altyn\data\altyn_tan_ca.paa"};
	};
	
	class IMP_Helmet_Altyn_EMR : IMP_Helmet_Altyn_ColorBase 
	{
		scope = 2;
		color="EMR";
		simpleHiddenSelections[] = {"balaclava","golova"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\Altyn\data\Altyn_EMR.paa"};
	};
	
	class IMP_Helmet_Altyn_NWU : IMP_Helmet_Altyn_ColorBase 
	{
		scope = 2;
		color="NWU";
		simpleHiddenSelections[] = {"balaclava","golova"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\Altyn\data\Altyn_NWU.paa"};
	};
	
	class IMP_Helmet_Altyn_UCP : IMP_Helmet_Altyn_ColorBase 
	{
		scope = 2;
		color="UCP";
		simpleHiddenSelections[] = {"balaclava","golova"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\Altyn\data\Altyn_UCP.paa"};
	};
	
	class IMP_Helmet_Altyn_MARPAT : IMP_Helmet_Altyn_ColorBase 
	{
		scope = 2;
		color="MARPAT";
		simpleHiddenSelections[] = {"balaclava","golova"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\Altyn\data\Altyn_MARPAT.paa"};
	};
	
	class IMP_Helmet_Altyn_Raised_ColorBase : Clothing
	{
		scope = 0;
		RankLevel = 4;
		displayName = "$STR_IMP_ALTYNH";
		descriptionShort = "$STR_IMP_ALTYNHD";
		model = "\IMPGMOD\Equipment\Helmet\Altyn\models\altyn_g_raised.p3d";
		attachments[] = {"HPouch"};
		repairableWithKits[] = {8};
		repairCosts[] = {25.0};
		inventorySlot[] = {"Headgear", "Helmet1", "Helmet2"};
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing", "Headgear"};
		weight = 2600;
		itemSize[] = {4, 4};
		noMask = 0;
		noNVStrap = 0;
		noEyewear = 0;
		heatIsolation=0.1;
		varWetMax=0.048999999;
		headSelectionsToHide[] = {"Clipping_Mich2001"};
		hiddenSelections[] = {"camoflage"};

		class ClothingTypes
		{
			male = "\IMPGMOD\Equipment\Helmet\Altyn\models\altyn_raised.p3d";
			female = "\IMPGMOD\Equipment\Helmet\Altyn\models\altyn_raised.p3d";
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
                        {1.0,{"IMPGMOD\Equipment\Helmet\Altyn\data\altyn.rvmat"}},
                        {0.7,{"IMPGMOD\Equipment\Helmet\Altyn\data\altyn.rvmat"}},
                        {0.5,{"IMPGMOD\Equipment\Helmet\Altyn\data\altyn_damage.rvmat"}},
                        {0.3,{"IMPGMOD\Equipment\Helmet\Altyn\data\altyn_damage.rvmat"}},
                        {0.0,{"IMPGMOD\Equipment\Helmet\Altyn\data\altyn_destruct.rvmat"}}
                    };
				};
			};

			class GlobalArmor
            {
                class Projectile
                {
                    class Health
                    {
                        damage = 0.1;
                    };
                    class Blood
                    {
                        damage = 0.1;
                    };
                    class Shock
                    {
                        damage = 0.1;
                    };
                };
                class Melee
                {
                    class Health
                    {
                        damage = 0.1;
                    };
                    class Blood
                    {
                        damage = 0.1;
                    };
                    class Shock
                    {
                        damage = 0.1;
                    };
                };
                class Infected
                {
                    class Health
                    {
                        damage = 0.1;
                    };
                    class Blood
                    {
                        damage = 0.1;
                    };
                    class Shock
                    {
                        damage = 0.1;
                    };
                };
                class FragGrenade
                {
                    class Health
                    {
                        damage = 0.1;
                    };
                    class Blood
                    {
                        damage = 0.1;
                    };
                    class Shock
                    {
                        damage = 0.1;
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

	class IMP_Helmet_Altyn_Raised_Green : IMP_Helmet_Altyn_Raised_ColorBase 
	{
		scope = 2;
		color="Green";
		simpleHiddenSelections[] = {"balaclava","golova"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\Altyn\data\altyn_green_ca.paa"};
	};

	class IMP_Helmet_Altyn_Raised_Black : IMP_Helmet_Altyn_Raised_ColorBase 
	{
		scope = 2;
		color="Black";
		simpleHiddenSelections[] = {"balaclava","golova"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\Altyn\data\altyn_black_ca.paa"};
	};
	
	class IMP_Helmet_Altyn_Raised_Tan : IMP_Helmet_Altyn_Raised_ColorBase 
	{
		scope = 2;
		color="Tan";
		simpleHiddenSelections[] = {"balaclava","golova"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\Altyn\data\altyn_tan_ca.paa"};
	};
	
	class IMP_Helmet_Altyn_Raised_EMR : IMP_Helmet_Altyn_Raised_ColorBase 
	{
		scope = 2;
		color="EMR";
		simpleHiddenSelections[] = {"balaclava","golova"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\Altyn\data\Altyn_EMR.paa"};
	};
	
	class IMP_Helmet_Altyn_Raised_NWU : IMP_Helmet_Altyn_Raised_ColorBase 
	{
		scope = 2;
		color="NWU";
		simpleHiddenSelections[] = {"balaclava","golova"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\Altyn\data\Altyn_NWU.paa"};
	};
	
	class IMP_Helmet_Altyn_Raised_UCP : IMP_Helmet_Altyn_Raised_ColorBase 
	{
		scope = 2;
		color="UCP";
		simpleHiddenSelections[] = {"balaclava","golova"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\Altyn\data\Altyn_UCP.paa"};
	};
	
	class IMP_Helmet_Altyn_Raised_MARPAT : IMP_Helmet_Altyn_Raised_ColorBase 
	{
		scope = 2;
		color="MARPAT";
		simpleHiddenSelections[] = {"balaclava","golova"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\Altyn\data\Altyn_MARPAT.paa"};
	};
};
