class CfgPatches 
{
	class IMP_Belt_BeltSystem 
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
	
	class IMP_Belt_BeltSystem_Large_ColorBase : Clothing 
	{
		scope = 0;
		RankLevel = 3;
		displayName = "$STR_IMP_BSLarge";
		descriptionShort = "$STR_IMP_BSLargeD";
		model = "\IMPGMOD\Equipment\Belts\LegSystem\Large\LargeBelt_g.p3d";
		attachments[] = {};
		vehicleClass = "Clothing";
		simulation = "clothing";
		inventorySlot[] = {"Hips"};
		itemInfo[] = {"Clothing", "Hips"};
		itemSize[] = {5, 3};
		varWetMax=0.048999999;
		heatIsolation=0.5;
		quickBarBonus=1;
		itemsCargoSize[] = {6, 10};
		repairableWithKits[] = {5, 3};
		repairCosts[] = {30.0, 25.0};
		weight = 1500;
		lootCategory = "Crafted";
		hiddenSelections[] = {"camoflage", "camoflagepouch"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa", "IMPGMOD\Equipment\Belts\LegSystem\Pouches\Pouches.paa"};
		
		class ClothingTypes 
		{
			male = "\IMPGMOD\Equipment\Belts\LegSystem\Large\LargeBelt_m.p3d";
			female = "\IMPGMOD\Equipment\Belts\LegSystem\Large\LargeBelt_f.p3d";
		};
		
		class DamageSystem 
		{
			class GlobalHealth 
			{
				class Health 
				{
					hitpoints = 500;
					healthLevels[] = 
					{
						{1, {"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt.rvmat","IMPGMOD\Equipment\Belts\LegSystem\Pouches\Pouches.rvmat"}}, 
						{0.7, {"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt.rvmat", "IMPGMOD\Equipment\Belts\LegSystem\Pouches\Pouches.rvmat"}}, 
						{0.5, {"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_damage.rvmat", "IMPGMOD\Equipment\Belts\LegSystem\Pouches\Pouches_damage.rvmat"}}, 
						{0.3, {"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_damage.rvmat", "IMPGMOD\Equipment\Belts\LegSystem\Pouches\Pouches_damage.rvmat"}}, 
						{0, {"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_destruct.rvmat", "IMPGMOD\Equipment\Belts\LegSystem\Pouches\Pouches_destruct.rvmat"}}
					};
				};
			};
		};
		
		class AnimEvents 
		{
			class SoundWeapon 
			{
				class pickUpItem 
				{
					soundSet = "WorkingGloves_pickup_SoundSet";
					id = 797;
				};
				
				class drop 
				{
					soundset = "WorkingGloves_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	
	class IMP_Belt_BeltSystem_Large_Tan : IMP_Belt_BeltSystem_Large_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa", "IMPGMOD\Equipment\Belts\LegSystem\Pouches\Pouches_Tan.paa"};
	};
	
	class IMP_Belt_BeltSystem_Large_Green : IMP_Belt_BeltSystem_Large_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa", "IMPGMOD\Equipment\Belts\LegSystem\Pouches\Pouches_Green.paa"};
	};
	
	class IMP_Belt_BeltSystem_Large_Black : IMP_Belt_BeltSystem_Large_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa", "IMPGMOD\Equipment\Belts\LegSystem\Pouches\Pouches_Black.paa"};
	};
	
	class IMP_Belt_BeltSystem_Large_80_Black : IMP_Belt_BeltSystem_Large_ColorBase 
	{
		scope = 2;
		itemsCargoSize[] = {8, 10};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa", "IMPGMOD\Equipment\Belts\LegSystem\Pouches\Pouches_Black.paa"};
	};
	
	class IMP_Belt_BeltSystem_Large_NWU : IMP_Belt_BeltSystem_Large_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa", "IMPGMOD\Equipment\Belts\LegSystem\Pouches\Pouches_NWU.paa"};
	};
	
	class IMP_Belt_BeltSystem_Large_EMR : IMP_Belt_BeltSystem_Large_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa", "IMPGMOD\Equipment\Belts\LegSystem\Pouches\Pouches_EMR.paa"};
	};
	
