class CfgPatches 
{
	class IMP_UNLVest_UnloadingVest 
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
	
	class IMP_UNLVest_UnloadingVest_ColorBase : Clothing {
		scope = 0;
		RankLevel = 3;
		displayName = "$STR_IMP_UNLV";
		descriptionShort = "$STR_IMP_UNLVD";
		model = "IMPGMOD\Equipment\UnloadingVest\UnloadingVest\models\UNLV_g.p3d";
		attachments[] = {};
		inventorySlot[] = {"UnloadingVest", "Vest1"};
		itemInfo[] = {"Clothing", "Vest"};
		quickBarBonus = 2;
		weight = 4000;
		itemSize[] = {6, 6};
		itemsCargoSize[] = {5, 10};
		varWetMax=0.048999999;
		heatIsolation=0.5;
		repairableWithKits[] = {3, 8};
		repairCosts[] = {75.0, 50.0};
		hiddenSelections[] = {"camoflage"};
		
		class ClothingTypes {
			male = "IMPGMOD\Equipment\UnloadingVest\UnloadingVest\models\UNLV.p3d";
			female = "IMPGMOD\Equipment\UnloadingVest\UnloadingVest\models\UNLV_f.p3d";
		};
		
		class DamageSystem {
			class GlobalHealth {
				class Health {
					hitpoints = 500;
					transferToAttachmentsCoef = 0.5;
					healthLevels[] = 
					{
						{1.0, {"IMPGMOD\Equipment\UnloadingVest\UnloadingVest\data\UV.rvmat"}}, 
						{0.7, {"IMPGMOD\Equipment\UnloadingVest\UnloadingVest\data\UV.rvmat"}}, 
						{0.5, {"IMPGMOD\Equipment\UnloadingVest\UnloadingVest\data\UV_damage.rvmat"}}, 
						{0.3, {"IMPGMOD\Equipment\UnloadingVest\UnloadingVest\data\UV_damage.rvmat"}}, 
						{0.0, {"IMPGMOD\Equipment\UnloadingVest\UnloadingVest\data\UV_destruct.rvmat"}}
					};
				};
			};
			
			class GlobalArmor {
				class Projectile {
					class Health {
						damage = 1;
					};
					
					class Blood {
						damage = 1;
					};
					
					class Shock {
						damage = 1;
					};
				};
				
				class Melee {
					class Health {
						damage = 1;
					};
					
					class Blood {
						damage = 1;
					};
					
					class Shock {
						damage = 1;
					};
				};
				
				class Infected {
					class Health {
						damage = 1;
					};
					
					class Blood {
						damage = 1;
					};
					
					class Shock {
						damage = 1;
					};
				};
				
				class FragGrenade {
					class Health {
						damage = 1;
					};
					
					class Blood {
						damage = 1;
					};
					
					class Shock {
						damage = 1;
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
	
	class IMP_UNLVest_UnloadingVest_Black : IMP_UNLVest_UnloadingVest_ColorBase 
	{
		scope = 2;
		simpleHiddenSelections[] = {"big","small"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\UnloadingVest\UnloadingVest\data\UV_Black.paa"};
	};
	
	class IMP_UNLVest_UnloadingVest_Green : IMP_UNLVest_UnloadingVest_ColorBase 
	{
		scope = 2;
		simpleHiddenSelections[] = {"big","small"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\UnloadingVest\UnloadingVest\data\UV_Green.paa"};
	};
	
	class IMP_UNLVest_UnloadingVest_Tan : IMP_UNLVest_UnloadingVest_ColorBase 
	{
		scope = 2;
		simpleHiddenSelections[] = {"big","small"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\UnloadingVest\UnloadingVest\data\UV_Tan.paa"};
	};
	
	class IMP_UNLVest_UnloadingVest_MARPAT : IMP_UNLVest_UnloadingVest_ColorBase 
	{
		scope = 2;
		simpleHiddenSelections[] = {"big","small"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\UnloadingVest\UnloadingVest\data\UV_MARPAT.paa"};
	};
	
	class IMP_UNLVest_UnloadingVest_EMR : IMP_UNLVest_UnloadingVest_ColorBase 
	{
		scope = 2;
		simpleHiddenSelections[] = {"big","small"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\UnloadingVest\UnloadingVest\data\UV_EMR.paa"};
	};
	
	class IMP_UNLVest_UnloadingVest_UCP : IMP_UNLVest_UnloadingVest_ColorBase 
	{
		scope = 2;
		simpleHiddenSelections[] = {"big","small"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\UnloadingVest\UnloadingVest\data\UV_UCP.paa"};
	};
	
	class IMP_UNLVest_UnloadingVest_NWU : IMP_UNLVest_UnloadingVest_ColorBase 
	{
		scope = 2;
		simpleHiddenSelections[] = {"big","small"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\UnloadingVest\UnloadingVest\data\UV_NWU.paa"};
	};
};
