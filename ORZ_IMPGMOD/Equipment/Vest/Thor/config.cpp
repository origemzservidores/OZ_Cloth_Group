class CfgPatches 
{
	class IMP_Vest_Thor 
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
	
	class IMP_Vest_Thor_ColorBase : Clothing {
		scope = 0;
		RankLevel = 5;
		displayName = "$STR_IMP_Thor";
		descriptionShort = "$STR_IMP_VestALL";
		model = "IMPGMOD\Equipment\Vest\Thor\models\Thor_g.p3d";
		attachments[] = {};
		inventorySlot[] = {"Vest", "Vest1"};
		itemInfo[] = {"Clothing", "Vest"};
		quickBarBonus = 4;
		weight = 8000;
		itemSize[] = {5, 5};
		noUNLVest = 0;
		varWetMax=0.048999999;
		heatIsolation=0.5;
		repairableWithKits[] = {3, 8};
		repairCosts[] = {75.0, 50.0};
		hiddenSelections[] = {"camoflage"};
		
		class ClothingTypes {
			male = "IMPGMOD\Equipment\Vest\Thor\models\Thor_m.p3d";
			female = "IMPGMOD\Equipment\Vest\Thor\models\Thor_f.p3d";
		};
		
		class DamageSystem {
			class GlobalHealth {
				class Health {
					hitpoints = 500;
					transferToAttachmentsCoef = 0.5;
					healthLevels[] = 
					{
						{1.0, {"IMPGMOD\Equipment\Vest\Thor\data\Thor.rvmat"}}, 
						{0.7, {"IMPGMOD\Equipment\Vest\Thor\data\Thor.rvmat"}}, 
						{0.5, {"IMPGMOD\Equipment\Vest\Thor\data\Thor_damage.rvmat"}}, 
						{0.3, {"IMPGMOD\Equipment\Vest\Thor\data\Thor_damage.rvmat"}}, 
						{0.0, {"IMPGMOD\Equipment\Vest\Thor\data\Thor_destruct.rvmat"}}
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
	
	class IMP_Vest_Thor_Tan : IMP_Vest_Thor_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Vest\Thor\data\Thor_Tan.paa"};
	};
	
	class IMP_Vest_Thor_Black : IMP_Vest_Thor_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Vest\Thor\data\Thor_Black.paa"};
	};
	
	class IMP_Vest_Thor_Green : IMP_Vest_Thor_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Vest\Thor\data\Thor_Green.paa"};
	};
	
	class IMP_Vest_Thor_MARPAT : IMP_Vest_Thor_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Vest\Thor\data\Thor_MARPAT.paa"};
	};
	
	class IMP_Vest_Thor_NWU : IMP_Vest_Thor_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Vest\Thor\data\Thor_NWU.paa"};
	};
	
	class IMP_Vest_Thor_UCP : IMP_Vest_Thor_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Vest\Thor\data\Thor_UCP.paa"};
	};
	
	class IMP_Vest_Thor_EMR : IMP_Vest_Thor_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Vest\Thor\data\Thor_EMR.paa"};
	};
};
