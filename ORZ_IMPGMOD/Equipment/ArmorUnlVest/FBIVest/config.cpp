class CfgPatches {
	class IMP_AUVest_FBIVest {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data", "DZ_Characters", "DZ_Scripts","DZ_Characters_Vests"};
	};
};

class CfgVehicles {
	class Clothing_Base;
	
	class Clothing : Clothing_Base {};
	
	class IMP_AUVest_FBIVest_ColorBase : Clothing {
		scope = 0;
		RankLevel = 3;
		displayName = "$STR_IMP_FBIVest";
		descriptionShort = "$STR_IMP_FBIVestD";
		model = "IMPGMOD\Equipment\ArmorUnlVest\FBIVest\models\FBIVest_g.p3d";
		inventorySlot = "Vest";
		itemInfo[] = {"Clothing", "Vest"};
		attachments[] = {"PatchBig", "PatchSmall"};
		weight = 10000;
		noUNLVest = 1;
		itemSize[] = {4, 4};
		itemsCargoSize[] = {4, 3};
		absorbency = 0.1;
		heatIsolation = 0.1;
		repairableWithKits[] = {5, 3};
		repairCosts[] = {30.0, 25.0};
		hiddenSelections[] = {"Camoflage"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\ArmorUnlVest\FBIVest\data\Body_co.paa"};
		
		class ClothingTypes {
			male = "IMPGMOD\Equipment\ArmorUnlVest\FBIVest\models\FBIVest_m.p3d";
			female = "IMPGMOD\Equipment\ArmorUnlVest\FBIVest\models\FBIVest_m.p3d";
		};
		
		class DamageSystem {
			class GlobalHealth {
				class Health {
					hitpoints = 500;
					healthLevels[] = {{1.01, {"IMPGMOD\Equipment\ArmorUnlVest\FBIVest\data\FBI.rvmat"}}, {0.7, {"IMPGMOD\Equipment\ArmorUnlVest\FBIVest\data\FBI.rvmat"}}, {0.5, {"IMPGMOD\Equipment\ArmorUnlVest\FBIVest\data\FBI_damage.rvmat"}}, {0.3, {"IMPGMOD\Equipment\ArmorUnlVest\FBIVest\data\FBI_damage.rvmat"}}, {0.01, {"IMPGMOD\Equipment\ArmorUnlVest\FBIVest\data\FBI_destruct.rvmat"}}};
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
	
	class IMP_AUVest_FBIVest_Green : IMP_AUVest_FBIVest_ColorBase {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\ArmorUnlVest\FBIVest\data\Body_co.paa"};
	};
	
	class IMP_AUVest_FBIVest_Black : IMP_AUVest_FBIVest_ColorBase {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\ArmorUnlVest\FBIVest\data\Body_black_co.paa"};
	};
	
	class IMP_AUVest_FBIVest_Tan : IMP_AUVest_FBIVest_ColorBase {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\ArmorUnlVest\FBIVest\data\Body_tan_co.paa"};
	};
	
	class IMP_AUVest_FBIVest_NWU : IMP_AUVest_FBIVest_ColorBase {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\ArmorUnlVest\FBIVest\data\Body_co_NWU.paa"};
	};
	
	class IMP_AUVest_FBIVest_EMR : IMP_AUVest_FBIVest_ColorBase {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\ArmorUnlVest\FBIVest\data\Body_co_EMR.paa"};
	};
	
	class IMP_AUVest_FBIVest_MARPAT : IMP_AUVest_FBIVest_ColorBase {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\ArmorUnlVest\FBIVest\data\Body_co_MARPAT.paa"};
	};
	
	class IMP_AUVest_FBIVest_UCP : IMP_AUVest_FBIVest_ColorBase {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\ArmorUnlVest\FBIVest\data\Body_co_UCP.paa"};
	};
};
