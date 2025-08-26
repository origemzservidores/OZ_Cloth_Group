class CfgPatches
{
	class IMP_VanillaRetexture
	{
		units[] = {};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data", "DZ_Characters", "DZ_Scripts", "DZ_Characters_Tops", "DZ_Characters_Pants"
		};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class TacticalShirt_ColorBase;
	class M65Jacket_ColorBase;
	class CargoPants_ColorBase;
	class TTSKOPants;

	class IMP_Jacket_TacticalShirt_60_Black : TacticalShirt_ColorBase 
	{
		scope = 2;
		itemsCargoSize[] = {6, 10};
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\VanillaRetexture\data\TacticalJacket_g_Black.paa",
			"IMPGMOD\Equipment\VanillaRetexture\data\TacticalJacket_Black.paa",
			"IMPGMOD\Equipment\VanillaRetexture\data\TacticalJacket_Black.paa"
		};
	};
	class IMP_Jacket_TacticalShirt_80_Black : TacticalShirt_ColorBase 
	{
		scope = 2;
		itemsCargoSize[] = {8, 10};
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\VanillaRetexture\data\TacticalJacket_g_Black.paa",
			"IMPGMOD\Equipment\VanillaRetexture\data\TacticalJacket_Black.paa",
			"IMPGMOD\Equipment\VanillaRetexture\data\TacticalJacket_Black.paa"
		};
	};
	class IMP_Jacket_TacticalShirt_EMR : TacticalShirt_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\VanillaRetexture\data\TacticalJacket_g_EMR.paa",
			"IMPGMOD\Equipment\VanillaRetexture\data\TacticalJacket_EMR.paa",
			"IMPGMOD\Equipment\VanillaRetexture\data\TacticalJacket_EMR.paa"
		};
	};
	
	class IMP_Jacket_TacticalShirt_NWU : TacticalShirt_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\VanillaRetexture\data\TacticalJacket_g_NWU.paa",
			"IMPGMOD\Equipment\VanillaRetexture\data\TacticalJacket_NWU.paa",
			"IMPGMOD\Equipment\VanillaRetexture\data\TacticalJacket_NWU.paa"
		};
	};
	
	class IMP_Jacket_TacticalShirt_UCP : TacticalShirt_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\VanillaRetexture\data\TacticalJacket_g_UCP.paa",
			"IMPGMOD\Equipment\VanillaRetexture\data\TacticalJacket_UCP.paa",
			"IMPGMOD\Equipment\VanillaRetexture\data\TacticalJacket_UCP.paa"
		};
	};
	
	class IMP_Jacket_TacticalShirt_MARPAT : TacticalShirt_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\VanillaRetexture\data\TacticalJacket_g_MARPAT.paa",
			"IMPGMOD\Equipment\VanillaRetexture\data\TacticalJacket_MARPAT.paa",
			"IMPGMOD\Equipment\VanillaRetexture\data\TacticalJacket_MARPAT.paa"
		};
	};
	
	class IMP_Jacket_TacticalShirt_60_EMR : TacticalShirt_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\VanillaRetexture\data\TacticalJacket_g_EMR.paa",
			"IMPGMOD\Equipment\VanillaRetexture\data\TacticalJacket_EMR.paa",
			"IMPGMOD\Equipment\VanillaRetexture\data\TacticalJacket_EMR.paa"
		};
		itemsCargoSize[] = {6, 10};
	};
	
	class IMP_Jacket_TacticalShirt_60_NWU : TacticalShirt_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\VanillaRetexture\data\TacticalJacket_g_NWU.paa",
			"IMPGMOD\Equipment\VanillaRetexture\data\TacticalJacket_NWU.paa",
			"IMPGMOD\Equipment\VanillaRetexture\data\TacticalJacket_NWU.paa"
		};
		itemsCargoSize[] = {6, 10};
	};
	
	class IMP_Jacket_TacticalShirt_60_UCP : TacticalShirt_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\VanillaRetexture\data\TacticalJacket_g_UCP.paa",
			"IMPGMOD\Equipment\VanillaRetexture\data\TacticalJacket_UCP.paa",
			"IMPGMOD\Equipment\VanillaRetexture\data\TacticalJacket_UCP.paa"
		};
		itemsCargoSize[] = {6, 10};
	};
	
	class IMP_Jacket_TacticalShirt_60_MARPAT : TacticalShirt_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\VanillaRetexture\data\TacticalJacket_g_MARPAT.paa",
			"IMPGMOD\Equipment\VanillaRetexture\data\TacticalJacket_MARPAT.paa",
			"IMPGMOD\Equipment\VanillaRetexture\data\TacticalJacket_MARPAT.paa"
		};
		itemsCargoSize[] = {8, 10};
	};
	
	class IMP_Jacket_TacticalShirt_80_EMR : TacticalShirt_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\VanillaRetexture\data\TacticalJacket_g_EMR.paa",
			"IMPGMOD\Equipment\VanillaRetexture\data\TacticalJacket_EMR.paa",
			"IMPGMOD\Equipment\VanillaRetexture\data\TacticalJacket_EMR.paa"
		};
		itemsCargoSize[] = {8, 10};
	};
	
	class IMP_Jacket_TacticalShirt_80_NWU : TacticalShirt_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\VanillaRetexture\data\TacticalJacket_g_NWU.paa",
			"IMPGMOD\Equipment\VanillaRetexture\data\TacticalJacket_NWU.paa",
			"IMPGMOD\Equipment\VanillaRetexture\data\TacticalJacket_NWU.paa"
		};
		itemsCargoSize[] = {8, 10};
	};
	
	class IMP_Jacket_TacticalShirt_80_UCP : TacticalShirt_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\VanillaRetexture\data\TacticalJacket_g_UCP.paa",
			"IMPGMOD\Equipment\VanillaRetexture\data\TacticalJacket_UCP.paa",
			"IMPGMOD\Equipment\VanillaRetexture\data\TacticalJacket_UCP.paa"
		};
		itemsCargoSize[] = {8, 10};
	};
	
	class IMP_Jacket_TacticalShirt_80_MARPAT : TacticalShirt_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\VanillaRetexture\data\TacticalJacket_g_MARPAT.paa",
			"IMPGMOD\Equipment\VanillaRetexture\data\TacticalJacket_MARPAT.paa",
			"IMPGMOD\Equipment\VanillaRetexture\data\TacticalJacket_MARPAT.paa"
		};
		itemsCargoSize[] = {8, 10};
	};
	
	class IMP_Jacket_M65_EMR : M65Jacket_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\VanillaRetexture\data\M65_EMR.paa",
			"IMPGMOD\Equipment\VanillaRetexture\data\M65_EMR.paa",
			"IMPGMOD\Equipment\VanillaRetexture\data\M65_EMR.paa"
		};
	};
	
	class IMP_Jacket_M65_UCP : M65Jacket_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\VanillaRetexture\data\M65_UCP.paa",
			"IMPGMOD\Equipment\VanillaRetexture\data\M65_UCP.paa",
			"IMPGMOD\Equipment\VanillaRetexture\data\M65_UCP.paa"
		};
	};
	
	class IMP_Jacket_M65_NWU : M65Jacket_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\VanillaRetexture\data\M65_NWU.paa",
			"IMPGMOD\Equipment\VanillaRetexture\data\M65_NWU.paa",
			"IMPGMOD\Equipment\VanillaRetexture\data\M65_NWU.paa"
		};
	};
	
	class IMP_Jacket_M65_MARPAT : M65Jacket_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\VanillaRetexture\data\M65_MARPAT.paa",
			"IMPGMOD\Equipment\VanillaRetexture\data\M65_MARPAT.paa",
			"IMPGMOD\Equipment\VanillaRetexture\data\M65_MARPAT.paa"
		};
	};
	
	class IMP_Pants_Cargo_EMR : CargoPants_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\VanillaRetexture\data\CargoPants_g_EMR.paa",
			"IMPGMOD\Equipment\VanillaRetexture\data\CargoPants_EMR.paa",
			"IMPGMOD\Equipment\VanillaRetexture\data\CargoPants_EMR.paa"
		};
	};
	
	class IMP_Pants_Cargo_UCP : CargoPants_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\VanillaRetexture\data\CargoPants_g_UCP.paa",
			"IMPGMOD\Equipment\VanillaRetexture\data\CargoPants_UCP.paa",
			"IMPGMOD\Equipment\VanillaRetexture\data\CargoPants_UCP.paa"
		};
	};
	
	class IMP_Pants_Cargo_NWU : CargoPants_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\VanillaRetexture\data\CargoPants_g_NWU.paa",
			"IMPGMOD\Equipment\VanillaRetexture\data\CargoPants_NWU.paa",
			"IMPGMOD\Equipment\VanillaRetexture\data\CargoPants_NWU.paa"
		};
	};
	
	class IMP_Pants_Cargo_MARPAT : CargoPants_ColorBase 
	{
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\VanillaRetexture\data\CargoPants_g_MARPAT.paa",
			"IMPGMOD\Equipment\VanillaRetexture\data\CargoPants_MARPAT.paa",
			"IMPGMOD\Equipment\VanillaRetexture\data\CargoPants_MARPAT.paa"
		};
	};
	
	class IMP_Pants_TTSKO_MARPAT : TTSKOPants
	{
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\VanillaRetexture\data\TTSKO_g_MARPAT.paa",
			"IMPGMOD\Equipment\VanillaRetexture\data\TTSKO_Pants_MARPAT.paa",
			"IMPGMOD\Equipment\VanillaRetexture\data\TTSKO_Pants_MARPAT.paa"
		};
	};
	
	class IMP_Pants_TTSKO_EMR : TTSKOPants
	{
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\VanillaRetexture\data\TTSKO_g_EMR.paa",
			"IMPGMOD\Equipment\VanillaRetexture\data\TTSKO_Pants_EMR.paa",
			"IMPGMOD\Equipment\VanillaRetexture\data\TTSKO_Pants_EMR.paa"
		};
	};
	
	class IMP_Pants_TTSKO_UCP : TTSKOPants
	{
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\VanillaRetexture\data\TTSKO_g_UCP.paa",
			"IMPGMOD\Equipment\VanillaRetexture\data\TTSKO_Pants_UCP.paa",
			"IMPGMOD\Equipment\VanillaRetexture\data\TTSKO_Pants_UCP.paa"
		};
	};
	
	class IMP_Pants_TTSKO_NWU : TTSKOPants
	{
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\VanillaRetexture\data\TTSKO_g_NWU.paa",
			"IMPGMOD\Equipment\VanillaRetexture\data\TTSKO_Pants_NWU.paa",
			"IMPGMOD\Equipment\VanillaRetexture\data\TTSKO_Pants_NWU.paa"
		};
	};
};