class CfgPatches {
	class IMP_F_Keffieh {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Characters"};
	};
};

class CfgVehicles {
	class Clothing_Base;
	class Clothing : Clothing_Base {};

	class IMP_Keffiyeh_S_ColorBase : Clothing {
		scope = 0;
		displayName = "$STR_IMP_Keffiyeh";
		descriptionShort = "$STR_IMP_Keffiyeh1";
		model = "IMPGMOD\Equipment\Mask\Keffyeh\models\Keffiyeh_S_g.p3d";
		inventorySlot[]={"Headgear"};
        simulation="clothing";
        vehicleClass="Clothing";
        itemInfo[]={"Clothing", "Headgear"};
        rotationFlags=1;
        weight=130;
        itemSize[]={2, 2};
        ragQuantity=1;
        varWetMax=1;
        heatIsolation=1;
        repairableWithKits[]={5, 2};
        repairCosts[]={30, 25};
        headSelectionsToHide[]={"Clipping_Balaclava"};
		hiddenSelections[] = { "camoflage" };
		hiddenSelectionsTextures[] = { "IMPGMOD\Equipment\Mask\Keffyeh\data\Keffiyeh_co.paa" };
		hiddenSelectionsMaterials[] = { "IMPGMOD\Equipment\Mask\Keffyeh\data\Keffiyeh.rvmat" };

		class ClothingTypes {
			male = "IMPGMOD\Equipment\Mask\Keffyeh\models\Keffiyeh_S.p3d";
			female = "IMPGMOD\Equipment\Mask\Keffyeh\models\Keffiyeh_S.p3d";
		};
		
		class DamageSystem {
			class GlobalHealth {
				class Health {
					hitpoints = 90;
					healthLevels[] = {
						{1.0, { "IMPGMOD\Equipment\Mask\Keffyeh\data\Keffiyeh.rvmat" }},
						{0.7, { "IMPGMOD\Equipment\Mask\Keffyeh\data\Keffiyeh.rvmat" }},
						{0.5, { "IMPGMOD\Equipment\Mask\Keffyeh\data\Keffiyeh_damage.rvmat" }},
						{0.3, { "IMPGMOD\Equipment\Mask\Keffyeh\data\Keffiyeh_damage.rvmat" }},
						{0.1, { "IMPGMOD\Equipment\Mask\Keffyeh\data\Keffiyeh_destruct.rvmat" }},
						{0.01, { "IMPGMOD\Equipment\Mask\Keffyeh\data\Keffiyeh_destruct.rvmat" }}
					};
				};
			};

			class GlobalArmor {
				class Melee {
					class Health {
						damage = 0.9;
					};

					class Blood {
						damage = 0.9;
					};

					class Shock {
						damage = 0.9;
					};
				};

				class Infected {
					class Health {
						damage = 0.9;
					};

					class Blood {
						damage = 0.9;
					};

					class Shock {
						damage = 0.9;
					};
				};
			};
		};

		class AnimEvents {
			class SoundWeapon {
				class pickUpItem {
					soundSet = "Shirt_pickup_SoundSet";
					id = 797;
				};

				class drop {
					soundset = "Shirt_drop_SoundSet";
					id = 898;
				};
			};
		};
	};

