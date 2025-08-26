class CfgPatches 
{
	class IMP_Mask_GhostMask
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
	
	class IMP_Mask_GhostMask_ColorBase : Clothing 
	{
		scope = 0;
		displayName = "$STR_IMP_GhostMask";
		descriptionShort = "$STR_IMP_GhostMask1";
		model = "IMPGMOD\Equipment\Mask\GhostMask\models\GhostMask_g.p3d";
		inventorySlot[] = {"Mask"};
		itemInfo[] = {"Clothing", "Mask"};
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
		hiddenSelections[] = {"camoflage", "ghost"};
		
		class DamageSystem {
			class GlobalHealth {
				class Health {
					hitpoints = 100;
					healthLevels[] = 
					{
						{1.0, {"IMPGMOD\Equipment\Mask\GhostMask\data\Balaclava2.rvmat", "IMPGMOD\Equipment\Mask\GhostMask\data\GhostMask.rvmat"}}, 
						{0.7, {"IMPGMOD\Equipment\Mask\GhostMask\data\Balaclava2.rvmat", "IMPGMOD\Equipment\Mask\GhostMask\data\GhostMask.rvmat"}}, 
						{0.5, {"IMPGMOD\Equipment\Mask\GhostMask\data\Balaclava2_damage.rvmat", "IMPGMOD\Equipment\Mask\GhostMask\data\GhostMask_damage.rvmat"}}, 
						{0.3, {"IMPGMOD\Equipment\Mask\GhostMask\data\Balaclava2_damage.rvmat", "IMPGMOD\Equipment\Mask\GhostMask\data\GhostMask_damage.rvmat"}}, 
						{0.0, {"IMPGMOD\Equipment\Mask\GhostMask\data\Balaclava2_destruct.rvmat", "IMPGMOD\Equipment\Mask\GhostMask\data\GhostMask_destruct.rvmat"}}
					};
				};
			};
		};
		
		class ClothingTypes 
		{
			male = "IMPGMOD\Equipment\Mask\GhostMask\models\GhostMask_m.p3d";
			female = "IMPGMOD\Equipment\Mask\GhostMask\models\GhostMask_f.p3d";
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
	
	class IMP_Mask_GhostMask : IMP_Mask_GhostMask_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Mask\GhostMask\data\Balaclava2_Ghost.paa", "IMPGMOD\Equipment\Mask\GhostMask\data\GhostMask_co.paa"};
	};
};
