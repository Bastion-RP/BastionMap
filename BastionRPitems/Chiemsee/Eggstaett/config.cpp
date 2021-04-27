////////////////////////////////////////////////////////////////////
//DeRap: P:\BastionRPitems\Chiemsee\Eggstaett\config.bin
//Produced from mikero's Dos Tools Dll version 7.70
//https://mikero.bytex.digital/Downloads
//'now' is Mon Aug 10 22:06:47 2020 : 'file' last modified on Mon Aug 10 22:06:47 2020
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class Simon_Object
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Structures_Signs","DZ_Structures","DZ_Structures_Furniture"};
	};
};
class CfgVehicles
{
	class HouseNoDestruct;
	class sign: HouseNoDestruct
	{
		scope = 1;
		displayName = "signna";
		model = "BastionRPitems\Chiemsee\Eggstaett\Eggstaett_Sign1.p3d";
	};
};
