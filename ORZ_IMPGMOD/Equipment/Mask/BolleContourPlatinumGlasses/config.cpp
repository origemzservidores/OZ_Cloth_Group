class CfgPatches 
{
	class IMP_Goggles_BolleContour 
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
	
	class IMP_Goggles_BolleContour_ColorBase : Clothing 
	{
		displayName = "$STR_IMP_BallisticGoggles";
		descriptionShort = "$STR_IMP_BallisticGogglesD";
		model = "IMPGMOD\Equipment\Mask\BolleContourPlatinumGlasses\models\BolleContourPlatinumGlasses_g.p3d";
		scope = 0;
		vehicleClass = "Clothing";
		simulation = "clothing";
		inventorySlot[] = {"Eyewear"};
		itemInfo[] = {"Clothing", "Eyewear"};
		rotationFlags = 1;
		itemSize[] = {2, 1};
		weight = 100;
		hiddenSelections[] = {"camoflage"};
		
		class DamageSystem 
		{
			class GlobalHealth 
			{
				class Health 
				{
					hitpoints = 500;
					healthLevels[] = 
					{
						{1.0, {"IMPGMOD\Equipment\Mask\BolleContourPlatinumGlasses\data\BolleContourPlatinumGlasses.rvmat"}}, 
						{0.7, {"IMPGMOD\Equipment\Mask\BolleContourPlatinumGlasses\data\BolleContourPlatinumGlasses.rvmat"}}, 
						{0.5, {"IMPGMOD\Equipment\Mask\BolleContourPlatinumGlasses\data\BolleContourPlatinumGlasses_damage.rvmat"}}, 
						{0.3, {"IMPGMOD\Equipment\Mask\BolleContourPlatinumGlasses\data\BolleContourPlatinumGlasses_damage.rvmat"}}, 
						{0.0, {"IMPGMOD\Equipment\Mask\BolleContourPlatinumGlasses\data\BolleContourPlatinumGlasses_destruct.rvmat"}}
					};
				};
			};
		};
		
		class ClothingTypes 
		{
			male = "IMPGMOD\Equipment\Mask\BolleContourPlatinumGlasses\models\BolleContourPlatinumGlasses_m.p3d";
			female = "IMPGMOD\Equipment\Mask\BolleContourPlatinumGlasses\models\BolleContourPlatinumGlasses_m.p3d";
		};
		
		class AnimEvents {
			class SoundWeapon {
				class pickUpItem {
					soundSet = "SportGlasses_pickup_SoundSet";
					id = 797;
				};
				
				class drop {
					soundset = "SportGlasses_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	
	class IMP_Goggles_BolleContour : IMP_Goggles_BolleContour_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Mask\BolleContourPlatinumGlasses\data\BolleContourPlatinumGlasses_co.paa"};
	};
};
