class CfgPatches 
{
	class IMP_Belt_MilitaryBelt 
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data", "DZ_Characters", "DZ_Scripts"};
	};
};

class cfgVehicles 
{
	class Clothing_Base;
	class Clothing: Clothing_Base {};
	
	class IMP_Belt_MilitaryBelt_ColorBase : Clothing 
	{
		scope = 0;
		RankLevel = 3;
		displayName = "$STR_IMP_MilitaryBelt";
		descriptionShort = "$STR_IMP_MilitaryBeltD";
		model = "\IMPGMOD\Equipment\Belts\MilitaryBelt\models\MilitaryBelt_g.p3d";
		attachments[] = 
		{
			"ifak_pouch", 
			"mag_pouch_a", 
			"mag_pouch_b", 
			"MapPouch", 
			"PMP", 
			"Injector1", 
			"Injector2", 
			"Injector3", 
			"Injector4", 
			"Injector5"
		};
		vehicleClass = "Clothing";
		simulation = "clothing";
		inventorySlot[] = {"Hips"};
		itemInfo[] = {"Clothing", "Hips"};
		itemSize[] = {5, 1};
		itemsCargoSize[] = {6, 10};
		quickBarBonus=2;
		varWetMax=0.048999999;
		heatIsolation=0.5;
		weight = 550;
		repairableWithKits[] = {5, 3};
		repairCosts[] = {30.0, 25.0};
		lootCategory = "Crafted";
		hiddenSelections[] = {"camoflage", "Holder"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Belts\MilitaryBelt\data\MilitaryBelt_Black_co.paa", "IMPGMOD\Equipment\Belts\MilitaryBelt\data\Holder_Black_co.paa"};
		
		class ClothingTypes 
		{
			male = "\IMPGMOD\Equipment\Belts\MilitaryBelt\models\MilitaryBelt_m.p3d";
			female = "\IMPGMOD\Equipment\Belts\MilitaryBelt\models\MilitaryBelt_f.p3d";
		};
		class DamageSystem 
		{
			class GlobalHealth 
			{
				class Health 
				{
					hitpoints = 500;
					healthLevels[] = 
					{
						{1, {"IMPGMOD\Equipment\Belts\MilitaryBelt\data\MilitaryBelt.rvmat","IMPGMOD\Equipment\Belts\MilitaryBelt\data\Holder.rvmat"}}, 
						{0.7, {"IMPGMOD\Equipment\Belts\MilitaryBelt\data\MilitaryBelt.rvmat", "IMPGMOD\Equipment\Belts\MilitaryBelt\data\Holder.rvmat"}}, 
						{0.5, {"IMPGMOD\Equipment\Belts\MilitaryBelt\data\MilitaryBelt_damage.rvmat", "IMPGMOD\Equipment\Belts\MilitaryBelt\data\Holder_damage.rvmat"}}, 
						{0.3, {"IMPGMOD\Equipment\Belts\MilitaryBelt\data\MilitaryBelt_damage.rvmat", "IMPGMOD\Equipment\Belts\MilitaryBelt\data\Holder_damage.rvmat"}}, 
						{0, {"IMPGMOD\Equipment\Belts\MilitaryBelt\data\MilitaryBelt_destruct.rvmat", "IMPGMOD\Equipment\Belts\MilitaryBelt\data\Holder_destruct.rvmat"}}
					};
				};
			};
		};
		
		class AnimEvents 
		{
			class SoundWeapon 
			{
				class pickUpItem 
				{
					soundSet = "WorkingGloves_pickup_SoundSet";
					id = 797;
				};
				
				class drop 
				{
					soundset = "WorkingGloves_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	
	class IMP_Belt_MilitaryBelt_Black : IMP_Belt_MilitaryBelt_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Belts\MilitaryBelt\data\MilitaryBelt_Black_co.paa", "IMPGMOD\Equipment\Belts\MilitaryBelt\data\Holder_Black_co.paa"};
	};
	
	class IMP_Belt_MilitaryBelt_Green : IMP_Belt_MilitaryBelt_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Belts\MilitaryBelt\data\MilitaryBelt_Green_co.paa", "IMPGMOD\Equipment\Belts\MilitaryBelt\data\Holder_Green_co.paa"};
	};
	
	class IMP_Belt_MilitaryBelt_Tan : IMP_Belt_MilitaryBelt_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Belts\MilitaryBelt\data\MilitaryBelt_Tan_co.paa", "IMPGMOD\Equipment\Belts\MilitaryBelt\data\Holder_Tan_co.paa"};
	};
	
	class IMP_Belt_MilitaryBelt_NWU : IMP_Belt_MilitaryBelt_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Belts\MilitaryBelt\data\MilitaryBelt_NWU.paa", "IMPGMOD\Equipment\Belts\MilitaryBelt\data\Holder_NWU.paa"};
	};
	
