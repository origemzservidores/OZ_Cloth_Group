class CfgPatches 
{
	class IMP_Vest_AAC 
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
	
	class IMP_Vest_AACVest_ColorBase : Clothing 
	{
		displayName = "$STR_IMP_AAC";
		scope = 0;
		RankLevel = 2;
		descriptionShort = "$STR_IMP_AACD";
		model = "IMPGMOD\Equipment\Vest\AACVest\models\AACVest_g.p3d";
		attachments[] = {"PatchBig", "PatchSmall"};
		inventorySlot[] = {"Vest", "Vest1"};
		itemInfo[] = {"Clothing", "Vest"};
		itemSize[] = {5, 5};
		quickBarBonus = 2;
		noUNLVest = 0;
		weight = 4000;
		varWetMax=0.048999999;
		heatIsolation=0.5;
		repairableWithKits[] = {3, 8};
		repairCosts[] = {75.0, 50.0};
		hiddenSelections[] = {"camoflage"};
		
		class ClothingTypes 
		{
			male = "IMPGMOD\Equipment\Vest\AACVest\models\AACVest_m.p3d";
			female = "IMPGMOD\Equipment\Vest\AACVest\models\AACVest_f.p3d";
		};
		
		class DamageSystem {
			class GlobalHealth {
				class Health {
					hitpoints = 500;
					transferToAttachmentsCoef = 0.5;
					healthLevels[] = 
					{
						{1.0, {"IMPGMOD\Equipment\Vest\AACVest\data\AACVest.rvmat"}}, 
						{0.7, {"IMPGMOD\Equipment\Vest\AACVest\data\AACVest.rvmat"}}, 
						{0.5, {"IMPGMOD\Equipment\Vest\AACVest\data\AACVest_damage.rvmat"}}, 
						{0.3, {"IMPGMOD\Equipment\Vest\AACVest\data\AACVest_damage.rvmat"}}, 
						{0.0, {"IMPGMOD\Equipment\Vest\AACVest\data\AACVest_destruct.rvmat"}}
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
	
	class IMP_Vest_AACVest_Green : IMP_Vest_AACVest_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Vest\AACVest\data\AACVest_Green_co.paa"};
	};
	
	class IMP_Vest_AACVest_Black : IMP_Vest_AACVest_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Vest\AACVest\data\AACVest_Black_co.paa"};
	};
	
	class IMP_Vest_AACVest_Tan : IMP_Vest_AACVest_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Vest\AACVest\data\AACVest_Tan_co.paa"};
	};
	
	class IMP_Vest_AACVest_MARPAT : IMP_Vest_AACVest_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Vest\AACVest\data\AACVest_MARPAT.paa"};
	};
	
	class IMP_Vest_AACVest_EMR : IMP_Vest_AACVest_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Vest\AACVest\data\AACVest_EMR.paa"};
	};
	
	class IMP_Vest_AACVest_UCP : IMP_Vest_AACVest_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Vest\AACVest\data\AACVest_UCP.paa"};
	};
	
	class IMP_Vest_AACVest_NWU : IMP_Vest_AACVest_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Vest\AACVest\data\AACVest_NWU.paa"};
	};
};
