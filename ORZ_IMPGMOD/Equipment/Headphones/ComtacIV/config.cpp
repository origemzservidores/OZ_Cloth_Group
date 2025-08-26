class CfgPatches
{
	class IMP_Headphones_ComtacIV
	{
		units[] = {"IMP_Headphones_ComtacIV"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Scripts","DZ_Characters"};
	};
};
class CfgVehicles
{
	class Clothing_Base;
	class Clothing: Clothing_Base{};
	class IMP_Headphones_ComtacIV: Clothing
	{
		scope = 2;
		displayName = "$STR_IMP_HeadphonesComtac4";
		descriptionShort = "$STR_IMP_HeadphonesALL";
		model = "IMPGMOD\Equipment\Headphones\ComtacIV\models\IMP_HeadsetComtacIV_g.p3d";
		itemSize[] = {2,2};
		weight = 400;
		rotationFlags = 17;
		inventorySlot[] = {"Ears"};
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing", "Ears"};
		hiddenSelections[] = {"camoflage"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Headphones\ComtacIV\data\comtaciv_co.paa"};
		class ClothingTypes
		{
			male = "IMPGMOD\Equipment\Headphones\ComtacIV\models\IMP_HeadsetComtacIV_m.p3d";
			female = "IMPGMOD\Equipment\Headphones\ComtacIV\models\IMP_HeadsetComtacIV_f.p3d";
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
						{1.0, {"IMPGMOD\Equipment\Headphones\ComtacIV\data\comtaciv.rvmat"}}, 
						{0.7, {"IMPGMOD\Equipment\Headphones\ComtacIV\data\comtaciv.rvmat"}}, 
						{0.5, {"IMPGMOD\Equipment\Headphones\ComtacIV\data\comtaciv_damage.rvmat"}}, 
						{0.3, {"IMPGMOD\Equipment\Headphones\ComtacIV\data\comtaciv_damage.rvmat"}}, 
						{0.0, {"IMPGMOD\Equipment\Headphones\ComtacIV\data\comtaciv_destruct.rvmat"}}
					};
				};
			};
		};
	};
};