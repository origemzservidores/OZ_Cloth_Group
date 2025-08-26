class CfgPatches 
{
	class IMP_Vest_6B2 
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
	
	class IMP_Vest_6B2_ColorBase : Clothing {
		scope = 0;
		RankLevel = 1;
		displayName = "6Б2";
		descriptionShort = "$STR_IMP_VestALL";
		model = "IMPGMOD\Equipment\Vest\6B2\models\6B2_g.p3d";
		attachments[] = {};
		inventorySlot[] = {"Vest", "Vest1"};
		noUNLVest = 0;
		itemInfo[] = {"Clothing", "Vest"};
		quickBarBonus = 2;
		weight = 2000;
		itemSize[] = {5, 5};
		varWetMax=0.048999999;
		heatIsolation=0.5;
		repairableWithKits[] = {3, 8};
		repairCosts[] = {75.0, 50.0};
		hiddenSelections[] = {"camoflage"};
		
		class ClothingTypes {
			male = "IMPGMOD\Equipment\Vest\6B2\models\6B2_m.p3d";
			female = "IMPGMOD\Equipment\Vest\6B2\models\6B2_f.p3d";
		};
		
		class DamageSystem {
			class GlobalHealth {
				class Health {
					hitpoints = 500;//общее хп броника
					transferToAttachmentsCoef = 0.5;//Передача урона по аттачментам предмета
					healthLevels[] = 
					{
						{1.0, {"IMPGMOD\Equipment\Vest\6B2\data\6B2.rvmat"}}, 
						{0.7, {"IMPGMOD\Equipment\Vest\6B2\data\6B2.rvmat"}}, 
						{0.5, {"IMPGMOD\Equipment\Vest\6B2\data\6B2_damage.rvmat"}}, 
						{0.3, {"IMPGMOD\Equipment\Vest\6B2\data\6B2_damage.rvmat"}}, 
						{0.0, {"IMPGMOD\Equipment\Vest\6B2\data\6B2_destruct.rvmat"}}
					};
				};
			};
			
			class GlobalArmor //Общая защита
			{
				class Projectile //Защита от пуль
				{
					class Health 
					{
						damage = 0.8;//Если урон патрона 100, то по тебе при этом значении придет 80 урона, а если допустим у тебя параметр 0.8, то в тебя прилетит 80
					};
					
					class Blood 
					{
						damage = 0.8;//
					};
					
					class Shock 
					{
						damage = 0.8;//
					};
				};
				
				class Melee //Защита от ударов и ножевых
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
				
				class Infected //Защита от зомби
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
				
				class FragGrenade //Защита от взрывов
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
	
	class IMP_Vest_6B2_Camo : IMP_Vest_6B2_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Vest\6B2\data\6B2_co.paa"};
	};
};