////////////////////////////////////////////////////////////////////
//DeRap: P:\BastionRPitems\Chiemsee\Spawnpoints\config.bin
//Produced from mikero's Dos Tools Dll version 7.70
//https://mikero.bytex.digital/Downloads
//'now' is Mon Aug 10 21:52:21 2020 : 'file' last modified on Mon Aug 10 21:52:21 2020
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class Spawnpoint_TEST
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Surfaces","DZ_Structures_Furniture"};
		author[] = {"Lugge"};
	};
};
class CfgVehicles
{
	class HouseNoDestruct;
	class Land_Spawnpoint_Medic: HouseNoDestruct
	{
		scope = 1;
		model = "BastionRPitems\Chiemsee\Spawnpoints\Spawnpoint_Medic.p3d";
	};
	class Land_Spawnpoint_Industrial: HouseNoDestruct
	{
		scope = 1;
		model = "BastionRPitems\Chiemsee\Spawnpoints\Spawnpoint_Industrial.p3d";
	};
	class Land_Spawnpoint_Coast: HouseNoDestruct
	{
		scope = 1;
		model = "BastionRPitems\Chiemsee\Spawnpoints\Spawnpoint_Coast.p3d";
	};
	class Land_Spawnpoint_Crafting: HouseNoDestruct
	{
		scope = 1;
		model = "BastionRPitems\Chiemsee\Spawnpoints\Spawnpoint_Crafting.p3d";
	};
	class Land_Spawnpoint_CrashSide: HouseNoDestruct
	{
		scope = 1;
		model = "BastionRPitems\Chiemsee\Spawnpoints\Spawnpoint_CrashSide.p3d";
	};
	class Land_Spawnpoint_SoftMilitary: HouseNoDestruct
	{
		scope = 1;
		model = "BastionRPitems\Chiemsee\Spawnpoints\Spawnpoint_SoftMilitary.p3d";
	};
	class Land_Spawnpoint_SpecialMilitary: HouseNoDestruct
	{
		scope = 1;
		model = "BastionRPitems\Chiemsee\Spawnpoints\Spawnpoint_SpecialMilitary.p3d";
	};
};
