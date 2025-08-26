class CfgPatches 
{
	class IMP_Jacket_SWAT
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data", "DZ_Characters", "DZ_Scripts"};
	};
};

class cfgVehicles 
{
	class Clothing_Base;
	class Clothing: Clothing_Base {};
	
	class IMP_Jacket_SWAT_ColorBase : Clothing 
	{
		scope = 0;
		RankLevel = 2;
		displayName = "$STR_IMP_SWATJACKET";
		descriptionShort = "$STR_IMP_SWATJACKETD";
		model = "IMPGMOD\Equipment\Jacket\SWATShirt\models\SWATS_g.p3d";
		inventorySlot[] = {"Body"};
		itemInfo[] = {"Clothing", "Body"};
		weight = 800;
		itemSize[] = {4, 4};
		itemsCargoSize[] = {6, 4};
		quickBarBonus = 1;
		varWetMax = 0.79;
		heatIsolation = 0.7;
		ragQuantity = 4;
		noVest = 0;
		repairableWithKits[] = {5, 2};
		repairCosts[] = {30.0, 25.0};
		soundAttType = "WoolShirt";
		hiddenSelections[] = {"camoflage", "Knee"};
		
		class ClothingTypes 
		{
			male = "IMPGMOD\Equipment\Jacket\SWATShirt\models\SWATS_m.p3d";
			female = "IMPGMOD\Equipment\Jacket\SWATShirt\models\SWATS_f.p3d";
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
						{1.0, {"IMPGMOD\Equipment\Jacket\SWATShirt\data\SWATShirt.rvmat"}}, 
						{0.7, {"IMPGMOD\Equipment\Jacket\SWATShirt\data\SWATShirt.rvmat"}}, 
						{0.5, {"IMPGMOD\Equipment\Jacket\SWATShirt\data\SWATShirt_damage.rvmat"}}, 
						{0.3, {"IMPGMOD\Equipment\Jacket\SWATShirt\data\SWATShirt_damage.rvmat"}}, 
						{0.0, {"IMPGMOD\Equipment\Jacket\SWATShirt\data\SWATShirt_destruct.rvmat"}}
					};
				};
			};
			
			class GlobalArmor 
			{
				class Melee 
				{
					class Health 
					{
						damage = 1;
					};
					class Blood 
					{
						damage = 1;
					};
					class Shock 
					{
						damage = 1;
					};
				};
				
				class Infected 
				{
					class Health 
					{
						damage = 1;
					};
					class Blood 
					{
						damage = 1;
					};
					class Shock 
					{
						damage = 1;
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
					soundSet = "Shirt_pickup_SoundSet";
					id = 797;
				};
				class drop 
				{
					soundset = "Shirt_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	
	class IMP_Jacket_SWAT : IMP_Jacket_SWAT_ColorBase 
	{
		scope = 2;
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Jacket\SWATShirt\data\SWAT_co.paa", "IMPGMOD\Equipment\Jacket\SWATShirt\data\Knee_co.paa"};
	};
};