class CfgPatches
{
	class IMP_NVG_GPNVG18
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data", "DZ_Scripts", "DZ_Gear_Optics", "DZ_Characters"
		};
	};
};

class CfgVehicles
{
	class Clothing_Base;
	class NVGoggles;
	class IMP_NVG_GPNVG_18_Base: NVGoggles
	{
		scope = 0;
		displayName = "NVG GPNVG-18";
		descriptionShort = "NVG GPNVG-18";
		model = "IMPGMOD\Equipment\NVG\GPNVG18\models\GPNVG18.p3d";
		simulation="itemoptics";
		animClass="Binoculars";
		inventorySlot[]=
		{
			"NVG"
		};
		itemSize[]={2,2};
		weight=300;
		rotationFlags=1;
		repairableWithKits[]={7,18,12};
		repairCosts[]={25};
		class OpticsInfo
		{
			memoryPointCamera="eyeScope";
			cameraDir="cameraDir";
			modelOptics="-";
			distanceZoomMin=500;
			distanceZoomMax=500;
			opticsZoomMin=0.52359998;
			opticsZoomMax=0.52359998;
			opticsZoomInit=0.52359998;
		};
		attachments[]=
		{
			"BatteryD"
		};
		NVOptic=1;
		simpleHiddenSelections[]=
		{
			"hide"
		};
		HiddenSelections[]=
		{
			"camoflage"
		};
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
							1.0,
							
							{
								"DZ\characters\glasses\data\NVG_Headstrap.rvmat"
							}
						},
						
						{
							0.6,
							
							{
								"DZ\characters\glasses\data\NVG_Headstrap.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\glasses\data\NVG_Headstrap_damage.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"DZ\characters\glasses\data\NVG_Headstrap_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"DZ\characters\glasses\data\NVG_Headstrap_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class EnergyManager
		{
			hasIcon=1;
			energyUsagePerSecond=0.0099999998;
			plugType=1;
			attachmentAction=1;
		};
		class AnimationSources
		{
			class hide
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=0;
			};
			class rotate
			{
				source="user";
				animPeriod=0.30000001;
				initPhase=0;
			};
		};
	};
	class IMP_NVG_GPNVG_18_Black: IMP_NVG_GPNVG_18_Base
	{
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\NVG\GPNVG18\data\GPNVG_Black_ca.paa"
		};
	};
	class IMP_NVG_GPNVG_18_Green: IMP_NVG_GPNVG_18_Base
	{
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\NVG\GPNVG18\data\GPNVG_Green_ca.paa"
		};
	};
	class IMP_NVG_GPNVG_18_Tan: IMP_NVG_GPNVG_18_Base
	{
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\NVG\GPNVG18\data\GPNVG_Tan_ca.paa"
		};
	};
};