class CfgPatches 
{
	class IMP_Boots_SWAT 
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
	
	class IMP_Boots_SWAT_ColorBase : Clothing 
	{
		scope = 0;
		RankLevel = 2;
		displayName = "$STR_IMP_SWATBoots";
		descriptionShort = "$STR_IMP_SpecOPSBoots2";
		model = "IMPGMOD\Equipment\Boots\SWATBoots\models\SWATBoots_g.p3d";
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
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Pants\SWATPants\data\LowerBody_co.paa"};
		
		class ClothingTypes 
		{
			male = "IMPGMOD\Equipment\Boots\SWATBoots\models\SWATBoots.p3d";
			female = "IMPGMOD\Equipment\Boots\SWATBoots\models\SWATBoots.p3d";
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
						{1, {"IMPGMOD\Equipment\Pants\SWATPants\data\SWATPants.rvmat"}}, 
						{0.7, {"IMPGMOD\Equipment\Pants\SWATPants\data\SWATPants.rvmat"}}, 
						{0.5, {"IMPGMOD\Equipment\Pants\SWATPants\data\SWATPants_damage.rvmat"}}, 
						{0.3, {"IMPGMOD\Equipment\Pants\SWATPants\data\SWATPants_damage.rvmat"}}, 
						{0, {"IMPGMOD\Equipment\Pants\SWATPants\data\SWATPants_destruct.rvmat"}}
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

	class IMP_Boots_SWAT_Black : IMP_Boots_SWAT_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Pants\SWATPants\data\LowerBody_co.paa"};
	};
	
	class IMP_Boots_SWAT_MediumBlack : IMP_Boots_SWAT_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Pants\SWATPants\data\LowerBody_co_black.paa"};
	};
	
	class IMP_Boots_SWAT_UltraBlack : IMP_Boots_SWAT_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Pants\SWATPants\data\LowerBody_co_black1.paa"};
	};
};