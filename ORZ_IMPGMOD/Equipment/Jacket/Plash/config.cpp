class CfgPatches 
{
	class IMP_Jacket_Raincoat
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
	
	class IMP_Jacket_Raincoat_ColorBase : Clothing 
	{
		scope = 0;
		RankLevel = 4;
		displayName = "$STR_IMP_RainCoat";
		descriptionShort = "$STR_IMP_RainCoatD";
		model = "IMPGMOD\Equipment\Jacket\Plash\models\plash_g.p3d";
		inventorySlot[] = {"Body"};
		itemInfo[] = {"Clothing", "Body"};
		weight = 1400;
		itemSize[] = {6, 6};
		itemsCargoSize[] = {10, 12};
		quickBarBonus = 1;
		varWetMax = 0.79;
		heatIsolation = 0.7;
		ragQuantity = 4;
		noVest = 0;
		repairableWithKits[] = {5, 2};
		repairCosts[] = {30.0, 25.0};
		soundAttType = "WoolShirt";
		hiddenSelections[] = {"camoflage1", "camoflage2"};
		
		class ClothingTypes 
		{
			male = "IMPGMOD\Equipment\Jacket\Plash\models\plash_m.p3d";
			female = "IMPGMOD\Equipment\Jacket\Plash\models\plash_m.p3d";
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
						{1.0, {"IMPGMOD\Equipment\Jacket\Plash\data\plash.rvmat"}}, 
						{0.7, {"IMPGMOD\Equipment\Jacket\Plash\data\plash.rvmat"}}, 
						{0.5, {"IMPGMOD\Equipment\Jacket\Plash\data\plash_damage.rvmat"}}, 
						{0.3, {"IMPGMOD\Equipment\Jacket\Plash\data\plash_damage.rvmat"}}, 
						{0.0, {"IMPGMOD\Equipment\Jacket\Plash\data\plash_destruct.rvmat"}}
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
	
	class IMP_Jacket_Raincoat : IMP_Jacket_Raincoat_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Jacket\Plash\data\plash.paa", "IMPGMOD\Equipment\Jacket\Plash\data\bronya.paa"};
	};
};