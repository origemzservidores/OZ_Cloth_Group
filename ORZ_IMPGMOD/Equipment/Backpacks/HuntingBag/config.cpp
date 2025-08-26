class CfgPatches 
{
	class IMP_Bag_HuntingBag 
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = 
		{
			"DZ_Data", 
			"DZ_Characters", 
			"DZ_Scripts",
			"DZ_Characters_Vests"
		};
	};
};

class cfgVehicles 
{
	class Clothing_Base;
	class Clothing: Clothing_Base {};
	
	class IMP_Bag_HuntingBag_ColorBase : Clothing 
	{
		scope = 0;
		RankLevel = 2;
		displayName = "$STR_IMP_HuntingBag";
		descriptionShort = "$STR_IMP_Bag_Dscr";
		model = "IMPGMOD\Equipment\Backpacks\HuntingBag\models\HuntingBag_g.p3d";
		attachments[] = {"PatchSmall", "Chemlight", "NBCBag", "PersonalRadio", "VestHolster"};
		inventorySlot[] = {"Back", "Backpack1"};
		itemInfo[] = {"Clothing", "Back"};
		rotationFlags=16;
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemSize[] = {6, 7};
		quickBarBonus = 5;
		itemsCargoSize[] = {10, 12};
		weight = 2600;
		varWetMax=0.249;
		heatIsolation=1;
		repairableWithKits[] = {5, 3};
		repairCosts[] = {30.0, 25.0};
		soundAttType = "Outdoor";
		randomQuantity = 4;
		canBeDigged = 0;
		hiddenSelections[] = {"camoflage"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\HuntingBag\data\HuntingBag_tan_co.paa"};
		
		class ClothingTypes 
		{
			male = "IMPGMOD\Equipment\Backpacks\HuntingBag\models\HuntingBag_m.p3d";
			female = "IMPGMOD\Equipment\Backpacks\HuntingBag\models\HuntingBag_m.p3d";
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
						{1, {"DZ\Characters\backpacks\data\tortila.rvmat"}}, 
						{0.7, {"DZ\Characters\backpacks\data\tortila.rvmat"}}, 
						{0.5, {"DZ\Characters\backpacks\data\tortila_damage.rvmat"}}, 
						{0.3, {"DZ\Characters\backpacks\data\tortila_damage.rvmat"}}, 
						{0, {"DZ\Characters\backpacks\data\tortila_destruct.rvmat"}}
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
	
	class IMP_Bag_HuntingBag_Tan : IMP_Bag_HuntingBag_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\HuntingBag\data\HuntingBag_tan_co.paa"};
	};
	
	class IMP_Bag_HuntingBag_Black : IMP_Bag_HuntingBag_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\HuntingBag\data\HuntingBag_black_co.paa"};
	};
	
	class IMP_Bag_HuntingBag_Green : IMP_Bag_HuntingBag_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\HuntingBag\data\HuntingBag_green_co.paa"};
	};
	
	class IMP_Bag_HuntingBag_EMR : IMP_Bag_HuntingBag_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\HuntingBag\data\HuntingBag_EMR.paa"};
	};
	
	class IMP_Bag_HuntingBag_NWU : IMP_Bag_HuntingBag_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\HuntingBag\data\HuntingBag_NWU.paa"};
	};
	
	class IMP_Bag_HuntingBag_UCP : IMP_Bag_HuntingBag_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\HuntingBag\data\HuntingBag_UCP.paa"};
	};
	
	class IMP_Bag_HuntingBag_MARPAT : IMP_Bag_HuntingBag_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\HuntingBag\data\HuntingBag_MARPAT.paa"};
	};
};
