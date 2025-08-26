class CfgPatches 
{
	class IMP_Vest_Armis 
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
	
	class IMP_Vest_Armis_ColorBase : Clothing 
	{
		scope = 0;
		RankLevel = 5;
		displayName = "Armis";
		descriptionShort = "$STR_IMP_VestALL";
		model = "IMPGMOD\Equipment\Vest\Armis\models\Armis_g.p3d";
		attachments[] = {"em_pouch", "ifak_pouch", "PersonalRadio", "VestGrenadeA", "VestGrenadeB", "mag_pouch_a", "mag_pouch_b", "mag_pouch_c", "PatchBig", "PatchSmall", "morphine", "epinephrine", "Chemlight"};
		inventorySlot[] = {"Vest", "Vest1"};
		itemInfo[] = {"Clothing", "Vest"};
		weight = 8000;
		itemSize[] = {5, 5};
		noUNLVest = 1;
		quickBarBonus = 4;
		varWetMax=0.048999999;
		heatIsolation=1;
		repairableWithKits[] = {3, 8};
		repairCosts[] = {75.0, 50.0};
		hiddenSelections[] = {"camoflage"};
		
		class ClothingTypes 
		{
			male = "IMPGMOD\Equipment\Vest\Armis\models\Armis_m.p3d";
			female = "IMPGMOD\Equipment\Vest\Armis\models\Armis_f.p3d";
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
						{1.0, {"IMPGMOD\Equipment\Vest\Armis\data\Armis.rvmat"}}, 
						{0.7, {"IMPGMOD\Equipment\Vest\Armis\data\Armis.rvmat"}}, 
						{0.5, {"IMPGMOD\Equipment\Vest\Armis\data\Armis_damage.rvmat"}}, 
						{0.3, {"IMPGMOD\Equipment\Vest\Armis\data\Armis_damage.rvmat"}}, 
						{0.0, {"IMPGMOD\Equipment\Vest\Armis\data\Armis_destruct.rvmat"}}
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
	
	class IMP_Vest_Armis_Black : IMP_Vest_Armis_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Vest\Armis\data\Armis_black_co.paa"};
	};
	
	class IMP_Vest_Armis_Green : IMP_Vest_Armis_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Vest\Armis\data\Armis_green_co.paa"};
	};
	
	class IMP_Vest_Armis_Tan : IMP_Vest_Armis_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Vest\Armis\data\Armis_tan_co.paa"};
	};
	
	class IMP_Vest_Armis_EMR : IMP_Vest_Armis_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Vest\Armis\data\Armis_emr_co.paa"};
	};
	
	class IMP_Vest_Armis_NWU : IMP_Vest_Armis_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Vest\Armis\data\Armis_nwu_co.paa"};
	};
	
	class IMP_Vest_Armis_MARPAT : IMP_Vest_Armis_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Vest\Armis\data\Armis_marpat_co.paa"};
	};
	
	class IMP_Vest_Armis_UCP : IMP_Vest_Armis_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Vest\Armis\data\Armis_ucp_co.paa"};
	};
};
