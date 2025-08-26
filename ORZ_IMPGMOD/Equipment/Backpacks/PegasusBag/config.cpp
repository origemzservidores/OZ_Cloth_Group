class CfgPatches 
{
	class IMP_Bag_Pegasus 
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
	
	class IMP_Bag_Pegasus_ColorBase : Clothing 
	{
		scope = 0;
		RankLevel = 2;
		displayName = "$STR_IMP_Pegasus";
		descriptionShort = "$STR_IMP_Bag_Dscr";
		model = "\IMPGMOD\Equipment\Backpacks\PegasusBag\models\Pegasus_g.p3d";
		inventorySlot[] = {"Back", "Backpack1"};
		itemInfo[] = {"Clothing", "Back"};
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemSize[] = {6, 7};
		quickBarBonus = 4;
		itemsCargoSize[] = {10, 10};
		weight = 2300;
		varWetMax=0.048999999;
		heatIsolation=0.5;
		repairableWithKits[] = {5, 3};
		repairCosts[] = {30.0, 25.0};
		soundAttType = "Outdoor";
		randomQuantity = 4;
		canBeDigged = 0;
		attachments[] = {"PatchSmall", "Shoulder40", "Chemlight", "PersonalRadio", "Canteen"};
		hiddenSelections[] = {"camoflage"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\PegasusBag\data\Pegasus_co.paa"};
		
		class ClothingTypes 
		{
			male = "\IMPGMOD\Equipment\Backpacks\PegasusBag\models\Pegasus_m.p3d";
			female = "\IMPGMOD\Equipment\Backpacks\PegasusBag\models\Pegasus_m.p3d";
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
						{1, {"IMPGMOD\Equipment\Backpacks\PegasusBag\data\Pegasus.rvmat"}}, 
						{0.7, {"IMPGMOD\Equipment\Backpacks\PegasusBag\data\Pegasus.rvmat"}}, 
						{0.5, {"IMPGMOD\Equipment\Backpacks\PegasusBag\data\Pegasus_damage.rvmat"}}, 
						{0.3, {"IMPGMOD\Equipment\Backpacks\PegasusBag\data\Pegasus_damage.rvmat"}}, 
						{0, {"IMPGMOD\Equipment\Backpacks\PegasusBag\data\Pegasus_destruct.rvmat"}}
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
	
	class IMP_Bag_Pegasus_Black : IMP_Bag_Pegasus_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\PegasusBag\data\Pegasus_black_co.paa"};
	};
	
	class IMP_Bag_Pegasus_Black_Donate : IMP_Bag_Pegasus_ColorBase 
	{
		scope = 2;
		RankLevel = 1;
		itemsCargoSize[] = {10, 16};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\PegasusBag\data\Pegasus_black_co.paa"};
	};
	
	class IMP_Bag_Pegasus_Green : IMP_Bag_Pegasus_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\PegasusBag\data\Pegasus_green_co.paa"};
	};
	
	class IMP_Bag_Pegasus_Grey : IMP_Bag_Pegasus_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\PegasusBag\data\Pegasus_grey_co.paa"};
	};
	
	class IMP_Bag_Pegasus_Tan : IMP_Bag_Pegasus_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\PegasusBag\data\Pegasus_co.paa"};
	};
	
	class IMP_Bag_Pegasus_EMR : IMP_Bag_Pegasus_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\PegasusBag\data\Pegasus_EMR.paa"};
	};
	
	class IMP_Bag_Pegasus_UCP : IMP_Bag_Pegasus_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\PegasusBag\data\Pegasus_UCP.paa"};
	};
	
	class IMP_Bag_Pegasus_NWU : IMP_Bag_Pegasus_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\PegasusBag\data\Pegasus_NWU.paa"};
	};
	
	class IMP_Bag_Pegasus_MARPAT : IMP_Bag_Pegasus_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\PegasusBag\data\Pegasus_MARPAT.paa"};
	};
};