	class IMP_Keffiyeh_S_14 : IMP_Keffiyeh_S_ColorBase {
		scope = 2;
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = { "IMPGMOD\Equipment\Mask\Keffyeh\data\Keffiyeh_co.paa" };
	};
	class IMP_Keffiyeh_S_1 : IMP_Keffiyeh_S_ColorBase {
		scope = 2;
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = { "IMPGMOD\Equipment\Mask\Keffyeh\data\Keffiyeh_co1.paa" };
	};
	class IMP_Keffiyeh_S_2 : IMP_Keffiyeh_S_ColorBase {
		scope = 2;
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = { "IMPGMOD\Equipment\Mask\Keffyeh\data\Keffiyeh_co2.paa" };
	};
	class IMP_Keffiyeh_S_3 : IMP_Keffiyeh_S_ColorBase {
		scope = 2;
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = { "IMPGMOD\Equipment\Mask\Keffyeh\data\Keffiyeh_co3.paa" };
	};
	class IMP_Keffiyeh_S_4 : IMP_Keffiyeh_S_ColorBase {
		scope = 2;
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = { "IMPGMOD\Equipment\Mask\Keffyeh\data\Keffiyeh_co4.paa" };
	};
	class IMP_Keffiyeh_S_5 : IMP_Keffiyeh_S_ColorBase {
		scope = 2;
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = { "IMPGMOD\Equipment\Mask\Keffyeh\data\Keffiyeh_co5.paa" };
	};
	class IMP_Keffiyeh_S_6 : IMP_Keffiyeh_S_ColorBase {
		scope = 2;
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = { "IMPGMOD\Equipment\Mask\Keffyeh\data\Keffiyeh_co6.paa" };
	};
	class IMP_Keffiyeh_S_7 : IMP_Keffiyeh_S_ColorBase {
		scope = 2;
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = { "IMPGMOD\Equipment\Mask\Keffyeh\data\Keffiyeh_co7.paa" };
	};
	class IMP_Keffiyeh_S_8 : IMP_Keffiyeh_S_ColorBase {
		scope = 2;
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = { "IMPGMOD\Equipment\Mask\Keffyeh\data\Keffiyeh_co8.paa" };
	};
	class IMP_Keffiyeh_S_9 : IMP_Keffiyeh_S_ColorBase {
		scope = 2;
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = { "IMPGMOD\Equipment\Mask\Keffyeh\data\Keffiyeh_co9.paa" };
	};
	class IMP_Keffiyeh_S_10 : IMP_Keffiyeh_S_ColorBase {
		scope = 2;
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = { "IMPGMOD\Equipment\Mask\Keffyeh\data\Keffiyeh_co10.paa" };
	};
	class IMP_Keffiyeh_S_11 : IMP_Keffiyeh_S_ColorBase {
		scope = 2;
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = { "IMPGMOD\Equipment\Mask\Keffyeh\data\Keffiyeh_co11.paa" };
	};
	class IMP_Keffiyeh_S_12 : IMP_Keffiyeh_S_ColorBase {
		scope = 2;
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = { "IMPGMOD\Equipment\Mask\Keffyeh\data\Keffiyeh_co12.paa" };
	};
	class IMP_Keffiyeh_S_13 : IMP_Keffiyeh_S_ColorBase {
		scope = 2;
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = { "IMPGMOD\Equipment\Mask\Keffyeh\data\Keffiyeh_co13.paa" };
	};

	class IMP_Keffiyeh_B_ColorBase : Clothing {
		scope = 0;
		displayName = "Куфия";
		descriptionShort = "Защищает лицо человека от мелкого песка и избыточного тепла";
		model = "IMPGMOD\Equipment\Mask\Keffyeh\models\Keffiyeh_B_g.p3d";
		inventorySlot[]={"Mask"};
        simulation="clothing";
        vehicleClass="Clothing";
        itemInfo[]={"Clothing", "Mask"};
        rotationFlags=1;
        weight=130;
        itemSize[]={2, 2};
        ragQuantity=1;
		noHelmet = 0;
		noEyewear = 0;
        varWetMax=1;
        heatIsolation=1;
        repairableWithKits[]={5, 2};
        repairCosts[]={30, 25};
        headSelectionsToHide[]={"Clipping_Balaclava"};
		hiddenSelections[] = { "camoflage" };
		hiddenSelectionsTextures[] = { "IMPGMOD\Equipment\Mask\Keffyeh\data\Keffiyeh_co.paa" };
		hiddenSelectionsMaterials[] = { "IMPGMOD\Equipment\Mask\Keffyeh\data\Keffiyeh.rvmat" };

		class ClothingTypes {
			male = "IMPGMOD\Equipment\Mask\Keffyeh\models\Keffiyeh_B.p3d";
			female = "IMPGMOD\Equipment\Mask\Keffyeh\models\Keffiyeh_B.p3d";
		};

		class DamageSystem {
			class GlobalHealth {
				class Health {
					hitpoints = 90;
					healthLevels[] = {
						{1.0, { "IMPGMOD\Equipment\Mask\Keffyeh\data\Keffiyeh.rvmat" }},
						{0.7, { "IMPGMOD\Equipment\Mask\Keffyeh\data\Keffiyeh.rvmat" }},
						{0.5, { "IMPGMOD\Equipment\Mask\Keffyeh\data\Keffiyeh_damage.rvmat" }},
						{0.3, { "IMPGMOD\Equipment\Mask\Keffyeh\data\Keffiyeh_damage.rvmat" }},
						{0.1, { "IMPGMOD\Equipment\Mask\Keffyeh\data\Keffiyeh_destruct.rvmat" }},
						{0.01, { "IMPGMOD\Equipment\Mask\Keffyeh\data\Keffiyeh_destruct.rvmat" }}
					};
				};
			};

