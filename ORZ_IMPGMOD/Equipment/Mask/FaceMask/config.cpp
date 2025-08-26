class CfgPatches 
{
	class IMP_Mask_FaceMask
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
	
	class IMP_Mask_FaceMask_ColorBase : Clothing 
	{
		scope = 0;
		displayName = "$STR_IMP_FaceMask";
		descriptionShort = "$STR_IMP_GhostMask1";
		model = "IMPGMOD\Equipment\Mask\FaceMask\models\FaceMask_g.p3d";
		inventorySlot[] = {"Mask"};
		itemInfo[] = {"Clothing", "Mask"};
		rotationFlags = 1;
		weight = 400;
		itemSize[] = {3, 2};
		ragQuantity = 1;
		varWetMax=0.048999999;
		heatIsolation = 1;
		noHelmet = 0;
		noEyewear = 0;
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
						{1.0, {"IMPGMOD\Equipment\Mask\FaceMask\data\FaceMask.rvmat"}}, 
						{0.7, {"IMPGMOD\Equipment\Mask\FaceMask\data\FaceMask.rvmat"}}, 
						{0.5, {"IMPGMOD\Equipment\Mask\FaceMask\data\FaceMask_damage.rvmat"}}, 
						{0.3, {"IMPGMOD\Equipment\Mask\FaceMask\data\FaceMask_damage.rvmat"}}, 
						{0.0, {"IMPGMOD\Equipment\Mask\FaceMask\data\FaceMask_destruct.rvmat"}}
					};
				};
			};
		};
		
		class ClothingTypes 
		{
			male = "IMPGMOD\Equipment\Mask\FaceMask\models\FaceMask.p3d";
			female = "IMPGMOD\Equipment\Mask\FaceMask\models\FaceMask.p3d";
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
	
	class IMP_Mask_FaceMask_Green : IMP_Mask_FaceMask_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Mask\FaceMask\data\FaceMask_Green.paa"};
	};
	
	class IMP_Mask_FaceMask_Black : IMP_Mask_FaceMask_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Mask\FaceMask\data\FaceMask_co.paa"};
	};
	
	class IMP_Mask_FaceMask_Tan : IMP_Mask_FaceMask_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Mask\FaceMask\data\FaceMask_Tan.paa"};
	};
	
	class IMP_Mask_FaceMask_EMR : IMP_Mask_FaceMask_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Mask\FaceMask\data\FaceMask_EMR.paa"};
	};
	
	class IMP_Mask_FaceMask_UCP : IMP_Mask_FaceMask_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Mask\FaceMask\data\FaceMask_UCP.paa"};
	};
	
	class IMP_Mask_FaceMask_NWU : IMP_Mask_FaceMask_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Mask\FaceMask\data\FaceMask_NWU.paa"};
	};
	
	class IMP_Mask_FaceMask_MARPAT : IMP_Mask_FaceMask_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Mask\FaceMask\data\FaceMask_MARPAT.paa"};
	};
	
	class IMP_Mask_FaceMask_Skull : IMP_Mask_FaceMask_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Mask\FaceMask\data\FaceMask_Skull.paa"};
	};
};
