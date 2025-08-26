class CfgPatches 
{
	class IMP_Sling_Front
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
	
	class IMP_Sling_Front_ColorBase : Clothing 
	{
		scope = 0;
		displayName = "$STR_IMP_FrontSling";
		descriptionShort = "$STR_IMP_FrontSlingD";
		model = "IMPGMOD\Equipment\Sling\FrontSling\models\Sling_Front_g.p3d";
		attachments[] = {"Shoulder40"};
		inventorySlot = "Armband";
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Hips"
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
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Sling\FrontSling\data\Front_co.paa"};
		
		class ClothingTypes 
		{
			male = "IMPGMOD\Equipment\Sling\FrontSling\models\Sling_Front.p3d";
			female = "IMPGMOD\Equipment\Sling\FrontSling\models\Sling_Front.p3d";
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
						{1,{"IMPGMOD\Equipment\Sling\FrontSling\data\FrontSling.rvmat"}},
						{0.7,{"IMPGMOD\Equipment\Sling\FrontSling\data\FrontSling.rvmat"}},
						{0.5,{"IMPGMOD\Equipment\Sling\FrontSling\data\FrontSling_damage.rvmat"}},
						{0.3,{"IMPGMOD\Equipment\Sling\FrontSling\data\FrontSling_damage.rvmat"}},
						{0,{"IMPGMOD\Equipment\Sling\FrontSling\data\FrontSling_destruct.rvmat"}}
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
	
	class IMP_Sling_Front: IMP_Sling_Front_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Sling\FrontSling\data\Front_co.paa"};
	};
};	