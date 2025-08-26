class CfgPatches 
{
	class IMP_UNLVest_Azimut 
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
	
	class IMP_UNLVest_Azimut_ColorBase : Clothing {
		scope = 0;
		RankLevel = 4;
		displayName = "$STR_IMP_AzimutSS";
		descriptionShort = "$STR_IMP_UNLVESTALL";
		model = "IMPGMOD\Equipment\UnloadingVest\Azimut\models\Azimut_g.p3d";
		attachments[] = {};
		inventorySlot[] = {"UnloadingVest", "Vest1"};
		itemInfo[] = {"Clothing", "Vest"};
		quickBarBonus = 2;
		weight = 1400;
		itemSize[] = {6, 6};
		itemsCargoSize[] = {5, 10};
		varWetMax=0.048999999;
		heatIsolation=0.5;
		repairableWithKits[] = {3, 8};
		repairCosts[] = {75.0, 50.0};
		hiddenSelections[] = {"camoflage"};
		
		class ClothingTypes {
			male = "IMPGMOD\Equipment\UnloadingVest\Azimut\models\Azimut_m.p3d";
			female = "IMPGMOD\Equipment\UnloadingVest\Azimut\models\Azimut_f.p3d";
		};
		
		class DamageSystem {
			class GlobalHealth {
				class Health {
					hitpoints = 500;
					transferToAttachmentsCoef = 0.5;
					healthLevels[] = 
					{
						{1.0, {"IMPGMOD\Equipment\UnloadingVest\Azimut\data\Azimut.rvmat"}}, 
						{0.7, {"IMPGMOD\Equipment\UnloadingVest\Azimut\data\Azimut.rvmat"}}, 
						{0.5, {"IMPGMOD\Equipment\UnloadingVest\Azimut\data\Azimut_damage.rvmat"}}, 
						{0.3, {"IMPGMOD\Equipment\UnloadingVest\Azimut\data\Azimut_damage.rvmat"}}, 
						{0.0, {"IMPGMOD\Equipment\UnloadingVest\Azimut\data\Azimut_destruct.rvmat"}}
					};
				};
			};
			
			class GlobalArmor 
			{
				class Projectile 
				{
					class Health 
					{
						damage = 1;
					};
					
					class Blood 
					{
						damage = 1;
					};
					
					class Shock 
					{
						damage = 1;
					};
				};
				
				class Melee 
				{
					class Health 
					{
						damage = 1;
					};
					
					class Blood 
					{
						damage = 1;
					};
					
					class Shock 
					{
						damage = 1;
					};
				};
				
				class Infected 
				{
					class Health 
					{
						damage = 1;
					};
					
					class Blood 
					{
						damage = 1;
					};
					
					class Shock 
					{
						damage = 1;
					};
				};
				
				class FragGrenade 
				{
					class Health 
					{
						damage = 1;
					};
					
					class Blood 
					{
						damage = 1;
					};
					
					class Shock 
					{
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
	
	class IMP_UNLVest_Azimut_Surpat : IMP_UNLVest_Azimut_ColorBase 
	{
		scope = 2;
		simpleHiddenSelections[] = {"big","small"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\UnloadingVest\Azimut\data\Azimut_Surpat_co.paa"};
	};
	
	class IMP_UNLVest_Azimut_Black : IMP_UNLVest_Azimut_ColorBase 
	{
		scope = 2;
		simpleHiddenSelections[] = {"big","small"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\UnloadingVest\Azimut\data\Azimut_Black_co.paa"};
	};
};
