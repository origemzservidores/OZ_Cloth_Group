class CfgPatches 
{
	class IMP_Vest_UNVest 
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
	
	class IMP_Vest_UNVest_ColorBase : Clothing {
		scope = 0;
		RankLevel = 1;
		displayName = "$STR_IMP_UnVest";
		descriptionShort = "$STR_IMP_VestALL";
		model = "IMPGMOD\Equipment\Vest\UNVest\models\UNVest_g.p3d";
		attachments[] = {};
		inventorySlot[] = {"Vest", "Vest1"};
		itemInfo[] = {"Clothing", "Vest"};
		quickBarBonus = 1;
		weight = 2000;
		itemSize[] = {5, 5};
		noUNLVest = 0;
		varWetMax=0.048999999;
		heatIsolation=0.5;
		repairableWithKits[] = {3, 8};
		repairCosts[] = {75.0, 50.0};
		hiddenSelections[] = {"camoflage"};
		
		class ClothingTypes {
			male = "IMPGMOD\Equipment\Vest\UNVest\models\UNVest_m.p3d";
			female = "IMPGMOD\Equipment\Vest\UNVest\models\UNVest_f.p3d";
		};
		
		class DamageSystem {
			class GlobalHealth {
				class Health {
					hitpoints = 500;
					transferToAttachmentsCoef = 0.5;
					healthLevels[] = 
					{
						{1.0, {"IMPGMOD\Equipment\Vest\UNVest\data\UNVest.rvmat"}}, 
						{0.7, {"IMPGMOD\Equipment\Vest\UNVest\data\UNVest.rvmat"}}, 
						{0.5, {"IMPGMOD\Equipment\Vest\UNVest\data\UNVest_damage.rvmat"}}, 
						{0.3, {"IMPGMOD\Equipment\Vest\UNVest\data\UNVest_damage.rvmat"}}, 
						{0.0, {"IMPGMOD\Equipment\Vest\UNVest\data\UNVest_destruct.rvmat"}}
					};
				};
			};
			
			class GlobalArmor 
			{
				class Projectile 
				{
					class Health 
					{
						damage = 0.8;
					};
					
					class Blood 
					{
						damage = 0.8;
					};
					
					class Shock 
					{
						damage = 0.8;
					};
				};
				
				class Melee 
				{
					class Health 
					{
						damage = 0.8;
					};
					
					class Blood 
					{
						damage = 0.8;
					};
					
					class Shock 
					{
						damage = 0.8;
					};
				};
				
				class Infected 
				{
					class Health 
					{
						damage = 0.8;
					};
					
					class Blood 
					{
						damage = 0.8;
					};
					
					class Shock 
					{
						damage = 0.8;
					};
				};
				
				class FragGrenade 
				{
					class Health 
					{
						damage = 0.8;
					};
					
					class Blood 
					{
						damage = 0.8;
					};
					
					class Shock 
					{
						damage = 0.8;
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
	
	class IMP_Vest_UNVest_Blue : IMP_Vest_UNVest_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Vest\UNVest\data\UNVest_co.paa"};
	};
};
