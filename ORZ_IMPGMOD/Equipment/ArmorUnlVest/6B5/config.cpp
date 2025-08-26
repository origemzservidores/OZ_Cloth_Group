class CfgPatches 
{
	class IMP_AUVest_6B5 
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
	
	class IMP_AUVest_6B5_ColorBase : Clothing {
		scope = 0;
		RankLevel = 3;
		displayName = "$STR_IMP_6B5";
		descriptionShort = "$STR_IMP_6B52";
		model = "IMPGMOD\Equipment\ArmorUnlVest\6B5\models\6B5_g.p3d";
		attachments[] = {};
		inventorySlot[] = {"Vest", "Vest1"};
		itemInfo[] = {"Clothing", "Vest"};
		quickBarBonus = 2;
		noUNLVest = 1;
		weight = 4000;
		itemSize[] = {4, 4};
		itemsCargoSize[] = {4, 3};
		varWetMax=0.048999999;
		heatIsolation=0.5;
		repairableWithKits[] = {3, 8};
		repairCosts[] = {75.0, 50.0};
		hiddenSelections[] = {"camoflage"};
		
		class ClothingTypes {
			male = "IMPGMOD\Equipment\ArmorUnlVest\6B5\models\6B5_m.p3d";
			female = "IMPGMOD\Equipment\ArmorUnlVest\6B5\models\6B5_f.p3d";
		};
		
		class DamageSystem {
			class GlobalHealth {
				class Health {
					hitpoints = 500;
					transferToAttachmentsCoef = 0.5;
					healthLevels[] = 
					{
						{1.0, {"IMPGMOD\Equipment\ArmorUnlVest\6B5\data\6B5.rvmat"}}, 
						{0.7, {"IMPGMOD\Equipment\ArmorUnlVest\6B5\data\6B5.rvmat"}}, 
						{0.5, {"IMPGMOD\Equipment\ArmorUnlVest\6B5\data\6B5_damage.rvmat"}}, 
						{0.3, {"IMPGMOD\Equipment\ArmorUnlVest\6B5\data\6B5_damage.rvmat"}}, 
						{0.0, {"IMPGMOD\Equipment\ArmorUnlVest\6B5\data\6B5_destruct.rvmat"}}
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
	
	class IMP_AUVest_6B5_Khaki : IMP_AUVest_6B5_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\ArmorUnlVest\6B5\data\6B5_Khaki.paa"};
	};
	
	class IMP_AUVest_6B5_Flora : IMP_AUVest_6B5_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\ArmorUnlVest\6B5\data\6B5_Flora.paa"};
	};
};
