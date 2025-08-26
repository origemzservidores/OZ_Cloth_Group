class CfgPatches 
{
	class IMP_Boots_SpecOps
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
	
	class IMP_Boots_SpecOps_ColorBase : Clothing 
	{
		scope = 0;
		RankLevel = 2;
		displayName = "$STR_IMP_SpecOPSBoots";
		descriptionShort = "$STR_IMP_SpecOPSBoots2";
		model = "IMPGMOD\Equipment\Boots\SpecOpsBoots\models\SpecOpsBoots_G.p3d";
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
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Boots\SpecOpsBoots\data\SpecOpsBoots_Black.paa"};
		
		class ClothingTypes 
		{
			male = "IMPGMOD\Equipment\Boots\SpecOpsBoots\models\SpecOpsBoots_MF.p3d";
			female = "IMPGMOD\Equipment\Boots\SpecOpsBoots\models\SpecOpsBoots_MF.p3d";
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
						{1, {"IMPGMOD\Equipment\Boots\SpecOpsBoots\data\SpecOpsBoots.rvmat"}}, 
						{0.7, {"IMPGMOD\Equipment\Boots\SpecOpsBoots\data\SpecOpsBoots.rvmat"}}, 
						{0.5, {"IMPGMOD\Equipment\Boots\SpecOpsBoots\data\SpecOpsBoots_damage.rvmat"}}, 
						{0.3, {"IMPGMOD\Equipment\Boots\SpecOpsBoots\data\SpecOpsBoots_damage.rvmat"}}, 
						{0, {"IMPGMOD\Equipment\Boots\SpecOpsBoots\data\SpecOpsBoots_destruct.rvmat"}}
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

	class IMP_Boots_SpecOps_Black : IMP_Boots_SpecOps_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Boots\SpecOpsBoots\data\SpecOpsBoots_Black.paa"};
	};
	
	class IMP_Boots_SpecOps_Green : IMP_Boots_SpecOps_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Boots\SpecOpsBoots\data\SpecOpsBoots_Green.paa"};
	};
	
	class IMP_Boots_SpecOps_Tan : IMP_Boots_SpecOps_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Boots\SpecOpsBoots\data\SpecOpsBoots_Tan.paa"};
	};
	
	class IMP_Boots_SpecOps_UCP : IMP_Boots_SpecOps_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Boots\SpecOpsBoots\data\SpecOpsBoots_UCP.paa"};
	};
	
	class IMP_Boots_SpecOps_EMR : IMP_Boots_SpecOps_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Boots\SpecOpsBoots\data\SpecOpsBoots_EMR.paa"};
	};
	
	class IMP_Boots_SpecOps_NWU : IMP_Boots_SpecOps_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Boots\SpecOpsBoots\data\SpecOpsBoots_NWU.paa"};
	};
	
	class IMP_Boots_SpecOps_MARPAT : IMP_Boots_SpecOps_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Boots\SpecOpsBoots\data\SpecOpsBoots_MARPAT.paa"};
	};
};