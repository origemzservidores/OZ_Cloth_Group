class CfgPatches {
	class IMP_Pouch_MapPouch {
		units[] = {"IMP_MapPouch_ColorBase", "IMP_MapPouch_Green", "IMP_MapPouch_Black", "IMP_MapPouch_Tan", "IMP_MapPouch_UCP", "IMP_MapPouch_Woods"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Characters_Headgear", "DZ_Characters_Tops", "DZ_Characters_Vests", "DZ_Characters_Pants", "DZ_Characters_Backpacks", "DZ_Gear_Navigation", "DZ_Weapons_Melee_Blade", "DZ_Gear_Tools", "DZ_Characters_Belts", "DZ_Radio", "DZ_Scripts", "DZ_Gear_Containers"};
	};
};

class CfgNonAIVehicles {
	class ProxyAttachment;
	
	class ProxyMapPouch : ProxyAttachment {
		scope = 2;
		inventorySlot[] = {"MapPouch"};
		model = "\IMPGMOD\Items\Pouch\MapPouch\models\MapPouch.p3d";
	};
};
	
class CfgSlots {	
	class Slot_MapPouch {
		name = "MapPouch";
		displayName = "$STR_IMP_MapPouch";
		modGhostIcon = "set:Slots image:MapPouch";
	};
};

class cfgVehicles {
	class Container_Base;
	
	class IMP_Pouch_MapPouch_ColorBase : Container_Base {
		scope = 0;
		displayName = "$STR_IMP_MapPouch";
		descriptionShort = "$STR_IMP_MapPouchD";
		itemsize[] = {2, 3};
		itemsCargoSize[] = {2, 2};
		allowOwnedCargoManipulation = 1;
		Model = "IMPGMOD\Items\Pouch\MapPouch\models\MapPouch.p3d";
		inventorySlot[] = {"MapPouch"};
		weight = 200;
		hiddenSelections[] = {"camoflage"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Pouch\MapPouch\data\Map_pouch_Black_co.paa"};
		hiddenSelectionsMaterials[] = {"IMPGMOD\Items\Pouch\MapPouch\data\MapPouch.rvmat"};
		
		class DamageSystem {
			class GlobalHealth {
				class Health {
					hitpoints = 500;
					healthLevels[] = {{1.01, {"IMPGMOD\Items\Pouch\MapPouch\data\MapPouch.rvmat"}}, {0.7, {"IMPGMOD\Items\Pouch\MapPouch\data\MapPouch.rvmat"}}, {0.5, {"IMPGMOD\Items\Pouch\MapPouch\data\MapPouch_damage.rvmat"}}, {0.3, {"IMPGMOD\Items\Pouch\MapPouch\data\MapPouch_damage.rvmat"}}, {0.01, {"IMPGMOD\Items\Pouch\MapPouch\data\MapPouch_destruct.rvmat"}}};
				};
			};
		};
	};
	
	class IMP_Pouch_MapPouch_Black : IMP_Pouch_MapPouch_ColorBase {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Pouch\MapPouch\data\Map_pouch_Black_co.paa"};
	};

	class IMP_Pouch_MapPouch_Green : IMP_Pouch_MapPouch_ColorBase {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Pouch\MapPouch\data\Map_pouch_Green_co.paa"};
	};
	
	class IMP_Pouch_MapPouch_Tan : IMP_Pouch_MapPouch_ColorBase {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Pouch\MapPouch\data\Map_pouch_Tan_co.paa"};
	};
	
	class IMP_Pouch_MapPouch_UCP : IMP_Pouch_MapPouch_ColorBase {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Pouch\MapPouch\data\Map_pouch_UCP.paa"};
	};
	
	class IMP_Pouch_MapPouch_EMR : IMP_Pouch_MapPouch_ColorBase {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Pouch\MapPouch\data\Map_pouch_EMR.paa"};
	};
	
	class IMP_Pouch_MapPouch_NWU : IMP_Pouch_MapPouch_ColorBase {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Pouch\MapPouch\data\Map_pouch_NWU.paa"};
	};
	
	class IMP_Pouch_MapPouch_MARPAT : IMP_Pouch_MapPouch_ColorBase {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Pouch\MapPouch\data\Map_pouch_MARPAT.paa"};
	};
};
