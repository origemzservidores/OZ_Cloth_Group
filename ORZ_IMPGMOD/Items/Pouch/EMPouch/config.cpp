class CfgPatches {
	class IMP_Pouch_EM {
		units[] = {"IMP_EM_Pouch_Base", "IMP_EM_Pouch_Green", "IMP_EM_Pouch_Tan", "IMP_EM_Pouch_Black", "IMP_EM_Pouch_Multicam", "IMP_EM_Pouch_EMR"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Weapons_Magazines", "DZ_Characters_Vests", "DZ_Weapons_Firearms", "DZ_Data", "DZ_Characters", "DZ_Scripts"};
	};
};

class CfgVehicles {
	class Container_Base;
	
	class IMP_Pouch_EM_ColorBase : Container_Base 
	{
		scope = 0;
		displayName = "$STR_IMP_EMPouch";
		descriptionShort = "$STR_IMP_EMPouchD";
		model = "\IMPGMOD\Items\Pouch\EMPouch\em_pouch.p3d";
		inventorySlot[] = {"em_pouch"};
		weight = 250;
		itemSize[] = {3, 5};
		itemsCargoSize[] = {3, 4};
		repairableWithKits[] = {5, 2};
		repairCosts[] = {30, 25};
		hiddenSelections[] = {"camoflage"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Pouch\EMPouch\data\EM_Pouch_Green_co.paa"};
		allowOwnedCargoManipulation = 1;
		randomQuantity = 2;
		
		class DamageSystem {
			class GlobalHealth {
				class Health {
					hitpoints = 500;
					healthLevels[] = {{1.01, {"IMPGMOD\Items\Pouch\EMPouch\data\em_pouch.rvmat"}}, {0.7, {"IMPGMOD\Items\Pouch\EMPouch\data\em_pouch.rvmat"}}, {0.5, {"IMPGMOD\Items\Pouch\EMPouch\data\em_pouch_damage.rvmat"}}, {0.3, {"IMPGMOD\Items\Pouch\EMPouch\data\em_pouch_damage.rvmat"}}, {0.01, {"IMPGMOD\Items\Pouch\EMPouch\data\em_pouch_destruct.rvmat"}}};
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
	
	class IMP_Pouch_EM_Green : IMP_Pouch_EM_ColorBase {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Pouch\EMPouch\data\EM_Pouch_Green_co.paa"};
	};
	
	class IMP_Pouch_EM_Tan : IMP_Pouch_EM_ColorBase {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Pouch\EMPouch\data\EM_Pouch_Tan_co.paa"};
	};
	
	class IMP_Pouch_EM_Black : IMP_Pouch_EM_ColorBase {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Pouch\EMPouch\data\EM_Pouch_Black_co.paa"};
	};
	
	class IMP_Pouch_EM_EMR : IMP_Pouch_EM_ColorBase {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Pouch\EMPouch\data\EM_Pouch_EMR.paa"};
	};
	
	class IMP_Pouch_EM_UCP : IMP_Pouch_EM_ColorBase {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Pouch\EMPouch\data\EM_Pouch_UCP.paa"};
	};
	
	class IMP_Pouch_EM_MARPAT : IMP_Pouch_EM_ColorBase {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Pouch\EMPouch\data\EM_Pouch_MARPAT.paa"};
	};
	
	class IMP_Pouch_EM_NWU : IMP_Pouch_EM_ColorBase {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Pouch\EMPouch\data\EM_Pouch_NWU.paa"};
	};
};

class CfgNonAIVehicles {
	class ProxyAttachment;
	
	class Proxyem_pouch : ProxyAttachment {
		scope = 2;
		inventorySlot = "em_pouch";
		model = "\IMPGMOD\Items\Pouch\EMPouch\em_pouch.p3d";
	};
};

class CfgSlots {
	class Slot_em_pouch {
		name = "em_pouch";
		displayName = "$STR_IMP_EMPouch";
		modGhostIcon = "set:Slots image:empouch";
	};
};
