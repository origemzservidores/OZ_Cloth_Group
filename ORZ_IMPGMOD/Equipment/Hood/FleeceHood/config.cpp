class CfgPatches 
{
	class IMP_Mask_FleeceHood
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
	
	class IMP_Mask_FleeceHood_ColorBase : Clothing 
	{
		scope = 0;
		displayName = "$STR_IMP_FleeceHood";
		descriptionShort = "$STR_IMP_HoodAll";
		model = "IMPGMOD\Equipment\Hood\FleeceHood\models\FleeceHood_g.p3d";
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
		noEyewear = 0;
		noMask = 1;
		noNVStrap = 1;
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
						{1.0, {"IMPGMOD\Equipment\Hood\FleeceHood\data\FleeceHood.rvmat"}}, 
						{0.7, {"IMPGMOD\Equipment\Hood\FleeceHood\data\FleeceHood.rvmat"}}, 
						{0.5, {"IMPGMOD\Equipment\Hood\FleeceHood\data\FleeceHood_damage.rvmat"}}, 
						{0.3, {"IMPGMOD\Equipment\Hood\FleeceHood\data\FleeceHood_damage.rvmat"}}, 
						{0.0, {"IMPGMOD\Equipment\Hood\FleeceHood\data\FleeceHood_destruct.rvmat"}}
					};
				};
			};
		};
		
		class ClothingTypes 
		{
			male = "IMPGMOD\Equipment\Hood\FleeceHood\models\FleeceHood_m.p3d";
			female = "IMPGMOD\Equipment\Hood\FleeceHood\models\FleeceHood_f.p3d";
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
	
	class IMP_Mask_FleeceHood_Green : IMP_Mask_FleeceHood_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Hood\FleeceHood\data\FleeceHood_green_co.paa"};
	};
	
	class IMP_Mask_FleeceHood_Black : IMP_Mask_FleeceHood_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Hood\FleeceHood\data\FleeceHood_black_co.paa"};
	};
	
	class IMP_Mask_FleeceHood_Tan : IMP_Mask_FleeceHood_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Hood\FleeceHood\data\FleeceHood_tan_co.paa"};
	};
	
	class IMP_Mask_FleeceHood_UCP : IMP_Mask_FleeceHood_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Hood\FleeceHood\data\FleeceHood_ucp.paa"};
	};
	
	class IMP_Mask_FleeceHood_EMR : IMP_Mask_FleeceHood_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Hood\FleeceHood\data\FleeceHood_emr.paa"};
	};
	
	class IMP_Mask_FleeceHood_NWU : IMP_Mask_FleeceHood_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Hood\FleeceHood\data\FleeceHood_nwu.paa"};
	};
	
	class IMP_Mask_FleeceHood_MARPAT : IMP_Mask_FleeceHood_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Hood\FleeceHood\data\FleeceHood_marpat.paa"};
	};
};
