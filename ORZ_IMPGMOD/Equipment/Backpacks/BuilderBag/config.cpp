class CfgPatches 
{
	class IMP_Bag_BuilderBag 
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

	class IMP_Bag_BuilderBag_ColorBase : Clothing
	{
		scope = 0;
		RankLevel = 1;
		displayName="$STR_IMP_BuilderBag";
		descriptionShort="$STR_IMP_Bag_Dscr";
		model = "\IMPGMOD\Equipment\Backpacks\BuilderBag\models\Builder_g.p3d";
		inventorySlot[] = {"Back", "Backpack1"};
		itemInfo[] = {"Clothing", "Back"};
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemSize[] = {6, 7};
		quickBarBonus = 5;
		itemsCargoSize[] = {10, 12};
		weight = 2500;
		heatIsolation=0.5;
		varWetMax=0.048999999;
		repairableWithKits[] = {5, 3};
		repairCosts[] = {30.0, 25.0};
		soundAttType = "Outdoor";
		randomQuantity = 4;
		canBeDigged = 1;
		hiddenSelections[] = {"camoflage"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\BuilderBag\data\BuilderBag_co.paa"};
		attachments[] = {"PatchSmall", "Pliers", "Hammer", "HandSaw", "Hatchet", "Shovel"};
		
		class ClothingTypes 
		{
			male = "\IMPGMOD\Equipment\Backpacks\BuilderBag\models\Builder.p3d";
			female = "\IMPGMOD\Equipment\Backpacks\BuilderBag\models\Builder.p3d";
		};
		
		class DamageSystem 
		{
			class GlobalHealth 
			{
				class Health 
				{
					hitpoints = 500;
					transferToAttachmentsCoef = 0.5;
					healthLevels[] = 
					{
						{1, {"IMPGMOD\Equipment\Backpacks\BuilderBag\data\BuilderBag.rvmat"}}, 
						{0.7, {"IMPGMOD\Equipment\Backpacks\BuilderBag\data\BuilderBag.rvmat"}}, 
						{0.5, {"IMPGMOD\Equipment\Backpacks\BuilderBag\data\BuilderBag_damage.rvmat"}}, 
						{0.3, {"IMPGMOD\Equipment\Backpacks\BuilderBag\data\BuilderBag_damage.rvmat"}}, 
						{0, {"IMPGMOD\Equipment\Backpacks\BuilderBag\data\BuilderBag_destruct.rvmat"}}
					};
				};
			};
		};
		
		class AnimEvents 
		{
			class SoundWeapon 
			{
				class pickUpItem_Light 
				{
					soundSet = "pickUpBackPack_Plastic_Light_SoundSet";
					id = 796;
				};
				
				class pickUpItem 
				{
					soundSet = "pickUpBackPack_Plastic_SoundSet";
					id = 797;
				};
				
				class drop 
				{
					soundset = "taloonbag_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	
	class IMP_Bag_BuilderBag : IMP_Bag_BuilderBag_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\BuilderBag\data\BuilderBag_co.paa"};
	};
};