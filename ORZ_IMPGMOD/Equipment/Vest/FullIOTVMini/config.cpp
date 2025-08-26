class CfgPatches 
{
	class IMP_Vest_FullIOTVMini 
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data", "DZ_Characters", "DZ_Scripts","DZ_Characters_Vests"};
	};
};

class cfgVehicles 
{
	class Clothing_Base;
	class Clothing: Clothing_Base {};
	
	class IMP_Vest_FullIOTVMini_ColorBase : Clothing 
	{
		displayName = "$STR_IMP_FullIOTV";
		scope = 0;
		RankLevel = 6;
		descriptionShort = "$STR_IMP_VestALL";
		model = "IMPGMOD\Equipment\Vest\FullIOTVMini\models\FullIOTVMini_g.p3d";
		attachments[] = {};
		inventorySlot[] = {"Vest", "Vest1"};
		itemInfo[] = {"Clothing", "Vest"};
		weight = 10000;
		noUNLVest = 0;
		itemSize[] = {5, 5};
		quickBarBonus = 10;
		varWetMax=0.048999999;
		heatIsolation=0.5;
		repairableWithKits[] = {3, 8};
		repairCosts[] = {75.0, 50.0};
		hiddenSelections[] = {"camoflage1", "camoflage2", "camoflage3"};
		
		class ClothingTypes 
		{
			male = "IMPGMOD\Equipment\Vest\FullIOTVMini\models\FullIOTVMini_m.p3d";
			female = "IMPGMOD\Equipment\Vest\FullIOTVMini\models\FullIOTVMini_f.p3d";
		};
		
		class DamageSystem {
			class GlobalHealth {
				class Health {
					hitpoints = 500;
					transferToAttachmentsCoef = 0.5;
					healthLevels[] = 
					{
						{1.0, {"IMPGMOD\Equipment\Vest\FullIOTVMini\data\Camoflage1.rvmat", "IMPGMOD\Equipment\Vest\FullIOTVMini\data\Camoflage2.rvmat", "IMPGMOD\Equipment\Vest\FullIOTVMini\data\Camoflage3.rvmat"}}, 
						{0.7, {"IMPGMOD\Equipment\Vest\FullIOTVMini\data\Camoflage1.rvmat", "IMPGMOD\Equipment\Vest\FullIOTVMini\data\Camoflage2.rvmat", "IMPGMOD\Equipment\Vest\FullIOTVMini\data\Camoflage3.rvmat"}}, 
						{0.5, {"IMPGMOD\Equipment\Vest\FullIOTVMini\data\Camoflage1_damage.rvmat", "IMPGMOD\Equipment\Vest\FullIOTVMini\data\Camoflage2_damage.rvmat", "IMPGMOD\Equipment\Vest\FullIOTVMini\data\Camoflage3_damage.rvmat"}}, 
						{0.3, {"IMPGMOD\Equipment\Vest\FullIOTVMini\data\Camoflage1_damage.rvmat", "IMPGMOD\Equipment\Vest\FullIOTVMini\data\Camoflage2_damage.rvmat", "IMPGMOD\Equipment\Vest\FullIOTVMini\data\Camoflage3_damage.rvmat"}}, 
						{0.0, {"IMPGMOD\Equipment\Vest\FullIOTVMini\data\Camoflage1_destruct.rvmat", "IMPGMOD\Equipment\Vest\FullIOTVMini\data\Camoflage2_destruct.rvmat", "IMPGMOD\Equipment\Vest\FullIOTVMini\data\Camoflage3_destruct.rvmat"}}
					};
				};
			};
			
			class GlobalArmor 
			{
				class Projectile 
				{
					class Health 
					{
						damage = 0.1;
					};
					
					class Blood 
					{
						damage = 0.1;
					};
					
					class Shock 
					{
						damage = 0.1;
					};
				};
				
				class Melee 
				{
					class Health 
					{
						damage = 0.1;
					};
					
					class Blood 
					{
						damage = 0.1;
					};
					
					class Shock 
					{
						damage = 0.1;
					};
				};
				
				class Infected 
				{
					class Health 
					{
						damage = 0.1;
					};
					
					class Blood 
					{
						damage = 0.1;
					};
					
					class Shock 
					{
						damage = 0.1;
					};
				};
				
				class FragGrenade 
				{
					class Health 
					{
						damage = 0.1;
					};
					
					class Blood 
					{
						damage = 0.1;
					};
					
					class Shock 
					{
						damage = 0.1;
					};
				};
			};
		};
		
		class AnimEvents {
			class SoundWeapon {
				class pickUpItem {
					soundSet = "SmershVest_pickup_SoundSet";
					id = 797;
				};
				
				class drop {
					soundset = "SmershVest_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	
	class IMP_Vest_FullIOTVMini_Green : IMP_Vest_FullIOTVMini_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Vest\FullIOTVMini\data\Camoflage1_Green.paa", "IMPGMOD\Equipment\Vest\FullIOTVMini\data\Camoflage2_Green.paa", "IMPGMOD\Equipment\Vest\FullIOTVMini\data\Camoflage3_Green.paa"};
	};
	
	class IMP_Vest_FullIOTVMini_Black : IMP_Vest_FullIOTVMini_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Vest\FullIOTVMini\data\Camoflage1_Black.paa", "IMPGMOD\Equipment\Vest\FullIOTVMini\data\Camoflage2_Black.paa", "IMPGMOD\Equipment\Vest\FullIOTVMini\data\Camoflage3_Black.paa"};
	};
	
	class IMP_Vest_FullIOTVMini_Tan : IMP_Vest_FullIOTVMini_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Vest\FullIOTVMini\data\Camoflage1_Tan.paa", "IMPGMOD\Equipment\Vest\FullIOTVMini\data\Camoflage2_Tan.paa", "IMPGMOD\Equipment\Vest\FullIOTVMini\data\Camoflage3_Tan.paa"};
	};
};
