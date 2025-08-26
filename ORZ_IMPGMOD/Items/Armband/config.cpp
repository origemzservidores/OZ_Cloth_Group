class CfgPatches
{
	class IMP_Armband
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
	class Clothing_Base;
	class Clothing: Clothing_Base {};
	
	class IMP_Armband_Base : Clothing {
		scope = 0;
		displayName = "$STR_IMP_TAG";
		descriptionShort = "$STR_IMP_TAG";
		model = "IMPGMOD\Items\Armband\models\Armband_g.p3d";
		vehicleClass = "Clothing";
		simulation = "clothing";
		itemsCargoSize[] = {1, 2};
		inventorySlot = "Armband";
		attachments[] = {};
		itemInfo[] = {"Clothing", "Armband"};
		itemSize[] = {2, 1};
		weight = 200;
		hiddenSelections[]=
		{
			"camoflage",
			"left",
			"right"
		};
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_RussianFederation_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_VAGNER.paa"
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
						{1.0,{"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt.rvmat"}},
						{0.7,{"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt.rvmat"}},
						{0.5,{"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_damage.rvmat"}},
						{0.3,{"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_damage.rvmat"}},
						{0.0,{"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_destruct.rvmat"}}
					};
				};
			};
		};
		
		class ClothingTypes {
			male = "IMPGMOD\Items\Armband\models\Armband_m.p3d";
			female = "IMPGMOD\Items\Armband\models\Armband_f.p3d";
		};
	};
	
	class IMP_Armband_RU_Vagner : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_RussianFederation_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_VAGNER.paa"
		};
	};
	
	class IMP_Armband_RU_Admiral : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_RussianFederation_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Admiral.paa"
		};
	};
	
	class IMP_Armband_RU_AKHMAT : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_RussianFederation_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_AKHMAT.paa"
		};
	};
	
	class IMP_Armband_RU_ALPHA : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_RussianFederation_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_ALPHA.paa"
		};
	};
	
	class IMP_Armband_RU_ANTITERROR : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_RussianFederation_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Antiterror.paa"
		};
	};
	
	class IMP_Armband_RU_Captain : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_RussianFederation_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Captain.paa"
		};
	};
	
	class IMP_Armband_RU_Clown : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_RussianFederation_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Clown.paa"
		};
	};
	
	class IMP_Armband_RU_CombatMedic : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_RussianFederation_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_CombatMedic.paa"
		};
	};
	
	class IMP_Armband_RU_Cpl : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_RussianFederation_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Cpl.paa"
		};
	};
	
	class IMP_Armband_RU_FSB : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_RussianFederation_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_FSB.paa"
		};
	};
	
	class IMP_Armband_RU_FSBALPHA : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_RussianFederation_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_FSBALPHA.paa"
		};
	};
	
	class IMP_Armband_RU_General : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_RussianFederation_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_General.paa"
		};
	};
	
	class IMP_Armband_RU_GRU : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_RussianFederation_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_GRU.paa"
		};
	};
	
	class IMP_Armband_RU_Gunner : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_RussianFederation_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Gunner.paa"
		};
	};
	
	class IMP_Armband_RU_HASkull : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_RussianFederation_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_HASkull.paa"
		};
	};
	
	class IMP_Armband_RU_Hero : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_RussianFederation_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Hero.paa"
		};
	};
	
	class IMP_Armband_RU_LAGOON : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_RussianFederation_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_LAGOON.paa"
		};
	};
	
	class IMP_Armband_RU_Lieutenant : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_RussianFederation_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Lieutenant.paa"
		};
	};
	
	class IMP_Armband_RU_Medic : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_RussianFederation_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Medic.paa"
		};
	};
	
	class IMP_Armband_RU_OBEY : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_RussianFederation_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_OBEY.paa"
		};
	};
	
	class IMP_Armband_RU_Officer : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_RussianFederation_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Officer.paa"
		};
	};
	
	class IMP_Armband_RU_Operator : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_RussianFederation_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Operator.paa"
		};
	};
	
	class IMP_Armband_RU_Police : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_RussianFederation_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Police.paa"
		};
	};
	
	class IMP_Armband_RU_PoliceRU : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_RussianFederation_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_PoliceRU.paa"
		};
	};
	
	class IMP_Armband_RU_PVTSkull : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_RussianFederation_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_PVTSKULL.paa"
		};
	};
	
	class IMP_Armband_RU_SBPFSO : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_RussianFederation_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_SBPFSO.paa"
		};
	};
	
	class IMP_Armband_RU_Scout : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_RussianFederation_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Scout.paa"
		};
	};
	
	class IMP_Armband_RU_Sergeant : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_RussianFederation_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Sergeant.paa"
		};
	};
	
	class IMP_Armband_RU_Sniper : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_RussianFederation_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Sniper.paa"
		};
	};
	
	class IMP_Armband_RU_Soldier : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_RussianFederation_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Soldier.paa"
		};
	};
	
	class IMP_Armband_RU_Tankman : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_RussianFederation_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Tankman.paa"
		};
	};
	
	class IMP_Armband_RU_TheWarriors : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_RussianFederation_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_TheWarriors.paa"
		};
	};
	
	class IMP_Armband_Flag_UK : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_RussianFederation_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_UK.paa"
		};
	};
	
	class IMP_Armband_RU_UMBRELLA : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_RussianFederation_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_UMBRELLA.paa"
		};
	};
	
	class IMP_Armband_UN : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_RussianFederation_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_UN.paa"
		};
	};
	
	class IMP_Armband_Flag_USA : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_RussianFederation_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_USA.paa"
		};
	};
	
	class IMP_Armband_RU_VSRF : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_RussianFederation_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_VSRF.paa"
		};
	};
	
	class IMP_Armband_RU_Monolit : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_RussianFederation_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Monolit.paa"
		};
	};
	
	class IMP_Armband_RU_Merc : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_RussianFederation_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Merc.paa"
		};
	};
	
	class IMP_Armband_RU_Rassvet : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_RussianFederation_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Rassvet.paa"
		};
	};
	
	class IMP_Armband_RU_Renegaty : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_RussianFederation_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Renegaty.paa"
		};
	};
	
	class IMP_Armband_RU_Science : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_RussianFederation_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Science.paa"
		};
	};
	
	class IMP_Armband_RU_Stalker : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_RussianFederation_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Stalker.paa"
		};
	};
	
	class IMP_Armband_RU_Svoboda : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_RussianFederation_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Svoboda.paa"
		};
	};
	
	class IMP_Armband_RU_Voen : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_RussianFederation_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Voen.paa"
		};
	};
	
	class IMP_Armband_RU_Bandit : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_RussianFederation_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Bandit.paa"
		};
	};
	
	class IMP_Armband_RU_ClearSky : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_RussianFederation_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_CS.paa"
		};
	};
	
	class IMP_Armband_RU_Dolg : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_RussianFederation_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Dolg.paa"
		};
	};
	
	class IMP_Armband_RU_Greh : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_RussianFederation_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Greh.paa"
		};
	};
	
	class IMP_Armband_RU_Hunt : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_RussianFederation_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Hunt.paa"
		};
	};
	
	class IMP_Armband_LH_Vagner : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_VAGNER.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Base_co.paa"
		};
	};
	
	class IMP_Armband_LH_Admiral : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Admiral.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Base_co.paa"
		};
	};
	
	class IMP_Armband_LH_AKHMAT : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_AKHMAT.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Base_co.paa"
		};
	};
	
	class IMP_Armband_LH_ALPHA : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_ALPHA.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Base_co.paa"
		};
	};
	
	class IMP_Armband_LH_ANTITERROR : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Antiterror.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Base_co.paa"
		};
	};
	
	class IMP_Armband_LH_Captain : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Captain.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Base_co.paa"
		};
	};
	
	class IMP_Armband_LH_Clown : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Clown.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Base_co.paa"
		};
	};
	
	class IMP_Armband_LH_CombatMedic : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_CombatMedic.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Base_co.paa"
		};
	};
	
	class IMP_Armband_LH_Cpl : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Cpl.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Base_co.paa"
		};
	};
	
	class IMP_Armband_LH_FSB : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_FSB.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Base_co.paa"
		};
	};
	
	class IMP_Armband_LH_FSBALPHA : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_FSBALPHA.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Base_co.paa"
		};
	};
	
	class IMP_Armband_LH_General : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_General.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Base_co.paa"
		};
	};
	
	class IMP_Armband_LH_GRU : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_GRU.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Base_co.paa"
		};
	};
	
	class IMP_Armband_LH_Gunner : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Gunner.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Base_co.paa"
		};
	};
	
	class IMP_Armband_LH_HASkull : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_HASkull.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Base_co.paa"
		};
	};
	
	class IMP_Armband_LH_Hero : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Hero.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Base_co.paa"
		};
	};
	
	class IMP_Armband_LH_LAGOON : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_LAGOON.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Base_co.paa"
		};
	};
	
	class IMP_Armband_LH_Lieutenant : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Lieutenant.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Base_co.paa"
		};
	};
	
	class IMP_Armband_LH_Medic : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Medic.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Base_co.paa"
		};
	};
	
	class IMP_Armband_LH_OBEY : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_OBEY.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Base_co.paa"
		};
	};
	
	class IMP_Armband_LH_Officer : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Officer.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Base_co.paa"
		};
	};
	
	class IMP_Armband_LH_Operator : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Operator.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Base_co.paa"
		};
	};
	
	class IMP_Armband_LH_Police : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Police.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Base_co.paa"
		};
	};
	
	class IMP_Armband_LH_PoliceRU : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_PoliceRU.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Base_co.paa"
		};
	};
	
	class IMP_Armband_LH_PVTSkull : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_PVTSKULL.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Base_co.paa"
		};
	};
	
	class IMP_Armband_LH_SBPFSO : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_SBPFSO.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Base_co.paa"
		};
	};
	
	class IMP_Armband_LH_Scout : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Scout.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Base_co.paa"
		};
	};
	
	class IMP_Armband_LH_Sergeant : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Sergeant.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Base_co.paa"
		};
	};
	
	class IMP_Armband_LH_Sniper : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Sniper.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Base_co.paa"
		};
	};
	
	class IMP_Armband_LH_Soldier : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Soldier.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Base_co.paa"
		};
	};
	
	class IMP_Armband_LH_Tankman : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Tankman.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Base_co.paa"
		};
	};
	
	class IMP_Armband_LH_TheWarriors : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_TheWarriors.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Base_co.paa"
		};
	};
	
	class IMP_Armband_LH_Flag_UK : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_UK.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Base_co.paa"
		};
	};
	
	class IMP_Armband_LH_UMBRELLA : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_UMBRELLA.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Base_co.paa"
		};
	};
	
	class IMP_Armband_LH_UN : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_UN.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Base_co.paa"
		};
	};
	
	class IMP_Armband_LH_Flag_USA : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_USA.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Base_co.paa"
		};
	};
	
	class IMP_Armband_LH_VSRF : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_VSRF.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Base_co.paa"
		};
	};
	
	class IMP_Armband_LH_Monolit : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Monolit.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Base_co.paa"
		};
	};
	
	class IMP_Armband_LH_Merc : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Merc.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Base_co.paa"
		};
	};
	
	class IMP_Armband_LH_Rassvet : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Rassvet.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Base_co.paa"
		};
	};
	
	class IMP_Armband_LH_Renegaty : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Renegaty.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Base_co.paa"
		};
	};
	
	class IMP_Armband_LH_Science : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Science.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Base_co.paa"
		};
	};
	
	class IMP_Armband_LH_Stalker : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Stalker.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Base_co.paa"
		};
	};
	
	class IMP_Armband_LH_Svoboda : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Svoboda.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Base_co.paa"
		};
	};
	
	class IMP_Armband_LH_Voen : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Voen.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Base_co.paa"
		};
	};
	
	class IMP_Armband_LH_Bandit : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Bandit.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Base_co.paa"
		};
	};
	
	class IMP_Armband_LH_ClearSky : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_CS.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Base_co.paa"
		};
	};
	
	class IMP_Armband_LH_Dolg : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Dolg.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Base_co.paa"
		};
	};
	
	class IMP_Armband_LH_Greh : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Greh.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Base_co.paa"
		};
	};
	
	class IMP_Armband_LH_Hunt : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Hunt.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Base_co.paa"
		};
	};
	
	class IMP_Armband_RH_Vagner : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Base_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_VAGNER.paa"
		};
	};
	
	class IMP_Armband_RH_Admiral : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Base_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Admiral.paa"
		};
	};
	
	class IMP_Armband_RH_AKHMAT : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Base_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_AKHMAT.paa"
		};
	};
	
	class IMP_Armband_RH_ALPHA : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Base_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_ALPHA.paa"
		};
	};
	
	class IMP_Armband_RH_ANTITERROR : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Base_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Antiterror.paa"
		};
	};
	
	class IMP_Armband_RH_Captain : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Base_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Captain.paa"
		};
	};
	
	class IMP_Armband_RH_Clown : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Base_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Clown.paa"
		};
	};
	
	class IMP_Armband_RH_CombatMedic : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Base_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_CombatMedic.paa"
		};
	};
	
	class IMP_Armband_RH_Cpl : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Base_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Cpl.paa"
		};
	};
	
	class IMP_Armband_RH_FSB : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Base_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_FSB.paa"
		};
	};
	
	class IMP_Armband_RH_FSBALPHA : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Base_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_FSBALPHA.paa"
		};
	};
	
	class IMP_Armband_RH_General : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Base_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_General.paa"
		};
	};
	
	class IMP_Armband_RH_GRU : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Base_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_GRU.paa"
		};
	};
	
	class IMP_Armband_RH_Gunner : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Base_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Gunner.paa"
		};
	};
	
	class IMP_Armband_RH_HASkull : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Base_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_HASkull.paa"
		};
	};
	
	class IMP_Armband_RH_Hero : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Base_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Hero.paa"
		};
	};
	
	class IMP_Armband_RH_LAGOON : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Base_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_LAGOON.paa"
		};
	};
	
	class IMP_Armband_RH_Lieutenant : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Base_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Lieutenant.paa"
		};
	};
	
	class IMP_Armband_RH_Medic : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Base_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Medic.paa"
		};
	};
	
	class IMP_Armband_RH_OBEY : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Base_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_OBEY.paa"
		};
	};
	
	class IMP_Armband_RH_Officer : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Base_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Officer.paa"
		};
	};
	
	class IMP_Armband_RH_Operator : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Base_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Operator.paa"
		};
	};
	
	class IMP_Armband_RH_Police : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Base_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Police.paa"
		};
	};
	
	class IMP_Armband_RH_PoliceRU : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Base_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_PoliceRU.paa"
		};
	};
	
	class IMP_Armband_RH_PVTSkull : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Base_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_PVTSKULL.paa"
		};
	};
	
	class IMP_Armband_RH_SBPFSO : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Base_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_SBPFSO.paa"
		};
	};
	
	class IMP_Armband_RH_Scout : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Base_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Scout.paa"
		};
	};
	
	class IMP_Armband_RH_Sergeant : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Base_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Sergeant.paa"
		};
	};
	
	class IMP_Armband_RH_Sniper : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Base_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Sniper.paa"
		};
	};
	
	class IMP_Armband_RH_Soldier : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Base_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Soldier.paa"
		};
	};
	
	class IMP_Armband_RH_Tankman : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Base_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Tankman.paa"
		};
	};
	
	class IMP_Armband_RH_TheWarriors : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Base_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_TheWarriors.paa"
		};
	};
	
	class IMP_Armband_RH_Flag_UK : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Base_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_UK.paa"
		};
	};
	
	class IMP_Armband_RH_UMBRELLA : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Base_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_UMBRELLA.paa"
		};
	};
	
	class IMP_Armband_RH_UN : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Base_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_UN.paa"
		};
	};
	
	class IMP_Armband_RH_Flag_USA : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Base_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_USA.paa"
		};
	};
	
	class IMP_Armband_RH_VSRF : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Base_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_VSRF.paa"
		};
	};
	
	class IMP_Armband_RH_Monolit : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Base_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Monolit.paa"
		};
	};
	
	class IMP_Armband_RH_Merc : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Base_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Merc.paa"
		};
	};
	
	class IMP_Armband_RH_Rassvet : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Base_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Rassvet.paa"
		};
	};
	
	class IMP_Armband_RH_Renegaty : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Base_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Renegaty.paa"
		};
	};
	
	class IMP_Armband_RH_Science : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Base_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Science.paa"
		};
	};
	
	class IMP_Armband_RH_Stalker : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Base_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Stalker.paa"
		};
	};
	
	class IMP_Armband_RH_Svoboda : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Base_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Svoboda.paa"
		};
	};
	
	class IMP_Armband_RH_Voen : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Base_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Voen.paa"
		};
	};
	
	class IMP_Armband_RH_Bandit : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Base_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Bandit.paa"
		};
	};
	
	class IMP_Armband_RH_ClearSky : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Base_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_CS.paa"
		};
	};
	
	class IMP_Armband_RH_Dolg : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Base_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Dolg.paa"
		};
	};
	
	class IMP_Armband_RH_Greh : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Base_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Greh.paa"
		};
	};
	
	class IMP_Armband_RH_Hunt : IMP_Armband_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPGMOD\Equipment\Belts\LegSystem\Pouches\Belt_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Base_co.paa",
			"IMPGMOD\Items\Patch\Small\data\PatchSmall_Hunt.paa"
		};
	};
};