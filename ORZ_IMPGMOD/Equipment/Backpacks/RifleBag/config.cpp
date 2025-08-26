class CfgPatches 
{
	class IMP_Bag_Rifle 
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
	
	class IMP_Bag_Rifle_ColorBase : Clothing 
	{
		scope = 0;
		RankLevel = 3;
		displayName = "$STR_IMP_RifleBag";
		descriptionShort = "$STR_IMP_Bag_Dscr";
		model = "IMPGMOD\Equipment\Backpacks\RifleBag\models\WeaponBag_g.p3d";
		attachments[] = {"PatchSmall", "Shoulder40", "Shoulder50", "Shoulder51", "Shoulder52", "Shoulder53", "Shoulder54"};
		inventorySlot[] = {"Back", "Backpack1"};
		itemInfo[] = {"Clothing", "Back"};
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemSize[] = {6, 7};
		quickBarBonus = 5;
		itemsCargoSize[] = {0, 0};
		weight = 5600;
		varWetMax=0.048999999;
		heatIsolation=0.5;
		repairableWithKits[] = {5, 3};
		repairCosts[] = {30.0, 25.0};
		soundAttType = "Outdoor";
		randomQuantity = 4;
		canBeDigged = 0;
		hiddenSelections[]={"camoflage"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\RifleBag\data\WeaponBag_Black.paa"};
		
		class ClothingTypes 
		{
			male = "IMPGMOD\Equipment\Backpacks\RifleBag\models\WeaponBag_m.p3d";
			female = "IMPGMOD\Equipment\Backpacks\RifleBag\models\WeaponBag_m.p3d";
		};		
		
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					transferToAttachmentsCoef = 0.5;
					healthLevels[] = 
					{
						{1,{"IMPGMOD\Equipment\Backpacks\RifleBag\data\weapon_bag.rvmat"}},
						{0.7,{"IMPGMOD\Equipment\Backpacks\RifleBag\data\weapon_bag.rvmat"}},
						{0.5,{"IMPGMOD\Equipment\Backpacks\RifleBag\data\weapon_bag_damage.rvmat"}},
						{0.3,{"IMPGMOD\Equipment\Backpacks\RifleBag\data\weapon_bag_damage.rvmat"}},
						{0,{"IMPGMOD\Equipment\Backpacks\RifleBag\data\weapon_bag_destruct.rvmat"}}
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
	
	class IMP_Bag_Rifle_Black: IMP_Bag_Rifle_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\RifleBag\data\WeaponBag_Black.paa"};
	};
	
	class IMP_Bag_Rifle_Grey: IMP_Bag_Rifle_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\RifleBag\data\WeaponBag_Grey.paa"};
	};
	
	class IMP_Bag_Rifle_Tan: IMP_Bag_Rifle_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\RifleBag\data\WeaponBag_Tan.paa"};
	};
	
	class IMP_Bag_Rifle_Green: IMP_Bag_Rifle_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\RifleBag\data\WeaponBag_Green.paa"};
	};
	
	class IMP_Bag_Rifle_EMR: IMP_Bag_Rifle_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\RifleBag\data\WeaponBag_EMR.paa"};
	};
	
	class IMP_Bag_Rifle_NWU: IMP_Bag_Rifle_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\RifleBag\data\WeaponBag_NWU.paa"};
	};
	
	class IMP_Bag_Rifle_UCP: IMP_Bag_Rifle_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\RifleBag\data\WeaponBag_UCP.paa"};
	};
	class IMP_Bag_Rifle_MARPAT: IMP_Bag_Rifle_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\RifleBag\data\WeaponBag_MARPAT.paa"};
	};
};	