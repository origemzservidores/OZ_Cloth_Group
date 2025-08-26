class CfgPatches 
{
	class IMP_Mask_Shroud
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
	
	class IMP_Mask_Shroud_ColorBase : Clothing 
	{
		scope = 0;
		displayName = "$STR_IMP_Scroud";
		descriptionShort = "$STR_IMP_HoodAll";
		model = "IMPGMOD\Equipment\Hood\Shroud\models\Shroud_g.p3d";
		inventorySlot[]={"Headgear"};
        simulation="clothing";
        vehicleClass="Clothing";
        itemInfo[]={"Clothing", "Headgear"};
		rotationFlags = 1;
		weight = 400;
		itemSize[] = {3, 2};
		ragQuantity = 1;
		varWetMax=0.048999999;
		heatIsolation = 1;
		noHelmet = 0;
		noEyewear = 1;
		repairableWithKits[] = {5, 2};
		repairCosts[] = {30.0, 25.0};
		headSelectionsToHide[] = {"Clipping_GP5GasMask"};
		hiddenSelections[] = {"camoflage"};
		
		class DamageSystem {
			class GlobalHealth {
				class Health {
					hitpoints = 100;
					healthLevels[] = 
					{
						{1.0, {"IMPGMOD\Equipment\Hood\Shroud\data\Shroud.rvmat"}}, 
						{0.7, {"IMPGMOD\Equipment\Hood\Shroud\data\Shroud.rvmat"}}, 
						{0.5, {"IMPGMOD\Equipment\Hood\Shroud\data\Shroud_damage.rvmat"}}, 
						{0.3, {"IMPGMOD\Equipment\Hood\Shroud\data\Shroud_damage.rvmat"}}, 
						{0.0, {"IMPGMOD\Equipment\Hood\Shroud\data\Shroud_destruct.rvmat"}}
					};
				};
			};
		};
		
		class ClothingTypes 
		{
			male = "IMPGMOD\Equipment\Hood\Shroud\models\Shroud.p3d";
			female = "IMPGMOD\Equipment\Hood\Shroud\models\Shroud.p3d";
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
	
	class IMP_Mask_Shroud_Green : IMP_Mask_Shroud_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Hood\Shroud\data\Shroud_Green.paa"};
	};
	
	class IMP_Mask_Shroud_Black : IMP_Mask_Shroud_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Hood\Shroud\data\Shroud_Black.paa"};
	};
	
	class IMP_Mask_Shroud_Tan : IMP_Mask_Shroud_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Hood\Shroud\data\Shroud_Tan.paa"};
	};
	
	class IMP_Mask_Shroud_UCP : IMP_Mask_Shroud_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Hood\Shroud\data\Shroud_UCP.paa"};
	};
	
	class IMP_Mask_Shroud_EMR : IMP_Mask_Shroud_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Hood\Shroud\data\Shroud_EMR.paa"};
	};
	
	class IMP_Mask_Shroud_NWU : IMP_Mask_Shroud_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Hood\Shroud\data\Shroud_NWU.paa"};
	};
	
	class IMP_Mask_Shroud_MARPAT : IMP_Mask_Shroud_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Hood\Shroud\data\Shroud_MARPAT.paa"};
	};
};