			class GlobalArmor {
				class Melee {
					class Health {
						damage = 0.9;
					};

					class Blood {
						damage = 0.9;
					};

					class Shock {
						damage = 0.9;
					};
				};

				class Infected {
					class Health {
						damage = 0.9;
					};

					class Blood {
						damage = 0.9;
					};

					class Shock {
						damage = 0.9;
					};
				};
			};
		};

		class AnimEvents {
			class SoundWeapon {
				class pickUpItem {
					soundSet = "Shirt_pickup_SoundSet";
					id = 797;
				};

				class drop {
					soundset = "Shirt_drop_SoundSet";
					id = 898;
				};
			};
		};
	};

	class IMP_Keffiyeh_B_14 : IMP_Keffiyeh_B_ColorBase {
		scope = 2;
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = { "IMPGMOD\Equipment\Mask\Keffyeh\data\Keffiyeh_co.paa" };
	};
	class IMP_Keffiyeh_B_1 : IMP_Keffiyeh_B_ColorBase {
		scope = 2;
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = { "IMPGMOD\Equipment\Mask\Keffyeh\data\Keffiyeh_co1.paa" };
	};
	class IMP_Keffiyeh_B_2 : IMP_Keffiyeh_B_ColorBase {
		scope = 2;
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = { "IMPGMOD\Equipment\Mask\Keffyeh\data\Keffiyeh_co2.paa" };
	};
	class IMP_Keffiyeh_B_3 : IMP_Keffiyeh_B_ColorBase {
		scope = 2;
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = { "IMPGMOD\Equipment\Mask\Keffyeh\data\Keffiyeh_co3.paa" };
	};
	class IMP_Keffiyeh_B_4 : IMP_Keffiyeh_B_ColorBase {
		scope = 2;
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = { "IMPGMOD\Equipment\Mask\Keffyeh\data\Keffiyeh_co4.paa" };
	};
	class IMP_Keffiyeh_B_5 : IMP_Keffiyeh_B_ColorBase {
		scope = 2;
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = { "IMPGMOD\Equipment\Mask\Keffyeh\data\Keffiyeh_co5.paa" };
	};
	class IMP_Keffiyeh_B_6 : IMP_Keffiyeh_B_ColorBase {
		scope = 2;
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = { "IMPGMOD\Equipment\Mask\Keffyeh\data\Keffiyeh_co6.paa" };
	};
	class IMP_Keffiyeh_B_7 : IMP_Keffiyeh_B_ColorBase {
		scope = 2;
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = { "IMPGMOD\Equipment\Mask\Keffyeh\data\Keffiyeh_co7.paa" };
	};
	class IMP_Keffiyeh_B_8 : IMP_Keffiyeh_B_ColorBase {
		scope = 2;
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = { "IMPGMOD\Equipment\Mask\Keffyeh\data\Keffiyeh_co8.paa" };
	};
	class IMP_Keffiyeh_B_9 : IMP_Keffiyeh_B_ColorBase {
		scope = 2;
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = { "IMPGMOD\Equipment\Mask\Keffyeh\data\Keffiyeh_co9.paa" };
	};
	class IMP_Keffiyeh_B_10 : IMP_Keffiyeh_B_ColorBase {
		scope = 2;
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = { "IMPGMOD\Equipment\Mask\Keffyeh\data\Keffiyeh_co10.paa" };
	};
	class IMP_Keffiyeh_B_11 : IMP_Keffiyeh_B_ColorBase {
		scope = 2;
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = { "IMPGMOD\Equipment\Mask\Keffyeh\data\Keffiyeh_co11.paa" };
	};
	class IMP_Keffiyeh_B_12 : IMP_Keffiyeh_B_ColorBase {
		scope = 2;
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = { "IMPGMOD\Equipment\Mask\Keffyeh\data\Keffiyeh_co12.paa" };
	};
	class IMP_Keffiyeh_B_13 : IMP_Keffiyeh_B_ColorBase {
		scope = 2;
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = { "IMPGMOD\Equipment\Mask\Keffyeh\data\Keffiyeh_co13.paa" };
	};
};
