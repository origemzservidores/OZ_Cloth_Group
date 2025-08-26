class CfgPatches
{
	class IMP_Patch_Big
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Weapons_Supports", 
			"DZ_Scripts",
			"IMPCOREMOD",
			"DZ_Weapons_Magazines",
			"DZ_Characters_Vests",
			"DZ_Weapons_Firearms",
			"DZ_Characters"
		};
	};
};
class cfgVehicles
{
	class Inventory_Base;
	class IMP_Patch_Big_Base: Inventory_Base
	{
		scope=0;
		displayName="$STR_IMP_PatchB";
		descriptionShort="$STR_IMP_PatchSD";
		model="\IMPGMOD\Items\Patch\Big\models\PatchBig.p3d";
		rotationFlags=17;
		reversed=0;
		inventorySlot[] = {"PatchBig"};
		weight=363;
		itemSize[]={3,1};
		recoilModifier[] = {0.6, 0.6, 0.6};
		hiddenSelections[]=
		{
			"camoflage"
		};
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Items\Patch\Big\data\PatchBig_base_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=200;
					healthLevels[]=
					{
						{1.0,{"IMPGMOD\Items\Patch\Big\data\PatchBig.rvmat"}},
						{0.7,{"IMPGMOD\Items\Patch\Big\data\PatchBig.rvmat"}},
						{0.5,{"IMPGMOD\Items\Patch\Big\data\PatchBig_damage.rvmat"}},
						{0.3,{"IMPGMOD\Items\Patch\Big\data\PatchBig_damage.rvmat"}},
						{0.0,{"IMPGMOD\Items\Patch\Big\data\PatchBig_destruct.rvmat"}}
					};
				};
			};
		};
	};
	
	class IMP_Patch_Big_RuArmy : IMP_Patch_Big_Base {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Patch\Big\data\PatchBig_RussianArmy_co.paa"};
	};
	class IMP_Patch_Big_Bandit : IMP_Patch_Big_Base {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Patch\Big\data\PatchBig_Bandit.paa"};
	};
	class IMP_Patch_Big_ClearSky : IMP_Patch_Big_Base {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Patch\Big\data\PatchBig_CS.paa"};
	};
	class IMP_Patch_Big_Dolg : IMP_Patch_Big_Base {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Patch\Big\data\PatchBig_Dolg.paa"};
	};
	class IMP_Patch_Big_Hunt : IMP_Patch_Big_Base {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Patch\Big\data\PatchBig_Hunt.paa"};
	};
	class IMP_Patch_Big_Merc : IMP_Patch_Big_Base {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Patch\Big\data\PatchBig_Merc.paa"};
	};
	class IMP_Patch_Big_Monolit : IMP_Patch_Big_Base {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Patch\Big\data\PatchBig_Monolit.paa"};
	};
	class IMP_Patch_Big_Neutral : IMP_Patch_Big_Base {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Patch\Big\data\PatchBig_Neutral.paa"};
	};
	class IMP_Patch_Big_Renegaty : IMP_Patch_Big_Base {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Patch\Big\data\PatchBig_Renegaty.paa"};
	};
	class IMP_Patch_Big_Science : IMP_Patch_Big_Base {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Patch\Big\data\PatchBig_Science.paa"};
	};
	class IMP_Patch_Big_Stalker : IMP_Patch_Big_Base {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Patch\Big\data\PatchBig_Stalker.paa"};
	};
	class IMP_Patch_Big_Svoboda : IMP_Patch_Big_Base {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Patch\Big\data\PatchBig_Svoboda.paa"};
	};
	class IMP_Patch_Big_Voen : IMP_Patch_Big_Base {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Patch\Big\data\PatchBig_Voen.paa"};
	};
};

class CfgNonAIVehicles {
	class ProxyAttachment;
	
	class ProxyPatchBig : ProxyAttachment 
	{
		scope = 2;
		inventorySlot = "PatchBig";
		model = "\IMPGMOD\Items\Patch\Big\models\PatchBig.p3d";
	};
};

class CfgSlots {
	class Slot_PatchBig {
		name = "PatchBig";
		displayName = "$STR_IMP_SlotPatch2";
		modGhostIcon = "set:Slots image:PatchBig";
	};
};