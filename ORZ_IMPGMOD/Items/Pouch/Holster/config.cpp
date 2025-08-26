class CfgPatches
{
	class IMP_Pouch_Holster
	{
		units[]=
		{
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data", "DZ_Characters", "DZ_Scripts"
		};
	};
};
class CfgVehicles {
	class Container_Base;

	class IMP_Pouch_PlateCarrierHolster_ColorBase: Container_Base
	{
		scope=0;
		displayName="$STR_CfgVehicles_CarrierHolsterSolo0";
		descriptionShort="$STR_CfgVehicles_CarrierHolsterSolo1";
		model="IMPGMOD\Items\Pouch\Holster\models\Holster_g.p3d";
		inventorySlot[]=
		{
			"VestHolster",
			"Belt_Right"
		};
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Vest"
		};
		weight=250;
		itemSize[]={2,3};
		attachments[]=
		{
			"Pistol"
		};
		varWetMax=0.79000002;
		heatIsolation=0;
		repairableWithKits[]={3};
		repairCosts[]={25};
		hiddenSelections[] = {"camoflage"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Pouch\Holster\data\Holster_Black_co.paa"};
		hiddenSelectionsMaterials[] = {"IMPGMOD\Items\Pouch\Holster\data\Holster.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1.01,
							
							{
								"IMPGMOD\Items\Pouch\Holster\data\Holster.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"IMPGMOD\Items\Pouch\Holster\data\Holster.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"IMPGMOD\Items\Pouch\Holster\data\Holster_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"IMPGMOD\Items\Pouch\Holster\data\Holster_damage.rvmat"
							}
						},
						
						{
							0.01,
							
							{
								"IMPGMOD\Items\Pouch\Holster\data\Holster_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="IMPGMOD\Items\Pouch\Holster\models\Holster_g.p3d";
			female="IMPGMOD\Items\Pouch\Holster\models\Holster_g.p3d";
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
	class IMP_Pouch_PlateCarrierHolster_Black: IMP_Pouch_PlateCarrierHolster_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Pouch\Holster\data\Holster_Black_co.paa"};
	};
	class IMP_Pouch_PlateCarrierHolster_Green: IMP_Pouch_PlateCarrierHolster_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Pouch\Holster\data\Holster_Green_co.paa"};
	};
	class IMP_Pouch_PlateCarrierHolster_Tan: IMP_Pouch_PlateCarrierHolster_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Pouch\Holster\data\Holster_Tan_co.paa"};
	};
	class IMP_Pouch_PlateCarrierHolster_MARPAT: IMP_Pouch_PlateCarrierHolster_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Pouch\Holster\data\Holster_MARPAT.paa"};
	};
	class IMP_Pouch_PlateCarrierHolster_UCP: IMP_Pouch_PlateCarrierHolster_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Pouch\Holster\data\Holster_UCP.paa"};
	};
	class IMP_Pouch_PlateCarrierHolster_EMR: IMP_Pouch_PlateCarrierHolster_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Pouch\Holster\data\Holster_EMR.paa"};
	};
	class IMP_Pouch_PlateCarrierHolster_NWU: IMP_Pouch_PlateCarrierHolster_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Pouch\Holster\data\Holster_NWU.paa"};
	};
};
