class CfgPatches {
	class IMP_BottlePouchBase {
		units[] = {"Drink_Canteen", "Drink_WaterBottle"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data", "DZ_Characters", "DZ_Scripts"};
	};
};

class CfgVehicles {
	class SodaCan_ColorBase;
	class WaterBottle;
	
	class IMP_Bottle_BottlePouch_ColorBase : WaterBottle {
		scope = 0;
		displayName = "$STR_IMP_Bottle";
		descriptionShort = "$STR_IMP_BottleD";
		inventorySlot[] = {"Canteen", "WaterBottle"};
		model = "IMPGMOD\Items\Food\BottlePouch\models\BottlePouch.p3d";
		hiddenSelections[] = {"zbytek"};
		
		class AnimEvents {
			class SoundWeapon {
				class Drinking_loop {
					soundSet = "Drinking_loop_SoundSet";
					id = 200;
				};
				
				class WaterBottle_in_A {
					soundSet = "WaterBottle_in_A_SoundSet";
					id = 201;
				};
				
				class WaterBottle_in_B {
					soundSet = "WaterBottle_in_B_SoundSet";
					id = 202;
				};
				
				class WaterBottle_in_C {
					soundSet = "WaterBottle_in_C_SoundSet";
					id = 203;
				};
				
				class WaterBottle {
					soundSet = "WaterBottle_SoundSet";
					id = 204;
				};
				
				class WaterBottle_out_A {
					soundSet = "WaterBottle_out_A_SoundSet";
					id = 205;
				};
				
				class WaterBottle_out_B {
					soundSet = "WaterBottle_out_B_SoundSet";
					id = 206;
				};
				
				class WaterBottle_out_C {
					soundSet = "WaterBottle_out_C_SoundSet";
					id = 207;
				};
				
				class WaterBottle_empty_open {
					soundSet = "WaterBottle_empty_open_SoundSet";
					id = 208;
				};
				
				class WaterBottle_empty_close {
					soundSet = "WaterBottle_empty_close_SoundSet";
					id = 209;
				};
				
				class WaterBottle_empty_start {
					soundSet = "WaterBottle_empty_start_SoundSet";
					id = 210;
				};
				
				class WaterBottle_empty_loop {
					soundSet = "WaterBottle_empty_loop_SoundSet";
					id = 211;
				};
				
				class WaterBottle_empty_end {
					soundSet = "WaterBottle_empty_end_SoundSet";
					id = 212;
				};
				
				class WaterBottle_Whoosh {
					soundSet = "WaterBottle_Whoosh_SoundSet";
					id = 16;
				};
				
				class WaterBottle_WhooshShort {
					soundSet = "WaterBottle_WhooshShort_SoundSet";
					id = 17;
				};
				
				class WaterBottle_WhooshHeavy {
					soundSet = "WaterBottle_WhooshHeavy_SoundSet";
					id = 18;
				};
				
				class ExtinguishByWater {
					soundSet = "ExtinguishByWater_SoundSet";
					id = 208;
				};
			};
		};
	};
	
	class IMP_Bottle_BottlePouch_Green : IMP_Bottle_BottlePouch_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Food\BottlePouch\data\BottlePouch_Green.paa"};
	};
	
	class IMP_Bottle_BottlePouch_Desert : IMP_Bottle_BottlePouch_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Food\BottlePouch\data\BottlePouch_Desert.paa"};
	};
	
	class IMP_Bottle_BottlePouch_Black : IMP_Bottle_BottlePouch_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Food\BottlePouch\data\BottlePouch_Black.paa"};
	};
	
	class IMP_Bottle_BottlePouch_UCP : IMP_Bottle_BottlePouch_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Food\BottlePouch\data\BottlePouch_UCP.paa"};
	};
	
	class IMP_Bottle_BottlePouch_EMR : IMP_Bottle_BottlePouch_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Food\BottlePouch\data\BottlePouch_EMR.paa"};
	};
	
	class IMP_Bottle_BottlePouch_NWU : IMP_Bottle_BottlePouch_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Food\BottlePouch\data\BottlePouch_NWU.paa"};
	};
	
	class IMP_Bottle_BottlePouch_MARPAT : IMP_Bottle_BottlePouch_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Food\BottlePouch\data\BottlePouch_MARPAT.paa"};
	};
};
