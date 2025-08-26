class CfgPatches 
{
	class IMP_Vest_JPC
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
	
	class IMP_Vest_JPC_ColorBase : Clothing 
	{
		scope = 0;
		RankLevel = 1;
		displayName = "JPC";
		descriptionShort = "$STR_IMP_VestALL";
		model = "IMPGMOD\Equipment\Vest\JPC\models\JPC_g.p3d";
		attachments[] = {"PatchBig", "PatchSmall"};
		inventorySlot[] = {"Vest", "Vest1"};
		itemInfo[] = {"Clothing", "Vest"};
		weight = 4000;
		noUNLVest = 1;
		itemSize[] = {5, 5};
		quickBarBonus = 2;
		varWetMax=0.048999999;
		heatIsolation=0.5;
		repairableWithKits[] = {3, 8};
		repairCosts[] = {75.0, 50.0};
		hiddenSelections[] = {"camoflage"};
		
		class ClothingTypes 
		{
			male = "IMPGMOD\Equipment\Vest\JPC\models\JPC_m.p3d";
			female = "IMPGMOD\Equipment\Vest\JPC\models\JPC_f.p3d";
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
						{1.0, {"IMPGMOD\Equipment\Vest\JPC\data\JPC.rvmat"}}, 
						{0.7, {"IMPGMOD\Equipment\Vest\JPC\data\JPC.rvmat"}}, 
						{0.5, {"IMPGMOD\Equipment\Vest\JPC\data\JPC_damage.rvmat"}}, 
						{0.3, {"IMPGMOD\Equipment\Vest\JPC\data\JPC_damage.rvmat"}}, 
						{0.0, {"IMPGMOD\Equipment\Vest\JPC\data\JPC_destruct.rvmat"}}
					};
				};
			};
			
			class GlobalArmor 
			{
				class Projectile 
				{
					class Health 
					{
						damage = 0.6;
					};
					
					class Blood 
					{
						damage = 0.6;
					};
					
					class Shock 
					{
						damage = 0.6;
					};
				};
				
				class Melee 
				{
					class Health 
					{
						damage = 0.6;
					};
					
					class Blood 
					{
						damage = 0.6;
					};
					
					class Shock 
					{
						damage = 0.6;
					};
				};
				
				class Infected 
				{
					class Health 
					{
						damage = 0.6;
					};
					
					class Blood 
					{
						damage = 0.6;
					};
					
					class Shock 
					{
						damage = 0.6;
					};
				};
				
				class FragGrenade 
				{
					class Health 
					{
						damage = 0.6;
					};
					
					class Blood 
					{
						damage = 0.6;
					};
					
					class Shock 
					{
						damage = 0.6;
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
	
	class IMP_Vest_JPC_Black : IMP_Vest_JPC_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Vest\JPC\data\JPC_Black_co.paa"};
	};
	
	class IMP_Vest_JPC_Tan : IMP_Vest_JPC_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Vest\JPC\data\JPC_Tan_co.paa"};
	};
	
	class IMP_Vest_JPC_Green : IMP_Vest_JPC_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Vest\JPC\data\JPC_Green_co.paa"};
	};
	
	class IMP_Vest_JPC_MARPAT : IMP_Vest_JPC_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Vest\JPC\data\JPC_MARPAT_co.paa"};
	};
	
	class IMP_Vest_JPC_EMR : IMP_Vest_JPC_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Vest\JPC\data\JPC_EMR_co.paa"};
	};
	
	class IMP_Vest_JPC_NWU : IMP_Vest_JPC_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Vest\JPC\data\JPC_NWU_co.paa"};
	};
	
	class IMP_Vest_JPC_UCP : IMP_Vest_JPC_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Vest\JPC\data\JPC_UCP_co.paa"};
	};
};
