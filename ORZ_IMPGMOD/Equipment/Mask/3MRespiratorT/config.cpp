class CfgPatches 
{
	class IMP_Mask_3MRespirator
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
	
	class IMP_Mask_3MRespirator_ColorBase : Clothing 
	{
		scope = 0;
		displayName = "$STR_IMP_ZMRespirator";
		descriptionShort = "$STR_IMP_Poncho1";
		model = "IMPGMOD\Equipment\Mask\3MRespiratorT\models\3MRespiratorT_g.p3d";
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
						{1.0, {"IMPGMOD\Equipment\Mask\3MRespiratorT\data\3MRespiratorT.rvmat"}}, 
						{0.7, {"IMPGMOD\Equipment\Mask\3MRespiratorT\data\3MRespiratorT.rvmat"}}, 
						{0.5, {"IMPGMOD\Equipment\Mask\3MRespiratorT\data\3MRespiratorT_damage.rvmat"}}, 
						{0.3, {"IMPGMOD\Equipment\Mask\3MRespiratorT\data\3MRespiratorT_damage.rvmat"}}, 
						{0.0, {"IMPGMOD\Equipment\Mask\3MRespiratorT\data\3MRespiratorT_destruct.rvmat"}}
					};
				};
			};
		};
		
		class ClothingTypes 
		{
			male = "IMPGMOD\Equipment\Mask\3MRespiratorT\models\3MRespiratorT_m.p3d";
			female = "IMPGMOD\Equipment\Mask\3MRespiratorT\models\3MRespiratorT_f.p3d";
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
	
	class IMP_Mask_3MRespirator : IMP_Mask_3MRespirator_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Mask\3MRespiratorT\data\3MRespiratorT_co.paa"};
	};
};
