class CfgPatches 
{
	class IMP_Boots_HighKneeSneakers
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
	
	class IMP_Boots_HighKneeSneakers_ColorBase : Clothing 
	{
		scope = 0;
		RankLevel = 2;
		displayName = "$STR_IMP_HighKneeSneakers";
		descriptionShort = "$STR_IMP_HighKneeSneakersD";
		model = "IMPGMOD\Equipment\Boots\HighKneeSneakers\models\HighKneeSneakers_g.p3d";
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
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Boots\HighKneeSneakers\data\HighKneeSneakers_co.paa"};
		
		class ClothingTypes 
		{
			male = "IMPGMOD\Equipment\Boots\HighKneeSneakers\models\HighKneeSneakers_m.p3d";
			female = "IMPGMOD\Equipment\Boots\HighKneeSneakers\models\HighKneeSneakers_f.p3d";
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
						{1, {"IMPGMOD\Equipment\Boots\HighKneeSneakers\data\HighKneeSneakers.rvmat"}}, 
						{0.7, {"IMPGMOD\Equipment\Boots\HighKneeSneakers\data\HighKneeSneakers.rvmat"}}, 
						{0.5, {"IMPGMOD\Equipment\Boots\HighKneeSneakers\data\HighKneeSneakers_damage.rvmat"}}, 
						{0.3, {"IMPGMOD\Equipment\Boots\HighKneeSneakers\data\HighKneeSneakers_damage.rvmat"}}, 
						{0, {"IMPGMOD\Equipment\Boots\HighKneeSneakers\data\HighKneeSneakers_destruct.rvmat"}}
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

	class IMP_Boots_HighKneeSneakers : IMP_Boots_HighKneeSneakers_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Boots\HighKneeSneakers\data\HighKneeSneakers_co.paa"};
	};
	
	class IMP_Boots_HighKneeSneakers_black : IMP_Boots_HighKneeSneakers_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Boots\HighKneeSneakers\data\HighKneeSneakers_black_co.paa"};
	};
	
	class IMP_Boots_HighKneeSneakers_green : IMP_Boots_HighKneeSneakers_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Boots\HighKneeSneakers\data\HighKneeSneakers_green_co.paa"};
	};
};