class CfgPatches {
	class IMP_Pouch_IFAK {
		units[] = {"IMP_IFAK_Pouch_Green", "IMP_IFAK_Pouch_Tan", "IMP_IFAK_Pouch_Black", "IMP_IFAK_Pouch_Multicam", "IMP_IFAK_Pouch_UCP", "IMP_IFAK_Pouch_EMR"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Weapons_Magazines", "DZ_Characters_Vests", "DZ_Weapons_Firearms", "DZ_Data", "DZ_Characters", "DZ_Scripts"};
	};
};

class CfgVehicles {
	class Container_Base;
	
	class IMP_Pouch_IFAK_ColorBase : Container_Base 
	{
		scope = 0;
		displayName = "$STR_IMP_IFAKPouch";
		descriptionShort = "$STR_IMP_IFAKPouchD";
		model = "\IMPGMOD\Items\Pouch\IFAKPouch\ifak_pouch.p3d";
		inventorySlot[] = {"ifak_pouch"};
		weight = 400;
		itemSize[] = {3, 6};
		itemsCargoSize[] = {3, 5};
		repairableWithKits[] = {5, 2};
		repairCosts[] = {30, 25};
		varQuantityInit=4;
        varQuantityMin=0;
        varQuantityMax=4;
        varQuantityDestroyOnMin=1;
		stackedUnit="ammo";
        quantityBar=1;
		hiddenSelections[] = {"camoground"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Pouch\IFAKPouch\data\IFAK_Pouch_Green_co.paa"};
		allowOwnedCargoManipulation = 1;
		
		class DamageSystem {
			class GlobalHealth {
				class Health {
					hitpoints = 500;
					healthLevels[] = {{1.01, {"IMPGMOD\Items\Pouch\IFAKPouch\data\ifak_pouch.rvmat"}}, {0.7, {"IMPGMOD\Items\Pouch\IFAKPouch\data\ifak_pouch.rvmat"}}, {0.5, {"IMPGMOD\Items\Pouch\IFAKPouch\data\ifak_pouch_damage.rvmat"}}, {0.3, {"IMPGMOD\Items\Pouch\IFAKPouch\data\ifak_pouch_damage.rvmat"}}, {0.01, {"IMPGMOD\Items\Pouch\IFAKPouch\data\ifak_pouch_destruct.rvmat"}}};
				};
			};
		};
		
		class AnimEvents {
			class SoundWeapon {
				class pickUpItifak_Light {
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
	
	class IMP_Pouch_IFAK_Green : IMP_Pouch_IFAK_ColorBase {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Pouch\IFAKPouch\data\IFAK_Pouch_Green_co.paa"};
	};
	
	class IMP_Pouch_IFAK_Tan : IMP_Pouch_IFAK_ColorBase {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Pouch\IFAKPouch\data\IFAK_Pouch_Tan_co.paa"};
	};
	
	class IMP_Pouch_IFAK_Black : IMP_Pouch_IFAK_ColorBase {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Pouch\IFAKPouch\data\IFAK_Pouch_Black_co.paa"};
	};
	
	class IMP_Pouch_IFAK_UCP : IMP_Pouch_IFAK_ColorBase {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Pouch\IFAKPouch\data\IFAK_Pouch_UCP.paa"};
	};
	
	class IMP_Pouch_IFAK_EMR : IMP_Pouch_IFAK_ColorBase {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Pouch\IFAKPouch\data\IFAK_Pouch_EMR.paa"};
	};
	
	class IMP_Pouch_IFAK_NWU : IMP_Pouch_IFAK_ColorBase {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Pouch\IFAKPouch\data\IFAK_Pouch_NWU.paa"};
	};
	
	class IMP_Pouch_IFAK_MARPAT : IMP_Pouch_IFAK_ColorBase {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Pouch\IFAKPouch\data\IFAK_Pouch_MARPAT.paa"};
	};
};

class CfgNonAIVehicles {
	class ProxyAttachment;
	
	class Proxyifak_pouch : ProxyAttachment {
		scope = 2;
		inventorySlot = "ifak_pouch";
		model = "\IMPGMOD\Items\Pouch\IFAKPouch\ifak_pouch.p3d";
	};
};

class CfgSlots {
	class Slot_ifak_pouch {
		name = "ifak_pouch";
		displayName = "$STR_IMP_IFAKPouch";
		modGhostIcon = "set:Slots image:ifakpouch";
	};
};
