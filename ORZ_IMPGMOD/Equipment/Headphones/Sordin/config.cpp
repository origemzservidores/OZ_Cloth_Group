class CfgPatches
{
	class IMP_Headphones_Sordin
	{
		units[] = {"IMP_Headphones_Sordin"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Scripts","DZ_Characters"};
	};
};
class CfgVehicles
{
	class Clothing_Base;
	class Clothing: Clothing_Base{};
	class IMP_Headphones_Sordin: Clothing
	{
		scope = 2;
		displayName = "$STR_IMP_HeadphonesSordin";
		descriptionShort = "$STR_IMP_HeadphonesALL";
		model = "IMPGMOD\Equipment\Headphones\Sordin\models\IMP_Sordin_g.p3d";
		itemSize[] = {2,2};
		weight = 400;
		rotationFlags = 17;
		inventorySlot[] = {"Ears"};
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing", "Ears"};
		hiddenSelections[] = {"camoflage"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Headphones\Sordin\data\sordin_co.paa"};
		class ClothingTypes
		{
			male = "IMPGMOD\Equipment\Headphones\Sordin\models\IMP_Sordin_m.p3d";
			female = "IMPGMOD\Equipment\Headphones\Sordin\models\IMP_Sordin_f.p3d";
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
						{1.0, {"IMPGMOD\Equipment\Headphones\Sordin\data\sordin.rvmat"}}, 
						{0.7, {"IMPGMOD\Equipment\Headphones\Sordin\data\sordin.rvmat"}}, 
						{0.5, {"IMPGMOD\Equipment\Headphones\Sordin\data\sordin_damage.rvmat"}}, 
						{0.3, {"IMPGMOD\Equipment\Headphones\Sordin\data\sordin_damage.rvmat"}}, 
						{0.0, {"IMPGMOD\Equipment\Headphones\Sordin\data\sordin_destruct.rvmat"}}
					};
				};
			};
		};
	};
};