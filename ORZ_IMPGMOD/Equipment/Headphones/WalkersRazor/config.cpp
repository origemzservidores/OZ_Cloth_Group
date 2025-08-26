class CfgPatches
{
	class IMP_Headphones_WalkersRazor
	{
		units[] = {"IMP_Headphones_WalkersRazor"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Scripts","DZ_Characters"};
	};
};
class CfgVehicles
{
	class Clothing_Base;
	class Clothing: Clothing_Base{};
	class IMP_Headphones_WalkersRazor: Clothing
	{
		scope = 2;
		displayName = "$STR_IMP_HeadphonesWalkersRazor";
		descriptionShort = "$STR_IMP_HeadphonesALL";
		model = "IMPGMOD\Equipment\Headphones\WalkersRazor\models\IMP_Razor_g.p3d";
		itemSize[] = {2,2};
		weight = 400;
		rotationFlags = 17;
		inventorySlot[] = {"Ears"};
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing", "Ears"};
		hiddenSelections[] = {"camoflage"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Headphones\WalkersRazor\data\razor_co.paa"};
		class ClothingTypes
		{
			male = "IMPGMOD\Equipment\Headphones\WalkersRazor\models\IMP_Razor_m.p3d";
			female = "IMPGMOD\Equipment\Headphones\WalkersRazor\models\IMP_Razor_f.p3d";
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
						{1.0, {"IMPGMOD\Equipment\Headphones\WalkersRazor\data\razor.rvmat"}}, 
						{0.7, {"IMPGMOD\Equipment\Headphones\WalkersRazor\data\razor.rvmat"}}, 
						{0.5, {"IMPGMOD\Equipment\Headphones\WalkersRazor\data\razor_damage.rvmat"}}, 
						{0.3, {"IMPGMOD\Equipment\Headphones\WalkersRazor\data\razor_damage.rvmat"}}, 
						{0.0, {"IMPGMOD\Equipment\Headphones\WalkersRazor\data\razor_destruct.rvmat"}}
					};
				};
			};
		};
	};
};