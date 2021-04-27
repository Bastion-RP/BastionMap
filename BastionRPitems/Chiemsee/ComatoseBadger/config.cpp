////////////////////////////////////////////////////////////////////
//DeRap: P:\BastionRPitems\Chiemsee\ComatoseBadger\config.bin
//Produced from mikero's Dos Tools Dll version 7.70
//https://mikero.bytex.digital/Downloads
//'now' is Mon Aug 10 21:20:58 2020 : 'file' last modified on Mon Aug 10 21:20:58 2020
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class napfz_structures
	{
		units[] = {"napfz_silo_01","napfz_silo_02","napfz_silo_03"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Surfaces"};
	};
};
class CfgVehicles
{
	class HouseNoDestruct;
	class napfz_silo_01: HouseNoDestruct
	{
		scope = 2;
		model = "BastionRPitems\Chiemsee\ComatoseBadger\silo_01.p3d";
	};
	class napfz_silo_02: HouseNoDestruct
	{
		scope = 2;
		model = "BastionRPitems\Chiemsee\ComatoseBadger\silo_02.p3d";
	};
	class napfz_silo_03: HouseNoDestruct
	{
		scope = 2;
		model = "BastionRPitems\Chiemsee\ComatoseBadger\silo_03.p3d";
	};
};
