class CfgPatches 
{
	class IMP_AUVest_LightVest 
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
	
	class IMP_AUVest_LightVest_ColorBase : Clothing 
	{
		scope = 0;
		RankLevel = 1;
		displayName = "$STR_IMP_IMVLight";
		descriptionShort = "$STR_IMP_IMVLightD";
		model = "IMPGMOD\Equipment\ArmorUnlVest\IMVLight\models\IMVLight_g.p3d";
		attachments[] = {};
		inventorySlot[] = {"Vest", "Vest1"};
		itemInfo[] = {"Clothing", "Vest"};
		quickBarBonus = 1;
		weight = 4000;
		noUNLVest = 1;
		itemSize[] = {3, 3};
		itemsCargoSize[] = {3, 3};
		varWetMax=0.048999999;
		heatIsolation=0.5;
		repairableWithKits[] = {3, 8};
		repairCosts[] = {75.0, 50.0};
		hiddenSelections[] = {"camoflage"};
		
		class ClothingTypes 
		{
			male = "IMPGMOD\Equipment\ArmorUnlVest\IMVLight\models\IMVLight_m.p3d";
			female = "IMPGMOD\Equipment\ArmorUnlVest\IMVLight\models\IMVLight_f.p3d";
		};
		
		class DamageSystem {
			class GlobalHealth {
				class Health {
					hitpoints = 500;
					transferToAttachmentsCoef = 0.5;
					healthLevels[] = 
					{
						{1.0, {"IMPGMOD\Equipment\ArmorUnlVest\IMVLight\data\IMVLight.rvmat"}}, 
						{0.7, {"IMPGMOD\Equipment\ArmorUnlVest\IMVLight\data\IMVLight.rvmat"}}, 
						{0.5, {"IMPGMOD\Equipment\ArmorUnlVest\IMVLight\data\IMVLight_damage.rvmat"}}, 
						{0.3, {"IMPGMOD\Equipment\ArmorUnlVest\IMVLight\data\IMVLight_damage.rvmat"}}, 
						{0.0, {"IMPGMOD\Equipment\ArmorUnlVest\IMVLight\data\IMVLight_destruct.rvmat"}}
					};
				};
			};
			
			class GlobalArmor {
				class Projectile {
					class Health {
						damage = 0.9;
					};
					
					class Blood {
						damage = 0.9;
					};
					
					class Shock {
						damage = 0.9;
					};
				};
				
				class Melee {
					class Health {
						damage = 0.9;
					};
					
					class Blood {
						damage = 0.9;
					};
					
					class Shock {
						damage = 0.9;
					};
				};
				
				class Infected {
					class Health {
						damage = 0.9;
					};
					
					class Blood {
						damage = 0.9;
					};
					
					class Shock {
						damage = 0.9;
					};
				};
				
				class FragGrenade {
					class Health {
						damage = 0.9;
					};
					
					class Blood {
						damage = 0.9;
					};
					
					class Shock {
						damage = 0.9;
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
	
	class IMP_AUVest_LightVest : IMP_AUVest_LightVest_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\ArmorUnlVest\IMVLight\data\IMVLight_co.paa"};
	};
};
