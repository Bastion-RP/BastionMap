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
	class BastionRP_SidewalkClear_noLC: HouseNoDestruct
	{
		scope = 2;
		displayName = "SideWalk no LC";
		descriptionShort = "SideWalk no LC";
		model = "\BastionRPitems\Sidewalks\SidewalkClear_noLC.p3d";
	};
	class BastionRP_SidewalkClearLong_noLC: HouseNoDestruct
	{
		scope = 2;
		displayName = "SideWalk no LC";
		descriptionShort = "SideWalk no LC";
		model = "\BastionRPitems\Sidewalks\SidewalkClearLong_noLC.p3d";
	};
	class BastionRP_SidewalkClearMiddle_noLC: HouseNoDestruct
	{
		scope = 2;
		displayName = "SideWalk no LC";
		descriptionShort = "SideWalk no LC";
		model = "\BastionRPitems\Sidewalks\SidewalkClearMiddle_noLC.p3d";
	};
	class BastionRP_SidewalkClearShort_noLC: HouseNoDestruct
	{
		scope = 2;
		displayName = "SideWalk no LC";
		descriptionShort = "SideWalk no LC";
		model = "\BastionRPitems\Sidewalks\SidewalkClearShort_noLC.p3d";
	};
	class BastionRP_SidewalkCorner_noLC: HouseNoDestruct
	{
		scope = 2;
		displayName = "SideWalk no LC";
		descriptionShort = "SideWalk no LC";
		model = "\BastionRPitems\Sidewalks\SidewalkCorner_noLC.p3d";
	};
	class BastionRP_SidewalkCrossing_noLC: HouseNoDestruct
	{
		scope = 2;
		displayName = "SideWalk no LC";
		descriptionShort = "SideWalk no LC";
		model = "\BastionRPitems\Sidewalks\SidewalkCrossing_noLC.p3d";
	};
	class BastionRP_SidewalkCrossingT_noLC: HouseNoDestruct
	{
		scope = 2;
		displayName = "SideWalk no LC";
		descriptionShort = "SideWalk no LC";
		model = "\BastionRPitems\Sidewalks\SidewalkCrossingT_noLC.p3d";
	};
};

