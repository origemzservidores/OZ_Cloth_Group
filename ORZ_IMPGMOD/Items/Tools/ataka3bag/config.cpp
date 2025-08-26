class CfgPatches {
	class ataka3_pouch {
		units[] = {"ataka3_pouch"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Characters_Headgear", "DZ_Characters_Tops", "DZ_Characters_Vests", "DZ_Characters_Pants", "DZ_Characters_Backpacks", "DZ_Gear_Navigation", "DZ_Weapons_Melee_Blade", "DZ_Gear_Tools", "DZ_Characters_Belts", "DZ_Radio", "DZ_Scripts", "DZ_Gear_Containers"};
	};
};

class CfgNonAIVehicles {
	class ProxyAttachment;
	
	class Proxyataka3bag : ProxyAttachment {
		scope = 2;
		inventorySlot[] = {"ataka3bag"};
		model = "IMPGMOD\Items\Tools\ataka3bag\models\ataka3bag.p3d";
	};
};

class cfgVehicles {
	class Container_Base;
	
	class IMP_Pouch_Ataka3 : Container_Base {
		scope = 2;
		displayName = "$STR_IMP_Ataka3bp";
		descriptionShort = "$STR_IMP_Ataka3bpD";
		itemsize[] = {4, 4};
		itemsCargoSize[] = {4, 4};
		allowOwnedCargoManipulation = 1;
		Model = "IMPGMOD\Items\Tools\ataka3bag\models\ataka3bag.p3d";
		inventorySlot[] = {"ataka3bag"};
		weight = 250;
		hiddenSelections[] = {"camoflage"};
		hiddenSelectionsMaterials[] = {"IMPGMOD\Equipment\Backpacks\ataka3\data\Ataka3.rvmat"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Backpacks\ataka3\data\Ataka3_co.paa"};
		
		class DamageSystem {
			class GlobalHealth {
				class Health {
					hitpoints = 500;
					healthLevels[] = 
					{
						{1.0, {"IMPGMOD\Equipment\Backpacks\Ataka3\data\Ataka3.rvmat"}}, 
						{0.7, {"IMPGMOD\Equipment\Backpacks\Ataka3\data\ataka3.rvmat"}}, 
						{0.5, {"IMPGMOD\Equipment\Backpacks\Ataka3\data\ataka3_damage.rvmat"}}, 
						{0.3, {"IMPGMOD\Equipment\Backpacks\Ataka3\data\ataka3_damage.rvmat"}}, 
						{0.0, {"IMPGMOD\Equipment\Backpacks\Ataka3\data\ataka3_destruct.rvmat"}}
					};
				};
			};
		};
	};
};
