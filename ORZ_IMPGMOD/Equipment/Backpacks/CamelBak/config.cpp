class CfgPatches {
	class IMP_Bag_CamelBak {
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
	
	class IMP_Bag_CamelBak_ColorBase : Clothing {
		scope = 0;
		RankLevel = 2;
		displayName = "$STR_IMP_CamelBag";
		descriptionShort = "$STR_IMP_Bag_Dscr";
		model = "IMPGMOD\Equipment\Backpacks\CamelBak\models\CamelBak_g.p3d";
		inventorySlot[] = {"Back", "Backpack1"};
		itemInfo[] = {"Clothing", "Back"};
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemSize[] = {6, 7};
		quickBarBonus = 2;
		itemsCargoSize[] = {7, 9};
		weight = 4600;
		varWetMax=0.048999999;
		heatIsolation=0.5;
		repairableWithKits[] = {5, 3};
		repairCosts[] = {30.0, 25.0};
		soundAttType = "Outdoor";
		randomQuantity = 4;
		canBeDigged = 0;
		attachments[] = {"PatchSmall", "Chemlight","PersonalRadio", "Canteen"};
		hiddenSelections[] = {"camoflage"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\CamelBak\data\CamelBak_black.paa"};
		
		class ClothingTypes {
			male = "IMPGMOD\Equipment\Backpacks\CamelBak\models\CamelBak.p3d";
			female = "IMPGMOD\Equipment\Backpacks\CamelBak\models\CamelBak.p3d";
		};
		
		class DamageSystem {
			class GlobalHealth {
				class Health {
					hitpoints = 500;
					transferToAttachmentsCoef = 0.5;
					healthLevels[] = 
					{
						{1, {"IMPGMOD\Equipment\Backpacks\CamelBak\data\CamelBak.rvmat"}}, 
						{0.7, {"IMPGMOD\Equipment\Backpacks\CamelBak\data\CamelBak.rvmat"}}, 
						{0.5, {"IMPGMOD\Equipment\Backpacks\CamelBak\data\CamelBak_damage.rvmat"}}, 
						{0.3, {"IMPGMOD\Equipment\Backpacks\CamelBak\data\CamelBak_damage.rvmat"}}, 
						{0, {"IMPGMOD\Equipment\Backpacks\CamelBak\data\CamelBak_destruct.rvmat"}}
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
	
	class IMP_Bag_CamelBak_Black : IMP_Bag_CamelBak_ColorBase {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\CamelBak\data\CamelBak_black.paa"};
	};
	
	class IMP_Bag_CamelBak_Green : IMP_Bag_CamelBak_ColorBase {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\CamelBak\data\CamelBak_green.paa"};
	};
	
	class IMP_Bag_CamelBak_Tan : IMP_Bag_CamelBak_ColorBase {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\CamelBak\data\CamelBak_tan.paa"};
	};
	
	class IMP_Bag_CamelBak_EMR : IMP_Bag_CamelBak_ColorBase {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\CamelBak\data\CamelBak_emr.paa"};
	};
	
	class IMP_Bag_CamelBak_NWU : IMP_Bag_CamelBak_ColorBase {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\CamelBak\data\CamelBak_nwu.paa"};
	};
	
	class IMP_Bag_CamelBak_UCP : IMP_Bag_CamelBak_ColorBase {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\CamelBak\data\CamelBak_ucp.paa"};
	};
	
	class IMP_Bag_CamelBak_MARPAT : IMP_Bag_CamelBak_ColorBase {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\CamelBak\data\CamelBak_marpat.paa"};
	};
};
