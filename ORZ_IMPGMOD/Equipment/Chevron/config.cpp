class CfgPatches {
	class IMP_Tag_Chevron {
		units[] = {"Shirt_CheckRed", "Hoodie_Blue", "Hoodie_Black", "Hoodie_Brown", "Hoodie_Green", "Hoodie_Grey", "Hoodie_Red", "MaleTorso", "FemaleTorso"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Characters", "DZ_Characters_Tops"};
	};
};

class CfgVehicles {
	class Clothing_Base;
	class Clothing: Clothing_Base {};
	
	class IMP_Chevron_ColorBase : Clothing {
		scope = 0;
		displayName = "$STR_IMP_TAG";
		descriptionShort = "$STR_IMP_TAG";
		model = "IMPGMOD\Equipment\Chevron\models\Chevron_g.p3d";
		vehicleClass = "Clothing";
		simulation = "clothing";
		itemsCargoSize[] = {1, 2};
		inventorySlot = "Armband";
		attachments[] = {};
		itemInfo[] = {"Clothing", "Armband"};
		itemSize[] = {2, 1};
		weight = 200;
		hiddenSelections[] = {"camoflage"};
		hiddenSelectionsMaterials[] = {"IMPGMOD\Equipment\Chevron\data\TAG_Material.rvmat"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Chevron\data\TAG.paa"};
		
		class DamageSystem {
			class GlobalHealth {
				class Health {
					hitpoints = 100;
					healthLevels[] = {{1.01, {"DZ\characters\belts\data\belt_leather_beige.rvmat"}}, {0.7, {}}, {0.5, {"DZ\characters\belts\data\belt_leather_beige_damage.rvmat"}}, {0.3, {}}, {0.01, {"DZ\characters\belts\data\belt_leather_beige_destruct.rvmat"}}};
				};
			};
		};
		
		class ClothingTypes {
			male = "IMPGMOD\Equipment\Chevron\models\Chevron.p3d";
			female = "IMPGMOD\Equipment\Chevron\models\Chevron.p3d";
		};
	};
	
	class IMP_Chevron_Clear : IMP_Chevron_ColorBase {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Chevron\data\TAG.paa"};
	};
	
	class IMP_Chevron_D_RL : IMP_Chevron_ColorBase {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Chevron\data\TAG_RL.paa"};
	};
	class IMP_Chevron_heeta : IMP_Chevron_ColorBase {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Chevron\data\W_Tag_OKSOP_Ryadovoy.paa"};
	};
};