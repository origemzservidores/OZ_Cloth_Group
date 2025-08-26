class CfgPatches 
{
	class IMP_Jacket_Gorka
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
	
	class IMP_Jacket_Gorka_ColorBase : Clothing 
	{
		scope = 0;
		displayName="$STR_CfgVehicles_GorkaEJacket_ColorBase0";
		descriptionShort="$STR_CfgVehicles_GorkaEJacket_ColorBase1";
		model = "IMPGMOD\Equipment\Jacket\Gorka\models\GorkaJacket_g.p3d";
		inventorySlot[] = {"Body"};
		itemInfo[] = {"Clothing", "Body"};
		weight = 800;
		itemSize[] = {4, 4};
		itemsCargoSize[] = {6, 7};
		quickBarBonus = 1;
		varWetMax = 0.79;
		heatIsolation = 0.7;
		ragQuantity = 4;
		noVest = 0;
		repairableWithKits[] = {5, 2};
		repairCosts[] = {30.0, 25.0};
		soundAttType = "WoolShirt";
		hiddenSelections[] = {"camoflage"};
		
		class ClothingTypes 
		{
			male = "IMPGMOD\Equipment\Jacket\Gorka\models\GorkaJacket_m.p3d";
			female = "IMPGMOD\Equipment\Jacket\Gorka\models\GorkaJacket_f.p3d";
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
						{1.0, {"IMPGMOD\Equipment\Jacket\Gorka\data\Gorka.rvmat"}}, 
						{0.7, {"IMPGMOD\Equipment\Jacket\Gorka\data\Gorka.rvmat"}}, 
						{0.5, {"IMPGMOD\Equipment\Jacket\Gorka\data\Gorka_damage.rvmat"}}, 
						{0.3, {"IMPGMOD\Equipment\Jacket\Gorka\data\Gorka_damage.rvmat"}}, 
						{0.0, {"IMPGMOD\Equipment\Jacket\Gorka\data\Gorka_destruct.rvmat"}}
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
	
	class IMP_Jacket_Gorka_Tan : IMP_Jacket_Gorka_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Jacket\Gorka\data\Gorka_base_co.paa"};
	};
	
	class IMP_Jacket_Gorka_Black : IMP_Jacket_Gorka_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Jacket\Gorka\data\Gorka_black_co.paa"};
	};
	
	class IMP_Jacket_Gorka_Forest : IMP_Jacket_Gorka_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Jacket\Gorka\data\Gorka_forest_co.paa"};
	};
	
	class IMP_Jacket_Gorka_Jungle : IMP_Jacket_Gorka_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Jacket\Gorka\data\Gorka_jungle_co.paa"};
	};
	
	class IMP_Jacket_Gorka_Police : IMP_Jacket_Gorka_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Jacket\Gorka\data\Gorka_police_co.paa"};
	};
	
	class IMP_Jacket_Gorka_Surpat : IMP_Jacket_Gorka_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Jacket\Gorka\data\Gorka_surpat_co.paa"};
	};
	
	class IMP_Jacket_Gorka_Winter : IMP_Jacket_Gorka_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Jacket\Gorka\data\Gorka_winter_co.paa"};
	};
};