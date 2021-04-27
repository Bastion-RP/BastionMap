////////////////////////////////////////////////////////////////////
//DeRap: P:\BastionRPitems\Chiemsee\lug_water\config.bin
//Produced from mikero's Dos Tools Dll version 7.70
//https://mikero.bytex.digital/Downloads
//'now' is Mon Aug 10 21:47:10 2020 : 'file' last modified on Mon Aug 10 21:47:10 2020
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class Ludwig_OBJCET
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
	class napfz_silo_01: HouseNoDestruct
	{
		scope = 1;
		model = "BastionRPitems\Chiemsee\lug_water\pfuetzenwasser.p3d";
	};
	class napfz_silo_02: HouseNoDestruct
	{
		scope = 1;
		model = "BastionRPitems\Chiemsee\lug_water\pfuetzenwasser_02.p3d";
	};
	class napfz_silo_03: HouseNoDestruct
	{
		scope = 1;
		model = "BastionRPitems\Chiemsee\lug_water\pfueze.p3d";
	};
};
