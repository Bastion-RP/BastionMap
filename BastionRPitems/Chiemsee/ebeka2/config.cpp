////////////////////////////////////////////////////////////////////
//DeRap: P:\BastionRPitems\Chiemsee\ebeka2\config.bin
//Produced from mikero's Dos Tools Dll version 7.70
//https://mikero.bytex.digital/Downloads
//'now' is Mon Aug 10 21:28:54 2020 : 'file' last modified on Mon Aug 10 21:28:54 2020
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class Ludwig_OBJCET
	{
		units[] = {"napfz_silo_01"};
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
		model = "BastionRPitems\Chiemsee\ebeka2\edekaschild.p3d";
	};
};
