class CfgPatches {
	class IMP_ItemBox 
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Weapons_Magazines", "DZ_Characters_Vests", "DZ_Weapons_Firearms", "DZ_Data", "DZ_Characters", "DZ_Scripts"};
	};
};

class CfgVehicles 
{
	class Inventory_Base;
	
	class IMP_ItemBox_ColorBase : Inventory_Base 
	{
		scope = 0;
		displayName = "$STR_IMP_SurpriseBox";
		descriptionShort = "$STR_IMP_SurpriseBoxD";
		model = "\IMPGMOD\Items\ItemBox\models\ItemBox.p3d";
		weight = 2500;
		rotationFlags = 17;
		itemSize[] = {7, 7};
		lootCategory = "Military";
		lootTag[] = {"Military_west"};
		hiddenSelections[] = {"camoflage"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\ItemBox\data\ItemBox_co.paa"};
		
		class DamageSystem {
			class GlobalHealth {
				class Health {
					hitpoints = 500;
					healthLevels[] = {{1.01, {"IMPGMOD\Items\ItemBox\data\ItemBox.rvmat"}}, {0.7, {"IMPGMOD\Items\ItemBox\data\ItemBox.rvmat"}}, {0.5, {"IMPGMOD\Items\ItemBox\data\ItemBox_damage.rvmat"}}, {0.3, {"IMPGMOD\Items\ItemBox\data\ItemBox_damage.rvmat"}}, {0.01, {"IMPGMOD\Items\ItemBox\data\ItemBox_destruct.rvmat"}}};
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
	
	class IMP_ItemBox_EMR : IMP_ItemBox_ColorBase 
	{
		scope = 2;
	};
	
	class IMP_ItemBox_NWU : IMP_ItemBox_ColorBase 
	{
		scope = 2;
	};
	
	class IMP_ItemBox_UCP : IMP_ItemBox_ColorBase 
	{
		scope = 2;
	};
	
	class IMP_ItemBox_MARPAT : IMP_ItemBox_ColorBase 
	{
		scope = 2;
	};
};
