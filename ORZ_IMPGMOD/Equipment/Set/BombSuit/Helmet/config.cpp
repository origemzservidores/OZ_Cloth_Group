#define _ARMA_

class CfgPatches
{
	class IMP_Helmet_BombHelm
	{
		units[] = {""};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data", "DZ_Characters", "DZ_Scripts", "DZ_Characters_Headgear"};
	};
};
class CfgVehicles
{
	class Clothing_Base;
	class Clothing: Clothing_Base
	{
	};
	class IMP_Helmet_BombHelm_Base: Clothing
	{
		scope = 0;
		RankLevel = 6;
		displayName = "$STR_IMP_BSuitHelm";
		descriptionShort = "$STR_IMP_BSuitHelmD";
		model = "IMPGMOD\Equipment\Set\BombSuit\Helmet\Models\Bomb_Suit_Helmet_G.p3d";
		inventorySlot[] = {"Headgear", "Helmet"};
		itemInfo[] = {"Clothing","Headgear"};
		attachments[] = {};
		weight = 10000;
		itemSize[] = {6,6};
		quickBarBonus=3;
		absorbency = 0.1;
		noMask = 0;
		noNVStrap = 1;
		noEyewear = 1;
		heatIsolation = 0.1;
		repairableWithKits[] = {3};
		repairCosts[] = {100.0};
		hiddenSelections[] = {"camoflage","visor"};
		class ClothingTypes
		{
			male = "IMPGMOD\Equipment\Set\BombSuit\Helmet\Models\Bomb_Suit_Helmet.p3d";
			female = "IMPGMOD\Equipment\Set\BombSuit\Helmet\Models\Bomb_Suit_Helmet.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=200;
					healthLevels[] = 
					{
						{1.0, {"IMPGMOD\Equipment\Set\BombSuit\Helmet\Data\Bomb_Helmet.rvmat"}}, 
						{0.7, {"IMPGMOD\Equipment\Set\BombSuit\Helmet\Data\Bomb_Helmet.rvmat"}}, 
						{0.5, {"IMPGMOD\Equipment\Set\BombSuit\Helmet\Data\Bomb_Helmet_damage.rvmat"}}, 
						{0.3, {"IMPGMOD\Equipment\Set\BombSuit\Helmet\Data\Bomb_Helmet_damage.rvmat"}}, 
						{0.01, {"IMPGMOD\Equipment\Set\BombSuit\Helmet\Data\Bomb_Helmet_destruct.rvmat"}}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.05;
					};
					class Blood
					{
						damage = 0.05;
					};
					class Shock
					{
						damage = 0.05;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.05;
					};
					class Blood
					{
						damage = 0.05;
					};
					class Shock
					{
						damage = 0.05;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.05;
					};
					class Blood
					{
						damage = 0.05;
					};
					class Shock
					{
						damage = 0.05;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage = 0.05;
					};
					class Blood
					{
						damage = 0.05;
					};
					class Shock
					{
						damage = 0.05;
					};
				};
			};
		};
	};
	class IMP_Helmet_BombHelm: IMP_Helmet_BombHelm_Base
	{
		scope = 2;
		hiddenSelections[] = {"camoflage","visor"};
		hiddenSelectionsTextures[] = 
		{
			"IMPGMOD\Equipment\Set\BombSuit\Helmet\Data\Helmet_Black.paa"			
		};	
	};
};