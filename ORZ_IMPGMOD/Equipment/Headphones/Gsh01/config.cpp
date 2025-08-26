class CfgPatches
{
	class IMP_Headphones_Gsh01
	{
		units[] = {"IMP_Headphones_Gsh01"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Scripts","DZ_Characters"};
	};
};
class CfgVehicles
{
	class Clothing_Base;
	class Clothing: Clothing_Base{};
	class IMP_Headphones_Gsh01: Clothing
	{
		scope = 2;
		displayName = "$STR_IMP_HeadphonesGsh01";
		descriptionShort = "$STR_IMP_HeadphonesALL";
		model = "IMPGMOD\Equipment\Headphones\Gsh01\models\IMP_Gsh01_g.p3d";
		itemSize[] = {2,2};
		weight = 400;
		rotationFlags = 17;
		inventorySlot[] = {"Ears"};
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing", "Ears"};
		hiddenSelections[] = {"camoflage"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Headphones\Gsh01\data\gsh01_co.paa"};
		class ClothingTypes
		{
			male = "IMPGMOD\Equipment\Headphones\Gsh01\models\IMP_Gsh01_m.p3d";
			female = "IMPGMOD\Equipment\Headphones\Gsh01\models\IMP_Gsh01_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = 
					{
						{1.0, {"IMPGMOD\Equipment\Headphones\Gsh01\data\gsh01.rvmat"}}, 
						{0.7, {"IMPGMOD\Equipment\Headphones\Gsh01\data\gsh01.rvmat"}}, 
						{0.5, {"IMPGMOD\Equipment\Headphones\Gsh01\data\gsh01_damage.rvmat"}}, 
						{0.3, {"IMPGMOD\Equipment\Headphones\Gsh01\data\gsh01_damage.rvmat"}}, 
						{0.0, {"IMPGMOD\Equipment\Headphones\Gsh01\data\gsh01_destruct.rvmat"}}
					};
				};
			};
		};
	};
};