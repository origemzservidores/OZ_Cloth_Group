class CfgPatches
{
	class IMP_Helmet_Mich_Blue
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
	
	class IMP_Helmet_Mich_Blue_ColorBase: Clothing
	{
		scope = 0;
		RankLevel = 2;
		displayName="$STR_CfgVehicles_Mich2001Helmet0";
		descriptionShort="Шлем третьего уровня. Helmet 3 lvl protection";
		model = "\IMPGMOD\Equipment\Helmet\Mich\models\Mich_g.p3d";
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
		noMask = 0;
		noNVStrap = 0;
		noEyewear = 0;
		varWetMax=0.048999999;
		heatIsolation=0.5;
		hiddenSelections[] = {"camoflage"};
		headSelectionsToHide[] = {"Clipping_Mich2001"};
		
		class ClothingTypes 
		{
			male = "\IMPGMOD\Equipment\Helmet\Mich\models\Mich.p3d";
			female = "\IMPGMOD\Equipment\Helmet\Mich\models\Mich.p3d";
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
						{1.0,{"IMPGMOD\Equipment\Helmet\Mich\data\Mich.rvmat"}},
						{0.7,{"IMPGMOD\Equipment\Helmet\Mich\data\Mich.rvmat"}},
						{0.5,{"IMPGMOD\Equipment\Helmet\Mich\data\Mich_damage.rvmat"}},
						{0.3,{"IMPGMOD\Equipment\Helmet\Mich\data\Mich_damage.rvmat"}},
						{0.0,{"IMPGMOD\Equipment\Helmet\Mich\data\Mich_destruct.rvmat"}}
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

    class IMP_Helmet_Mich_Tan : IMP_Helmet_Mich_Blue_ColorBase 
	{
        scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\Mich\data\Mich_Tan.paa"};
    };
	
	class IMP_Helmet_Mich_Black : IMP_Helmet_Mich_Blue_ColorBase 
	{
        scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\Mich\data\Mich_Black.paa"};
    };
	
	class IMP_Helmet_Mich_Green : IMP_Helmet_Mich_Blue_ColorBase 
	{
        scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\Mich\data\Mich_Green.paa"};
    };
	
	class IMP_Helmet_Mich_EMR : IMP_Helmet_Mich_Blue_ColorBase 
	{
        scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\Mich\data\Mich_EMR.paa"};
    };
	
	class IMP_Helmet_Mich_NWU : IMP_Helmet_Mich_Blue_ColorBase 
	{
        scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\Mich\data\Mich_NWU.paa"};
    };
	
	class IMP_Helmet_Mich_UCP : IMP_Helmet_Mich_Blue_ColorBase 
	{
        scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\Mich\data\Mich_UCP.paa"};
    };
	
	class IMP_Helmet_Mich_MARPAT : IMP_Helmet_Mich_Blue_ColorBase 
	{
        scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\Mich\data\Mich_MARPAT.paa"};
    };
};