class CfgPatches
{
	class IMP_NBC_Suit
	{
		units[]=
		{
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[] = {"DZ_Data", "DZ_Characters", "DZ_Scripts","DZ_Characters_Vests"};
	};
};
class CfgVehicles
{
	class Clothing_Base;
	class NBCJacketBase;
	class NBCHoodBase;
	class NBCBootsBase;
	class NBCGloves_ColorBase;
	class NBCPantsBase;
	class IMP_NBC_Suit: NBCJacketBase
	{
		scope=2;
		RankLevel = 5;
		RadiationProtect=35;
		displayName="$STR_CfgVehicles_NBCJacketBase0";
		descriptionShort="$STR_CfgVehicles_NBCJacketBase1";
		model="IMPGMOD\Equipment\NBC\models\NBC_g.p3d";
		inventorySlot[] = {"Body","NBCJacket"};
		itemInfo[]=
		{
			"Clothing",
			"Body"
		};
		weight=1500;
		itemSize[]={2,3};
		itemsCargoSize[]={5,6};
		quickBarBonus=3;
		repairableWithKits[]={5,6};
		repairCosts[]={30,30};
		varWetMax=0.249;
		heatIsolation=0.40000001;
		soundAttType="HeavyJacket";
		hiddenSelections[]=
		{
			"camoflage", "personality"
		};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\NBC\data\Suit_ca.paa"};
		class Protection
		{
			biological=0;
			chemical=1;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=160;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\tops\Data\NBC_Jacket.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\tops\Data\NBC_Jacket.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\tops\Data\NBC_Jacket_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\tops\Data\NBC_Jacket_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\tops\Data\NBC_Jacket_destruct.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Melee
				{
					class Health
					{
						damage=0.89999998;
					};
					class Blood
					{
						damage=0.89999998;
					};
					class Shock
					{
						damage=0.89999998;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.89999998;
					};
					class Blood
					{
						damage=0.89999998;
					};
					class Shock
					{
						damage=0.89999998;
					};
				};
			};
		};
		class ClothingTypes
		{
			male="IMPGMOD\Equipment\NBC\models\NBC.p3d";
			female="IMPGMOD\Equipment\NBC\models\NBC.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="Shirt_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="Shirt_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class IMP_NBC_Suit_Black: NBCJacketBase
	{
		scope=2;
		RankLevel = 5;
		RadiationProtect=35;
		displayName="$STR_CfgVehicles_NBCJacketBase0";
		descriptionShort="$STR_CfgVehicles_NBCJacketBase1";
		model="IMPGMOD\Equipment\NBC\models\NBC_g.p3d";
		inventorySlot[] = {"Body","NBCJacket"};
		itemInfo[]=
		{
			"Clothing",
			"Body"
		};
		itemsCargoSize[]={5,6};
		weight=1500;
		itemSize[]={2,3};
		quickBarBonus=3;
		repairableWithKits[]={5,6};
		repairCosts[]={30,30};
		varWetMax=0.249;
		heatIsolation=0.40000001;
		soundAttType="HeavyJacket";
		hiddenSelections[]=
		{
			"camoflage", "personality"
		};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\NBC\data\Suit_black_ca.paa"};
		class Protection
		{
			biological=0;
			chemical=1;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=160;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\tops\Data\NBC_Jacket.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\tops\Data\NBC_Jacket.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\tops\Data\NBC_Jacket_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\tops\Data\NBC_Jacket_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\tops\Data\NBC_Jacket_destruct.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Melee
				{
					class Health
					{
						damage=0.89999998;
					};
					class Blood
					{
						damage=0.89999998;
					};
					class Shock
					{
						damage=0.89999998;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.89999998;
					};
					class Blood
					{
						damage=0.89999998;
					};
					class Shock
					{
						damage=0.89999998;
					};
				};
			};
		};
		class ClothingTypes
		{
			male="IMPGMOD\Equipment\NBC\models\NBC.p3d";
			female="IMPGMOD\Equipment\NBC\models\NBC.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="Shirt_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="Shirt_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class IMP_NBC_Hood: NBCHoodBase
	{
		scope = 2;
		RankLevel = 5;
		RadiationProtect=35;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\NBC\data\Hood_co.paa","IMPGMOD\Equipment\NBC\data\Hood_co.paa","IMPGMOD\Equipment\NBC\data\Hood_co.paa"};
	};
	class IMP_NBC_Hood_Black: NBCHoodBase
	{
		scope = 2;
		RankLevel = 5;
		RadiationProtect=35;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\NBC\data\Hood_black_co.paa","IMPGMOD\Equipment\NBC\data\Hood_black_co.paa","IMPGMOD\Equipment\NBC\data\Hood_black_co.paa"};
	};
	class IMP_NBC_Boots: NBCBootsBase
	{
		scope = 2;
		RankLevel = 5;
		RadiationProtect=35;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\NBC\data\Boots_co.paa","IMPGMOD\Equipment\NBC\data\Boots_co.paa","IMPGMOD\Equipment\NBC\data\Boots_co.paa"};
	};
	class IMP_NBC_Boots_Black: NBCBootsBase
	{
		scope = 2;
		RankLevel = 5;
		RadiationProtect=35;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\NBC\data\Boots_black_co.paa","IMPGMOD\Equipment\NBC\data\Boots_black_co.paa","IMPGMOD\Equipment\NBC\data\Boots_black_co.paa"};
	};
	class IMP_NBC_Gloves: NBCGloves_ColorBase
	{
		scope = 2;
		RankLevel = 5;
		RadiationProtect=35;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\NBC\data\Gloves_co.paa","IMPGMOD\Equipment\NBC\data\Gloves_co.paa","IMPGMOD\Equipment\NBC\data\Gloves_co.paa"};
	};
	class IMP_NBC_Gloves_Black: NBCGloves_ColorBase
	{
		scope = 2;
		RankLevel = 5;
		RadiationProtect=35;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\NBC\data\Gloves_black_co.paa","IMPGMOD\Equipment\NBC\data\Gloves_black_co.paa","IMPGMOD\Equipment\NBC\data\Gloves_black_co.paa"};
	};
	class IMP_NBC_Jacket: NBCJacketBase
	{
		scope = 2;
		RankLevel = 5;
		RadiationProtect=35;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\NBC\data\Jacket_co.paa","IMPGMOD\Equipment\NBC\data\Jacket_co.paa","IMPGMOD\Equipment\NBC\data\Jacket_co.paa"};
	};
	class IMP_NBC_Jacket_Black: NBCJacketBase
	{
		scope = 2;
		RankLevel = 5;
		RadiationProtect=35;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\NBC\data\Jacket_black_co.paa","IMPGMOD\Equipment\NBC\data\Jacket_black_co.paa","IMPGMOD\Equipment\NBC\data\Jacket_black_co.paa"};
	};
	class IMP_NBC_Pants: NBCPantsBase
	{
		scope = 2;
		RankLevel = 5;
		RadiationProtect=35;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\NBC\data\Pants_co.paa","IMPGMOD\Equipment\NBC\data\Pants_co.paa","IMPGMOD\Equipment\NBC\data\Pants_co.paa"};
	};
	class IMP_NBC_Pants_Black: NBCPantsBase
	{
		scope = 2;
		RankLevel = 5;
		RadiationProtect=35;
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\NBC\data\Pants_black_co.paa","IMPGMOD\Equipment\NBC\data\Pants_black_co.paa","IMPGMOD\Equipment\NBC\data\Pants_black_co.paa"};
	};
	class IMP_NBC_Suit_Pants: NBCPantsBase
	{
		scope=2;
		RadiationProtect=35;
		displayName="$STR_NBC_Suit_Pants";
		descriptionShort="$STR_NBC_Suit_PantsD";
		model="IMPGMOD\Equipment\NBC\models\NBC_P_g.p3d";
		ContinuouActions[] = {AT_WRING_CLOTHES};
		inventorySlot[] = {"Legs"};
		simulation = "clothing";
		itemInfo[] = {"Clothing", "Legs"};
		itemsCargoSize[]={5,6};
		weight=1500;
		itemSize[]={2,3};
		quickBarBonus=3;
		repairableWithKits[]={5,6};
		repairCosts[]={30,30};
		varWetMax=0.249;
		heatIsolation=0.40000001;
		soundAttType="HeavyJacket";
		hiddenSelections[]=
		{
			"camoflage", "personality"
		};
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\NBC\data\Suit_ca.paa"};
		class Protection
		{
			biological=0;
			chemical=1;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=160;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\tops\Data\NBC_Jacket.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\tops\Data\NBC_Jacket.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\tops\Data\NBC_Jacket_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\tops\Data\NBC_Jacket_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\tops\Data\NBC_Jacket_destruct.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Melee
				{
					class Health
					{
						damage=0.89999998;
					};
					class Blood
					{
						damage=0.89999998;
					};
					class Shock
					{
						damage=0.89999998;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.89999998;
					};
					class Blood
					{
						damage=0.89999998;
					};
					class Shock
					{
						damage=0.89999998;
					};
				};
			};
		};
		class ClothingTypes
		{
			male="IMPGMOD\Equipment\NBC\models\NBC_P_m.p3d";
			female="IMPGMOD\Equipment\NBC\models\NBC_P_m.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="Shirt_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="Shirt_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class IMP_NBC_Suit_Pants_Black: IMP_NBC_Suit_Pants
	{
		hiddenSelectionsTextures[] = {"IMPGMOD\Equipment\NBC\data\Suit_black_ca.paa"};
	};
};