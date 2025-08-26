class CfgPatches 
{
	class IMP_Vest_6B45 
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
	
	class IMP_Vest_6B45_ColorBase : Clothing 
	{
		scope = 0;
		RankLevel = 4;
		displayName = "$STR_IMP_6B45";
		descriptionShort = "$STR_IMP_6B45D";
		model = "IMPGMOD\Equipment\Vest\6b45\models\6b45_g.p3d";
		attachments[] = {"PatchSmall", "em_pouch", "ifak_pouch", "PersonalRadio", "VestGrenadeA", "VestGrenadeB", "mag_pouch_a", "mag_pouch_b", "mag_pouch_c", "PatchBig", "PatchSmall"};
		inventorySlot[] = {"Vest", "Vest1"};
		itemInfo[] = {"Clothing", "Vest"};
		weight = 6000;
		noUNLVest = 1;
		itemSize[] = {5, 5};
		quickBarBonus = 3;
		varWetMax=0.048999999;
		heatIsolation=1;
		repairableWithKits[] = {3, 8};
		repairCosts[] = {75.0, 50.0};
		hiddenSelections[] = {"camoflage"};
		
		class ClothingTypes 
		{
			male = "IMPGMOD\Equipment\Vest\6b45\models\6b45_m.p3d";
			female = "IMPGMOD\Equipment\Vest\6b45\models\6b45_f.p3d";
		};
		
		class DamageSystem 
		{
			class GlobalHealth 
			{
				class Health 
				{
					hitpoints = 500;
					transferToAttachmentsCoef = 0.5;
					healthLevels[] = 
					{
						{1.0, {"IMPGMOD\Equipment\Vest\6b45\data\6b45.rvmat"}}, 
						{0.7, {"IMPGMOD\Equipment\Vest\6b45\data\6b45.rvmat"}}, 
						{0.5, {"IMPGMOD\Equipment\Vest\6b45\data\6b45_damage.rvmat"}}, 
						{0.3, {"IMPGMOD\Equipment\Vest\6b45\data\6b45_damage.rvmat"}}, 
						{0.0, {"IMPGMOD\Equipment\Vest\6b45\data\6b45_destruct.rvmat"}}
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
		
		class AnimEvents 
		{
			class SoundWeapon 
			{
				class pickUpItem 
				{
					soundSet = "SmershVest_pickup_SoundSet";
					id = 797;
				};
				
				class drop 
				{
					soundset = "SmershVest_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	
	class IMP_Vest_6B45_Black : IMP_Vest_6B45_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Vest\6b45\data\6b45_black.paa"};
	};
	
	class IMP_Vest_6B45_Green : IMP_Vest_6B45_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Vest\6b45\data\6b45_green.paa"};
	};
	
	class IMP_Vest_6B45_Tan : IMP_Vest_6B45_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Vest\6b45\data\6b45_tan.paa"};
	};
	
	class IMP_Vest_6B45_EMR : IMP_Vest_6B45_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Vest\6b45\data\6b45_EMR.paa"};
	};
	
	class IMP_Vest_6B45_NWU : IMP_Vest_6B45_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Vest\6b45\data\6b45_NWU.paa"};
	};
	
	class IMP_Vest_6B45_MARPAT : IMP_Vest_6B45_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Vest\6b45\data\6B45_Marpat.paa"};
	};
	
	class IMP_Vest_6B45_UCP : IMP_Vest_6B45_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Vest\6b45\data\6b45_UCP.paa"};
	};
};
