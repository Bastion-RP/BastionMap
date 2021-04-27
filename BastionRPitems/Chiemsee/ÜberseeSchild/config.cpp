////////////////////////////////////////////////////////////////////
//DeRap: P:\BastionRPitems\Chiemsee\ÜberseeSchild\config.bin
//Produced from mikero's Dos Tools Dll version 7.70
//https://mikero.bytex.digital/Downloads
//'now' is Mon Aug 10 21:57:14 2020 : 'file' last modified on Mon Aug 10 21:57:14 2020
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class Ludwig_OBJCET
	{
		units[] = {"Road_Sign1"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Surfaces"};
	};
};
class CfgVehicles
{
	class HouseNoDestruct;
	class Road_Sign1: HouseNoDestruct
	{
		scope = 2;
		model = "BastionRPitems\Chiemsee\ÜberseeSchild\Road_Sign1.p3d";
	};
};
