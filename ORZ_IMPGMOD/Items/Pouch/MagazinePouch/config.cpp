class CfgPatches {
	class IMP_Pouch_Mag1 {
		units[] = {"IMP_Mag_Pouch_Green", "IMP_Mag_Pouch_Black", "IMP_Mag_Pouch_Camo", "IMP_Mag_Pouch_Tan"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Weapons_Magazines", "DZ_Characters_Vests", "DZ_Weapons_Firearms", "DZ_Data", "DZ_Characters", "DZ_Scripts"};
	};
};

class CfgVehicles {
	class Container_Base;
	
	class IMP_Pouch_MagPouch1_ColorBase : Container_Base {
		scope = 0;
		displayName = "$STR_IMP_MagPouch";
		descriptionShort = "$STR_IMP_MagPouchD";
		model = "\IMPGMOD\Items\Pouch\MagazinePouch\models\MagazinePouch.p3d";
		inventorySlot[] = {"mag_pouch_a", "mag_pouch_b", "mag_pouch_c"};
		attachments[] = {"magazine_vest"};
		weight = 250;
		itemSize[] = {1, 3};
		repairableWithKits[] = {5, 2};
		repairCosts[] = {30, 25};
		hiddenSelections[] = {"camoflage"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Pouch\MagazinePouch\data\MagPouch_Black_co.paa"};
		randomQuantity = 2;
		lootTag[] = {"Military_east", "Military_west"};
		
		class DamageSystem {
			class GlobalHealth {
				class Health {
					hitpoints = 500;
					healthLevels[] = {{1.01, {"DZ\characters\vests\Data\BallisticVest.rvmat"}}, {0.7, {"DZ\characters\vests\Data\BallisticVest.rvmat"}}, {0.5, {"DZ\characters\vests\Data\BallisticVest_damage.rvmat"}}, {0.3, {"DZ\characters\vests\Data\BallisticVest_damage.rvmat"}}, {0.01, {"DZ\characters\vests\Data\BallisticVest_destruct.rvmat"}}};
				};
			};
		};
		
		class AnimEvents {
			class SoundWeapon {
				class pickUpItem_Light {
					soundSet = "pickUpCourierBag_Light_SoundSet";
					id = 796;
				};
				
				class pickUpItem {
					soundSet = "pickUpCourierBag_SoundSet";
					id = 797;
				};
			};
		};
	};
	
	class IMP_Pouch_MagPouch1_Green : IMP_Pouch_MagPouch1_ColorBase {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Pouch\MagazinePouch\data\MagPouch_Green_co.paa"};
	};
	
	class IMP_Pouch_MagPouch1_Black : IMP_Pouch_MagPouch1_ColorBase {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Pouch\MagazinePouch\data\MagPouch_Black_co.paa"};
	};
	
	class IMP_Pouch_MagPouch1_Tan : IMP_Pouch_MagPouch1_ColorBase {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Pouch\MagazinePouch\data\MagPouch_Tan_co.paa"};
	};
	
	class IMP_Pouch_MagPouch1_UCP : IMP_Pouch_MagPouch1_ColorBase {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Pouch\MagazinePouch\data\MagPouch_UCP.paa"};
	};
	
	class IMP_Pouch_MagPouch1_EMR : IMP_Pouch_MagPouch1_ColorBase {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Pouch\MagazinePouch\data\MagPouch_EMR.paa"};
	};
	
	class IMP_Pouch_MagPouch1_NWU : IMP_Pouch_MagPouch1_ColorBase {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Pouch\MagazinePouch\data\MagPouch_NWU.paa"};
	};
	
	class IMP_Pouch_MagPouch1_MARPAT : IMP_Pouch_MagPouch1_ColorBase {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Pouch\MagazinePouch\data\MagPouch_MARPAT.paa"};
	};
};

class CfgNonAIVehicles {
	class ProxyAttachment;
	
	class ProxyMagazinePouch_a : ProxyAttachment {
		scope = 2;
		inventorySlot = "mag_pouch_a";
		model = "\IMPGMOD\Items\Pouch\MagazinePouch\models\MagazinePouch_a.p3d";
	};
	
	class ProxyMagazinePouch_b : ProxyAttachment {
		scope = 2;
		inventorySlot = "mag_pouch_b";
		model = "\IMPGMOD\Items\Pouch\MagazinePouch\models\MagazinePouch_b.p3d";
	};
	
	class ProxyMagazinePouch_c : ProxyAttachment {
		scope = 2;
		inventorySlot = "mag_pouch_c";
		model = "\IMPGMOD\Items\Pouch\MagazinePouch\models\MagazinePouch_c.p3d";
	};
	
	class Proxymagazine_pouch : ProxyAttachment {
		scope = 2;
		inventorySlot[] = {"magazine_vest"};
		model = "\IMPGMOD\Items\Pouch\MagazinePouch\models\magazine_pouch.p3d";
	};
};

class CfgSlots {
	class Slot_mag_pouch_a {
		name = "mag_pouch_a";
		displayName = "$STR_IMP_MagPouch";
		modGhostIcon = "set:Slots image:magpouch";
	};
	
	class Slot_mag_pouch_b {
		name = "mag_pouch_b";
		displayName = "$STR_IMP_MagPouch";
		modGhostIcon = "set:Slots image:magpouch";
	};
	
	class Slot_mag_pouch_c {
		name = "mag_pouch_c";
		displayName = "$STR_IMP_MagPouch";
		modGhostIcon = "set:Slots image:magpouch";
	};
	
	class Slot_magazine_vest {
		name = "magazine_vest";
		displayName = "$STR_IMP_Magazine";
		ghostIcon = "magazine2";
	};
};
