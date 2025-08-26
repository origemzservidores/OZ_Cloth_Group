class CfgPatches 
{
	class GP7M2 
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
	class IMP_GP7M2_Mask_Base : Clothing
	{
		scope = 0;
		displayName = "$STR_IMP_GP7M2";
		descriptionShort = "$STR_IMP_GP7M2D";
		model = "IMPGMOD\Equipment\Mask\GP7M2\models\GP7M2_g.p3d";
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
						{1.0,{"IMPGMOD\Equipment\Mask\GP7M2\data\gasmask_gp7m.rvmat"}},
						{0.7,{"IMPGMOD\Equipment\Mask\GP7M2\data\gasmask_gp7m.rvmat"}},
						{0.5,{"IMPGMOD\Equipment\Mask\GP7M2\data\gasmask_gp7m_damage.rvmat"}},
						{0.3,{"IMPGMOD\Equipment\Mask\GP7M2\data\gasmask_gp7m_damage.rvmat"}},
						{0.01,{"IMPGMOD\Equipment\Mask\GP7M2\data\gasmask_gp7m_destruct.rvmat"}}
					};
				};
			};
		};
		
		class ClothingTypes {
			male = "IMPGMOD\Equipment\Mask\GP7M2\models\GP7M2.p3d";
			female = "IMPGMOD\Equipment\Mask\GP7M2\models\GP7M2_f.p3d";
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
	
	class IMP_GP7M2_Mask : IMP_GP7M2_Mask_Base 
	{
		scope = 2;
		hiddenSelections[] = {"camoflage"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Mask\GP7M2\data\gasmask_gp7m_co.paa"};
	};
};