	class IMP_Belt_BeltSystem_Large_MARPAT : IMP_Belt_BeltSystem_Large_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa", "IMPGMOD\Equipment\Belts\LegSystem\Pouches\Pouches_MARPAT.paa"};
	};
	
	class IMP_Belt_BeltSystem_Large_UCP : IMP_Belt_BeltSystem_Large_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa", "IMPGMOD\Equipment\Belts\LegSystem\Pouches\Pouches_UCP.paa"};
	};
	
	class IMP_Belt_BeltSystem_Large_80_NWU : IMP_Belt_BeltSystem_Large_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa", "IMPGMOD\Equipment\Belts\LegSystem\Pouches\Pouches_NWU.paa"};
		itemsCargoSize[] = {8, 10};
	};
	
	class IMP_Belt_BeltSystem_Large_80_EMR : IMP_Belt_BeltSystem_Large_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa", "IMPGMOD\Equipment\Belts\LegSystem\Pouches\Pouches_EMR.paa"};
		itemsCargoSize[] = {8, 10};
	};
	
	class IMP_Belt_BeltSystem_Large_80_MARPAT : IMP_Belt_BeltSystem_Large_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa", "IMPGMOD\Equipment\Belts\LegSystem\Pouches\Pouches_MARPAT.paa"};
		itemsCargoSize[] = {8, 10};
	};
	
	class IMP_Belt_BeltSystem_Large_80_UCP : IMP_Belt_BeltSystem_Large_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa", "IMPGMOD\Equipment\Belts\LegSystem\Pouches\Pouches_UCP.paa"};
		itemsCargoSize[] = {8, 10};
	};
	
	class IMP_Belt_BeltSystem_Large_60_NWU : IMP_Belt_BeltSystem_Large_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa", "IMPGMOD\Equipment\Belts\LegSystem\Pouches\Pouches_NWU.paa"};
		itemsCargoSize[] = {6, 10};
	};
	
	class IMP_Belt_BeltSystem_Large_60_EMR : IMP_Belt_BeltSystem_Large_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa", "IMPGMOD\Equipment\Belts\LegSystem\Pouches\Pouches_EMR.paa"};
		itemsCargoSize[] = {6, 10};
	};
	
	class IMP_Belt_BeltSystem_Large_60_MARPAT : IMP_Belt_BeltSystem_Large_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa", "IMPGMOD\Equipment\Belts\LegSystem\Pouches\Pouches_MARPAT.paa"};
		itemsCargoSize[] = {6, 10};
	};
	
	class IMP_Belt_BeltSystem_Large_60_UCP : IMP_Belt_BeltSystem_Large_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa", "IMPGMOD\Equipment\Belts\LegSystem\Pouches\Pouches_UCP.paa"};
		itemsCargoSize[] = {6, 10};
	};
	
	class IMP_Belt_BeltSystem_Medium_ColorBase : Clothing 
	{
		scope = 0;
		RankLevel = 2;
		displayName = "$STR_IMP_BSMedium";
		descriptionShort = "$STR_IMP_BSMediumD";
		model = "\IMPGMOD\Equipment\Belts\LegSystem\Medium\MediumBelt_g.p3d";
		attachments[] = {};
		vehicleClass = "Clothing";
		simulation = "clothing";
		inventorySlot[] = {"Hips"};
		itemInfo[] = {"Clothing", "Hips"};
		itemSize[] = {5, 2};
		quickBarBonus=1;
		itemsCargoSize[] = {6, 9};
		repairableWithKits[] = {5, 3};
		repairCosts[] = {30.0, 25.0};
		weight = 1000;
		lootCategory = "Crafted";
		hiddenSelections[] = {"camoflage", "camoflagepouch"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa", "IMPGMOD\Equipment\Belts\LegSystem\Pouches\Pouches.paa"};
		
		class ClothingTypes 
		{
			male = "\IMPGMOD\Equipment\Belts\LegSystem\Medium\MediumBelt_m.p3d";
			female = "\IMPGMOD\Equipment\Belts\LegSystem\Medium\MediumBelt_f.p3d";
		};
		
		class DamageSystem 
		{
			class GlobalHealth 
			{
				class Health 
				{
					hitpoints = 500;
					healthLevels[] = 
					{
						{1, {"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt.rvmat","IMPGMOD\Equipment\Belts\LegSystem\Pouches\Pouches.rvmat"}}, 
						{0.7, {"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt.rvmat", "IMPGMOD\Equipment\Belts\LegSystem\Pouches\Pouches.rvmat"}}, 
						{0.5, {"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_damage.rvmat", "IMPGMOD\Equipment\Belts\LegSystem\Pouches\Pouches_damage.rvmat"}}, 
						{0.3, {"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_damage.rvmat", "IMPGMOD\Equipment\Belts\LegSystem\Pouches\Pouches_damage.rvmat"}}, 
						{0, {"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_destruct.rvmat", "IMPGMOD\Equipment\Belts\LegSystem\Pouches\Pouches_destruct.rvmat"}}
					};
				};
			};
		};
		
		class AnimEvents 
		{
			class SoundWeapon 
			{
				class pickUpItem 
				{
					soundSet = "WorkingGloves_pickup_SoundSet";
					id = 797;
				};
				
				class drop 
				{
					soundset = "WorkingGloves_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	
	class IMP_Belt_BeltSystem_Medium_Tan : IMP_Belt_BeltSystem_Medium_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa", "IMPGMOD\Equipment\Belts\LegSystem\Pouches\Pouches_Tan.paa"};
	};
	
	class IMP_Belt_BeltSystem_Medium_Green : IMP_Belt_BeltSystem_Medium_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa", "IMPGMOD\Equipment\Belts\LegSystem\Pouches\Pouches_Green.paa"};
	};
	
	class IMP_Belt_BeltSystem_Medium_Black : IMP_Belt_BeltSystem_Medium_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa", "IMPGMOD\Equipment\Belts\LegSystem\Pouches\Pouches_Black.paa"};
	};
	
	class IMP_Belt_BeltSystem_Medium_NWU : IMP_Belt_BeltSystem_Medium_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa", "IMPGMOD\Equipment\Belts\LegSystem\Pouches\Pouches_NWU.paa"};
	};
	
	class IMP_Belt_BeltSystem_Medium_EMR : IMP_Belt_BeltSystem_Medium_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa", "IMPGMOD\Equipment\Belts\LegSystem\Pouches\Pouches_EMR.paa"};
	};
	
	class IMP_Belt_BeltSystem_Medium_MARPAT : IMP_Belt_BeltSystem_Medium_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa", "IMPGMOD\Equipment\Belts\LegSystem\Pouches\Pouches_MARPAT.paa"};
	};
	
	class IMP_Belt_BeltSystem_Medium_UCP : IMP_Belt_BeltSystem_Medium_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa", "IMPGMOD\Equipment\Belts\LegSystem\Pouches\Pouches_UCP.paa"};
	};
	
	class IMP_Belt_BeltSystem_Medium_60_NWU : IMP_Belt_BeltSystem_Medium_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa", "IMPGMOD\Equipment\Belts\LegSystem\Pouches\Pouches_NWU.paa"};
		itemsCargoSize[] = {6, 10};
	};
	
	class IMP_Belt_BeltSystem_Medium_60_EMR : IMP_Belt_BeltSystem_Medium_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa", "IMPGMOD\Equipment\Belts\LegSystem\Pouches\Pouches_EMR.paa"};
		itemsCargoSize[] = {6, 10};
	};
	
	class IMP_Belt_BeltSystem_Medium_60_MARPAT : IMP_Belt_BeltSystem_Medium_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa", "IMPGMOD\Equipment\Belts\LegSystem\Pouches\Pouches_MARPAT.paa"};
		itemsCargoSize[] = {6, 10};
	};
	
	class IMP_Belt_BeltSystem_Medium_60_UCP : IMP_Belt_BeltSystem_Medium_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa", "IMPGMOD\Equipment\Belts\LegSystem\Pouches\Pouches_UCP.paa"};
		itemsCargoSize[] = {6, 10};
	};
	
	class IMP_Belt_BeltSystem_Small_ColorBase : Clothing 
	{
		scope = 0;
		RankLevel = 1;
		displayName = "$STR_IMP_BSSmall";
		descriptionShort = "$STR_IMP_BSSmallD";
		model = "\IMPGMOD\Equipment\Belts\LegSystem\Small\SmallBelt_g.p3d";
		attachments[] = {};
		vehicleClass = "Clothing";
		simulation = "clothing";
		inventorySlot[] = {"Hips"};
		itemInfo[] = {"Clothing", "Hips"};
		itemSize[] = {5, 2};
		quickBarBonus=1;
		itemsCargoSize[] = {6, 8};
		repairableWithKits[] = {5, 3};
		repairCosts[] = {30.0, 25.0};
		weight = 500;
		lootCategory = "Crafted";
		hiddenSelections[] = {"camoflage", "camoflagepouch"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa", "IMPGMOD\Equipment\Belts\LegSystem\Pouches\Pouches.paa"};
		
		class ClothingTypes 
		{
			male = "\IMPGMOD\Equipment\Belts\LegSystem\Small\SmallBelt_m.p3d";
			female = "\IMPGMOD\Equipment\Belts\LegSystem\Small\SmallBelt_f.p3d";
		};
		
		class DamageSystem 
		{
			class GlobalHealth 
			{
				class Health 
				{
					hitpoints = 500;
					healthLevels[] = 
					{
						{1, {"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt.rvmat","IMPGMOD\Equipment\Belts\LegSystem\Pouches\Pouches.rvmat"}}, 
						{0.7, {"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt.rvmat", "IMPGMOD\Equipment\Belts\LegSystem\Pouches\Pouches.rvmat"}}, 
						{0.5, {"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_damage.rvmat", "IMPGMOD\Equipment\Belts\LegSystem\Pouches\Pouches_damage.rvmat"}}, 
						{0.3, {"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_damage.rvmat", "IMPGMOD\Equipment\Belts\LegSystem\Pouches\Pouches_damage.rvmat"}}, 
						{0, {"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_destruct.rvmat", "IMPGMOD\Equipment\Belts\LegSystem\Pouches\Pouches_destruct.rvmat"}}
					};
				};
			};
		};

		class AnimEvents 
		{
			class SoundWeapon 
			{
				class pickUpItem 
				{
					soundSet = "WorkingGloves_pickup_SoundSet";
					id = 797;
				};
				
				class drop 
				{
					soundset = "WorkingGloves_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	
	class IMP_BeltSystem_Small_Tan : IMP_Belt_BeltSystem_Small_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa", "IMPGMOD\Equipment\Belts\LegSystem\Pouches\Pouches_Tan.paa"};
	};
	
	class IMP_BeltSystem_Small_Green : IMP_Belt_BeltSystem_Small_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa", "IMPGMOD\Equipment\Belts\LegSystem\Pouches\Pouches_Green.paa"};
	};
	
	class IMP_BeltSystem_Small_Black : IMP_Belt_BeltSystem_Small_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa", "IMPGMOD\Equipment\Belts\LegSystem\Pouches\Pouches_Black.paa"};
	};
	
	class IMP_BeltSystem_Small_80_Black : IMP_Belt_BeltSystem_Small_ColorBase 
	{
		scope = 2;
		itemsCargoSize[] = {8, 10};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa", "IMPGMOD\Equipment\Belts\LegSystem\Pouches\Pouches_Black.paa"};
	};
	
	class IMP_BeltSystem_Small_NWU : IMP_Belt_BeltSystem_Small_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa", "IMPGMOD\Equipment\Belts\LegSystem\Pouches\Pouches_NWU.paa"};
	};
	
	class IMP_BeltSystem_Small_EMR : IMP_Belt_BeltSystem_Small_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa", "IMPGMOD\Equipment\Belts\LegSystem\Pouches\Pouches_EMR.paa"};
	};
	
	class IMP_BeltSystem_Small_MARPAT : IMP_Belt_BeltSystem_Small_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa", "IMPGMOD\Equipment\Belts\LegSystem\Pouches\Pouches_MARPAT.paa"};
	};
	
	class IMP_BeltSystem_Small_UCP : IMP_Belt_BeltSystem_Small_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa", "IMPGMOD\Equipment\Belts\LegSystem\Pouches\Pouches_UCP.paa"};
	};
};