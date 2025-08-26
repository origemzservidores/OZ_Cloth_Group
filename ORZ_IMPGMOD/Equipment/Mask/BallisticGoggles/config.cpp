class CfgPatches {
	class IMP_Goggles_Ballistic 
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
	
	class IMP_Goggles_Ballistic_ColorBase : Clothing 
	{
		scope = 0;
		displayName = "$STR_IMP_BallisticGoggles";
		descriptionShort = "$STR_IMP_BallisticGogglesD";
		model = "IMPGMOD\Equipment\Mask\BallisticGoggles\models\BallisticGoggles_g.p3d";
		vehicleClass = "Clothing";
		simulation = "clothing";
		inventorySlot[] = {"Eyewear"};
		itemInfo[] = {"Clothing", "Eyewear"};
		rotationFlags = 1;
		itemSize[] = {2, 1};
		weight = 100;
		hiddenSelections[] = {"zbytek"};
		
		class DamageSystem 
		{
			class GlobalHealth 
			{
				class Health 
				{
					hitpoints = 500;
					healthLevels[] = 
					{
						{1.0, {"IMPGMOD\Equipment\Mask\BallisticGoggles\data\BallisticGoggles.rvmat"}}, 
						{0.7, {"IMPGMOD\Equipment\Mask\BallisticGoggles\data\BallisticGoggles.rvmat"}}, 
						{0.5, {"IMPGMOD\Equipment\Mask\BallisticGoggles\data\BallisticGoggles_damage.rvmat"}}, 
						{0.3, {"IMPGMOD\Equipment\Mask\BallisticGoggles\data\BallisticGoggles_damage.rvmat"}}, 
						{0.0, {"IMPGMOD\Equipment\Mask\BallisticGoggles\data\BallisticGoggles_destruct.rvmat"}}
					};
				};
			};
		};
		
		class ClothingTypes 
		{
			male = "IMPGMOD\Equipment\Mask\BallisticGoggles\models\BallisticGoggles.p3d";
			female = "IMPGMOD\Equipment\Mask\BallisticGoggles\models\BallisticGoggles.p3d";
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
	
	class IMP_Goggles_Ballistic_Green : IMP_Goggles_Ballistic_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Mask\BallisticGoggles\data\BallisticGoggles_Green.paa"};
	};
	
	class IMP_Goggles_Ballistic_Black : IMP_Goggles_Ballistic_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Mask\BallisticGoggles\data\BallisticGoggles_Black.paa"};
	};
	
	class IMP_Goggles_Ballistic_Desert : IMP_Goggles_Ballistic_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Mask\BallisticGoggles\data\BallisticGoggles_Desert.paa"};
	};
};
