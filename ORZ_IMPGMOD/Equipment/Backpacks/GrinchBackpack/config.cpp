class CfgPatches 
{
	class IMP_Bag_GrinchBackpack
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
	
	class IMP_Bag_GrinchBackpack_ColorBase : Clothing 
	{
		scope = 0;
		RankLevel = 1;
		displayName = "Тактический рюкзак Гринч";
		descriptionShort = "";
		model = "IMPGMOD\Equipment\Backpacks\GrinchBackpack\models\GrinchBackpack_G.p3d";
		attachments[] = {};
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
		{"IMPGMOD\Equipment\Backpacks\GrinchBackpack\data\GrinchBackpack_co.paa"};
		
		class ClothingTypes 
		{
			male = "IMPGMOD\Equipment\Backpacks\GrinchBackpack\models\GrinchBackpack.p3d";
			female = "IMPGMOD\Equipment\Backpacks\GrinchBackpack\models\GrinchBackpack.p3d";
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
						{1, {"IMPGMOD\Equipment\Backpacks\GrinchBackpack\data\GrinchBackpack.rvmat"}}, 
						{0.7, {"IMPGMOD\Equipment\Backpacks\GrinchBackpack\data\GrinchBackpack.rvmat"}}, 
						{0.5, {"IMPGMOD\Equipment\Backpacks\GrinchBackpack\data\GrinchBackpack_damage.rvmat"}}, 
						{0.3, {"IMPGMOD\Equipment\Backpacks\GrinchBackpack\data\GrinchBackpack_damage.rvmat"}}, 
						{0, {"IMPGMOD\Equipment\Backpacks\GrinchBackpack\data\GrinchBackpack_destruct.rvmat"}}
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
	
	class IMP_Bag_GrinchBackpack_Green	: IMP_Bag_GrinchBackpack_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\GrinchBackpack\data\GrinchBackpack_Green_co.paa"};
	};
	class IMP_Bag_GrinchBackpack_Black	: IMP_Bag_GrinchBackpack_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\GrinchBackpack\data\GrinchBackpack_co.paa"};
	};
	class IMP_Bag_GrinchBackpack_Tan	: IMP_Bag_GrinchBackpack_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\GrinchBackpack\data\GrinchBackpack_Tan_co.paa"};
	};
	class IMP_Bag_GrinchBackpack_EMR	: IMP_Bag_GrinchBackpack_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\GrinchBackpack\data\GrinchBackpack_EMR_co.paa"};
	};
	class IMP_Bag_GrinchBackpack_MARPAT	: IMP_Bag_GrinchBackpack_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\GrinchBackpack\data\GrinchBackpack_MARPAT_co.paa"};
	};
	class IMP_Bag_GrinchBackpack_UCP	: IMP_Bag_GrinchBackpack_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\GrinchBackpack\data\GrinchBackpack_UCP_co.paa"};
	};
	class IMP_Bag_GrinchBackpack_NWU	: IMP_Bag_GrinchBackpack_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\GrinchBackpack\data\GrinchBackpack_NWU_co.paa"};
	};
};
