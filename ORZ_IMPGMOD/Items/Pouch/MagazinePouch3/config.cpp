class CfgPatches {
	class IMP_Pouch_Mag3 {
		units[] = {"IMP_Mag_Pouch3_Green", "IMP_Mag_Pouch3_Black", "IMP_Mag_Pouch3_Tan", "IMP_Mag_Pouch3_UCP", "IMP_Mag_Pouch3_Woods"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Weapons_Magazines", "DZ_Characters_Vests", "DZ_Weapons_Firearms", "DZ_Data", "DZ_Characters", "DZ_Scripts"};
	};
};

class CfgVehicles {
	class Container_Base;
	
	class IMP_Pouch_MagPouch3_ColorBase : Container_Base {
		scope = 0;
		displayName = "$STR_IMP_MagPouch";
		descriptionShort = "$STR_IMP_MagPouchD";
		model = "\IMPGMOD\Items\Pouch\MagazinePouch3\models\MagazinePouch3.p3d";
		inventorySlot[] = {"mag_pouch_a", "mag_pouch_b", "mag_pouch_c"};
		attachments[] = {"magazine_vest"};
		weight = 250;
		itemSize[] = {1, 3};
		repairableWithKits[] = {5, 2};
		repairCosts[] = {30, 25};
		hiddenSelections[] = {"camoflage"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Pouch\MagazinePouch3\data\Mag_Pouch_Black_co.paa"};
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
	
	class IMP_Pouch_MagPouch3_Green : IMP_Pouch_MagPouch3_ColorBase {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Pouch\MagazinePouch3\data\Mag_Pouch_Green_co.paa"};
	};
	
	class IMP_Pouch_MagPouch3_Black : IMP_Pouch_MagPouch3_ColorBase {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Pouch\MagazinePouch3\data\Mag_Pouch_Black_co.paa"};
	};
	
	class IMP_Pouch_MagPouch3_Tan : IMP_Pouch_MagPouch3_ColorBase {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Pouch\MagazinePouch3\data\Mag_Pouch_Tan_co.paa"};
	};
	
	class IMP_Pouch_MagPouch3_UCP : IMP_Pouch_MagPouch3_ColorBase {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Pouch\MagazinePouch3\data\Mag_Pouch_UCP.paa"};
	};
	
	class IMP_Pouch_MagPouch3_NWU : IMP_Pouch_MagPouch3_ColorBase {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Pouch\MagazinePouch3\data\Mag_Pouch_NWU.paa"};
	};
	
	class IMP_Pouch_MagPouch3_EMR : IMP_Pouch_MagPouch3_ColorBase {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Pouch\MagazinePouch3\data\Mag_Pouch_EMR.paa"};
	};
	
	class IMP_Pouch_MagPouch3_MARPAT : IMP_Pouch_MagPouch3_ColorBase {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Pouch\MagazinePouch3\data\Mag_Pouch_MARPAT.paa"};
	};
};