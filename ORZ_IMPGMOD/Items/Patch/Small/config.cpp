class CfgPatches
{
	class IMP_Patch_Small
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
	class IMP_Patch_Small_Base: Inventory_Base
	{
		scope=0;
		displayName="$STR_IMP_PatchS";
		descriptionShort="$STR_IMP_PatchSD";
		model="\IMPGMOD\Items\Patch\Small\models\PatchSmall.p3d";
		rotationFlags=17;
		reversed=0;
		inventorySlot[] = {"PatchSmall"};
		weight=363;
		itemSize[]={3,1};
		recoilModifier[] = {0.6, 0.6, 0.6};
		hiddenSelections[]=
		{
			"camoflage"
		};
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Base_co.paa"
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
						{1.0,{"IMPGMOD\Items\Patch\Small\data\PatchSmall.rvmat"}},
						{0.7,{"IMPGMOD\Items\Patch\Small\data\PatchSmall.rvmat"}},
						{0.5,{"IMPGMOD\Items\Patch\Small\data\PatchSmall_damage.rvmat"}},
						{0.3,{"IMPGMOD\Items\Patch\Small\data\PatchSmall_damage.rvmat"}},
						{0.0,{"IMPGMOD\Items\Patch\Small\data\PatchSmall_destruct.rvmat"}}
					};
				};
			};
		};
	};
	
	class IMP_Patch_Small_Flag_RU : IMP_Patch_Small_Base {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Patch\Small\data\PatchSmall_RussianFederation_co.paa"};
	};
	
	class IMP_Patch_Small_Admiral : IMP_Patch_Small_Base {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Patch\Small\data\PatchSmall_Admiral.paa"};
	};
	
	class IMP_Patch_Small_AKHMAT : IMP_Patch_Small_Base {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Patch\Small\data\PatchSmall_AKHMAT.paa"};
	};
	
	class IMP_Patch_Small_ALPHA : IMP_Patch_Small_Base {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Patch\Small\data\PatchSmall_ALPHA.paa"};
	};
	
	class IMP_Patch_Small_ANTITERROR : IMP_Patch_Small_Base {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Patch\Small\data\PatchSmall_Antiterror.paa"};
	};
	
	class IMP_Patch_Small_Captain : IMP_Patch_Small_Base {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Patch\Small\data\PatchSmall_Captain.paa"};
	};
	
	class IMP_Patch_Small_Clown : IMP_Patch_Small_Base {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Patch\Small\data\PatchSmall_Clown.paa"};
	};
	
	class IMP_Patch_Small_CombatMedic : IMP_Patch_Small_Base {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Patch\Small\data\PatchSmall_CombatMedic.paa"};
	};
	
	class IMP_Patch_Small_Cpl : IMP_Patch_Small_Base {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Patch\Small\data\PatchSmall_Cpl.paa"};
	};
	
	class IMP_Patch_Small_FSB : IMP_Patch_Small_Base {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Patch\Small\data\PatchSmall_FSB.paa"};
	};
	
	class IMP_Patch_Small_FSBALPHA : IMP_Patch_Small_Base {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Patch\Small\data\PatchSmall_FSBALPHA.paa"};
	};
	
	class IMP_Patch_Small_General : IMP_Patch_Small_Base {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Patch\Small\data\PatchSmall_General.paa"};
	};
	
	class IMP_Patch_Small_GRU : IMP_Patch_Small_Base {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Patch\Small\data\PatchSmall_GRU.paa"};
	};
	
	class IMP_Patch_Small_Gunner : IMP_Patch_Small_Base {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Patch\Small\data\PatchSmall_Gunner.paa"};
	};
	
	class IMP_Patch_Small_HASkull : IMP_Patch_Small_Base {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Patch\Small\data\PatchSmall_HASkull.paa"};
	};
	
	class IMP_Patch_Small_Hero : IMP_Patch_Small_Base {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Patch\Small\data\PatchSmall_Hero.paa"};
	};
	
	class IMP_Patch_Small_LAGOON : IMP_Patch_Small_Base {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Patch\Small\data\PatchSmall_LAGOON.paa"};
	};
	
	class IMP_Patch_Small_Lieutenant : IMP_Patch_Small_Base {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Patch\Small\data\PatchSmall_Lieutenant.paa"};
	};
	
	class IMP_Patch_Small_Medic : IMP_Patch_Small_Base {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Patch\Small\data\PatchSmall_Medic.paa"};
	};
	
	class IMP_Patch_Small_OBEY : IMP_Patch_Small_Base {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Patch\Small\data\PatchSmall_OBEY.paa"};
	};
	
	class IMP_Patch_Small_Officer : IMP_Patch_Small_Base {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Patch\Small\data\PatchSmall_Officer.paa"};
	};
	
	class IMP_Patch_Small_Operator : IMP_Patch_Small_Base {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Patch\Small\data\PatchSmall_Operator.paa"};
	};
	
	class IMP_Patch_Small_Police : IMP_Patch_Small_Base {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Patch\Small\data\PatchSmall_Police.paa"};
	};
	
	class IMP_Patch_Small_PoliceRU : IMP_Patch_Small_Base {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Patch\Small\data\PatchSmall_PoliceRU.paa"};
	};
	
	class IMP_Patch_Small_Polizei : IMP_Patch_Small_Base {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Patch\Small\data\PatchSmall_Polizei.paa"};
	};
	
	class IMP_Patch_Small_PVTSkull : IMP_Patch_Small_Base {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Patch\Small\data\PatchSmall_PVTSKULL.paa"};
	};
	
	class IMP_Patch_Small_SBPFSO : IMP_Patch_Small_Base {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Patch\Small\data\PatchSmall_SBPFSO.paa"};
	};
	
	class IMP_Patch_Small_Scout : IMP_Patch_Small_Base {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Patch\Small\data\PatchSmall_Scout.paa"};
	};
	
	class IMP_Patch_Small_Sergeant : IMP_Patch_Small_Base {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Patch\Small\data\PatchSmall_Sergeant.paa"};
	};
	
	class IMP_Patch_Small_Sniper : IMP_Patch_Small_Base {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Patch\Small\data\PatchSmall_Sniper.paa"};
	};
	
	class IMP_Patch_Small_Soldier : IMP_Patch_Small_Base {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Patch\Small\data\PatchSmall_Soldier.paa"};
	};
	
	class IMP_Patch_Small_Tankman : IMP_Patch_Small_Base {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Patch\Small\data\PatchSmall_Tankman.paa"};
	};
	
	class IMP_Patch_Small_TheWarriors : IMP_Patch_Small_Base {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Patch\Small\data\PatchSmall_TheWarriors.paa"};
	};
	
	class IMP_Patch_Small_Flag_UK : IMP_Patch_Small_Base {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Patch\Small\data\PatchSmall_UK.paa"};
	};
	
	class IMP_Patch_Small_UMBRELLA : IMP_Patch_Small_Base {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Patch\Small\data\PatchSmall_UMBRELLA.paa"};
	};
	
	class IMP_Patch_Small_UN : IMP_Patch_Small_Base {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Patch\Small\data\PatchSmall_UN.paa"};
	};
	
	class IMP_Patch_Small_Flag_USA : IMP_Patch_Small_Base {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Patch\Small\data\PatchSmall_USA.paa"};
	};
	
	class IMP_Patch_Small_VSRF : IMP_Patch_Small_Base {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Patch\Small\data\PatchSmall_VSRF.paa"};
	};
	
	class IMP_Patch_Small_VAGNER : IMP_Patch_Small_Base {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Patch\Small\data\PatchSmall_VAGNER.paa"};
	};
	
	class IMP_Patch_Small_Monolit : IMP_Patch_Small_Base {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Patch\Small\data\PatchSmall_Monolit.paa"};
	};
	
	class IMP_Patch_Small_Merc : IMP_Patch_Small_Base {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Patch\Small\data\PatchSmall_Merc.paa"};
	};
	
	class IMP_Patch_Small_Rassvet : IMP_Patch_Small_Base {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Patch\Small\data\PatchSmall_Rassvet.paa"};
	};
	
	class IMP_Patch_Small_Renegaty : IMP_Patch_Small_Base {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Patch\Small\data\PatchSmall_Renegaty.paa"};
	};
	
	class IMP_Patch_Small_Science : IMP_Patch_Small_Base {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Patch\Small\data\PatchSmall_Science.paa"};
	};
	
	class IMP_Patch_Small_Stalker : IMP_Patch_Small_Base {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Patch\Small\data\PatchSmall_Stalker.paa"};
	};
	
	class IMP_Patch_Small_Svoboda : IMP_Patch_Small_Base {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Patch\Small\data\PatchSmall_Svoboda.paa"};
	};
	
	class IMP_Patch_Small_Voen : IMP_Patch_Small_Base {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Patch\Small\data\PatchSmall_Voen.paa"};
	};
	
	class IMP_Patch_Small_Bandit : IMP_Patch_Small_Base {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Patch\Small\data\PatchSmall_Bandit.paa"};
	};
	
	class IMP_Patch_Small_ClearSky : IMP_Patch_Small_Base {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Patch\Small\data\PatchSmall_CS.paa"};
	};
	
	class IMP_Patch_Small_Dolg : IMP_Patch_Small_Base {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Patch\Small\data\PatchSmall_Dolg.paa"};
	};
	
	class IMP_Patch_Small_Greh : IMP_Patch_Small_Base {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Patch\Small\data\PatchSmall_Greh.paa"};
	};
	
	class IMP_Patch_Small_Hunt : IMP_Patch_Small_Base {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPGMOD\Items\Patch\Small\data\PatchSmall_Hunt.paa"};
	};
};

class CfgNonAIVehicles {
	class ProxyAttachment;
	
	class ProxyPatchSmall : ProxyAttachment {
		scope = 2;
		inventorySlot = "PatchSmall";
		model = "\IMPGMOD\Items\Patch\Small\models\PatchSmall.p3d";
	};
};

class CfgSlots {
	class Slot_PatchSmall {
		name = "PatchSmall";
		displayName = "$STR_IMP_SlotPatch1";
		modGhostIcon = "set:Slots image:PatchSmall";
	};
};