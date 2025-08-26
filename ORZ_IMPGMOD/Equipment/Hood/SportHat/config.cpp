class CfgPatches 
{
	class IMP_Hat_SportUSSR
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
	
	class IMP_Hat_SportUSSR_ColorBase : Clothing 
	{
		scope = 0;
		displayName = "$STR_IMP_SportHat";
		descriptionShort = "$STR_IMP_HoodAll";
		model = "IMPGMOD\Equipment\Hood\SportHat\models\SportHat_g.p3d";
		inventorySlot[] = {"Headgear"};
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing", "Headgear"};
		rotationFlags=2;
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
					hitpoints = 100;
					healthLevels[] = 
					{
						{1.0, {"IMPGMOD\Equipment\Hood\SportHat\data\SportHat.rvmat"}}, 
						{0.7, {"IMPGMOD\Equipment\Hood\SportHat\data\SportHat.rvmat"}}, 
						{0.5, {"IMPGMOD\Equipment\Hood\SportHat\data\SportHat_damage.rvmat"}}, 
						{0.3, {"IMPGMOD\Equipment\Hood\SportHat\data\SportHat_damage.rvmat"}}, 
						{0.0, {"IMPGMOD\Equipment\Hood\SportHat\data\SportHat_destruct.rvmat"}}
					};
				};
			};
		};
		
		class ClothingTypes 
		{
			male = "IMPGMOD\Equipment\Hood\SportHat\models\SportHat.p3d";
			female = "IMPGMOD\Equipment\Hood\SportHat\models\SportHat.p3d";
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
	
	class IMP_Hat_SportUSSR : IMP_Hat_SportUSSR_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Hood\SportHat\data\SportHat_co.paa"};
	};
};
