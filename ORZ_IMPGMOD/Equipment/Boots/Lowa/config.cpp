class CfgPatches 
{
	class IMP_Boots_Lowa 
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
	
	class IMP_Boots_Lowa_ColorBase : Clothing 
	{
		scope = 0;
		RankLevel = 2;
		displayName = "$STR_IMP_LowaZephyr";
		descriptionShort = "$STR_IMP_LowaZephyrD";
		model = "IMPGMOD\Equipment\Boots\Lowa\models\Lowa_g.p3d";
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
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Boots\Lowa\data\Lowa_tan_co.paa"};
		
		class ClothingTypes 
		{
			male = "IMPGMOD\Equipment\Boots\Lowa\models\Lowa_m.p3d";
			female = "IMPGMOD\Equipment\Boots\Lowa\models\Lowa_m.p3d";
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
						{1, {"IMPGMOD\Equipment\Boots\Lowa\data\Lowa.rvmat"}}, 
						{0.7, {"IMPGMOD\Equipment\Boots\Lowa\data\Lowa.rvmat"}}, 
						{0.5, {"IMPGMOD\Equipment\Boots\Lowa\data\Lowa_damage.rvmat"}}, 
						{0.3, {"IMPGMOD\Equipment\Boots\Lowa\data\Lowa_damage.rvmat"}}, 
						{0, {"IMPGMOD\Equipment\Boots\Lowa\data\Lowa_destruct.rvmat"}}
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

	class IMP_Boots_Lowa_Tan : IMP_Boots_Lowa_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Boots\Lowa\data\Lowa_tan_co.paa"};
	};
	
	class IMP_Boots_Lowa_Black : IMP_Boots_Lowa_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Boots\Lowa\data\Lowa_black_co.paa"};
	};
	
	class IMP_Boots_Lowa_Green : IMP_Boots_Lowa_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Boots\Lowa\data\Lowa_green_co.paa"};
	};
	
	class IMP_Boots_Lowa_UCP : IMP_Boots_Lowa_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Boots\Lowa\data\Lowa_UCP.paa"};
	};
	
	class IMP_Boots_Lowa_NWU : IMP_Boots_Lowa_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Boots\Lowa\data\Lowa_NWU.paa"};
	};
	
	class IMP_Boots_Lowa_EMR : IMP_Boots_Lowa_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Boots\Lowa\data\Lowa_EMR.paa"};
	};
	
	class IMP_Boots_Lowa_MARPAT : IMP_Boots_Lowa_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Boots\Lowa\data\Lowa_MARPAT.paa"};
	};
};