	class IMP_Belt_MilitaryBelt_EMR : IMP_Belt_MilitaryBelt_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Belts\MilitaryBelt\data\MilitaryBelt_EMR.paa", "IMPGMOD\Equipment\Belts\MilitaryBelt\data\Holder_EMR.paa"};
	};
	
	class IMP_Belt_MilitaryBelt_UCP : IMP_Belt_MilitaryBelt_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Belts\MilitaryBelt\data\MilitaryBelt_UCP.paa", "IMPGMOD\Equipment\Belts\MilitaryBelt\data\Holder_UCP.paa"};
	};
	
	class IMP_Belt_MilitaryBelt_MARPAT : IMP_Belt_MilitaryBelt_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Belts\MilitaryBelt\data\MilitaryBelt_MARPAT.paa", "IMPGMOD\Equipment\Belts\MilitaryBelt\data\Holder_MARPAT.paa"};
	};
};

class CfgNonAIVehicles 
{
	class ProxyAttachment;
	
	class Proxymorphine : ProxyAttachment 
	{
		scope = 2;
		inventorySlot = "morphine";
		model = "\DZ\gear\medical\morphine.p3d";
	};
	
	class Proxyepinephrine : ProxyAttachment 
	{
		scope = 2;
		inventorySlot = "epinephrine";
		model = "\DZ\gear\medical\epinephrine.p3d";
	};
	
	class ProxyInjector1 : ProxyAttachment 
	{
		scope = 2;
		inventorySlot = "Injector1";
		model = "IMPGMOD\Proxies\Injector1.p3d";
	};
	class ProxyInjector2 : ProxyAttachment 
	{
		scope = 2;
		inventorySlot = "Injector2";
		model = "IMPGMOD\Proxies\Injector2.p3d";
	};
	class ProxyInjector3 : ProxyAttachment 
	{
		scope = 2;
		inventorySlot = "Injector3";
		model = "IMPGMOD\Proxies\Injector3.p3d";
	};
	class ProxyInjector4 : ProxyAttachment 
	{
		scope = 2;
		inventorySlot = "Injector4";
		model = "IMPGMOD\Proxies\Injector4.p3d";
	};
	class ProxyInjector5 : ProxyAttachment 
	{
		scope = 2;
		inventorySlot = "Injector5";
		model = "IMPGMOD\Proxies\Injector5.p3d";
	};
};

class CfgSlots 
{
	class Slot_morphine 
	{
		name = "morphine";
		displayName = "$STR_IMP_Morphine";
		modGhostIcon = "set:Slots image:Injector";
	};
	
	class Slot_epinephrine 
	{
		name = "epinephrine";
		displayName = "$STR_IMP_Epinephrine";
		modGhostIcon = "set:Slots image:Injector";
	};
	
	class Slot_Injector1
	{
		name = "Injector1";
		displayName = "$STR_IMP_InjectorSlot";
		modGhostIcon = "set:Slots image:Injector";
	};
	
	class Slot_Injector2
	{
		name = "Injector2";
		displayName = "$STR_IMP_InjectorSlot";
		modGhostIcon = "set:Slots image:Injector";
	};
	
	class Slot_Injector3
	{
		name = "Injector3";
		displayName = "$STR_IMP_InjectorSlot";
		modGhostIcon = "set:Slots image:Injector";
	};
	
	class Slot_Injector4
	{
		name = "Injector4";
		displayName = "$STR_IMP_InjectorSlot";
		modGhostIcon = "set:Slots image:Injector";
	};
	class Slot_Injector5
	{
		name = "Injector5";
		displayName = "$STR_IMP_InjectorSlot";
		modGhostIcon = "set:Slots image:Injector";
	};
};