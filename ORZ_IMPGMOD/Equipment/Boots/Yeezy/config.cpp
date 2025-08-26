class CfgPatches 
{
	class IMP_Boots_Yeezy 
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
	
	class IMP_Boots_Yeezy_ColorBase : Clothing 
	{
		scope = 0;
		RankLevel = 4;
		displayName = "Yeezy V2";
		descriptionShort = "$STR_IMP_YeezyD";
		model = "IMPGMOD\Equipment\Boots\Yeezy\models\Yeezy_g.p3d";
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
		hiddenSelections[] = {"camoflage", "Podoshva"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Boots\Yeezy\data\Yeezy_black_co.paa"};
		
		class ClothingTypes 
		{
			male = "IMPGMOD\Equipment\Boots\Yeezy\models\Yeezy_m.p3d";
			female = "IMPGMOD\Equipment\Boots\Yeezy\models\Yeezy_f.p3d";
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
						{1, {"IMPGMOD\Equipment\Boots\Yeezy\data\Yeezy.rvmat", "IMPGMOD\Equipment\Boots\Yeezy\data\Podoshva.rvmat"}}, 
						{0.7, {"IMPGMOD\Equipment\Boots\Yeezy\data\Yeezy.rvmat", "IMPGMOD\Equipment\Boots\Yeezy\data\Podoshva.rvmat"}}, 
						{0.5, {"IMPGMOD\Equipment\Boots\Yeezy\data\Yeezy_damage.rvmat", "IMPGMOD\Equipment\Boots\Yeezy\data\Podoshva_damage.rvmat"}}, 
						{0.3, {"IMPGMOD\Equipment\Boots\Yeezy\data\Yeezy_damage.rvmat", "IMPGMOD\Equipment\Boots\Yeezy\data\Podoshva_damage.rvmat"}}, 
						{0, {"IMPGMOD\Equipment\Boots\Yeezy\data\Yeezy_destruct.rvmat", "IMPGMOD\Equipment\Boots\Yeezy\data\Podoshva_destruct.rvmat"}}
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

	class IMP_Boots_Yeezy_Black : IMP_Boots_Yeezy_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Boots\Yeezy\data\Yeezy_black_co.paa", "IMPGMOD\Equipment\Boots\Yeezy\data\Podoshva_black_co.paa"};
	};
	
	class IMP_Boots_Yeezy_EMR : IMP_Boots_Yeezy_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Boots\Yeezy\data\Yeezy_EMR.paa", "IMPGMOD\Equipment\Boots\Yeezy\data\Podoshva_black_co.paa"};
	};
	
	class IMP_Boots_Yeezy_UCP : IMP_Boots_Yeezy_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Boots\Yeezy\data\Yeezy_UCP.paa", "IMPGMOD\Equipment\Boots\Yeezy\data\Podoshva_black_co.paa"};
	};
	
	class IMP_Boots_Yeezy_NWU : IMP_Boots_Yeezy_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Boots\Yeezy\data\Yeezy_NWU.paa", "IMPGMOD\Equipment\Boots\Yeezy\data\Podoshva_black_co.paa"};
	};
	
	class IMP_Boots_Yeezy_MARPAT : IMP_Boots_Yeezy_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Boots\Yeezy\data\Yeezy_MARPAT.paa", "IMPGMOD\Equipment\Boots\Yeezy\data\Podoshva_black_co.paa"};
	};
	
	class IMP_Boots_Yeezy_White : IMP_Boots_Yeezy_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Boots\Yeezy\data\Yeezy_white_co.paa", "IMPGMOD\Equipment\Boots\Yeezy\data\Podoshva_co.paa"};
	};
};