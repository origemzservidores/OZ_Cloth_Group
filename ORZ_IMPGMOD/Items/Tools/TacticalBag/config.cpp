class CfgPatches {
	class IMP_TacticalBag {
		units[] = {"IMP_TacticalBag", "IMP_TacticalBag_Black", "IMP_TacticalBag_WD"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Characters_Headgear", "DZ_Characters_Tops", "DZ_Characters_Vests", "DZ_Characters_Pants", "DZ_Characters_Backpacks", "DZ_Gear_Navigation", "DZ_Weapons_Melee_Blade", "DZ_Gear_Tools", "DZ_Characters_Belts", "DZ_Radio", "DZ_Scripts", "DZ_Gear_Containers"};
	};
};

class CfgNonAIVehicles {
	class ProxyAttachment;
	
	class Proxytacticalbag1 : ProxyAttachment 
	{
		scope = 2;
		inventorySlot[] = {"TacticalBag1"};
		model = "IMPGMOD\Items\Tools\TacticalBag\models\tacticalbag1.p3d";
	};
	
	class Proxytacticalbag2 : ProxyAttachment 
	{
		scope = 2;
		inventorySlot[] = {"TacticalBag2"};
		model = "IMPGMOD\Items\Tools\TacticalBag\models\tacticalbag2.p3d";
	};
};

class CfgSlots {	
	class Slot_TacticalBag1 
	{
		name = "TacticalBag1";
		displayName = "$STR_IMP_TacticalPouch";
		modGhostIcon = "set:Slots image:TacticalBag";
	};
	
	class Slot_TacticalBag2 
	{
		name = "TacticalBag2";
		displayName = "$STR_IMP_TacticalPouch";
		modGhostIcon = "set:Slots image:TacticalBag";
	};
};

class cfgVehicles {
	class Container_Base;
	
	class IMP_Pouch_Tactical_Tan : Container_Base 
	{
		scope = 2;
		displayName = "$STR_IMP_TacticalPouch";
		descriptionShort = "$STR_IMP_TacticalPouchD";
		itemsize[] = {3, 3};
		itemsCargoSize[] = {5, 3};
		allowOwnedCargoManipulation = 1;
		Model = "IMPGMOD\Items\Tools\TacticalBag\models\tacticalbag.p3d";
		inventorySlot[] = {"TacticalBag1", "TacticalBag2"};
		weight = 250;
		hiddenSelections[] = {"camoflage"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Tools\TacticalBag\data\TacticalBag_Tan_co.paa"};
		hiddenSelectionsMaterials[] = {"IMPGMOD\Items\Tools\TacticalBag\data\tacticalbag.rvmat"};
		
		class DamageSystem 
		{
			class GlobalHealth 
			{
				class Health 
				{
					hitpoints = 500;
					healthLevels[] = 
					{
						{1.0, {"IMPGMOD\Items\Tools\TacticalBag\data\tacticalbag.rvmat"}},
						{0.7, {"IMPGMOD\Items\Tools\TacticalBag\data\tacticalbag.rvmat"}},
						{0.5, {"IMPGMOD\Items\Tools\TacticalBag\data\tacticalbag_damage.rvmat"}},
						{0.3, {"IMPGMOD\Items\Tools\TacticalBag\data\tacticalbag_damage.rvmat"}},
						{0.0, {"IMPGMOD\Items\Tools\TacticalBag\data\tacticalbag_destruct.rvmat"}}
					};
				};
			};
		};
	};
	
	class IMP_Pouch_Tactical_Black : IMP_Pouch_Tactical_Tan 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Tools\TacticalBag\data\TacticalBag_Black_co.paa"};
	};
	
	class IMP_Pouch_Tactical_Green : IMP_Pouch_Tactical_Tan 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Tools\TacticalBag\data\TacticalBag_Green_co.paa"};
	};
	
	class IMP_Pouch_Tactical_UCP : IMP_Pouch_Tactical_Tan 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Tools\TacticalBag\data\TacticalBag_UCP.paa"};
	};
	
	class IMP_Pouch_Tactical_EMR : IMP_Pouch_Tactical_Tan 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Tools\TacticalBag\data\TacticalBag_EMR.paa"};
	};
	
	class IMP_Pouch_Tactical_NWU : IMP_Pouch_Tactical_Tan 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Tools\TacticalBag\data\TacticalBag_NWU.paa"};
	};
	
	class IMP_Pouch_Tactical_MARPAT : IMP_Pouch_Tactical_Tan 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Tools\TacticalBag\data\TacticalBag_MARPAT.paa"};
	};
};
