class CfgPatches 
{
	class IMP_Vest_6B13 
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
	
	class IMP_Vest_6B13_ColorBase : Clothing 
	{
		scope = 0;
		RankLevel = 3;
		displayName = "$STR_IMP_6B13";
		descriptionShort = "$STR_IMP_6B13D";
		model = "IMPGMOD\Equipment\Vest\6B13\models\6b13_g.p3d";
		attachments[] = {"PatchBig", "PatchSmall"};
		inventorySlot[] = {"Vest", "Vest1"};
		itemInfo[] = {"Clothing", "Vest"};
		weight = 6000;
		noUNLVest = 0;
		itemSize[] = {5, 5};
		quickBarBonus = 3;
		varWetMax=0.048999999;
		heatIsolation=0.5;
		repairableWithKits[] = {3, 8};
		repairCosts[] = {75.0, 50.0};
		hiddenSelections[] = {"camoflage", "camoflage1"};
		
		class ClothingTypes 
		{
			male = "IMPGMOD\Equipment\Vest\6B13\models\6b13_m.p3d";
			female = "IMPGMOD\Equipment\Vest\6B13\models\6b13_f.p3d";
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
						{1.0, {"IMPGMOD\Equipment\Vest\6B13\data\6b13IMP.rvmat", "IMPGMOD\Equipment\Vest\6B13\data\6B13Detail.rvmat"}}, 
						{0.7, {"IMPGMOD\Equipment\Vest\6B13\data\6b13IMP.rvmat", "IMPGMOD\Equipment\Vest\6B13\data\6B13Detail.rvmat"}}, 
						{0.5, {"IMPGMOD\Equipment\Vest\6B13\data\6b13IMP_damage.rvmat", "IMPGMOD\Equipment\Vest\6B13\data\6B13Detail.rvmat"}}, 
						{0.3, {"IMPGMOD\Equipment\Vest\6B13\data\6b13IMP_damage.rvmat", "IMPGMOD\Equipment\Vest\6B13\data\6B13Detail.rvmat"}}, 
						{0.0, {"IMPGMOD\Equipment\Vest\6B13\data\6b13IMP_destruct.rvmat", "IMPGMOD\Equipment\Vest\6B13\data\6B13Detail.rvmat"}}
					};
				};
			};
			
			class GlobalArmor 
			{
				class Projectile 
				{
					class Health 
					{
						damage = 0.25;
					};
					
					class Blood 
					{
						damage = 0.25;
					};
					
					class Shock 
					{
						damage = 0.25;
					};
				};
				
				class Melee 
				{
					class Health 
					{
						damage = 0.25;
					};
					
					class Blood 
					{
						damage = 0.25;
					};
					
					class Shock 
					{
						damage = 0.25;
					};
				};
				
				class Infected 
				{
					class Health 
					{
						damage = 0.25;
					};
					
					class Blood 
					{
						damage = 0.25;
					};
					
					class Shock 
					{
						damage = 0.25;
					};
				};
				
				class FragGrenade 
				{
					class Health 
					{
						damage = 0.25;
					};
					
					class Blood 
					{
						damage = 0.25;
					};
					
					class Shock 
					{
						damage = 0.25;
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
	
	class IMP_Vest_6B13_Black : IMP_Vest_6B13_ColorBase 
	{
		scope = 2;
		LvlArmor = 1;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Vest\6B13\data\6B13_Black_co.paa", "IMPGMOD\Equipment\Vest\6B13\data\6B13Detail_co.paa"};
	};
	
	class IMP_Vest_6B13_Tan : IMP_Vest_6B13_ColorBase 
	{
		scope = 2;
		LvlArmor = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Vest\6B13\data\6B13_Tan_co.paa", "IMPGMOD\Equipment\Vest\6B13\data\6B13Detail_co.paa"};
	};
	
	class IMP_Vest_6B13_Green : IMP_Vest_6B13_ColorBase 
	{
		scope = 2;
		LvlArmor = 3;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Vest\6B13\data\6B13_Green_co.paa", "IMPGMOD\Equipment\Vest\6B13\data\6B13Detail_co.paa"};
	};
	
	class IMP_Vest_6B13_MARPAT : IMP_Vest_6B13_ColorBase 
	{
		scope = 2;
		LvlArmor = 4;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Vest\6B13\data\6B13_MARPAT_co.paa", "IMPGMOD\Equipment\Vest\6B13\data\6B13Detail_co.paa"};
	};
	
	class IMP_Vest_6B13_EMR : IMP_Vest_6B13_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Vest\6B13\data\6B13_EMR_co.paa", "IMPGMOD\Equipment\Vest\6B13\data\6B13Detail_co.paa"};
	};
	
	class IMP_Vest_6B13_NWU : IMP_Vest_6B13_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Vest\6B13\data\6B13_NWU_co.paa", "IMPGMOD\Equipment\Vest\6B13\data\6B13Detail_co.paa"};
	};
	
	class IMP_Vest_6B13_UCP : IMP_Vest_6B13_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Vest\6B13\data\6B13_UCP_co.paa", "IMPGMOD\Equipment\Vest\6B13\data\6B13Detail_co.paa"};
	};
	
	class IMP_Vest_6B13_Killa : IMP_Vest_6B13_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Vest\6B13\data\6B13_Killa_co.paa", "IMPGMOD\Equipment\Vest\6B13\data\6B13Detail_co.paa"};
	};
};
