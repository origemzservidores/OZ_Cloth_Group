class CfgPatches 
{
	class IMP_Sling_Back
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
	
	class IMP_Sling_Back_ColorBase : Clothing 
	{
		scope = 0;
		displayName = "$STR_IMP_BackSling";
		descriptionShort = "$STR_IMP_BackSlingD";
		model = "IMPGMOD\Equipment\Sling\BackSling\models\Sling_Back_g.p3d";
		attachments[] = {"Shoulder40"};
		inventorySlot = "melee";
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Back"
		};
		itemSize[] = {7, 1};
		quickBarBonus = 2;
		weight = 1000;
		varWetMax=0.048999999;
		heatIsolation=0.5;
		repairableWithKits[] = {5, 3};
		repairCosts[] = {30.0, 25.0};
		soundAttType = "Outdoor";
		randomQuantity = 4;
		canBeDigged = 0;
		hiddenSelections[]={"camoflage"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Sling\BackSling\data\Back_co.paa"};
		
		class ClothingTypes 
		{
			male = "IMPGMOD\Equipment\Sling\BackSling\models\Sling_Back.p3d";
			female = "IMPGMOD\Equipment\Sling\BackSling\models\Sling_Back.p3d";
		};		
		
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					transferToAttachmentsCoef = 0.5;
					healthLevels[] = 
					{
						{1,{"IMPGMOD\Equipment\Sling\BackSling\data\BackSling.rvmat"}},
						{0.7,{"IMPGMOD\Equipment\Sling\BackSling\data\BackSling.rvmat"}},
						{0.5,{"IMPGMOD\Equipment\Sling\BackSling\data\BackSling_damage.rvmat"}},
						{0.3,{"IMPGMOD\Equipment\Sling\BackSling\data\BackSling_damage.rvmat"}},
						{0,{"IMPGMOD\Equipment\Sling\BackSling\data\BackSling_destruct.rvmat"}}
					};
				};
			};
		};
		
		class AnimEvents 
		{
			class SoundWeapon 
			{
				class pickUpItem_Light 
				{
					soundSet = "pickUpBackPack_Plastic_Light_SoundSet";
					id = 796;
				};
				
				class pickUpItem 
				{
					soundSet = "pickUpBackPack_Plastic_SoundSet";
					id = 797;
				};
				
				class drop 
				{
					soundset = "taloonbag_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	
	class IMP_Sling_Back: IMP_Sling_Back_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Sling\BackSling\data\Back_co.paa"};
	};
};