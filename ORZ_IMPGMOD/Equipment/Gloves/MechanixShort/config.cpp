class CfgPatches 
{
	class IMP_Gloves_MechanixShort
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data", "DZ_Characters", "DZ_Scripts"};
	};
};

class cfgVehicles 
{
	class Clothing;
	
	class IMP_Gloves_MechanixShort_ColorBase : Clothing 
	{
		scope = 0;
		displayName = "$STR_IMP_MechanixGloves";
		descriptionShort = "$STR_IMP_GlovesALL";
		model = "IMPGMOD\Equipment\Gloves\MechanixShort\models\MechanixShort_g.p3d";
		inventorySlot[] = {"Gloves", "Gloves1"};
		simulation="clothing";
		itemInfo[] = {"Clothing", "Gloves"};
		rotationFlags=34;
		weight=454;
		itemSize[]={2,2};
		varWetMax=0.048999999;
		heatIsolation=0.5;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		hiddenSelections[] = {"camoflage", "personality"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Gloves\MechanixShort\data\MechanixShort_Black.paa"};
		
		class ClothingTypes 
		{
			male = "IMPGMOD\Equipment\Gloves\MechanixShort\models\MechanixShort_m.p3d";
			female = "IMPGMOD\Equipment\Gloves\MechanixShort\models\MechanixShort_f.p3d";
		};
		
		class DamageSystem 
		{
			class GlobalHealth 
			{
				class Health 
				{
					hitpoints = 500;
					healthLevels[] = 
					{
						{1.00, {"IMPGMOD\Equipment\Gloves\MechanixShort\data\MechanixShort.rvmat"}}, 
						{0.7, {"IMPGMOD\Equipment\Gloves\MechanixShort\data\MechanixShort.rvmat"}}, 
						{0.5, {"IMPGMOD\Equipment\Gloves\MechanixShort\data\MechanixShort_damage.rvmat"}}, 
						{0.3, {"IMPGMOD\Equipment\Gloves\MechanixShort\data\MechanixShort_damage.rvmat"}}, 
						{0.0, {"IMPGMOD\Equipment\Gloves\MechanixShort\data\MechanixShort_destruct.rvmat"}}
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
					soundSet = "WorkingGloves_pickup_SoundSet";
					id = 797;
				};
				
				class drop 
				{
					soundset = "WorkingGloves_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	
	class IMP_Gloves_MechanixShort_Black : IMP_Gloves_MechanixShort_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Gloves\MechanixShort\data\MechanixShort_Black.paa"};
	};
	
	class IMP_Gloves_MechanixShort_White : IMP_Gloves_MechanixShort_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Gloves\MechanixShort\data\MechanixShort_White.paa"};
	};
};
