class CfgPatches 
{
	class IMP_Gloves_SWAT_Gloves 
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data", "DZ_Characters", "DZ_Scripts"};
	};
};

class cfgVehicles 
{
	class Clothing_Base;
	class Clothing: Clothing_Base {};
	
	class IMP_Gloves_SWAT_Gloves_ColorBase : Clothing 
	{
		scope = 0;
		RankLevel = 2;
		displayName = "$STR_IMP_SWATGLOVES";
		descriptionShort = "$STR_IMP_SWATGLOVESD";
		model = "IMPGMOD\Equipment\Gloves\SWATGloves\models\SWATGloves_g.p3d";
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
		hiddenSelections[] = {"camoflage"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Gloves\SWATGloves\data\SWATGloves_co.paa"};
		
		class ClothingTypes 
		{
			male = "IMPGMOD\Equipment\Gloves\SWATGloves\models\SWATGloves.p3d";
			female = "IMPGMOD\Equipment\Gloves\SWATGloves\models\SWATGloves.p3d";
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
						{1.00, {"IMPGMOD\Equipment\Gloves\SWATGloves\data\SWATGloves.rvmat"}}, 
						{0.7, {"IMPGMOD\Equipment\Gloves\SWATGloves\data\SWATGloves.rvmat"}}, 
						{0.5, {"IMPGMOD\Equipment\Gloves\SWATGloves\data\SWATGloves_damage.rvmat"}}, 
						{0.3, {"IMPGMOD\Equipment\Gloves\SWATGloves\data\SWATGloves_damage.rvmat"}}, 
						{0.0, {"IMPGMOD\Equipment\Gloves\SWATGloves\data\SWATGloves_destruct.rvmat"}}
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
	
	class IMP_Gloves_SWAT_Gloves : IMP_Gloves_SWAT_Gloves_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Gloves\SWATGloves\data\SWATGloves_co.paa"};
	};
	
	class IMP_Gloves_SWAT_Gloves_Black : IMP_Gloves_SWAT_Gloves_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Gloves\SWATGloves\data\SWATGloves_Black_co.paa"};
	};
	
	class IMP_Gloves_SWAT_Gloves_EMR : IMP_Gloves_SWAT_Gloves_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Gloves\SWATGloves\data\SWATGloves_EMR.paa"};
	};
	
	class IMP_Gloves_SWAT_Gloves_UCP : IMP_Gloves_SWAT_Gloves_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Gloves\SWATGloves\data\SWATGloves_UCP.paa"};
	};
	
	class IMP_Gloves_SWAT_Gloves_NWU : IMP_Gloves_SWAT_Gloves_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Gloves\SWATGloves\data\SWATGloves_NWU.paa"};
	};
	
	class IMP_Gloves_SWAT_Gloves_MARPAT : IMP_Gloves_SWAT_Gloves_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Gloves\SWATGloves\data\SWATGloves_MARPAT.paa"};
	};

};
