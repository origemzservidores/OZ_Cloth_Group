class CfgPatches 
{
	class IMP_Gloves_Mechanix
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
	
	class IMP_Gloves_Mechanix_ColorBase : Clothing 
	{
		scope = 0;
		RankLevel = 3;
		displayName = "$STR_IMP_MechanixGloves";
		descriptionShort = "$STR_IMP_GlovesALL";
		model = "IMPGMOD\Equipment\Gloves\Mechanix\models\Mechanix_g.p3d";
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
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Gloves\Mechanix\data\Mechanix_Black.paa"};
		
		class ClothingTypes 
		{
			male = "IMPGMOD\Equipment\Gloves\Mechanix\models\Mechanix_m.p3d";
			female = "IMPGMOD\Equipment\Gloves\Mechanix\models\Mechanix_f.p3d";
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
						{1.00, {"IMPGMOD\Equipment\Gloves\Mechanix\data\Mechanix.rvmat"}}, 
						{0.7, {"IMPGMOD\Equipment\Gloves\Mechanix\data\Mechanix.rvmat"}}, 
						{0.5, {"IMPGMOD\Equipment\Gloves\Mechanix\data\Mechanix_damage.rvmat"}}, 
						{0.3, {"IMPGMOD\Equipment\Gloves\Mechanix\data\Mechanix_damage.rvmat"}}, 
						{0.0, {"IMPGMOD\Equipment\Gloves\Mechanix\data\Mechanix_destruct.rvmat"}}
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
	
	class IMP_Gloves_Mechanix_Black : IMP_Gloves_Mechanix_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Gloves\Mechanix\data\Mechanix_Black.paa"};
	};
	
	class IMP_Gloves_Mechanix_UltraBlack : IMP_Gloves_Mechanix_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Gloves\Mechanix\data\Mechanix_UltraBlack.paa"};
	};
	
	class IMP_Gloves_Mechanix_Tan : IMP_Gloves_Mechanix_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Gloves\Mechanix\data\Mechanix_Tan.paa"};
	};
};
