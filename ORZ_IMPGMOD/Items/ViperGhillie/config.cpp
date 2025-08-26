class CfgPatches
{
	class IMP_Viper_Ghillie
	{
		units[]=
		{
			"IMP_ViperGhillie_ColorBase"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data", "DZ_Characters", "DZ_Scripts"
		};
	};
};
class CfgVehicles
{
	class Clothing_Base;
	class Clothing: Clothing_Base
	{
	};
	class Switchable_Base;
	class IMP_ViperGhillie_ColorBase: Clothing
	{
		scope=0;
		displayName="$STR_CfgVehicles_GhillieHood_ColorBase0";
		descriptionShort="$STR_CfgVehicles_GhillieHood_ColorBase1";
		model="\IMPGMOD\Items\ViperGhillie\models\Ghillie_g.p3d";
		inventorySlot = "Armband";
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[] = {"Clothing", "Hips"};
		rotationFlags=2;
		weight=410;
		itemSize[]={4,3};
		varWetMax=1;
		heatIsolation=1;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		hiddenSelections[]=
		{
			"hood",
			"mask"
		};
		hiddenSelectionsTextures[]=
		{
			"\IMPGMOD\Items\ViperGhillie\data\Hood_Flecktarn_co.paa",
			"\IMPGMOD\Items\ViperGhillie\data\Mask_Flecktarn_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
				};
			};
		};
		class ClothingTypes
		{
			male="\IMPGMOD\Items\ViperGhillie\models\Ghillie.p3d";
			female="\IMPGMOD\Items\ViperGhillie\models\Ghillie.p3d";
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
	};
	class IMP_ViperGhillie_Arctic: IMP_ViperGhillie_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\IMPGMOD\Items\ViperGhillie\data\Hood_arctic_co.paa",
			"\IMPGMOD\Items\ViperGhillie\data\Mask_Arctic_co.paa"
		};
	};
	class IMP_ViperGhillie_Flecktarn: IMP_ViperGhillie_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\IMPGMOD\Items\ViperGhillie\data\Hood_Flecktarn_co.paa",
			"\IMPGMOD\Items\ViperGhillie\data\Mask_Flecktarn_co.paa"
		};
	};
	class IMP_ViperGhillie_Multicam: IMP_ViperGhillie_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\IMPGMOD\Items\ViperGhillie\data\Hood_MC_co.paa",
			"\IMPGMOD\Items\ViperGhillie\data\Mask_Multicam_co.paa"
		};
	};
	class IMP_ViperGhillie_WD: IMP_ViperGhillie_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\IMPGMOD\Items\ViperGhillie\data\Hood_WD_co.paa",
			"\IMPGMOD\Items\ViperGhillie\data\Mask_WD_co.paa"
		};
	};
};