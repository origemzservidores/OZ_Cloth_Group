class CfgPatches 
{
	class IMP_Mandible 
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Characters_Headgear", "DZ_Gear_Tools", "DZ_Data", "DZ_Characters", "DZ_Scripts"};
	};
};

class CfgNonAIVehicles 
{
	class ProxyAttachment;
	class ProxyMandible01 : ProxyAttachment 
	{
		scope = 2;
		inventorySlot[] = {"Mandible"};
		model = "IMPGMOD\Equipment\Helmet\Attachments\Mandible\models\Mandible.p3d";
	};
};

class cfgVehicles 
{
	class Inventory_Base;
	
	class IMP_Mandible_ColorBase : Inventory_Base 
	{
		scope = 0;
		displayName = "$STR_IMP_Mandible";
		descriptionShort = "$STR_IMP_MandibleD";
		itemsize[] = {3, 2};
		allowOwnedCargoManipulation = 1;
		Model = "IMPGMOD\Equipment\Helmet\Attachments\Mandible\models\Mandible.p3d";
		inventorySlot[] = {"SotnikMask"};
		weight = 600;
		hiddenSelections[] = {"Mandible"};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\Attachments\Mandible\data\Mandible_Green_co.paa"};
		hiddenSelectionsMaterials[] = {"IMPGMOD\Equipment\Helmet\Attachments\Mandible\data\Mandible.rvmat"};
		
		class DamageSystem 
		{
			class GlobalHealth 
			{
				class Health 
				{
					hitpoints = 500;
					healthLevels[] = 
					{
						{1.0, {"IMPGMOD\Equipment\Helmet\Attachments\Mandible\data\Mandible.rvmat"}}, 
						{0.7, {"IMPGMOD\Equipment\Helmet\Attachments\Mandible\data\Mandible.rvmat"}}, 
						{0.5, {"IMPGMOD\Equipment\Helmet\Attachments\Mandible\data\Mandible_damage.rvmat"}}, 
						{0.3, {"IMPGMOD\Equipment\Helmet\Attachments\Mandible\data\Mandible_damage.rvmat"}}, 
						{0.0, {"IMPGMOD\Equipment\Helmet\Attachments\Mandible\data\Mandible_destruct.rvmat"}}
					};
				};
			};
		};
	};
	
	class IMP_Mandible_Green : IMP_Mandible_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\Attachments\Mandible\data\Mandible_Flecktarn_co.paa"};
	};
	
	class IMP_Mandible_Flecktarn : IMP_Mandible_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\Attachments\Mandible\data\Mandible_Flecktarn_co.paa"};
	};
	
	class IMP_Mandible_Grey : IMP_Mandible_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\Attachments\Mandible\data\Mandible_Grey_co.paa"};
	};
	
	class IMP_Mandible_Multicam : IMP_Mandible_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\Attachments\Mandible\data\Mandible_Multicam_co.paa"};
	};
	
	class IMP_Mandible_Tan : IMP_Mandible_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\Attachments\Mandible\data\Mandible_Tan_co.paa"};
	};
	
	class IMP_Mandible_Urban : IMP_Mandible_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\Attachments\Mandible\data\Mandible_Urban_co.paa"};
	};
	
	class IMP_Mandible_WD : IMP_Mandible_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\Attachments\Mandible\data\Mandible_WD_co.paa"};
	};
	
	class IMP_Mandible_EMR : IMP_Mandible_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\Attachments\Mandible\data\Mandible_EMR.paa"};
	};
	
	class IMP_Mandible_NWU : IMP_Mandible_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\Attachments\Mandible\data\Mandible_NWU.paa"};
	};
	
	class IMP_Mandible_UCP : IMP_Mandible_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\Attachments\Mandible\data\Mandible_UCP.paa"};
	};
	
	class IMP_Mandible_MARPAT : IMP_Mandible_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\Helmet\Attachments\Mandible\data\Mandible_MARPAT.paa"};
	};
};