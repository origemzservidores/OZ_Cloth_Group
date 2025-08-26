class CfgPatches
{
	class IMP_Helmet_SciFi
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
	
	class IMP_Helmet_SciFi_ColorBase: Clothing
	{
		scope = 0;
		RankLevel = 2;
		displayName="$STR_IMP_SciFiHelmet";
		descriptionShort="$STR_IMP_HelmetALL";
		model = "\IMPGMOD\Equipment\Helmet\SciFiHelmet\models\SciFi_g.p3d";
		attachments[] = {"NVG","helmetFlashlight", "HPouch"};
		repairableWithKits[] = {8};
		repairCosts[] = {25.0};
		inventorySlot[] = {"Headgear", "Helmet1", "Helmet2"};
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing", "Headgear"};
		weight = 3000;
		quickBarBonus=1;
		itemSize[] = {4, 4};
		noMask = 1;
		noNVStrap = 0;
		noEyewear = 1;
		varWetMax=0.048999999;
		heatIsolation=0.5;
		hiddenSelections[] = {"camoflage", "glass"};
		headSelectionsToHide[] = {"Clipping_Mich2001"};
		
		class ClothingTypes 
		{
			male = "\IMPGMOD\Equipment\Helmet\SciFiHelmet\models\SciFi_m_f.p3d";
			female = "\IMPGMOD\Equipment\Helmet\SciFiHelmet\models\SciFi_m_f.p3d";
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
						{1.0,{"IMPGMOD\Equipment\Helmet\SciFiHelmet\data\SciFiHelmet.rvmat"}},
						{0.7,{"IMPGMOD\Equipment\Helmet\SciFiHelmet\data\SciFiHelmet.rvmat"}},
						{0.5,{"IMPGMOD\Equipment\Helmet\SciFiHelmet\data\SciFiHelmet_damage.rvmat"}},
						{0.3,{"IMPGMOD\Equipment\Helmet\SciFiHelmet\data\SciFiHelmet_damage.rvmat"}},
						{0.0,{"IMPGMOD\Equipment\Helmet\SciFiHelmet\data\SciFiHelmet_destruct.rvmat"}}
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

    class IMP_Helmet_SciFi : IMP_Helmet_SciFi_ColorBase 
	{
        scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\SciFiHelmet\data\SciFiHelmet_co.paa", "impgmod\equipment\data\glass_black_very_ca.paa"};
    };
};