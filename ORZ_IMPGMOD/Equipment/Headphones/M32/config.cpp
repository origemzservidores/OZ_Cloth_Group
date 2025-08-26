class CfgPatches
{
	class IMP_Headphones_M32
	{
		units[] = {"IMP_Headphones_M32"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Scripts","DZ_Characters"};
	};
};
class CfgVehicles
{
	class Clothing_Base;
	class Clothing: Clothing_Base{};
	class IMP_Headphones_M32: Clothing
	{
		scope = 2;
		displayName = "$STR_IMP_HeadphonesM32";
		descriptionShort = "$STR_IMP_HeadphonesALL";
		model = "IMPGMOD\Equipment\Headphones\M32\models\IMP_M32_g.p3d";
		itemSize[] = {2,2};
		weight = 400;
		rotationFlags = 17;
		inventorySlot[] = {"Ears"};
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing", "Ears"};
		hiddenSelections[] = {"camoflage"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Headphones\M32\data\m32_co.paa"};
		class ClothingTypes
		{
			male = "IMPGMOD\Equipment\Headphones\M32\models\IMP_M32_m.p3d";
			female = "IMPGMOD\Equipment\Headphones\M32\models\IMP_M32_f.p3d";
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
						{1.0, {"IMPGMOD\Equipment\Headphones\M32\data\m32.rvmat"}}, 
						{0.7, {"IMPGMOD\Equipment\Headphones\M32\data\m32.rvmat"}}, 
						{0.5, {"IMPGMOD\Equipment\Headphones\M32\data\m32_damage.rvmat"}}, 
						{0.3, {"IMPGMOD\Equipment\Headphones\M32\data\m32_damage.rvmat"}}, 
						{0.0, {"IMPGMOD\Equipment\Headphones\M32\data\m32_destruct.rvmat"}}
					};
				};
			};
		};
	};
};