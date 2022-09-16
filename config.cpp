

class CfgPatches
{
	class FOGAddonSnafu
	{
		units[] = {"AmmoBox_SNAFU_127x55mmAP_10Rnd",
				"AmmoBox_SNAFU_50Cal_10Rnd",
				"AmmoBox_SNAFU_Ammo_44_10Rnd",
				"AmmoBox_SNAFU_145Cal_10Rnd",
				"AmmoBox_SNAFU_500_SW_10Rnd",
				"AmmoBox_SNAFU_556x45mm_M855A1_20Rnd",
				"AmmoBox_SNAFU_45_70mm_20Rnd",
				"AmmoBox_SNAFU_127x55mm_10Rnd",
				"AmmoBox_SNAFU_762x25_20Rnd",
				"AmmoBox_SNAFU_5_7x28mm_20Rnd",
				"AmmoBox_SNAFU_300ACC_20Rnd",
				"AmmoBox_SNAFU_46x30_20Rnd",
				"AmmoBox_GCGN_Ammo_3006_20Rnd",
				"AmmoBox_GCGN_Ammo_408Chey_20Rnd",
				"AmmoBox_SNAFU_Ammo_338_20Rnd"};
		weapons[] = {};
		requiredVersion = 1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class CfgMods
{
	class FOGAddonSnafu
	{
		dir = "FOGAddonSnafu";
		author = "FOG";
		type = "mod";

	};
};
class CfgVehicles
{


//  SNAFU_Ammo_300ACC   done execept amounts and types and better models !!!!!!
//  SNAFU_Ammo_46x30     done
//  SNAFU_Ammo_5_7x28mm   done
//  SNAFU_Ammo_127x55mm    done
//  SNAFU_Ammo_45_70mm     done
//  SNAFU_Ammo_500_SW     done
//  SNAFU_Ammo_145Cal    done
//  SNAFU_MD_Ammo_556x45mm_M855A1   done
//  SNAFU_Ammo_762x25   done
//  SNAFU_Ammo_44    done
//  GCGN_Ammo_50Cal    done
//  SNAFU_Ammo_127x55mmAP  done


//GCGN_Ammo_3006,	done						
//GCGN_Ammo_408Chey,	done					
//SNAFU_Ammo_338,	done						
//GCGN_Ammo_762x51, 	done

	class Inventory_Base;
	class ItemBase;
	class HouseNoDestruct;
	class Box_Base;
	class AmmoBox_SNAFUBase: Box_Base
	{
		scope=0;
		displayName="AmmoBox SNAFU Ammo 46x30 20Rnd";
		descriptionShort="AmmoBox SNAFU 46x30_20Rnd";
		model="\FOGAddonSnafu\data\ammobox002.p3d";
		hiddenSelections[] = {"camo"};
		//hiddenSelectionsTextures[] = {"\FOGAddonSnafu\data\green.paa"};
		debug_ItemCategory=5;
		rotationFlags=17;
		weight=85;
		class Resources
		{
			class SNAFU_Ammo_46x30
			{
				value=20;
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1300;
				};
			};
			class GlobalArmor
			{
				class FragGrenade
				{
					class Health
					{
						damage=8;
					};
					class Blood
					{
						damage=8;
					};
					class Shock
					{
						damage=8;
					};
				};
			};
		};

		class AnimEvents
		{
			class SoundWeapon
			{
				class interact
				{
					soundset="ammoboxUnpack_SoundSet";
					id=70;
				};
			};
		};
	};


	class AmmoBox_GCGN_Ammo_762x51_20Rnd: AmmoBox_SNAFUBase
	{
		scope=2;
		displayName="AmmoBox GCGN_Ammo_762x51 20Rnd";
		descriptionShort="AmmoBox GCGN_Ammo_762x51_20Rnd";
		hiddenSelectionsTextures[] = {"\FOGAddonSnafu\data\762_51.paa"};
		debug_ItemCategory=5;
		rotationFlags=2;
		weight=100;
		class Resources
		{
			class GCGN_Ammo_762x51
			{
				value=20;
			};
		};
	};

