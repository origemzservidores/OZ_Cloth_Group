class CfgPatches 
{
	class IMP_Bag_Adventure 
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
	
	class IMP_Bag_Adventure_ColorBase : Clothing 
	{
		scope = 0;
		RankLevel = 1;
		displayName = "$STR_IMP_AdvBag";
		descriptionShort = "$STR_IMP_Bag_Dscr";
		model = "\IMPGMOD\Equipment\Backpacks\AdventureBackPack\models\Backpack_Adventure_g.p3d";
		attachments[] = {"PatchSmall", "Chemlight","PersonalRadio","Canteen","Knife1"};
		inventorySlot[] = {"Back", "Backpack1"};
		itemInfo[] = {"Clothing", "Back"};
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemSize[] = {6, 7};
		quickBarBonus = 1;
		rotationFlags=16;
		itemsCargoSize[] = {6, 7};
		weight = 1300;
		varWetMax=0.249;
		heatIsolation = 0.5;
		repairableWithKits[] = {5, 3};
		repairCosts[] = {30.0, 25.0};
		soundAttType = "Outdoor";
		randomQuantity = 4;
		canBeDigged = 0;	
		hiddenSelections[] = {"camoflage"};
		hiddenSelectionsTextures[] = 
		{"IMPGMOD\Equipment\Backpacks\AdventureBackPack\data\Backpack_7_BaseColor_Green.paa"};
		
		class ClothingTypes 
		{
			male = "\IMPGMOD\Equipment\Backpacks\AdventureBackPack\models\Backpack_Adventure.p3d";
			female = "\IMPGMOD\Equipment\Backpacks\AdventureBackPack\models\Backpack_Adventure.p3d";
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
						{1, {"IMPGMOD\Equipment\Backpacks\AdventureBackPack\data\Backpack_Adventure.rvmat"}}, 
						{0.7, {"IMPGMOD\Equipment\Backpacks\AdventureBackPack\data\Backpack_Adventure.rvmat"}}, 
						{0.5, {"IMPGMOD\Equipment\Backpacks\AdventureBackPack\data\Backpack_Adventure_damage.rvmat"}}, 
						{0.3, {"IMPGMOD\Equipment\Backpacks\AdventureBackPack\data\Backpack_Adventure_damage.rvmat"}}, 
						{0, {"IMPGMOD\Equipment\Backpacks\AdventureBackPack\data\Backpack_Adventure_destruct.rvmat"}}
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
	
	class IMP_Bag_Adventure_Green	: IMP_Bag_Adventure_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\AdventureBackPack\data\Backpack_7_BaseColor_Green.paa"};
	};
	class IMP_Bag_Adventure_Black	: IMP_Bag_Adventure_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\AdventureBackPack\data\Backpack_7_BaseColor_Black.paa"};
	};
	class IMP_Bag_Adventure_Tan	: IMP_Bag_Adventure_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\AdventureBackPack\data\Backpack_7_BaseColor_Tan.paa"};
	};
	class IMP_Bag_Adventure_EMR	: IMP_Bag_Adventure_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\AdventureBackPack\data\Backpack_7_BaseColor_EMR.paa"};
	};
	class IMP_Bag_Adventure_EMR_Donate	: IMP_Bag_Adventure_ColorBase 
	{
		scope = 2;
		RankLevel = 1;
		itemsCargoSize[] = {10, 12};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\AdventureBackPack\data\Backpack_7_BaseColor_EMR.paa"};
	};
	class IMP_Bag_Adventure_MARPAT	: IMP_Bag_Adventure_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\AdventureBackPack\data\Backpack_7_BaseColor_MARPAT.paa"};
	};
	class IMP_Bag_Adventure_UCP	: IMP_Bag_Adventure_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\AdventureBackPack\data\Backpack_7_BaseColor_UCP.paa"};
	};
	class IMP_Bag_Adventure_NWU	: IMP_Bag_Adventure_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\AdventureBackPack\data\Backpack_7_BaseColor_NWU.paa"};
	};
};
