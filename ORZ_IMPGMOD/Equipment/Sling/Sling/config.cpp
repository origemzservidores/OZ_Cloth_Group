class CfgPatches
{
	class IMP_RifleSling_Universal
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Characters","DZ_Characters_Backpacks","DZ_Weapons_Firearms"};
	};
};

class CfgVehicles
{
	class Clothing_Base;
	class Clothing: Clothing_Base{};
	class IMP_RifleSling_ColorBase: Clothing
	{
		scope = 0;
		displayName = "$STR_IMP_FFSling";
		descriptionShort = "";
		model = "IMPGMOD\Equipment\Sling\Sling\models\sling_g.p3d";
		inventorySlot[] = {"Shoulder"};
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing","Back"};
		rotationFlags = 0;
		itemSize[] = {6,2};
		itemsCargoSize[] = {0,0};
		weight = 500;
		absorbency = 0.2;
		heatIsolation = 0.13;
		repairableWithKits[] = {5,3};
		repairCosts[] = {30,25};
		canBeDigged = 1;
		soundAttType = "Outdoor";
		attachments[] = {"Shoulder40"};
		ContinuouActions[] = {"AT_WRING_CLOTHES"};
		hiddenSelections[] = {"camoflage"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Sling\Sling\data\rifle_sling_co.paa","IMPGMOD\Equipment\Sling\Sling\data\rifle_sling_co.paa","IMPGMOD\Equipment\Sling\Sling\data\rifle_sling_co.paa"};
		class ClothingTypes
		{
			male = "IMPGMOD\Equipment\Sling\Sling\models\sling_m.p3d";
			female = "IMPGMOD\Equipment\Sling\Sling\models\sling_m.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 130;
					healthLevels[] = {{1.0,{"IMPGMOD\Equipment\Sling\Sling\data\riflesling.rvmat"}},{0.7,{"IMPGMOD\Equipment\Sling\Sling\data\riflesling.rvmat"}},{0.5,{"IMPGMOD\Equipment\Sling\Sling\data\rifle_sling_damaged.rvmat"}},{0.3,{"IMPGMOD\Equipment\Sling\Sling\data\rifle_sling_badlydamaged.rvmat"}},{0.0,{"IMPGMOD\Equipment\Sling\Sling\data\rifle_sling_ruined.rvmat"}}};
				};
			};
		};
	};
	class IMP_RifleSling_Black: IMP_RifleSling_ColorBase
	{
		scope = 2;
		colour = "Black";
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Sling\Sling\data\rifle_sling_black_co.paa","IMPGMOD\Equipment\Sling\Sling\data\rifle_sling_black_co.paa","IMPGMOD\Equipment\Sling\Sling\data\rifle_sling_black_co.paa"};
	};
	class IMP_RifleSling_Green: IMP_RifleSling_ColorBase
	{
		scope = 2;
		colour = "Green";
	};
	class IMP_RifleSling_Tan: IMP_RifleSling_ColorBase
	{
		scope = 2;
		colour = "Tan";
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Sling\Sling\data\rifle_sling_tan_co.paa","IMPGMOD\Equipment\Sling\Sling\data\rifle_sling_tan_co.paa","IMPGMOD\Equipment\Sling\Sling\data\rifle_sling_tan_co.paa"};
	};
	class IMP_RifleSling_Front_ColorBase: IMP_RifleSling_ColorBase
	{
		scope = 0;
		displayName = "$STR_IMP_FFSling";
		descriptionShort = "";
		model = "IMPGMOD\Equipment\Sling\Sling\models\sling_g.p3d";
		inventorySlot[] = {"Shoulder"};
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing","Back"};
		attachments[] = {"Shoulder40"};
		rotationFlags = 0;
		itemSize[] = {6,2};
		itemsCargoSize[] = {0,0};
		weight = 500;
		absorbency = 0.2;
		heatIsolation = 0.13;
		repairableWithKits[] = {5,3};
		repairCosts[] = {30,25};
		canBeDigged = 1;
		soundAttType = "Outdoor";
		ContinuouActions[] = {"AT_WRING_CLOTHES"};
		hiddenSelections[] = {"camoflage"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Sling\Sling\data\rifle_sling_co.paa","IMPGMOD\Equipment\Sling\Sling\data\rifle_sling_co.paa","IMPGMOD\Equipment\Sling\Sling\data\rifle_sling_co.paa"};
		class ClothingTypes
		{
			male = "IMPGMOD\Equipment\Sling\Sling\models\rifleslingfront_m.p3d";
			female = "IMPGMOD\Equipment\Sling\Sling\models\rifleslingfront_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 130;
					healthLevels[] = {{1.0,{"IMPGMOD\Equipment\Sling\Sling\data\riflesling.rvmat"}},{0.7,{"IMPGMOD\Equipment\Sling\Sling\data\riflesling.rvmat"}},{0.5,{"IMPGMOD\Equipment\Sling\Sling\data\rifle_sling_damaged.rvmat"}},{0.3,{"IMPGMOD\Equipment\Sling\Sling\data\rifle_sling_badlydamaged.rvmat"}},{0.0,{"IMPGMOD\Equipment\Sling\Sling\data\rifle_sling_ruined.rvmat"}}};
				};
			};
		};
	};
	class IMP_RifleSling_Front_Black: IMP_RifleSling_Front_ColorBase
	{
		scope = 2;
		colour = "Black";
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Sling\Sling\data\rifle_sling_black_co.paa","IMPGMOD\Equipment\Sling\Sling\data\rifle_sling_black_co.paa","IMPGMOD\Equipment\Sling\Sling\data\rifle_sling_black_co.paa"};
	};
	class IMP_RifleSling_Front_Green: IMP_RifleSling_Front_ColorBase
	{
		scope = 2;
		colour = "Green";
	};
	class IMP_RifleSling_Front_Tan: IMP_RifleSling_Front_ColorBase
	{
		scope = 2;
		colour = "Tan";
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Sling\Sling\data\rifle_sling_tan_co.paa","IMPGMOD\Equipment\Sling\Sling\data\rifle_sling_tan_co.paa","IMPGMOD\Equipment\Sling\Sling\data\rifle_sling_tan_co.paa"};
	};
	class IMP_RifleSling_Back_ColorBase: IMP_RifleSling_ColorBase
	{
		scope = 0;
		displayName = "$STR_IMP_FFSling";
		descriptionShort = "";
		model = "IMPGMOD\Equipment\Sling\Sling\models\sling_g.p3d";
		inventorySlot[] = {"Shoulder"};
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing","Back"};
		attachments[] = {"Shoulder40"};
		rotationFlags = 0;
		itemSize[] = {6,2};
		itemsCargoSize[] = {0,0};
		weight = 500;
		absorbency = 0.2;
		heatIsolation = 0.13;
		repairableWithKits[] = {5,3};
		repairCosts[] = {30,25};
		canBeDigged = 1;
		soundAttType = "Outdoor";
		ContinuouActions[] = {"AT_WRING_CLOTHES"};
		hiddenSelections[] = {"camoflage"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Sling\Sling\data\rifle_sling_co.paa","IMPGMOD\Equipment\Sling\Sling\data\rifle_sling_co.paa","IMPGMOD\Equipment\Sling\Sling\data\rifle_sling_co.paa"};
		class ClothingTypes
		{
			male = "IMPGMOD\Equipment\Sling\Sling\models\slingback_m.p3d";
			female = "IMPGMOD\Equipment\Sling\Sling\models\slingback_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 130;
					healthLevels[] = {{1.0,{"IMPGMOD\Equipment\Sling\Sling\data\riflesling.rvmat"}},{0.7,{"IMPGMOD\Equipment\Sling\Sling\data\riflesling.rvmat"}},{0.5,{"IMPGMOD\Equipment\Sling\Sling\data\rifle_sling_damaged.rvmat"}},{0.3,{"IMPGMOD\Equipment\Sling\Sling\data\rifle_sling_badlydamaged.rvmat"}},{0.0,{"IMPGMOD\Equipment\Sling\Sling\data\rifle_sling_ruined.rvmat"}}};
				};
			};
		};
	};
	class IMP_RifleSling_Back_Black: IMP_RifleSling_Back_ColorBase
	{
		scope = 2;
		colour = "Black";
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Sling\Sling\data\rifle_sling_black_co.paa","IMPGMOD\Equipment\Sling\Sling\data\rifle_sling_black_co.paa","IMPGMOD\Equipment\Sling\Sling\data\rifle_sling_black_co.paa"};
	};
	class IMP_RifleSling_Back_Green: IMP_RifleSling_Back_ColorBase
	{
		scope = 2;
		colour = "Green";
	};
	class IMP_RifleSling_Back_Tan: IMP_RifleSling_Back_ColorBase
	{
		scope = 2;
		colour = "Tan";
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Sling\Sling\data\rifle_sling_tan_co.paa","IMPGMOD\Equipment\Sling\Sling\data\rifle_sling_tan_co.paa","IMPGMOD\Equipment\Sling\Sling\data\rifle_sling_tan_co.paa"};
	};
};