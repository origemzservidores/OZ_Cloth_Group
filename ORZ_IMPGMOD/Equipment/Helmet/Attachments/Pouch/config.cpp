class CfgPatches 
{
	class IMP_HPouch 
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Gear_Tools", "DZ_Data", "DZ_Characters", "DZ_Scripts", "DZ_Gear_Containers"};
	};
};

class CfgNonAIVehicles 
{
	class ProxyAttachment;
	class ProxyHPouch : ProxyAttachment 
	{
		scope = 2;
		inventorySlot = "HPouch";
		model = "IMPGMOD\Equipment\Helmet\Attachments\Pouch\models\HPouch.p3d";
	};
};

class CfgSlots 
{	
	class Slot_HPouch 
	{
		name = "HPouch";
		displayName = "$STR_IMP_SlotHelmetPouch";
		modGhostIcon = "set:Slots image:HPouch";
	};
};

class cfgVehicles 
{
	class Container_Base;
	
	class IMP_HPouch_ColorBase : Container_Base 
	{
		scope = 0;
		displayName = "$STR_IMP_HPouch";
		descriptionShort = "$STR_IMP_HPouchD";
		itemsize[] = {2, 1};
		itemsCargoSize[] = {3, 1};
		allowOwnedCargoManipulation = 1;
		Model = "IMPGMOD\Equipment\Helmet\Attachments\Pouch\models\HPouch.p3d";
		inventorySlot[] = {"HPouch"};
		weight = 200;
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\Attachments\Pouch\data\HPouch_Green_co.paa"};
		hiddenSelectionsMaterials[] = {"IMPGMOD\Equipment\Helmet\Attachments\Pouch\data\HPouch.rvmat"};
		
		class DamageSystem 
		{
			class GlobalHealth 
			{
				class Health 
				{
					hitpoints = 500;
					healthLevels[] = 
					{
						{1.0, {"IMPGMOD\Equipment\Helmet\Attachments\Pouch\data\HPouch.rvmat"}}, 
						{0.7, {"IMPGMOD\Equipment\Helmet\Attachments\Pouch\data\HPouch.rvmat"}}, 
						{0.5, {"IMPGMOD\Equipment\Helmet\Attachments\Pouch\data\HPouch_damage.rvmat"}}, 
						{0.3, {"IMPGMOD\Equipment\Helmet\Attachments\Pouch\data\HPouch_damage.rvmat"}}, 
						{0.0, {"IMPGMOD\Equipment\Helmet\Attachments\Pouch\data\HPouch_destruct.rvmat"}}
					};
				};
			};
		};
	};
	
	class IMP_HPouch_Green : IMP_HPouch_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\Attachments\Pouch\data\HPouch_Flecktarn_co.paa"};
	};
	
	class IMP_HPouch_Flecktarn : IMP_HPouch_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\Attachments\Pouch\data\HPouch_Flecktarn_co.paa"};
	};
	
	class IMP_HPouch_Grey : IMP_HPouch_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\Attachments\Pouch\data\HPouch_Grey_co.paa"};
	};
	
	class IMP_HPouch_Multicam : IMP_HPouch_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\Attachments\Pouch\data\HPouch_Multicam_co.paa"};
	};
	
	class IMP_HPouch_Tan : IMP_HPouch_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\Attachments\Pouch\data\HPouch_Tan_co.paa"};
	};
	
	class IMP_HPouch_Urban : IMP_HPouch_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\Attachments\Pouch\data\HPouch_Urban_co.paa"};
	};
	
	class IMP_HPouch_WD : IMP_HPouch_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\Attachments\Pouch\data\HPouch_WD_co.paa"};
	};
	
	class IMP_HPouch_EMR : IMP_HPouch_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\Attachments\Pouch\data\HPouch_EMR.paa"};
	};
	
	class IMP_HPouch_NWU : IMP_HPouch_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\Attachments\Pouch\data\HPouch_NWU.paa"};
	};
	
	class IMP_HPouch_UCP : IMP_HPouch_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\Attachments\Pouch\data\HPouch_UCP.paa"};
	};
	
	class IMP_HPouch_MARPAT : IMP_HPouch_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\Attachments\Pouch\data\HPouch_MARPAT.paa"};
	};
};