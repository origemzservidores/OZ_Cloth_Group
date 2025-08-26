class CfgPatches 
{
	class IMP_Helmet_Dominator 
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
	
	class IMP_Helmet_Dominator2_ColorBase : Clothing 
	{
		scope = 0;
		RankLevel = 2;
		displayName = "$STR_IMP_Dominator2";
		descriptionShort = "$STR_IMP_Dominator2D";
		attachments[] = {"NVG", "helmetFlashlight", "HPouch", "Visor"};
		model = "\IMPGMOD\Equipment\Helmet\HelmetSystem\models\HSystem_g.p3d";
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
		varWetMax = 0.249;
		heatIsolation = 0.25;
		headSelectionsToHide[] = {"Clipping_Mich2001"};
		hiddenSelections[] = {"camoflage"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\HelmetSystem\data\Helmet_Green_co.paa"};
		
		class ClothingTypes 
		{
			male = "\IMPGMOD\Equipment\Helmet\HelmetSystem\models\HSystem_m.p3d";
			female = "\IMPGMOD\Equipment\Helmet\HelmetSystem\models\HSystem_m.p3d";
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
						{1.0, {"IMPGMOD\Equipment\Helmet\HelmetSystem\data\Helmet.rvmat"}}, 
						{0.7, {"IMPGMOD\Equipment\Helmet\HelmetSystem\data\Helmet.rvmat"}}, 
						{0.5, {"IMPGMOD\Equipment\Helmet\HelmetSystem\data\Helmet_damage.rvmat"}}, 
						{0.3, {"IMPGMOD\Equipment\Helmet\HelmetSystem\data\Helmet_damage.rvmat"}}, 
						{0.0, {"IMPGMOD\Equipment\Helmet\HelmetSystem\data\Helmet_destruct.rvmat"}}
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
					soundSet="pickUpPot_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="BallisticHelmet_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	
	class IMP_Helmet_Dominator2_Green : IMP_Helmet_Dominator2_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\HelmetSystem\data\Helmet_Green_co.paa"};
	};
	
	class IMP_Helmet_Dominator2_Flecktarn : IMP_Helmet_Dominator2_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\HelmetSystem\data\Helmet_Flecktarn_co.paa"};
	};
	
	class IMP_Helmet_Dominator2_Grey : IMP_Helmet_Dominator2_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\HelmetSystem\data\Helmet_Grey_co.paa"};
	};
	
	class IMP_Helmet_Dominator2_Multicam : IMP_Helmet_Dominator2_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\HelmetSystem\data\Helmet_Multicam_co.paa"};
	};
	
	class IMP_Helmet_Dominator2_Tan : IMP_Helmet_Dominator2_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\HelmetSystem\data\Helmet_Tan_co.paa"};
	};
	
	class IMP_Helmet_Dominator2_Urban : IMP_Helmet_Dominator2_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\HelmetSystem\data\Helmet_Urban_co.paa"};
	};
	
	class IMP_Helmet_Dominator2_WD : IMP_Helmet_Dominator2_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\HelmetSystem\data\Helmet_WD_co.paa"};
	};
	
	class IMP_Helmet_Dominator2_UCP : IMP_Helmet_Dominator2_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\HelmetSystem\data\Helmet_UCP.paa"};
	};
	
	class IMP_Helmet_Dominator2_EMR : IMP_Helmet_Dominator2_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\HelmetSystem\data\Helmet_EMR.paa"};
	};
	
	class IMP_Helmet_Dominator2_NWU : IMP_Helmet_Dominator2_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\HelmetSystem\data\Helmet_NWU.paa"};
	};
	
	class IMP_Helmet_Dominator2_MARPAT : IMP_Helmet_Dominator2_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\HelmetSystem\data\Helmet_MARPAT.paa"};
	};
	
	class IMP_Helmet_Heavy_Dominator2_ColorBase : Clothing 
	{
		scope = 0;
		RankLevel = 3;
		displayName = "$STR_IMP_Dominator2H";
		descriptionShort = "$STR_IMP_Dominator2DH";
		attachments[] = {"NVG", "helmetFlashlight", "HPouch", "Visor"};
		model = "\IMPGMOD\Equipment\Helmet\HelmetSystem\models\FHSystem_g.p3d";
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
		varWetMax = 0.249;
		heatIsolation = 0.25;
		headSelectionsToHide[] = {"Clipping_Mich2001"};
		hiddenSelections[] = {"camoflage", "Mandible"};
		
		class ClothingTypes 
		{
			male = "\IMPGMOD\Equipment\Helmet\HelmetSystem\models\FHSystem_m.p3d";
			female = "\IMPGMOD\Equipment\Helmet\HelmetSystem\models\FHSystem_m.p3d";
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
						{1.0, {"IMPGMOD\Equipment\Helmet\HelmetSystem\data\Helmet.rvmat"}}, 
						{0.7, {"IMPGMOD\Equipment\Helmet\HelmetSystem\data\Helmet.rvmat"}}, 
						{0.5, {"IMPGMOD\Equipment\Helmet\HelmetSystem\data\Helmet_damage.rvmat"}}, 
						{0.3, {"IMPGMOD\Equipment\Helmet\HelmetSystem\data\Helmet_damage.rvmat"}}, 
						{0.01, {"IMPGMOD\Equipment\Helmet\HelmetSystem\data\Helmet_destruct.rvmat"}}
					};
				};
			};
			
			class GlobalArmor {
				class Projectile {
					class Health {
						damage = 0.2;
					};
					
					class Blood {
						damage = 0.2;
					};
					
					class Shock {
						damage = 0.2;
					};
				};
				
				class Melee {
					class Health {
						damage = 0.2;
					};
					
					class Blood {
						damage = 0.2;
					};
					
					class Shock {
						damage = 0.2;
					};
				};
				
				class Infected {
					class Health {
						damage = 0.2;
					};
					
					class Blood {
						damage = 0.2;
					};
					
					class Shock {
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
					soundSet="pickUpPot_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="BallisticHelmet_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	
	class IMP_Helmet_Heavy_Dominator2_Green : IMP_Helmet_Heavy_Dominator2_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\HelmetSystem\data\Helmet_Green_co.paa", "IMPGMOD\Equipment\Helmet\Attachments\Mandible\data\Mandible_Green_co.paa"};
	};
	
	class IMP_Helmet_Heavy_Dominator2_Flecktarn : IMP_Helmet_Heavy_Dominator2_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\IMPGMOD\Equipment\Helmet\HelmetSystem\data\Helmet_Flecktarn_co.paa", "IMPGMOD\Equipment\Helmet\Attachments\Mandible\data\Mandible_Flecktarn_co.paa"};
	};
	
	class IMP_Helmet_Heavy_Dominator2_Grey : IMP_Helmet_Heavy_Dominator2_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\IMPGMOD\Equipment\Helmet\HelmetSystem\data\Helmet_Grey_co.paa", "IMPGMOD\Equipment\Helmet\Attachments\Mandible\data\Mandible_Grey_co.paa"};
	};
	
	class IMP_Helmet_Heavy_Dominator2_Multicam : IMP_Helmet_Heavy_Dominator2_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\IMPGMOD\Equipment\Helmet\HelmetSystem\data\Helmet_Multicam_co.paa", "IMPGMOD\Equipment\Helmet\Attachments\Mandible\data\Mandible_Multicam_co.paa"};
	};
	
	class IMP_Helmet_Heavy_Dominator2_Tan : IMP_Helmet_Heavy_Dominator2_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\IMPGMOD\Equipment\Helmet\HelmetSystem\data\Helmet_Tan_co.paa", "IMPGMOD\Equipment\Helmet\Attachments\Mandible\data\Mandible_Tan_co.paa"};
	};
	
	class IMP_Helmet_Heavy_Dominator2_Urban : IMP_Helmet_Heavy_Dominator2_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\IMPGMOD\Equipment\Helmet\HelmetSystem\data\Helmet_Urban_co.paa", "IMPGMOD\Equipment\Helmet\Attachments\Mandible\data\Mandible_Urban_co.paa"};
	};
	
	class IMP_Helmet_Heavy_Dominator2_WD : IMP_Helmet_Heavy_Dominator2_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\IMPGMOD\Equipment\Helmet\HelmetSystem\data\Helmet_WD_co.paa", "IMPGMOD\Equipment\Helmet\Attachments\Mandible\data\Mandible_WD_co.paa"};
	};
	
	class IMP_Helmet_Heavy_Dominator2_UCP : IMP_Helmet_Heavy_Dominator2_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\IMPGMOD\Equipment\Helmet\HelmetSystem\data\Helmet_UCP.paa", "IMPGMOD\Equipment\Helmet\Attachments\Mandible\data\Mandible_UCP.paa"};
	};
	
	class IMP_Helmet_Heavy_Dominator2_EMR : IMP_Helmet_Heavy_Dominator2_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\IMPGMOD\Equipment\Helmet\HelmetSystem\data\Helmet_EMR.paa", "IMPGMOD\Equipment\Helmet\Attachments\Mandible\data\Mandible_EMR.paa"};
	};
	
	class IMP_Helmet_Heavy_Dominator2_NWU : IMP_Helmet_Heavy_Dominator2_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\IMPGMOD\Equipment\Helmet\HelmetSystem\data\Helmet_NWU.paa", "IMPGMOD\Equipment\Helmet\Attachments\Mandible\data\Mandible_NWU.paa"};
	};
	
	class IMP_Helmet_Heavy_Dominator2_MARPAT : IMP_Helmet_Heavy_Dominator2_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\IMPGMOD\Equipment\Helmet\HelmetSystem\data\Helmet_MARPAT.paa", "IMPGMOD\Equipment\Helmet\Attachments\Mandible\data\Mandible_MARPAT.paa"};
	};
};