	class AmmoBox_SNAFU_Ammo_338_20Rnd: AmmoBox_SNAFUBase
	{
		scope=2;
		displayName="AmmoBox SNAFU_Ammo_338 20Rnd";
		descriptionShort="AmmoBox SNAFU_Ammo_338_20Rnd";
		hiddenSelectionsTextures[] = {"\FOGAddonSnafu\data\338.paa"};
		debug_ItemCategory=5;
		rotationFlags=2;
		weight=100;
		class Resources
		{
			class SNAFU_Ammo_338
			{
				value=20;
			};
		};
	};

	class AmmoBox_GCGN_Ammo_408Chey_20Rnd: AmmoBox_SNAFUBase
	{
		scope=2;
		displayName="AmmoBox GCGN_Ammo_408Chey 20Rnd";
		descriptionShort="AmmoBox GCGN_Ammo_408Chey_20Rnd";
		hiddenSelectionsTextures[] = {"\FOGAddonSnafu\data\408.paa"};
		debug_ItemCategory=5;
		rotationFlags=2;
		weight=100;
		class Resources
		{
			class GCGN_Ammo_408Chey
			{
				value=20;
			};
		};
	};

	class AmmoBox_GCGN_Ammo_3006_20Rnd: AmmoBox_SNAFUBase
	{
		scope=2;
		displayName="AmmoBox GCGN_Ammo_3006 20Rnd";
		descriptionShort="AmmoBox GCGN_Ammo_3006_20Rnd";
		hiddenSelectionsTextures[] = {"\FOGAddonSnafu\data\3006.paa"};
		debug_ItemCategory=5;
		rotationFlags=2;
		weight=100;
		class Resources
		{
			class GCGN_Ammo_3006
			{
				value=20;
			};
		};
	};


	class AmmoBox_SNAFU_46x30_20Rnd: AmmoBox_SNAFUBase
	{
		scope=2;
		displayName="AmmoBox SNAFU Ammo 46x30 20Rnd";
		descriptionShort="AmmoBox SNAFU 46x30_20Rnd";
		hiddenSelectionsTextures[] = {"\FOGAddonSnafu\data\ammobox_46_30.paa"};
		debug_ItemCategory=5;
		rotationFlags=2;
		weight=100;
		class Resources
		{
			class SNAFU_Ammo_46x30
			{
				value=20;
			};
		};
	};

	class AmmoBox_SNAFU_300ACC_20Rnd: AmmoBox_SNAFUBase
	{
		scope=2;
		displayName="AmmoBox SNAFU_Ammo_300ACC_20Rnd";
		descriptionShort="AmmoBox SNAFU_Ammo_300ACC_20Rnd";
		hiddenSelectionsTextures[] = {"\FOGAddonSnafu\data\300acc.paa"};
		debug_ItemCategory=5;
		rotationFlags=2;
		weight=100;
		class Resources
		{
			class SNAFU_Ammo_300ACC
			{
				value=20;
			};
		};
	};

	class AmmoBox_SNAFU_5_7x28mm_20Rnd: AmmoBox_SNAFUBase
	{
		scope=2;
		displayName="AmmoBox SNAFU Ammo 5_7x28mm_20Rnd";
		descriptionShort="AmmoBox SNAFU 5_7x28mm_20Rnd";
		hiddenSelectionsTextures[] = {"\FOGAddonSnafu\data\ammobox.paa"};
		debug_ItemCategory=5;
		rotationFlags=2;
		weight=100;
		class Resources
		{
			class SNAFU_Ammo_5_7x28mm
			{
				value=20;
			};
		};
	};

	class AmmoBox_SNAFU_762x25_20Rnd: AmmoBox_SNAFUBase
	{
		scope=2;
		displayName="AmmoBox SNAFU Ammo 762x25_20Rnd";
		descriptionShort="AmmoBox SNAFU 762x25_20Rnd";
		hiddenSelectionsTextures[] = {"\FOGAddonSnafu\data\762_25.paa"};
		debug_ItemCategory=5;
		rotationFlags=2;
		weight=100;
		class Resources
		{
			class SNAFU_Ammo_762x25
			{
				value=20;
			};
		};
	};

	class AmmoBox_SNAFU_127x55mm_10Rnd: AmmoBox_SNAFUBase
	{
		scope=2;
		displayName="AmmoBox SNAFU Ammo 127x55mm_10Rnd";
		descriptionShort="AmmoBox SNAFU 127x55mm_10Rnd";
		hiddenSelectionsTextures[] = {"\FOGAddonSnafu\data\127_55.paa"};
		debug_ItemCategory=5;
		rotationFlags=2;
		weight=100;
		class Resources
		{
			class SNAFU_Ammo_127x55mmAP
			{
				value=10;
			};
		};
	};

