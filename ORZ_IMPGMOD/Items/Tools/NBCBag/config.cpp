class CfgPatches {
	class IMP_NBCBag {
		units[] = {"IMP_NBCBag", "IMP_NBCBag_WD"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Characters_Headgear", "DZ_Characters_Tops", "DZ_Characters_Vests", "DZ_Characters_Pants", "DZ_Characters_Backpacks", "DZ_Gear_Navigation", "DZ_Weapons_Melee_Blade", "DZ_Gear_Tools", "DZ_Characters_Belts", "DZ_Radio", "DZ_Scripts", "DZ_Gear_Containers"};
	};
};

class CfgNonAIVehicles {
	class ProxyAttachment;	
	
	class ProxyNBCBag : ProxyAttachment {
		scope = 2;
		inventorySlot[] = {"NBCBag"};
		model = "IMPGMOD\Items\Tools\NBCBag\models\NBCBag.p3d";
	};
};

class cfgVehicles {
	class Container_Base;
	
	class IMP_Pouch_NBCBag : Container_Base {
		scope = 2;
		displayName = "$STR_IMP_NBCBag";
		descriptionShort = "$STR_IMP_NBCBagD";
		itemsize[] = {4, 4};
		itemsCargoSize[] = {0, 0};
		attachments[] = {"NBCHead", "NBCJacket", "NBCGloves", "NBCPants", "NBCBoots"};
		Model = "IMPGMOD\Items\Tools\NBCBag\models\NBCBag.p3d";
		inventorySlot[] = {"NBCBag"};
		weight = 500;
		allowOwnedCargoManipulation = 1;
		hiddenSelections[] = {"camoflage"};
		hiddenSelectionsMaterials[] = {"IMPGMOD\Items\Tools\NBCBag\data\NBCBag.rvmat"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Tools\NBCBag\data\NBCBag_Yellow_co.paa"};
	};
	
	class IMP_Pouch_NBCBag_EMR : IMP_Pouch_NBCBag 
	{
		scope = 2;
		itemsCargoSize[] = {5, 4};
		attachments[] = {};
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Tools\NBCBag\data\NBCBag_EMR.paa"};
	};
	
	class IMP_Pouch_NBCBag_NWU : IMP_Pouch_NBCBag 
	{
		scope = 2;
		itemsCargoSize[] = {5, 4};
		attachments[] = {};
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Tools\NBCBag\data\NBCBag_NWU.paa"};
	};
	
	class IMP_Pouch_NBCBag_UCP : IMP_Pouch_NBCBag 
	{
		scope = 2;
		itemsCargoSize[] = {5, 4};
		attachments[] = {};
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Tools\NBCBag\data\NBCBag_UCP.paa"};
	};
	
	class IMP_Pouch_NBCBag_MARPAT : IMP_Pouch_NBCBag 
	{
		scope = 2;
		itemsCargoSize[] = {5, 4};
		attachments[] = {};
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Tools\NBCBag\data\NBCBag_MARPAT.paa"};
	};
};

class CfgSlots {
		class Slot_NBCBag {
		name = "NBCBag";
		displayName = "$STR_IMP_NBCBag";
		modGhostIcon = "set:Slots image:NBCBag";
	};
	
		class Slot_NBCHead {
		name = "NBCHead";
		displayName = "$STR_IMP_Head";
		modGhostIcon = "set:Slots image:NBCHood";
	};
	
		class Slot_NBCJacket {
		name = "NBCJacket";
		displayName = "$STR_IMP_Top";
		modGhostIcon = "set:Slots image:NBCJacket";
	};
	
		class Slot_NBCGloves {
		name = "NBCGloves";
		displayName = "$STR_IMP_Gloves";
		modGhostIcon = "set:Slots image:NBCGloves";
	};
	
		class Slot_NBCPants {
		name = "NBCPants";
		displayName = "$STR_IMP_Pants";
		modGhostIcon = "set:Slots image:NBCPants";
	};
	
		class Slot_NBCBoots {
		name = "NBCBoots";
		displayName = "$STR_IMP_Boots";
		modGhostIcon = "set:Slots image:NBCBoots";
	};
};