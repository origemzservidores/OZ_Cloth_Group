class CfgPatches 
{
	class IMP_Mask_SWAT 
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
	
	class IMP_Mask_SWAT_ColorBase : Clothing 
	{
		scope = 0;

		displayName = "$STR_IMP_SWATH";
		descriptionShort = "$STR_IMP_SWATHD";
		model = "\IMPGMOD\Equipment\Helmet\SWATMask\models\SWATMask_g.p3d";
		inventorySlot[] = {"Headgear", "Helmet1", "Helmet2"};
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing", "Headgear"};
		repairableWithKits[] = {8, 6};
		repairCosts[] = {30.0, 25.0};
		rotationFlags = 2;
		quickBarBonus=1;
		weight = 1800;
		itemSize[] = {4, 4};
		noMask = 1;
		noNVStrap = 1;
		varWetMax=0.048999999;
		heatIsolation=0.1;
		visibilityModifier = 0.9;
		noHelmet = 1;
		noEyewear = 1;
		quantityBar = 1;
		stackedUnit = "ml";
		varQuantityDestroyOnMin = 0;
		headSelectionsToHide[] = {"Clipping_Gasmask"};
		hiddenSelections[] = {"camoflage", "camoflagehelm"};
		
		class DamageSystem 
		{
			class GlobalHealth 
			{
				class Health 
				{
					hitpoints = 500;
					healthLevels[] = 
					{
						{1.0, {"IMPGMOD\Equipment\Helmet\SWATHelmet\data\Helmet.rvmat", "IMPGMOD\Equipment\Helmet\SWATMask\data\Mask.rvmat"}}, 
						{0.7, {"IMPGMOD\Equipment\Helmet\SWATHelmet\data\Helmet.rvmat", "IMPGMOD\Equipment\Helmet\SWATMask\data\Mask.rvmat"}}, 
						{0.5, {"IMPGMOD\Equipment\Helmet\SWATHelmet\data\Helmet_damage.rvmat", "IMPGMOD\Equipment\Helmet\SWATMask\data\Mask_damage.rvmat"}}, 
						{0.3, {"IMPGMOD\Equipment\Helmet\SWATHelmet\data\Helmet_damage.rvmat", "IMPGMOD\Equipment\Helmet\SWATMask\data\Mask_damage.rvmat"}}, 
						{0.0, {"IMPGMOD\Equipment\Helmet\SWATHelmet\data\Helmet_destruct.rvmat", "IMPGMOD\Equipment\Helmet\SWATMask\data\Mask_destruct.rvmat"}}
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
						damage = 0;
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
						damage = 0;
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
						damage = 0;
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
						damage = 0;
					};
					
					class Shock 
					{
						damage = 0.4;
					};
				};
			};
		};	
		
		class Protection 
		{
			biological = 1;
			chemical = 1;
		};
		
		class ClothingTypes 
		{
			male = "IMPGMOD\Equipment\Helmet\SWATMask\models\SWATMask_m.p3d";
			female = "IMPGMOD\Equipment\Helmet\SWATMask\models\SWATMask_f.p3d";
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
	
	class IMP_Mask_SWAT : IMP_Mask_SWAT_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\SWATMask\data\GasMask_ca.paa", "IMPGMOD\Equipment\Helmet\SWATHelmet\data\Helmet_ca.paa"};
	};
	
	class IMP_Mask_SWATMask1_ColorBase : Clothing 
	{
		scope = 0;
		displayName = "$STR_IMP_SWATH";
		descriptionShort = "$STR_IMP_SWATHD";
		model = "\IMPGMOD\Equipment\Helmet\SWATMask\models\SWATMask1_g.p3d";
		inventorySlot[] = {"Mask"};
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing", "Mask"};
		repairableWithKits[] = {8, 6};
		repairCosts[] = {30.0, 25.0};
		rotationFlags = 2;
		quickBarBonus=1;
		weight = 1800;
		itemSize[] = {4, 4};
		noMask = 1;
		noNVStrap = 1;
		varWetMax=0.048999999;
		heatIsolation=0.1;
		visibilityModifier = 0.9;
		noHelmet = 1;
		noEyewear = 1;
		quantityBar = 1;
		stackedUnit = "ml";
		varQuantityDestroyOnMin = 0;
		headSelectionsToHide[] = {"Clipping_Gasmask"};
		hiddenSelections[] = {"camoflage"};
		
		class DamageSystem 
		{
			class GlobalHealth 
			{
				class Health 
				{
					hitpoints = 500;
					healthLevels[] = 
					{
						{1.0, {"IMPGMOD\Equipment\Helmet\SWATMask\data\Mask.rvmat"}}, 
						{0.7, {"IMPGMOD\Equipment\Helmet\SWATMask\data\Mask.rvmat"}}, 
						{0.5, {"IMPGMOD\Equipment\Helmet\SWATMask\data\Mask_damage.rvmat"}}, 
						{0.3, {"IMPGMOD\Equipment\Helmet\SWATMask\data\Mask_damage.rvmat"}}, 
						{0.0, {"IMPGMOD\Equipment\Helmet\SWATMask\data\Mask_destruct.rvmat"}}
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
						damage = 0;
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
						damage = 0;
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
						damage = 0;
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
						damage = 0;
					};
					
					class Shock 
					{
						damage = 0.4;
					};
				};
			};
		};	
		
		class ClothingTypes 
		{
			male = "IMPGMOD\Equipment\Helmet\SWATMask\models\SWATMask1_m.p3d";
			female = "IMPGMOD\Equipment\Helmet\SWATMask\models\SWATMask1_f.p3d";
		};
		
		class Protection 
		{
			biological = 1;
			chemical = 1;
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
	
	class IMP_Mask_SWATMask1 : IMP_Mask_SWATMask1_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\SWATMask\data\GasMask_ca.paa"};
	};
};
