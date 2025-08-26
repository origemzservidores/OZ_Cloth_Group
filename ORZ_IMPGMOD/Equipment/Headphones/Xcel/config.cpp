class CfgPatches
{
	class IMP_Headphones_Xcel
	{
		units[] = {"IMP_Headphones_Xcel"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Scripts","DZ_Characters"};
	};
};
class CfgVehicles
{
	class Clothing_Base;
	class Clothing: Clothing_Base{};
	class IMP_Headphones_Xcel: Clothing
	{
		scope = 2;
		displayName = "$STR_IMP_HeadphonesXcel";
		descriptionShort = "$STR_IMP_HeadphonesALL";
		model = "IMPGMOD\Equipment\Headphones\Xcel\models\IMP_Xcel_g.p3d";
		itemSize[] = {2,2};
		weight = 400;
		rotationFlags = 17;
		inventorySlot[] = {"Ears"};
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing", "Ears"};
		hiddenSelections[] = {"camoflage"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Headphones\Xcel\data\xcel_co.paa"};
		class ClothingTypes
		{
			male = "IMPGMOD\Equipment\Headphones\Xcel\models\IMP_Xcel_m.p3d";
			female = "IMPGMOD\Equipment\Headphones\Xcel\models\IMP_Xcel_f.p3d";
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
						{1.0, {"IMPGMOD\Equipment\Headphones\Xcel\data\xcel.rvmat"}}, 
						{0.7, {"IMPGMOD\Equipment\Headphones\Xcel\data\xcel.rvmat"}}, 
						{0.5, {"IMPGMOD\Equipment\Headphones\Xcel\data\xcel_damage.rvmat"}}, 
						{0.3, {"IMPGMOD\Equipment\Headphones\Xcel\data\xcel_damage.rvmat"}}, 
						{0.0, {"IMPGMOD\Equipment\Headphones\Xcel\data\xcel_destruct.rvmat"}}
					};
				};
			};
		};
	};
};