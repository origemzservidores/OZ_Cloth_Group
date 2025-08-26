class CfgPatches
{
	class IMP_Headphones_ComtacII
	{
		units[] = {"IMP_Headphones_ComtacII"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Scripts","DZ_Characters"};
	};
};
class CfgVehicles
{
	class Clothing_Base;
	class Clothing: Clothing_Base{};
	class IMP_Headphones_ComtacII: Clothing
	{
		scope = 2;
		displayName = "$STR_IMP_HeadphonesComtac2";
		descriptionShort = "$STR_IMP_HeadphonesALL";
		model = "IMPGMOD\Equipment\Headphones\ComtacII\models\IMP_HeadsetComtacII_g.p3d";
		itemSize[] = {2,2};
		weight = 400;
		rotationFlags = 17;
		inventorySlot[] = {"Ears"};
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing", "Ears"};
		hiddenSelections[] = {"camoflage"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Headphones\ComtacII\data\comtacII_co.paa"};
		class ClothingTypes
		{
			male = "IMPGMOD\Equipment\Headphones\ComtacII\models\IMP_HeadsetComtacII_m.p3d";
			female = "IMPGMOD\Equipment\Headphones\ComtacII\models\IMP_HeadsetComtacII_f.p3d";
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
						{1.0, {"IMPGMOD\Equipment\Headphones\ComtacII\data\comtacII.rvmat"}}, 
						{0.7, {"IMPGMOD\Equipment\Headphones\ComtacII\data\comtacII.rvmat"}}, 
						{0.5, {"IMPGMOD\Equipment\Headphones\ComtacII\data\comtacII_damage.rvmat"}}, 
						{0.3, {"IMPGMOD\Equipment\Headphones\ComtacII\data\comtacII_damage.rvmat"}}, 
						{0.0, {"IMPGMOD\Equipment\Headphones\ComtacII\data\comtacII_destruct.rvmat"}}
					};
				};
			};
		};
	};
};