	class AmmoBox_SNAFU_45_70mm_20Rnd: AmmoBox_SNAFUBase
	{
		scope=2;
		displayName="AmmoBox SNAFU Ammo 45_70mm_20Rnd";
		descriptionShort="AmmoBox SNAFU 45_70mm_20Rnd";
		hiddenSelectionsTextures[] = {"\FOGAddonSnafu\data\45_70.paa"};
		debug_ItemCategory=5;
		rotationFlags=2;
		weight=100;
		class Resources
		{
			class SNAFU_Ammo_45_70mm
			{
				value=20;
			};
		};
	};

	class AmmoBox_SNAFU_556x45mm_M855A1_20Rnd: AmmoBox_SNAFUBase
	{
		scope=2;
		displayName="AmmoBox SNAFU Ammo 556x45mm_M855A1_20Rnd";
		descriptionShort="AmmoBox 556x45mm_M855A1_20Rnd";
		hiddenSelectionsTextures[] = {"\FOGAddonSnafu\data\556_45mm_M855A1.paa"};
		debug_ItemCategory=5;
		rotationFlags=2;
		weight=100;
		class Resources
		{
			class SNAFU_MD_Ammo_556x45mm_M855A1
			{
				value=20;
			};
		};
	};

	class AmmoBox_SNAFU_500_SW_10Rnd: AmmoBox_SNAFUBase
	{
		scope=2;
		displayName="AmmoBox SNAFU Ammo 500_SW_10Rnd";
		descriptionShort="AmmoBox SNAFU 500_SW_10Rnd";
		hiddenSelectionsTextures[] = {"\FOGAddonSnafu\data\500_SW.paa"};
		debug_ItemCategory=5;
		rotationFlags=2;
		weight=100;
		class Resources
		{
			class SNAFU_Ammo_500_SW
			{
				value=10;
			};
		};
	};

	class AmmoBox_SNAFU_145Cal_10Rnd: AmmoBox_SNAFUBase
	{
		scope=2;
		displayName="AmmoBox SNAFU Ammo 145Cal_10Rnd";
		descriptionShort="AmmoBox SNAFU 145Cal_10Rnd";
		hiddenSelectionsTextures[] = {"\FOGAddonSnafu\data\145Cal.paa"};
		debug_ItemCategory=5;
		rotationFlags=2;
		weight=100;
		class Resources
		{
			class SNAFU_Ammo_145Cal
			{
				value=10;
			};
		};
	};

	class AmmoBox_SNAFU_Ammo_44_10Rnd: AmmoBox_SNAFUBase
	{
		scope=2;
		displayName="AmmoBox SNAFU Ammo Ammo_44_10Rnd";
		descriptionShort="AmmoBox SNAFU Ammo_44_10Rnd";
		hiddenSelectionsTextures[] = {"\FOGAddonSnafu\data\Ammo_44.paa"};
		debug_ItemCategory=5;
		rotationFlags=2;
		weight=100;
		class Resources
		{
			class SNAFU_Ammo_44
			{
				value=10;
			};
		};
	};

	class AmmoBox_SNAFU_50Cal_10Rnd: AmmoBox_SNAFUBase
	{
		scope=2;
		displayName="AmmoBox SNAFU 50Cal_10Rnd";
		descriptionShort="AmmoBox SNAFU 50Cal_10Rnd";
		hiddenSelectionsTextures[] = {"\FOGAddonSnafu\data\50Cal.paa"};
		debug_ItemCategory=5;
		rotationFlags=2;
		weight=100;
		class Resources
		{
			class GCGN_Ammo_50Cal
			{
				value=10;
			};
		};
	};


	class AmmoBox_SNAFU_127x55mmAP_10Rnd: AmmoBox_SNAFUBase
	{
		scope=2;
		displayName="AmmoBox SNAFU 127x55mmAP_10Rnd";
		descriptionShort="AmmoBox SNAFU 127x55mmAP_10Rnd";
		hiddenSelectionsTextures[] = {"\FOGAddonSnafu\data\127_55mmAP.paa"};
		debug_ItemCategory=5;
		rotationFlags=2;
		weight=100;
		class Resources
		{
			class SNAFU_Ammo_127x55mmAP
			{
				value=10;
			};
		};
	};

};

