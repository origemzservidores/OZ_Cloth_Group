class CfgPatches 
{
	class IMP_Mask_Poncho
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
	
	class IMP_Mask_Poncho_ColorBase : Clothing 
	{
		scope = 0;
		displayName = "$STR_IMP_Poncho";
		descriptionShort = "$STR_IMP_Poncho1";
		model = "IMPGMOD\Equipment\Mask\Poncho\models\Poncho_g.p3d";
		inventorySlot[] = {"Headgear"};
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing", "Headgear"};
		rotationFlags=2;
		weight = 400;
		itemSize[] = {3, 2};
		ragQuantity = 1;
		varWetMax=0.048999999;
		heatIsolation = 1;
		repairableWithKits[] = {5, 2};
		repairCosts[] = {30.0, 25.0};
		headSelectionsToHide[] = {"Clipping_GP5GasMask"};
		hiddenSelections[] = {"camoflage"};
		
		class DamageSystem {
			class GlobalHealth {
				class Health {
					hitpoints = 500;
					healthLevels[] = 
					{
						{1.0, {"IMPGMOD\Equipment\Mask\Poncho\data\Poncho.rvmat"}}, 
						{0.7, {"IMPGMOD\Equipment\Mask\Poncho\data\Poncho.rvmat"}}, 
						{0.5, {"IMPGMOD\Equipment\Mask\Poncho\data\Poncho_damage.rvmat"}}, 
						{0.3, {"IMPGMOD\Equipment\Mask\Poncho\data\Poncho_damage.rvmat"}}, 
						{0.0, {"IMPGMOD\Equipment\Mask\Poncho\data\Poncho_destruct.rvmat"}}
					};
				};
			};
		};
		
		class ClothingTypes 
		{
			male = "IMPGMOD\Equipment\Mask\Poncho\models\Poncho.p3d";
			female = "IMPGMOD\Equipment\Mask\Poncho\models\Poncho.p3d";
		};
		
		class Protection 
		{
			biological = 0.25;
		};
		
		class AnimEvents 
		{
			class SoundWeapon 
			{
				class pickUpItem 
				{
					soundSet = "Shirt_pickup_SoundSet";
					id = 797;
				};
				
				class drop 
				{
					soundset = "Shirt_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	
	class IMP_Mask_Poncho_Brown : IMP_Mask_Poncho_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Mask\Poncho\data\Poncho_Brown_co.paa"};
	};
	
	class IMP_Mask_Poncho_Black : IMP_Mask_Poncho_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Mask\Poncho\data\Poncho_Black_co.paa"};
	};
	
	class IMP_Mask_Poncho_Brown_Ornament : IMP_Mask_Poncho_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Mask\Poncho\data\Poncho_Brown_u_co.paa"};
	};
};
