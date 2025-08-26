class CfgPatches {
	class IMP_Pouch_LockPick {
		units[] = {"IMP_LockPick_Pouch_Base", "IMP_LockPick_Pouch_Black", "IMP_LockPick_Pouch_Green", "IMP_LockPick_Pouch_Tan", "IMP_LockPick_Pouch_UCP", "IMP_LockPick_Pouch_Wood"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Weapons_Magazines", "DZ_Characters_Vests", "DZ_Weapons_Firearms", "DZ_Data", "DZ_Characters", "DZ_Scripts", "DZ_Weapons_Melee"};
	};
};

class CfgNonAIVehicles {
	class ProxyAttachment;
	
	class ProxyPMP : ProxyAttachment {
		scope = 2;
		inventorySlot[] = {"PMP"};
		model = "IMPGMOD\Items\Pouch\PistolMagPouch\models\PMP.p3d";
	};
	
	class ProxyLockPick : ProxyAttachment {
		scope = 2;
		inventorySlot[] = {"LockPick"};
		model = "\dz\gear\tools\Lockpick.p3d";
	};
};

class CfgSlots {	
	class Slot_LockPick {
		name = "LockPick";
		displayName = "$STR_IMP_LockPick";
		modGhostIcon = "set:Slots image:LockPick";
	};
	
	class Slot_PMP {
		name = "PMP";
		displayName = "$STR_IMP_LockPickPouch";
		modGhostIcon = "set:Slots image:PMP";
	};
};

class CfgVehicles 
{
	class Container_Base;
	class Inventory_Base;
	
	class IMP_Pouch_LockPick_ColorBase : Container_Base 
	{
		scope = 0;
		displayName = "$STR_IMP_LockPickPouch";
		descriptionShort = "$STR_IMP_LockPickPouchD";
		model = "\IMPGMOD\Items\Pouch\PistolMagPouch\models\PMP.p3d";
		inventorySlot[] = {"PMP"};
		attachments[] = {"LockPick"};
		weight = 150;
		itemSize[] = {1, 2};
		repairableWithKits[] = {5, 2};
		repairCosts[] = {30, 25};
		hiddenSelections[] = {"camoflage"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Pouch\PistolMagPouch\data\PMP_Black_co.paa"};
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
	
	class IMP_Pouch_LockPick_Black : IMP_Pouch_LockPick_ColorBase {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Pouch\PistolMagPouch\data\PMP_Black_co.paa"};
	};
	
	class IMP_Pouch_LockPick_Green : IMP_Pouch_LockPick_ColorBase {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Pouch\PistolMagPouch\data\PMP_Green_co.paa"};
	};
	
	class IMP_Pouch_LockPick_Tan : IMP_Pouch_LockPick_ColorBase {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Pouch\PistolMagPouch\data\PMP_Tan_co.paa"};
	};
	
	class IMP_Pouch_LockPick_UCP : IMP_Pouch_LockPick_ColorBase {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Pouch\PistolMagPouch\data\PMP_UCP.paa"};
	};
	
	class IMP_Pouch_LockPick_EMR : IMP_Pouch_LockPick_ColorBase {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Pouch\PistolMagPouch\data\PMP_EMR.paa"};
	};
	
	class IMP_Pouch_LockPick_MARPAT : IMP_Pouch_LockPick_ColorBase {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Pouch\PistolMagPouch\data\PMP_MARPAT.paa"};
	};
	
	class IMP_Pouch_LockPick_NWU : IMP_Pouch_LockPick_ColorBase {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Pouch\PistolMagPouch\data\PMP_NWU.paa"};
	};

	class Lockpick: Inventory_Base
	{
		inventorySlot[] = {"LockPick"};
	};
};