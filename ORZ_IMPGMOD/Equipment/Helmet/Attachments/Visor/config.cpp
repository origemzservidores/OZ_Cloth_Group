class CfgPatches 
{
	class IMP_Visor_Green 
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Gear_Tools", "DZ_Gear_Containers", "DZ_Data", "DZ_Characters", "DZ_Scripts"};
	};
};

class CfgNonAIVehicles 
{
	class ProxyAttachment;
	class ProxyVisor : ProxyAttachment 
	{
		scope = 2;
		inventorySlot[] = {"Visor"};
		model = "IMPGMOD\Equipment\Helmet\Attachments\Visor\models\Visor.p3d";
	};
};

class CfgSlots 
{	
	class Slot_Visor 
	{
		scope = 2;
		name = "Visor";
		displayName = "$STR_IMP_Visor";
		modGhostIcon = "set:Slots image:Visor";
	};
};

class cfgVehicles 
{
	class Inventory_Base;
	
	class IMP_Visor_ColorBase : Inventory_Base 
	{
		scope = 0;
		displayName = "$STR_IMP_Visor";
		descriptionShort = "$STR_IMP_VisorD";
		itemsize[] = {3, 2};
		allowOwnedCargoManipulation = 1;
		Model = "IMPGMOD\Equipment\Helmet\Attachments\Visor\models\Visor.p3d";
		inventorySlot[] = {"Visor"};
		weight = 600;
		hiddenSelections[] = {"Visor"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\Attachments\Visor\data\Visor_Green_co.paa"};
		hiddenSelectionsMaterials[] = {"IMPGMOD\Equipment\Helmet\Attachments\Visor\data\Visor.rvmat"};
		
		class DamageSystem 
		{
			class GlobalHealth 
			{
				class Health 
				{
					hitpoints = 500;
					healthLevels[] = 
					{
						{1.0, {"IMPGMOD\Equipment\Helmet\Attachments\Visor\data\Visor.rvmat"}}, 
						{0.7, {"IMPGMOD\Equipment\Helmet\Attachments\Visor\data\Visor.rvmat"}}, 
						{0.5, {"IMPGMOD\Equipment\Helmet\Attachments\Visor\data\Visor_damage.rvmat"}}, 
						{0.3, {"IMPGMOD\Equipment\Helmet\Attachments\Visor\data\Visor_damage.rvmat"}}, 
						{0.0, {"IMPGMOD\Equipment\Helmet\Attachments\Visor\data\Visor_destruct.rvmat"}}
					};
				};
			};
		};
	};
	
	class IMP_Visor_Green : IMP_Visor_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\Attachments\Visor\data\Visor_Black_co.paa"};
	};
	
	class IMP_Visor_Black : IMP_Visor_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\Attachments\Visor\data\Visor_Black_co.paa"};
	};
	
	class IMP_Visor_Tan : IMP_Visor_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\Attachments\Visor\data\Visor_Tan_co.paa"};
	};
	
	class IMP_Visor_UCP : IMP_Visor_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\Attachments\Visor\data\Visor_UCP.paa"};
	};
	
	class IMP_Visor_EMR : IMP_Visor_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\Attachments\Visor\data\Visor_EMR.paa"};
	};
	
	class IMP_Visor_NWU : IMP_Visor_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\Attachments\Visor\data\Visor_NWU.paa"};
	};
	
	class IMP_Visor_MARPAT : IMP_Visor_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\Attachments\Visor\data\Visor_MARPAT.paa"};
	};
};