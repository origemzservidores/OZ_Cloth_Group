#define _ARMA_

class CfgPatches
{
	class IMP_Pants_Bomb
	{
		units[] = {""};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data", "DZ_Characters", "DZ_Scripts"};
	};
};
class CfgVehicles
{
	class Clothing_Base;
	class Clothing: Clothing_Base
	{
	};
	class IMP_Pants_BombPants_Base: Clothing
	{
		scope = 0;
		RankLevel = 6;
		displayName = "$STR_IMP_BSuitPants";
		descriptionShort = "$STR_IMP_BSuitPantsD";
		model = "IMPGMOD\Equipment\Set\BombSuit\Pants\models\Bomb_Suit_Pants_G.p3d";
		inventorySlot[] = {"Legs"};
		itemInfo[] = {"Clothing","Legs"};
		weight = 12000;
		itemSize[] = {10, 10};
		quickBarBonus = 10;
		absorbency = 0.1;
		heatIsolation = 0.1;
		repairableWithKits[] = {3};
		repairCosts[] = {100.0};
		hiddenSelections[] = {"camoflage"};
		class ClothingTypes
		{
			male = "IMPGMOD\Equipment\Set\BombSuit\Pants\models\Bomb_Suit_Pants.p3d";
			female = "IMPGMOD\Equipment\Set\BombSuit\Pants\models\Bomb_Suit_Pants.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=350;
					healthLevels[] = 
					{
						{1.0, {"IMPGMOD\Equipment\Set\BombSuit\Vest\Data\Bomb_Vest.rvmat"}}, 
						{0.7, {"IMPGMOD\Equipment\Set\BombSuit\Vest\Data\Bomb_Vest.rvmat"}}, 
						{0.5, {"IMPGMOD\Equipment\Set\BombSuit\Vest\Data\Bomb_Vest_damage.rvmat"}}, 
						{0.3, {"IMPGMOD\Equipment\Set\BombSuit\Vest\Data\Bomb_Vest_damage.rvmat"}}, 
						{0.01, {"IMPGMOD\Equipment\Set\BombSuit\Vest\Data\Bomb_Vest_destruct.rvmat"}}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0.1;
					};
					class Blood
					{
						damage=0.1;
					};
					class Shock
					{
						damage=0.1;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.1;
					};
					class Blood
					{
						damage=0.1;
					};
					class Shock
					{
						damage=0.1;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.1;
					};
					class Blood
					{
						damage=0.1;
					};
					class Shock
					{
						damage=0.1;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0.1;
					};
					class Blood
					{
						damage=0.1;
					};
					class Shock
					{
						damage=0.1;
					};
				};
			};
		};
	};
	class IMP_Pants_BombPants_Tan: IMP_Pants_BombPants_Base
	{
		scope = 2;
		hiddenSelections[] = {"camoflage"};
		hiddenSelectionsTextures[] = {
			"IMPGMOD\Equipment\Set\BombSuit\Vest\Data\Vest_Tan_co.paa"
			
		};	
	};
	class IMP_Pants_BombPants_Green: IMP_Pants_BombPants_Base
	{
		scope = 2;
		hiddenSelections[] = {"camoflage"};
		hiddenSelectionsTextures[] = {
			"IMPGMOD\Equipment\Set\BombSuit\Vest\Data\Vest_Green_co.paa"
			
		};	
	};
};