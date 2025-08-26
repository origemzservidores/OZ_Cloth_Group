class CfgPatches 
{
	class IMP_Vest_Gen4 
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data", "DZ_Characters", "DZ_Scripts","DZ_Characters_Vests", "IMPGMOD"};
	};
};

class cfgVehicles 
{
	class Clothing_Base;
	class Clothing: Clothing_Base {};
	
	class IMP_Vest_Gen4_ColorBase : Clothing {
		scope = 0;
		RankLevel = 5;
		displayName = "IOTV Gen4";
		descriptionShort = "$STR_IMP_VestALL";
		model = "IMPGMOD\Equipment\Vest\IOTVGen4\models\Gen4_g.p3d";
		attachments[] = {"em_pouch", "ifak_pouch", "PersonalRadio", "VestGrenadeA", "VestGrenadeB", "mag_pouch_a", "mag_pouch_b", "mag_pouch_c", "PatchBig", "PatchSmall", "TacticalBag1"};
		inventorySlot[] = {"Vest", "Vest1"};
		itemInfo[] = {"Clothing", "Vest"};
		quickBarBonus = 4;
		weight = 8000;
		noUNLVest = 1;
		itemSize[] = {5, 5};
		varWetMax=0.048999999;
		heatIsolation=0.5;
		repairableWithKits[] = {3, 8};
		repairCosts[] = {75.0, 50.0};
		hiddenSelections[] = {"camoflage"};
		
		class ClothingTypes {
			male = "IMPGMOD\Equipment\Vest\IOTVGen4\models\Gen4_m.p3d";
			female = "IMPGMOD\Equipment\Vest\IOTVGen4\models\Gen4_f.p3d";
		};
		
		class DamageSystem {
			class GlobalHealth {
				class Health {
					hitpoints = 500;
					transferToAttachmentsCoef = 0.5;
					healthLevels[] = 
					{
						{1.0, {"IMPGMOD\Equipment\Vest\IOTVGen4\data\Gen4.rvmat"}}, 
						{0.7, {"IMPGMOD\Equipment\Vest\IOTVGen4\data\Gen4.rvmat"}}, 
						{0.5, {"IMPGMOD\Equipment\Vest\IOTVGen4\data\Gen4_damage.rvmat"}}, 
						{0.3, {"IMPGMOD\Equipment\Vest\IOTVGen4\data\Gen4_damage.rvmat"}}, 
						{0.0, {"IMPGMOD\Equipment\Vest\IOTVGen4\data\Gen4_destruct.rvmat"}}
					};
				};
			};
			
			class GlobalArmor 
			{
				class Projectile 
				{
					class Health 
					{
						damage = 0.2;
					};
					
					class Blood 
					{
						damage = 0.2;
					};
					
					class Shock 
					{
						damage = 0.2;
					};
				};
				
				class Melee 
				{
					class Health 
					{
						damage = 0.2;
					};
					
					class Blood 
					{
						damage = 0.2;
					};
					
					class Shock 
					{
						damage = 0.2;
					};
				};
				
				class Infected 
				{
					class Health 
					{
						damage = 0.2;
					};
					
					class Blood 
					{
						damage = 0.2;
					};
					
					class Shock 
					{
						damage = 0.2;
					};
				};
				
				class FragGrenade 
				{
					class Health 
					{
						damage = 0.2;
					};
					
					class Blood 
					{
						damage = 0.2;
					};
					
					class Shock 
					{
						damage = 0.2;
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
	
	class IMP_Vest_Gen4_Black : IMP_Vest_Gen4_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Vest\IOTVGen4\data\Gen4_black_co.paa"};
	};
	
	class IMP_Vest_Gen4_Green : IMP_Vest_Gen4_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Vest\IOTVGen4\data\Gen4_green_co.paa"};
	};
	
	class IMP_Vest_Gen4_Tan : IMP_Vest_Gen4_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Vest\IOTVGen4\data\Gen4_tan_co.paa"};
	};
	
	class IMP_Vest_Gen4_EMR : IMP_Vest_Gen4_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Vest\IOTVGen4\data\Gen4_emr_co.paa"};
	};
	
	class IMP_Vest_Gen4_UCP : IMP_Vest_Gen4_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Vest\IOTVGen4\data\Gen4_ucp_co.paa"};
	};
	
	class IMP_Vest_Gen4_NWU : IMP_Vest_Gen4_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Vest\IOTVGen4\data\Gen4_nwu_co.paa"};
	};
	
	class IMP_Vest_Gen4_MARPAT : IMP_Vest_Gen4_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Vest\IOTVGen4\data\Gen4_marpat_co.paa"};
	};
};
