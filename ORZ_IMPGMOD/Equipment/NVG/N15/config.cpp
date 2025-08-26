class CfgPatches
{
	class IMP_NVG_N15
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
	class IMP_NVG_N15: NVGoggles	
	{
		scope = 2;
		displayName = "Armasight NVG N-15";
		descriptionShort = "NVG N15";
		model = "IMPGMOD\Equipment\NVG\N15\models\N15.p3d";
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
		hiddenSelections[] = {"camoflage"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\NVG\N15\data\NVG_co.paa"};
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
};