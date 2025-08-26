class CfgPatches 
{
	class IMP_AUVest_6B3 
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
	
	class IMP_AUVest_6B3_ColorBase : Clothing {
		scope = 0;
		RankLevel = 2;
		displayName = "$STR_IMP_AuVest";
		descriptionShort = "$STR_IMP_AuVest2";
		model = "IMPGMOD\Equipment\ArmorUnlVest\6B3\models\6B3_g.p3d";
		attachments[] = {};
		inventorySlot[] = {"Vest", "Vest1"};
		itemInfo[] = {"Clothing", "Vest"};
		quickBarBonus = 2;
		weight = 4000;
		noUNLVest = 1;
		itemSize[] = {4, 4};
		itemsCargoSize[] = {4, 3};
		varWetMax=0.048999999;
		heatIsolation=0.5;
		repairableWithKits[] = {3, 8};
		repairCosts[] = {75.0, 50.0};
		hiddenSelections[] = {"camoflage"};
		
		class ClothingTypes {
			male = "IMPGMOD\Equipment\ArmorUnlVest\6B3\models\6B3_m.p3d";
			female = "IMPGMOD\Equipment\ArmorUnlVest\6B3\models\6B3_f.p3d";
		};
		
		class DamageSystem {
			class GlobalHealth {
				class Health {
					hitpoints = 500;
					transferToAttachmentsCoef = 0.5;
					healthLevels[] = 
					{
						{1.0, {"IMPGMOD\Equipment\ArmorUnlVest\6B3\data\6B3.rvmat"}}, 
						{0.7, {"IMPGMOD\Equipment\ArmorUnlVest\6B3\data\6B3.rvmat"}}, 
						{0.5, {"IMPGMOD\Equipment\ArmorUnlVest\6B3\data\6B3_damage.rvmat"}}, 
						{0.3, {"IMPGMOD\Equipment\ArmorUnlVest\6B3\data\6B3_damage.rvmat"}}, 
						{0.0, {"IMPGMOD\Equipment\ArmorUnlVest\6B3\data\6B3_destruct.rvmat"}}
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
	
	class IMP_AUVest_6B3_Green : IMP_AUVest_6B3_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\ArmorUnlVest\6B3\data\6B3_co.paa"};
	};
};
