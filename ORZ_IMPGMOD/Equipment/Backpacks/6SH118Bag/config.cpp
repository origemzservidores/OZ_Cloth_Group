class CfgPatches 
{
	class IMP_Bag_6SHBag 
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
	
	class IMP_Bag_6ShBag_ColorBase : Clothing 
	{
		scope = 0;
		RankLevel = 4;
		displayName = "$STR_IMP_Bag_6sch118";
		descriptionShort = "$STR_IMP_Bag_Dscr";
		model = "IMPGMOD\Equipment\Backpacks\6SH118Bag\models\Bag6SH_g.p3d";
		inventorySlot[] = {"Back", "Backpack1"};
		itemInfo[] = {"Clothing", "Back"};
		simulation = "clothing";
		vehicleClass = "Clothing";
		quickBarBonus = 4;
		itemSize[] = {6, 7};
		itemsCargoSize[] = {10, 10};
		weight = 5600;
		varWetMax=0.048999999;
		heatIsolation=0.5;
		repairableWithKits[] = {5, 3};
		repairCosts[] = {30.0, 25.0};
		soundAttType = "Outdoor";
		randomQuantity = 4;
		canBeDigged = 0;
		hiddenSelections[] = {"camoflage"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\6SH118Bag\data\6sh118_Black_co.paa"};
		attachments[] = {"PatchSmall", "NBCBag", "Canteen"};
		
		class ClothingTypes 
		{
			male = "IMPGMOD\Equipment\Backpacks\6SH118Bag\models\Bag6SH.p3d";
			female = "IMPGMOD\Equipment\Backpacks\6SH118Bag\models\Bag6SH.p3d";
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
						{1, {"IMPGMOD\Equipment\Backpacks\6SH118Bag\data\6sh118.rvmat"}}, 
						{0.7, {"IMPGMOD\Equipment\Backpacks\6SH118Bag\data\6sh118.rvmat"}}, 
						{0.5, {"IMPGMOD\Equipment\Backpacks\6SH118Bag\data\6sh118_damage.rvmat"}}, 
						{0.3, {"IMPGMOD\Equipment\Backpacks\6SH118Bag\data\6sh118_damage.rvmat"}}, 
						{0, {"IMPGMOD\Equipment\Backpacks\6SH118Bag\data\6sh118_destruct.rvmat"}}
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
	
	class IMP_Bag_6ShBag_Black : IMP_Bag_6ShBag_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\6SH118Bag\data\6sh118_Black_co.paa"};
	};
	
	class IMP_Bag_6ShBag_Green : IMP_Bag_6ShBag_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\6SH118Bag\data\6sh118_Green_co.paa"};
	};
	
	class IMP_Bag_6ShBag_Tan : IMP_Bag_6ShBag_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\6SH118Bag\data\6sh118_Tan_co.paa"};
	};
	
	class IMP_Bag_6ShBag_NWU : IMP_Bag_6ShBag_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\6SH118Bag\data\6sh118_NWU.paa"};
	};
	
	class IMP_Bag_6ShBag_UCP : IMP_Bag_6ShBag_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\6SH118Bag\data\6sh118_UCP.paa"};
	};
	
	class IMP_Bag_6ShBag_EMR : IMP_Bag_6ShBag_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\6SH118Bag\data\6sh118_EMR.paa"};
	};
	
	class IMP_Bag_6ShBag_MARPAT : IMP_Bag_6ShBag_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\6SH118Bag\data\6sh118_MARPAT.paa"};
	};
};