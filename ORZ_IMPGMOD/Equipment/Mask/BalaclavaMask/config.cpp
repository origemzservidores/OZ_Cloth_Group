class CfgPatches 
{
	class IMP_Mask_Balaclava
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
	
	class IMP_Mask_Balaclava_ColorBase : Clothing 
	{
		scope = 0;
		displayName = "$STR_IMP_BalaclavaMask";
		descriptionShort = "$STR_IMP_BalaclavaMaskD";
		model = "IMPGMOD\Equipment\Mask\BalaclavaMask\models\BalaclavaMask_g.p3d";
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
		headSelectionsToHide[] = {"Clipping_Balaclava"};
		hiddenSelections[] = {"camoflage"};
		
		class DamageSystem {
			class GlobalHealth {
				class Health {
					hitpoints = 500;
					healthLevels[] = 
					{
						{1.0, {"IMPGMOD\Equipment\Mask\BalaclavaMask\data\BalaclavaMask.rvmat"}}, 
						{0.7, {"IMPGMOD\Equipment\Mask\BalaclavaMask\data\BalaclavaMask.rvmat"}}, 
						{0.5, {"IMPGMOD\Equipment\Mask\BalaclavaMask\data\BalaclavaMask_damage.rvmat"}}, 
						{0.3, {"IMPGMOD\Equipment\Mask\BalaclavaMask\data\BalaclavaMask_damage.rvmat"}}, 
						{0.0, {"IMPGMOD\Equipment\Mask\BalaclavaMask\data\BalaclavaMask_destruct.rvmat"}}
					};
				};
			};
		};
		
		class ClothingTypes 
		{
			male = "IMPGMOD\Equipment\Mask\BalaclavaMask\models\BalaclavaMask_m.p3d";
			female = "IMPGMOD\Equipment\Mask\BalaclavaMask\models\BalaclavaMask_f.p3d";
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
	
	class IMP_Mask_Balaclava_Green : IMP_Mask_Balaclava_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Mask\BalaclavaMask\data\BalaclavaMask_Green.paa"};
	};
	
	class IMP_Mask_Balaclava_Black : IMP_Mask_Balaclava_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Mask\BalaclavaMask\data\BalaclavaMask_Black.paa"};
	};
	
	class IMP_Mask_Balaclava_Desert : IMP_Mask_Balaclava_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Mask\BalaclavaMask\data\BalaclavaMask_Desert.paa"};
	};
	
	class IMP_Mask_Balaclava_Skull : IMP_Mask_Balaclava_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Mask\BalaclavaMask\data\BalaclavaMask_Skull.paa"};
	};
	
	class IMP_Mask_Balaclava_UCP : IMP_Mask_Balaclava_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Mask\BalaclavaMask\data\BalaclavaMask_UCP.paa"};
	};
	
	class IMP_Mask_Balaclava_EMR : IMP_Mask_Balaclava_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Mask\BalaclavaMask\data\BalaclavaMask_EMR.paa"};
	};
	
	class IMP_Mask_Balaclava_NWU : IMP_Mask_Balaclava_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Mask\BalaclavaMask\data\BalaclavaMask_NWU.paa"};
	};
	
	class IMP_Mask_Balaclava_MARPAT : IMP_Mask_Balaclava_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Mask\BalaclavaMask\data\BalaclavaMask_MARPAT.paa"};
	};
	
	class IMP_Mask_Balaclava_Wolf : IMP_Mask_Balaclava_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Mask\BalaclavaMask\data\BalaclavaMask_Wolf.paa"};
	};
};
