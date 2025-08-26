class CfgPatches 
{
	class IMP_Boots_SneakersLow 
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
	
	class IMP_Boots_Sneakers_ColorBase : Clothing 
	{
		scope = 0;
		RankLevel = 1;
		displayName = "$STR_IMP_SneakersD";
		descriptionShort = "$STR_IMP_SneakersD";
		model = "IMPGMOD\Equipment\Boots\SneakerLow\models\SneakersLow_g.p3d";
		inventorySlot[] = {"Feet"};
		itemInfo[] = {"Clothing", "Feet"};
		itemSize[] = {4, 4};
		weight = 400;
		durability = 0.5;
		varWetMax = 0.49;
		heatIsolation = 0.9;
		repairableWithKits[] = {3};
		repairCosts[] = {25.0};
		soundAttType = "Boots";
		hiddenSelections[] = {"camoflage"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Boots\SneakerLow\data\SneakersLow_co.paa"};
		
		class ClothingTypes 
		{
			male = "IMPGMOD\Equipment\Boots\SneakerLow\models\SneakersLow_m.p3d";
			female = "IMPGMOD\Equipment\Boots\SneakerLow\models\SneakersLow_f.p3d";
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
						{1, {"IMPGMOD\Equipment\Boots\SneakerLow\data\SneakersLow.rvmat"}}, 
						{0.7, {"IMPGMOD\Equipment\Boots\SneakerLow\data\SneakersLow.rvmat"}}, 
						{0.5, {"IMPGMOD\Equipment\Boots\SneakerLow\data\SneakersLow_damage.rvmat"}}, 
						{0.3, {"IMPGMOD\Equipment\Boots\SneakerLow\data\SneakersLow_damage.rvmat"}}, 
						{0, {"IMPGMOD\Equipment\Boots\SneakerLow\data\SneakersLow_destruct.rvmat"}}
					};
				};
			};
		};
		
		class AnimEvents {
			class SoundWeapon {
				class pickUpItem {
					soundSet = "AthleticShoes_pickup_SoundSet";
					id = 797;
				};
				
				class drop {
					soundset = "AthleticShoes_drop_SoundSet";
					id = 898;
				};
			};
		};
	};

	class IMP_Boots_Sneakers_Red : IMP_Boots_Sneakers_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Boots\SneakerLow\data\SneakersLow_co.paa"};
	};
	
	class IMP_Boots_Sneakers_Black : IMP_Boots_Sneakers_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Boots\SneakerLow\data\SneakersLow_black.paa"};
	};
	
	class IMP_Boots_Sneakers_Blue : IMP_Boots_Sneakers_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Boots\SneakerLow\data\SneakersLow_blue.paa"};
	};
	
	class IMP_Boots_Sneakers_EMR : IMP_Boots_Sneakers_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Boots\SneakerLow\data\SneakersLow_EMR.paa"};
	};
	
	class IMP_Boots_Sneakers_MARPAT : IMP_Boots_Sneakers_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Boots\SneakerLow\data\SneakersLow_MARPAT.paa"};
	};
	
	class IMP_Boots_Sneakers_NWU : IMP_Boots_Sneakers_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Boots\SneakerLow\data\SneakersLow_NWU.paa"};
	};
	
	class IMP_Boots_Sneakers_Pink : IMP_Boots_Sneakers_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Boots\SneakerLow\data\SneakersLow_pink.paa"};
	};
	
	class IMP_Boots_Sneakers_UCP : IMP_Boots_Sneakers_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Boots\SneakerLow\data\SneakersLow_UCP.paa"};
	};
	
	class IMP_Boots_Sneakers_White : IMP_Boots_Sneakers_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Boots\SneakerLow\data\SneakersLow_white.paa"};
	};
};