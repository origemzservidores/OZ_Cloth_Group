class CfgPatches 
{
	class IMP_Vest_SWAT 
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
	
	class IMP_Vest_SWAT_ColorBase : Clothing 
	{
		scope = 0;
		RankLevel = 2;
		displayName = "$STR_IMP_SWATVEST";
		descriptionShort = "$STR_IMP_SWATVESTD";
		model = "IMPGMOD\Equipment\Vest\SWATVest\models\SWATVest_g.p3d";
		attachments[] = {};
		inventorySlot[] = {"Vest", "Vest1"};
		itemInfo[] = {"Clothing", "Vest"};
		itemsCargoSize[] = {5, 6};
		itemSize[] = {5, 5};
		quickBarBonus = 4;
		noUNLVest = 1;
		weight = 3000;
		varWetMax=0.048999999;
		heatIsolation=0.5;
		repairableWithKits[] = {3, 8};
		repairCosts[] = {75.0, 50.0};
		hiddenSelections[] = {"Props", "Upper"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Vest\SWATVest\data\Props_ca.paa", "IMPGMOD\Equipment\Vest\SWATVest\data\UpperBody_ca.paa"};
		
		class ClothingTypes 
		{
			male = "IMPGMOD\Equipment\Vest\SWATVest\models\SWATVest_m.p3d";
			female = "IMPGMOD\Equipment\Vest\SWATVest\models\SWATVest_f.p3d";
		};
		
		class DamageSystem {
			class GlobalHealth {
				class Health {
					hitpoints = 500;
					transferToAttachmentsCoef = 0.5;
					healthLevels[] = 
					{
						{1.0, {"IMPGMOD\Equipment\Vest\SWATVest\data\Props.rvmat", "IMPGMOD\Equipment\Vest\SWATVest\data\SWATVest.rvmat"}}, 
						{0.7, {"IMPGMOD\Equipment\Vest\SWATVest\data\Props.rvmat", "IMPGMOD\Equipment\Vest\SWATVest\data\SWATVest.rvmat"}}, 
						{0.5, {"IMPGMOD\Equipment\Vest\SWATVest\data\Props_damage.rvmat", "IMPGMOD\Equipment\Vest\SWATVest\data\SWATVest_damage.rvmat"}}, 
						{0.3, {"IMPGMOD\Equipment\Vest\SWATVest\data\Props_damage.rvmat", "IMPGMOD\Equipment\Vest\SWATVest\data\SWATVest_damage.rvmat"}}, 
						{0.0, {"IMPGMOD\Equipment\Vest\SWATVest\data\Props_destruct.rvmat", "IMPGMOD\Equipment\Vest\SWATVest\data\SWATVest_destruct.rvmat"}}
					};
				};
			};
			
			class GlobalArmor 
			{
				class Projectile 
				{
					class Health 
					{
						damage = 0.5;
					};
					
					class Blood 
					{
						damage = 0.5;
					};
					
					class Shock 
					{
						damage = 0.5;
					};
				};
				
				class Melee 
				{
					class Health 
					{
						damage = 0.5;
					};
					
					class Blood 
					{
						damage = 0.5;
					};
					
					class Shock 
					{
						damage = 0.5;
					};
				};
				
				class Infected 
				{
					class Health 
					{
						damage = 0.5;
					};
					
					class Blood 
					{
						damage = 0.5;
					};
					
					class Shock 
					{
						damage = 0.5;
					};
				};
				
				class FragGrenade 
				{
					class Health 
					{
						damage = 0.5;
					};
					
					class Blood 
					{
						damage = 0.5;
					};
					
					class Shock 
					{
						damage = 0.5;
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
	
	class IMP_Vest_SWAT : IMP_Vest_SWAT_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Vest\SWATVest\data\Props_ca.paa", "IMPGMOD\Equipment\Vest\SWATVest\data\UpperBody_ca.paa"};
	};
};
