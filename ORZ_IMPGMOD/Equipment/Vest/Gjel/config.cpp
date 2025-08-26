class CfgPatches 
{
	class IMP_Vest_Gjel 
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
	
	class IMP_Vest_Gjel_ColorBase : Clothing {
		scope = 0;
		RankLevel = 2;
		displayName = "$STR_IMP_Gjel";
		descriptionShort = "$STR_IMP_VestALL";
		model = "IMPGMOD\Equipment\Vest\Gjel\models\Gjel_g.p3d";
		attachments[] = {};
		inventorySlot[] = {"Vest", "Vest1"};
		itemInfo[] = {"Clothing", "Vest"};
		quickBarBonus = 4;
		noUNLVest = 0;
		weight = 8000;
		itemSize[] = {5, 5};
		varWetMax=0.048999999;
		heatIsolation=0.5;
		repairableWithKits[] = {3, 8};
		repairCosts[] = {75.0, 50.0};
		hiddenSelections[] = {"camoflage"};
		
		class ClothingTypes {
			male = "IMPGMOD\Equipment\Vest\Gjel\models\Gjel_m.p3d";
			female = "IMPGMOD\Equipment\Vest\Gjel\models\Gjel_f.p3d";
		};
		
		class DamageSystem {
			class GlobalHealth {
				class Health {
					hitpoints = 500;
					transferToAttachmentsCoef = 0.5;
					healthLevels[] = 
					{
						{1.0, {"IMPGMOD\Equipment\Vest\Gjel\data\Gjel.rvmat"}}, 
						{0.7, {"IMPGMOD\Equipment\Vest\Gjel\data\Gjel.rvmat"}}, 
						{0.5, {"IMPGMOD\Equipment\Vest\Gjel\data\Gjel_damage.rvmat"}}, 
						{0.3, {"IMPGMOD\Equipment\Vest\Gjel\data\Gjel_damage.rvmat"}}, 
						{0.0, {"IMPGMOD\Equipment\Vest\Gjel\data\Gjel_destruct.rvmat"}}
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
	
	class IMP_Vest_Gjel : IMP_Vest_Gjel_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Vest\Gjel\data\Gjel_co.paa"};
	};
};
