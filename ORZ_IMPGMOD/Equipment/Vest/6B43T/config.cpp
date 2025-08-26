class CfgPatches 
{
	class IMP_Vest_6B43T 
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
	
	class IMP_Vest_6B43T_ColorBase : Clothing {
		scope = 0;
		RankLevel = 6;
		displayName = "6Б43 6А";
		descriptionShort = "$STR_IMP_VestALL";
		model = "IMPGMOD\Equipment\Vest\6B43T\models\6B43T_g.p3d";
		attachments[] = {"PatchBig", "PatchSmall"};
		inventorySlot[] = {"Vest", "Vest1"};
		itemInfo[] = {"Clothing", "Vest"};
		quickBarBonus = 10;
		noUNLVest = 0;
		weight = 10000;
		itemSize[] = {5, 5};
		varWetMax=0.048999999;
		heatIsolation=0.5;
		repairableWithKits[] = {3, 8};
		repairCosts[] = {75.0, 50.0};
		hiddenSelections[] = {"camoflage"};
		
		class ClothingTypes {
			male = "IMPGMOD\Equipment\Vest\6B43T\models\6B43T_m.p3d";
			female = "IMPGMOD\Equipment\Vest\6B43T\models\6B43T_f.p3d";
		};
		
		class DamageSystem {
			class GlobalHealth {
				class Health {
					hitpoints = 500;
					transferToAttachmentsCoef = 0.5;
					healthLevels[] = 
					{
						{1.0, {"IMPGMOD\Equipment\Vest\6B43T\data\6B43T.rvmat"}}, 
						{0.7, {"IMPGMOD\Equipment\Vest\6B43T\data\6B43T.rvmat"}}, 
						{0.5, {"IMPGMOD\Equipment\Vest\6B43T\data\6B43T_damage.rvmat"}}, 
						{0.3, {"IMPGMOD\Equipment\Vest\6B43T\data\6B43T_damage.rvmat"}}, 
						{0.0, {"IMPGMOD\Equipment\Vest\6B43T\data\6B43T_destruct.rvmat"}}
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
	
	class IMP_Vest_6B43T_Black : IMP_Vest_6B43T_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Vest\6B43T\data\6B43T_black_co.paa"};
	};
	
	class IMP_Vest_6B43T_Green : IMP_Vest_6B43T_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Vest\6B43T\data\6B43T_green_co.paa"};
	};
	
	class IMP_Vest_6B43T_Tan : IMP_Vest_6B43T_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Vest\6B43T\data\6B43T_tan_co.paa"};
	};
	
	class IMP_Vest_6B43T_EMR : IMP_Vest_6B43T_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Vest\6B43T\data\6B43T_emr_co.paa"};
	};
	
	class IMP_Vest_6B43T_NWU : IMP_Vest_6B43T_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Vest\6B43T\data\6B43T_nwu_co.paa"};
	};
	
	class IMP_Vest_6B43T_MARPAT : IMP_Vest_6B43T_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Vest\6B43T\data\6B43T_marpat_co.paa"};
	};
	
	class IMP_Vest_6B43T_UCP : IMP_Vest_6B43T_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Vest\6B43T\data\6B43T_ucp_co.paa"};
	};
};
