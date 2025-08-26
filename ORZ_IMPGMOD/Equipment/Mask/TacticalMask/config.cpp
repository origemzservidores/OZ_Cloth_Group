class CfgPatches 
{
	class IMP_Mask_TacticalMask
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
	
	class IMP_Mask_TacticalMask_ColorBase : Clothing 
	{
		scope = 0;
		displayName = "$STR_IMP_FaceMask";
		descriptionShort = "$STR_IMP_GhostMask1";
		model = "IMPGMOD\Equipment\Mask\TacticalMask\models\TacticalMask_g.p3d";
		inventorySlot[] = {"Mask"};
		itemInfo[] = {"Clothing", "Mask"};
		rotationFlags = 1;
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
						{1.0, {"IMPGMOD\Equipment\Mask\TacticalMask\data\TacticalMask.rvmat"}}, 
						{0.7, {"IMPGMOD\Equipment\Mask\TacticalMask\data\TacticalMask.rvmat"}}, 
						{0.5, {"IMPGMOD\Equipment\Mask\TacticalMask\data\TacticalMask_damage.rvmat"}}, 
						{0.3, {"IMPGMOD\Equipment\Mask\TacticalMask\data\TacticalMask_damage.rvmat"}}, 
						{0.0, {"IMPGMOD\Equipment\Mask\TacticalMask\data\TacticalMask_destruct.rvmat"}}
					};
				};
			};
		};
		class ClothingTypes 
		{
			male = "IMPGMOD\Equipment\Mask\TacticalMask\models\TacticalMask.p3d";
			female = "IMPGMOD\Equipment\Mask\TacticalMask\models\TacticalMask.p3d";
		};
		class Protection
		{
			biological=0.5;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="Shirt_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="Shirt_drop_SoundSet";
					id=898;
				};
			};
		};
		soundVoiceType="none";
		soundVoicePriority=5;
	};
	
	class IMP_Mask_TacticalMask_Green : IMP_Mask_TacticalMask_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Mask\TacticalMask\data\TacticalMask_Green.paa"};
	};
	
	class IMP_Mask_TacticalMask_Black : IMP_Mask_TacticalMask_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Mask\TacticalMask\data\TacticalMask_Black.paa"};
	};
	
	class IMP_Mask_TacticalMask_Tan : IMP_Mask_TacticalMask_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Mask\TacticalMask\data\TacticalMask_Tan.paa"};
	};
	
	class IMP_Mask_TacticalMask_EMR : IMP_Mask_TacticalMask_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Mask\TacticalMask\data\TacticalMask_EMR.paa"};
	};
	
	class IMP_Mask_TacticalMask_NWU : IMP_Mask_TacticalMask_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Mask\TacticalMask\data\TacticalMask_NWU.paa"};
	};
	
	class IMP_Mask_TacticalMask_UCP : IMP_Mask_TacticalMask_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Mask\TacticalMask\data\TacticalMask_UCP.paa"};
	};
	
	class IMP_Mask_TacticalMask_MARPAT : IMP_Mask_TacticalMask_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Mask\TacticalMask\data\TacticalMask_MARPAT.paa"};
	};
};
