////////////////////////////////////////////////////////////////////
//DeRap: BastionRPitems\config.bin
//Produced from mikero's Dos Tools Dll version 7.26
//https://bytex.market/products/item/weodpphdknnzm70o0h8q/Mikero%27s%20Dos%20Tools
//'now' is Fri Jul 19 01:04:59 2019 : 'file' last modified on Sun Jul 14 06:31:11 2019
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class BastionRP_Items
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Surfaces"};
	};
};
class CfgVehicles
{
	class HouseNoDestruct;
	class Land_BastionRP_sewer_straight_16m: HouseNoDestruct
	{
		scope = 2;
		displayName = "Sewer 16m";
		descriptionShort = "Sewer Tunnel Section 16m";
		model = "\BastionRPitems\Sewer\BastionRP_sewer_straight_16m.p3d";
	};
	class Land_BastionRP_sewer_straight_16m_nopillar: HouseNoDestruct
	{
		scope = 2;
		displayName = "Sewer 16m";
		descriptionShort = "Sewer Tunnel Section 16m";
		model = "\BastionRPitems\Sewer\BastionRP_sewer_straight_16m_nopillar.p3d";
	};
	class Land_BastionRP_sewer_T: HouseNoDestruct
	{
		scope = 2;
		displayName = "Sewer T";
		descriptionShort = "Sewer Tunnel T Section";
		model = "\BastionRPitems\Sewer\BastionRP_sewer_T.p3d";
	};
	class Land_BastionRP_sewer_T_b: HouseNoDestruct
	{
		scope = 2;
		displayName = "Sewer T B";
		descriptionShort = "Sewer Tunnel T B Section";
		model = "\BastionRPitems\Sewer\BastionRP_sewer_T_b.p3d";
	};
	class Land_BastionRP_sewer_T_nopillar: HouseNoDestruct
	{
		scope = 2;
		displayName = "Sewer T";
		descriptionShort = "Sewer Tunnel T Section";
		model = "\BastionRPitems\Sewer\BastionRP_sewer_T_nopillar.p3d";
	};
	class Land_BastionRP_sewer_X: HouseNoDestruct
	{
		scope = 2;
		displayName = "Sewer X";
		descriptionShort = "Sewer Tunnel X Section";
		model = "\BastionRPitems\Sewer\BastionRP_sewer_X.p3d";
	};
	class Land_BastionRP_sewer_X_nopillar: HouseNoDestruct
	{
		scope = 2;
		displayName = "Sewer X";
		descriptionShort = "Sewer Tunnel X Section";
		model = "\BastionRPitems\Sewer\BastionRP_sewer_X_nopillar.p3d";
	};
	class BastionRP_sewer_water: HouseNoDestruct
	{
		scope = 2;
		displayName = "Sewer water";
		model = "\BastionRPitems\Sewer\BastionRP_sewer_water_full.p3d";
	};
	class BastionRP_sewer_water_long: HouseNoDestruct
	{
		scope = 2;
		displayName = "Sewer water";
		model = "\BastionRPitems\Sewer\BastionRP_sewer_water_long.p3d";
	};
	class Land_BastionRP_sewer_small_6m: HouseNoDestruct
	{
		scope = 2;
		displayName = "Sewer Small 6m";
		model = "\BastionRPitems\Sewer\BastionRP_sewer_small_6m.p3d";
	};
	class Land_BastionRP_sewer_room: HouseNoDestruct
	{
		scope = 2;
		displayName = "Sewer Room";
		model = "\BastionRPitems\Sewer\Room\BastionRP_sewer_room.p3d";
	};
	class Land_BastionRP_sewer_exit: HouseNoDestruct
	{
		scope = 2;
		displayName = "Sewer Exit";
		model = "\BastionRPitems\Sewer\Exit\BastionRP_sewer_exit.p3d";
	};
	class BastionRP_sewer_catwalk: HouseNoDestruct
	{
		scope = 2;
		displayName = "Sewer water";
		model = "\BastionRPitems\Sewer\BastionRP_sewer_catwalk.p3d";
	};
	class Land_BastionRP_sewer_cap_nodoor: HouseNoDestruct
	{
		scope = 2;
		displayName = "Sewer Wall End";
		model = "\BastionRPitems\Sewer\BastionRP_sewer_cap_nodoor.p3d";
	};
	class Land_BastionRP_sewer_cap_door_left: HouseNoDestruct
	{
		scope=2;
		displayName = "Door Sewer Left"; // Name in editor
		model="\BastionRPitems\Sewer\BastionRP_sewer_cap_door_left.p3d";
		class Doors
		{
			class Doors1
			{
				displayName="Sewer Door";
				component="Doors1";
				soundPos="doors1_axis";
				animPeriod=1;
				initPhase=0;
				initOpened=0;
				armor=0.2;
				soundOpen = "doorMetalSmallOpen";
				soundClose = "doorMetalSmallClose";
				soundLocked = "doorMetalSmallRattle";
				soundOpenABit = "doorMetalSmallOpenABit";
			};
		};
	};
	class Land_BastionRP_sewer_side_door: HouseNoDestruct
	{
		scope=2;
		displayName = "Door Sewer Left"; // Name in editor
		model="\BastionRPitems\Sewer\BastionRP_sewer_side_door.p3d";
		class Doors
		{
			class Doors1
			{
				displayName="Sewer Door Side Left";
				component="Doors1";
				soundPos="doors1_axis";
				animPeriod=1;
				initPhase=0;
				initOpened=0;
				armor=0.2;
				soundOpen = "doorMetalSmallOpen";
				soundClose = "doorMetalSmallClose";
				soundLocked = "doorMetalSmallRattle";
				soundOpenABit = "doorMetalSmallOpenABit";
			};
		};
	};
	class Land_BastionRP_sewer_side_door_right: HouseNoDestruct
	{
		scope=2;
		displayName = "Door Sewer Right"; // Name in editor
		model="\BastionRPitems\Sewer\BastionRP_sewer_side_door_right.p3d";
		class Doors
		{
			class Doors1
			{
				displayName="Sewer Door Side Right";
				component="Doors1";
				soundPos="doors1_axis";
				animPeriod=1;
				initPhase=0;
				initOpened=0;
				armor=0.2;
				soundOpen = "doorMetalSmallOpen";
				soundClose = "doorMetalSmallClose";
				soundLocked = "doorMetalSmallRattle";
				soundOpenABit = "doorMetalSmallOpenABit";
			};
		};
	};
};

