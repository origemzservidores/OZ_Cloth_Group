class CfgPatches 
{
	class IMP_Vest_6B23T 
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
	
	class IMP_Vest_6B23T_ColorBase : Clothing {
		scope = 0;
		RankLevel = 3;
		displayName = "6Б23";
		descriptionShort = "$STR_IMP_VestALL";
		model = "IMPGMOD\Equipment\Vest\6B23T\models\6B23T_g.p3d";
		attachments[] = {};
		inventorySlot[] = {"Vest", "Vest1"};
		itemInfo[] = {"Clothing", "Vest"};
		quickBarBonus = 3;
		noUNLVest = 0;
		weight = 6000;
		itemSize[] = {5, 5};
		varWetMax=0.05;
		heatIsolation=0.5;
		repairableWithKits[] = {3, 8};
		repairCosts[] = {75.0, 50.0};
		hiddenSelections[] = {"camoflage"};
		
		class ClothingTypes {
			male = "IMPGMOD\Equipment\Vest\6B23T\models\6B23T_m.p3d";
			female = "IMPGMOD\Equipment\Vest\6B23T\models\6B23T_f.p3d";
		};
		
		class DamageSystem {
			class GlobalHealth {
				class Health {
					hitpoints = 500;
					transferToAttachmentsCoef = 0.5;
					healthLevels[] = 
					{
						{1.0, {"IMPGMOD\Equipment\Vest\6B23T\data\6B23T.rvmat"}}, 
						{0.7, {"IMPGMOD\Equipment\Vest\6B23T\data\6B23T.rvmat"}}, 
						{0.5, {"IMPGMOD\Equipment\Vest\6B23T\data\6B23T_damage.rvmat"}}, 
						{0.3, {"IMPGMOD\Equipment\Vest\6B23T\data\6B23T_damage.rvmat"}}, 
						{0.0, {"IMPGMOD\Equipment\Vest\6B23T\data\6B23T_destruct.rvmat"}}
					};
				};
			};
			
			class GlobalArmor 
			{
				class Projectile 
				{
					class Health 
					{
						damage = 0.4;
					};
					
					class Blood 
					{
						damage = 0.4;
					};
					
					class Shock 
					{
						damage = 0.4;
					};
				};
				
				class Melee 
				{
					class Health 
					{
						damage = 0.4;
					};
					
					class Blood 
					{
						damage = 0.4;
					};
					
					class Shock 
					{
						damage = 0.4;
					};
				};
				
				class Infected 
				{
					class Health 
					{
						damage = 0.4;
					};
					
					class Blood 
					{
						damage = 0.4;
					};
					
					class Shock 
					{
						damage = 0.4;
					};
				};
				
				class FragGrenade 
				{
					class Health 
					{
						damage = 0.4;
					};
					
					class Blood 
					{
						damage = 0.4;
					};
					
					class Shock 
					{
						damage = 0.4;
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
	
	class IMP_Vest_6B23T_Flora : IMP_Vest_6B23T_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Vest\6B23T\data\6B23T_Flora.paa"};
	};
	
	class IMP_Vest_6B23T_Pixel : IMP_Vest_6B23T_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Vest\6B23T\data\6B23T_Pixel.paa"};
	};
};
