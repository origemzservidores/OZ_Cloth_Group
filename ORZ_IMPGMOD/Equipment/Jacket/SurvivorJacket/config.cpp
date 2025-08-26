class CfgPatches 
{
	class IMP_Jacket_SurvivorJacket
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
	
	class IMP_Jacket_SurvivorJacket_ColorBase : Clothing 
	{
		scope = 0;
		RankLevel = 2;
		displayName = "$STR_IMP_AnnaJacket";
		descriptionShort = "$STR_IMP_AnnaJacketD";
		model = "IMPGMOD\Equipment\Jacket\SurvivorJacket\models\SurvivorJacket_g.p3d";
		inventorySlot[] = {"Body"};
		itemInfo[] = {"Clothing", "Body"};
		weight = 800;
		itemSize[] = {4, 4};
		itemsCargoSize[] = {6, 10};
		quickBarBonus = 1;
		varWetMax = 0.79;
		heatIsolation = 0.7;
		ragQuantity = 4;
		noVest = 0;
		repairableWithKits[] = {5, 2};
		repairCosts[] = {30.0, 25.0};
		soundAttType = "WoolShirt";
		hiddenSelections[] = {"Back", "Front", "Sleeves"};
		
		class ClothingTypes 
		{
			male = "IMPGMOD\Equipment\Jacket\SurvivorJacket\models\SurvivorJacket_m.p3d";
			female = "IMPGMOD\Equipment\Jacket\SurvivorJacket\models\SurvivorJacket_f.p3d";
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
						{1.0, {"IMPGMOD\Equipment\Jacket\SurvivorJacket\data\SurvivorJacketBack.rvmat", "IMPGMOD\Equipment\Jacket\SurvivorJacket\data\SurvivorJacketFront.rvmat", "IMPGMOD\Equipment\Jacket\SurvivorJacket\data\SurvivorJacketSleeves.rvmat"}}, 
						{0.7, {"IMPGMOD\Equipment\Jacket\SurvivorJacket\data\SurvivorJacketBack.rvmat", "IMPGMOD\Equipment\Jacket\SurvivorJacket\data\SurvivorJacketFront.rvmat", "IMPGMOD\Equipment\Jacket\SurvivorJacket\data\SurvivorJacketSleeves.rvmat"}}, 
						{0.5, {"IMPGMOD\Equipment\Jacket\SurvivorJacket\data\SurvivorJacketBack_damage.rvmat", "IMPGMOD\Equipment\Jacket\SurvivorJacket\data\SurvivorJacketFront_damage.rvmat", "IMPGMOD\Equipment\Jacket\SurvivorJacket\data\SurvivorJacketSleeves_damage.rvmat"}}, 
						{0.3, {"IMPGMOD\Equipment\Jacket\SurvivorJacket\data\SurvivorJacketBack_damage.rvmat", "IMPGMOD\Equipment\Jacket\SurvivorJacket\data\SurvivorJacketFront_damage.rvmat", "IMPGMOD\Equipment\Jacket\SurvivorJacket\data\SurvivorJacketSleeves_damage.rvmat"}}, 
						{0.0, {"IMPGMOD\Equipment\Jacket\SurvivorJacket\data\SurvivorJacketBack_destruct.rvmat", "IMPGMOD\Equipment\Jacket\SurvivorJacket\data\SurvivorJacketFront_destruct.rvmat", "IMPGMOD\Equipment\Jacket\SurvivorJacket\data\SurvivorJacketSleeves_destruct.rvmat"}}
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
	
	class IMP_Jacket_SurvivorJacket : IMP_Jacket_SurvivorJacket_ColorBase 
	{
		scope = 2;
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Jacket\SurvivorJacket\data\BodyBack_co.paa", "IMPGMOD\Equipment\Jacket\SurvivorJacket\data\BodyFront_co.paa", "IMPGMOD\Equipment\Jacket\SurvivorJacket\data\SpringSleeves_co.paa"};
	};
};