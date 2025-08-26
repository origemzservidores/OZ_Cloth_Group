class CfgPatches 
{
	class RSH4Mask 
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
	class IMP_RSH4Mask_Base : Clothing
	{
		scope = 0;
		displayName = "$STR_IMP_RSH4";
		descriptionShort = "$STR_IMP_RSH4D";
		model = "IMPGMOD\Equipment\Mask\Rsh4Mask\models\RSH4_g.p3d";
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
		hiddenSelections[] = {"camoflage"};
		
		class Protection
		{
			biological=1;
			chemical=1;
		};
		
		class DamageSystem {
			class GlobalHealth {
				class Health {
					hitpoints=100;
					healthLevels[]= {
						{1.0,{"IMPGMOD\Equipment\Mask\Rsh4Mask\data\gasmask_rsh4_mask1.rvmat"}},
						{0.7,{"IMPGMOD\Equipment\Mask\Rsh4Mask\data\gasmask_rsh4_mask1.rvmat"}},
						{0.5,{"IMPGMOD\Equipment\Mask\Rsh4Mask\data\gasmask_rsh4_mask1_damage.rvmat"}},
						{0.3,{"IMPGMOD\Equipment\Mask\Rsh4Mask\data\gasmask_rsh4_mask1_damage.rvmat"}},
						{0.01,{"IMPGMOD\Equipment\Mask\Rsh4Mask\data\gasmask_rsh4_mask1_destruct.rvmat"}}
					};
				};
			};
		};
		
		class ClothingTypes {
			male = "IMPGMOD\Equipment\Mask\Rsh4Mask\models\RSH4.p3d";
			female = "IMPGMOD\Equipment\Mask\Rsh4Mask\models\RSH4_f.p3d";
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
	
	class IMP_RSH4Mask : IMP_RSH4Mask_Base 
	{
		scope = 2;
		hiddenSelections[] = {"camoflage"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Mask\Rsh4Mask\data\gasmask_rsh4_mask1_co.paa"};
	};
};