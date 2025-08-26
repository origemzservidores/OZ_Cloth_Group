class CfgPatches 
{
	class IMP_Vest_Redut 
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
	
	class IMP_Vest_Redut_ColorBase : Clothing 
	{
		scope = 0;
		RankLevel = 5;
		displayName = "$STR_IMP_RedutT5";
		descriptionShort = "$STR_IMP_RedutT5D";
		model = "IMPGMOD\Equipment\Vest\Redut\Models\Redut_g.p3d";
		attachments[] = {"PatchBig", "PatchSmall"};
		inventorySlot[] = {"Vest", "Vest1"};
		noUNLVest = 0;
		itemInfo[] = {"Clothing", "Vest"};
		weight = 8000;
		itemSize[] = {5, 5};
		quickBarBonus = 4;
		varWetMax=0.048999999;
		heatIsolation=1;
		repairableWithKits[] = {3, 8};
		repairCosts[] = {75.0, 50.0};
		hiddenSelections[] = {"camoflage"};
		
		class ClothingTypes 
		{
			male = "IMPGMOD\Equipment\Vest\Redut\Models\Redut_m.p3d";
			female = "IMPGMOD\Equipment\Vest\Redut\Models\Redut_f.p3d";
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
						{1.0, {"IMPGMOD\Equipment\Vest\Redut\data\Redut.rvmat"}}, 
						{0.7, {"IMPGMOD\Equipment\Vest\Redut\data\Redut.rvmat"}}, 
						{0.5, {"IMPGMOD\Equipment\Vest\Redut\data\Redut.rvmat"}}, 
						{0.3, {"IMPGMOD\Equipment\Vest\Redut\data\Redut.rvmat"}}, 
						{0.0, {"IMPGMOD\Equipment\Vest\Redut\data\Redut.rvmat"}}
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
	
	class IMP_Vest_Redut_Black : IMP_Vest_Redut_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Vest\Redut\data\Redut_co.paa"};
	};
	
	class IMP_Vest_Redut_Green : IMP_Vest_Redut_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Vest\Redut\data\Redut_green.paa"};
	};
	
	class IMP_Vest_Redut_Tan : IMP_Vest_Redut_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Vest\Redut\data\Redut_tan.paa"};
	};
	
	class IMP_Vest_Redut_MARPAT : IMP_Vest_Redut_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Vest\Redut\data\Redut_MARPAT.paa"};
	};
	
	class IMP_Vest_Redut_UCP : IMP_Vest_Redut_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Vest\Redut\data\Redut_UCP.paa"};
	};
	
	class IMP_Vest_Redut_NWU : IMP_Vest_Redut_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Vest\Redut\data\Redut_NWU.paa"};
	};
	
	class IMP_Vest_Redut_EMR : IMP_Vest_Redut_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Vest\Redut\data\Redut_EMR.paa"};
	};
};
