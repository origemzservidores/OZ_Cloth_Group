class CfgPatches 
{
	class IMP_Vest_IOTVMini 
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
	
	class IMP_Vest_IOTVMini_ColorBase : Clothing 
	{
		displayName = "$STR_IMP_IOTVMini";
		scope = 0;
		RankLevel = 4;
		descriptionShort = "$STR_IMP_IOTVMiniD";
		model = "IMPGMOD\Equipment\Vest\IOTVMini\models\IOTVMini_g.p3d";
		attachments[] = {"TacticalBag1", "TacticalBag2", "mag_pouch_a", "mag_pouch_b", "mag_pouch_c", "PatchBig", "PatchSmall"};
		inventorySlot[] = {"Vest", "Vest1"};
		itemInfo[] = {"Clothing", "Vest"};
		weight = 6000;
		itemSize[] = {5, 5};
		noUNLVest = 1;
		quickBarBonus = 3;
		varWetMax=0.048999999;
		heatIsolation=0.5;
		repairableWithKits[] = {3, 8};
		repairCosts[] = {75.0, 50.0};
		hiddenSelections[] = {"camoflage"};
		
		class ClothingTypes 
		{
			male = "IMPGMOD\Equipment\Vest\IOTVMini\models\IOTVMini_m.p3d";
			female = "IMPGMOD\Equipment\Vest\IOTVMini\models\IOTVMini_f.p3d";
		};
		
		class DamageSystem {
			class GlobalHealth {
				class Health {
					hitpoints = 500;
					transferToAttachmentsCoef = 0.5;
					healthLevels[] = 
					{
						{1.0, {"IMPGMOD\Equipment\Vest\IOTVMini\data\IOTVMini.rvmat"}}, 
						{0.7, {"IMPGMOD\Equipment\Vest\IOTVMini\data\IOTVMini.rvmat"}}, 
						{0.5, {"IMPGMOD\Equipment\Vest\IOTVMini\data\IOTVMini_damage.rvmat"}}, 
						{0.3, {"IMPGMOD\Equipment\Vest\IOTVMini\data\IOTVMini_damage.rvmat"}}, 
						{0.0, {"IMPGMOD\Equipment\Vest\IOTVMini\data\IOTVMini_destruct.rvmat"}}
					};
				};
			};
			
			class GlobalArmor 
			{
				class Projectile 
				{
					class Health 
					{
						damage = 0.4;
					};
					
					class Blood 
					{
						damage = 0.4;
					};
					
					class Shock 
					{
						damage = 0.4;
					};
				};
				
				class Melee 
				{
					class Health 
					{
						damage = 0.4;
					};
					
					class Blood 
					{
						damage = 0.4;
					};
					
					class Shock 
					{
						damage = 0.4;
					};
				};
				
				class Infected 
				{
					class Health 
					{
						damage = 0.4;
					};
					
					class Blood 
					{
						damage = 0.4;
					};
					
					class Shock 
					{
						damage = 0.4;
					};
				};
				
				class FragGrenade 
				{
					class Health 
					{
						damage = 0.4;
					};
					
					class Blood 
					{
						damage = 0.4;
					};
					
					class Shock 
					{
						damage = 0.4;
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
	
	class IMP_Vest_IOTVMini_Green : IMP_Vest_IOTVMini_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Vest\IOTVMini\data\IOTVMini_co.paa"};
	};
	
	class IMP_Vest_IOTVMini_Black : IMP_Vest_IOTVMini_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Vest\IOTVMini\data\IOTVMini_Black_co.paa"};
	};
	
	class IMP_Vest_IOTVMini_Tan : IMP_Vest_IOTVMini_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Vest\IOTVMini\data\IOTVMini_Tan_co.paa"};
	};
	
	class IMP_Vest_IOTVMini_MARPAT : IMP_Vest_IOTVMini_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Vest\IOTVMini\data\IOTVMini_MARPAT.paa"};
	};
	
	class IMP_Vest_IOTVMini_UCP : IMP_Vest_IOTVMini_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Vest\IOTVMini\data\IOTVMini_UCP.paa"};
	};
	
	class IMP_Vest_IOTVMini_NWU : IMP_Vest_IOTVMini_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Vest\IOTVMini\data\IOTVMini_NWU.paa"};
	};
	
	class IMP_Vest_IOTVMini_EMR : IMP_Vest_IOTVMini_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Vest\IOTVMini\data\IOTVMini_EMR.paa"};
	};
};
