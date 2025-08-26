class CfgPatches 
{
	class BuilderBagInstr 
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = 
		{	"DZ_Characters",
			"DZ_Gear_Containers",
			"DZ_Data",
			"DZ_Characters_Vests",
			"DZ_Gear_Tools",
			"DZ_Weapons_Melee"
		};
		magazines[] = {};
	};
};

class CfgVehicles
{
	class Inventory_Base;
	
	class Pliers : Inventory_Base 
	{
		inventorySlot[] += {"Pliers"};
	};
	
	class Shovel : Inventory_Base 
	{
		inventorySlot[] += {"Shovel", "Shoulder40", "Melee"};
	};
	
	class FieldShovel : Inventory_Base 
	{
		inventorySlot[] += {"Shovel", "Shoulder40", "Melee"};
	};
	
	class Hammer : Inventory_Base 
	{
		inventorySlot[] += {"Hammer"};
	};
	
	class HandSaw : Inventory_Base 
	{
		inventorySlot[] += {"HandSaw"};
	};
	
	class Hatchet : Inventory_Base 
	{
		inventorySlot[] += {"Hatchet"};
	};
};