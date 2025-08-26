class CfgPatches 
{
	class M79Mask 
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data", "DZ_Characters", "DZ_Scripts"};
	};
};

class CfgVehicles
{
	class Clothing_Base;
	class Inventory_Base;
	class Clothing: Clothing_Base {};
	class IMP_M79Mask_Base : Clothing
	{
		scope = 0;
		displayName = "$STR_IMP_M79Mask";
		descriptionShort = "$STR_IMP_M79MaskD";
		model = "IMPGMOD\Equipment\Mask\M79Mask\models\M79Mask_g.p3d";
		inventorySlot[] = {"Mask"};
		RadiationProtect=10;
		attachments[] = {"GasMaskFilter"};
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing","Mask"};
		rotationFlags = 2;
		weight = 700;
		itemSize[] = {3,4};
		varWetMax = 0.249;
		heatIsolation = 0.8;
		repairableWithKits[] = {8,6};
		repairCosts[] = {30.0,25.0};
		visibilityModifier = 0.9;
		noHelmet = 0;
		noEyewear = 1;
		headSelectionsToHide[] = {"Clipping_AirborneMask"};
		hiddenSelections[] = {"camoflage", "straps"};
		
		class Protection
		{
			biological=1;
			chemical=1;
		};
		
		class ClothingTypes {
			male = "IMPGMOD\Equipment\Mask\M79Mask\models\M79Mask.p3d";
			female = "IMPGMOD\Equipment\Mask\M79Mask\models\M79Mask_f.p3d";
		};
		
		class AnimEvents 
		{
			class SoundWeapon 
			{
				class pickUpItem 
				{
					soundSet = "DarkMotoHelmet_pickup_SoundSet";
					id = 797;
				};
				
				class drop 
				{
					soundset = "DarkMotoHelmet_drop_SoundSet";
					id = 898;
				};
			};
		};
		soundVoiceType = "gasmask";
		soundVoicePriority = 5;
	};
	
	class IMP_M79Mask_Black : IMP_M79Mask_Base 
	{
		scope = 2;
		hiddenSelections[] = {"camoflage", "straps"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Mask\M79Mask\data\M79_Black_ca.paa", "IMPGMOD\Equipment\Mask\M79Mask\data\M79_Straps_ca.paa"};
	};
	
	class IMP_M79Mask_Blue : IMP_M79Mask_Base 
	{
		scope = 2;
		hiddenSelections[] = {"camoflage", "straps"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Mask\M79Mask\data\M79_Blue_ca.paa", "IMPGMOD\Equipment\Mask\M79Mask\data\M79_Straps_ca.paa"};
	};
	
	class IMP_M79Mask_Green : IMP_M79Mask_Base 
	{
		scope = 2;
		hiddenSelections[] = {"camoflage", "straps"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Mask\M79Mask\data\M79_Green_ca.paa", "IMPGMOD\Equipment\Mask\M79Mask\data\M79_Straps_ca.paa"};
	};
	
	class IMP_M79Mask_Yellow : IMP_M79Mask_Base 
	{
		scope = 2;
		hiddenSelections[] = {"camoflage", "straps"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Mask\M79Mask\data\M79_Yellow_ca.paa", "IMPGMOD\Equipment\Mask\M79Mask\data\M79_Straps_ca.paa"};
	};
};