class CfgPatches 
{
	class IMP_Jacket_USMC
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
	
	class IMP_Jacket_USMC_ColorBase : Clothing 
	{
		scope = 0;
		RankLevel = 1;
		displayName = "$STR_IMP_USMC";
		descriptionShort = "$STR_IMP_USMCD";
		model = "IMPGMOD\Equipment\Jacket\USMCJacket\models\USMC_g.p3d";
		inventorySlot[] = {"Body"};
		itemInfo[] = {"Clothing", "Body"};
		weight = 800;
		itemSize[] = {4, 4};
		itemsCargoSize[] = {6, 7};
		quickBarBonus = 1;
		varWetMax = 0.79;
		heatIsolation = 0.7;
		ragQuantity = 4;
		noVest = 0;
		repairableWithKits[] = {5, 2};
		repairCosts[] = {30.0, 25.0};
		soundAttType = "WoolShirt";
		hiddenSelections[] = {"camoflage"};
		
		class ClothingTypes 
		{
			male = "IMPGMOD\Equipment\Jacket\USMCJacket\models\USMC_m.p3d";
			female = "IMPGMOD\Equipment\Jacket\USMCJacket\models\USMC_f.p3d";
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
						{1.0, {"IMPGMOD\Equipment\Jacket\USMCJacket\data\USMC.rvmat"}}, 
						{0.7, {"IMPGMOD\Equipment\Jacket\USMCJacket\data\USMC.rvmat"}}, 
						{0.5, {"IMPGMOD\Equipment\Jacket\USMCJacket\data\USMC_damage.rvmat"}}, 
						{0.3, {"IMPGMOD\Equipment\Jacket\USMCJacket\data\USMC_damage.rvmat"}}, 
						{0.0, {"IMPGMOD\Equipment\Jacket\USMCJacket\data\USMC_destruct.rvmat"}}
					};
				};
			};
			
			class GlobalArmor 
			{
				class Melee 
				{
					class Health 
					{
						damage = 1;
					};
					class Blood 
					{
						damage = 1;
					};
					class Shock 
					{
						damage = 1;
					};
				};
				
				class Infected 
				{
					class Health 
					{
						damage = 1;
					};
					class Blood 
					{
						damage = 1;
					};
					class Shock 
					{
						damage = 1;
					};
				};
			};
		};
		
		class AnimEvents 
		{
			class SoundWeapon 
			{
				class pickUpItem 
				{
					soundSet = "Shirt_pickup_SoundSet";
					id = 797;
				};
				class drop 
				{
					soundset = "Shirt_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	
	class IMP_Jacket_USMC_Black : IMP_Jacket_USMC_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Jacket\USMCJacket\data\USMC_BLACK.paa"};
	};
	class IMP_Jacket_USMC_Green : IMP_Jacket_USMC_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Jacket\USMCJacket\data\USMC_GREEN.paa"};
	};
	class IMP_Jacket_USMC_Tan : IMP_Jacket_USMC_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Jacket\USMCJacket\data\USMC_TAN.paa"};
	};
	class IMP_Jacket_USMC_UCP : IMP_Jacket_USMC_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Jacket\USMCJacket\data\USMC_UCP.paa"};
	};
	class IMP_Jacket_USMC_EMR : IMP_Jacket_USMC_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Jacket\USMCJacket\data\USMC_EMR.paa"};
	};
	class IMP_Jacket_USMC_NWU : IMP_Jacket_USMC_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Jacket\USMCJacket\data\USMC_NWU.paa"};
	};
	class IMP_Jacket_USMC_MARPAT : IMP_Jacket_USMC_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Jacket\USMCJacket\data\USMC_MARPAT.paa"};
	};
};