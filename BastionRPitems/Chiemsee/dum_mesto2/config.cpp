////////////////////////////////////////////////////////////////////
//DeRap: P:\BastionRPitems\Chiemsee\dum_mesto2\config.bin
//Produced from mikero's Dos Tools Dll version 7.70
//https://mikero.bytex.digital/Downloads
//'now' is Thu Aug 13 00:45:05 2020 : 'file' last modified on Thu Aug 13 00:45:05 2020
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
	class Dum_mesto2: HouseNoDestruct
	{
		scope = 1;
		model = "BastionRPitems\Chiemsee\dum_mesto2\Dum_mesto2.p3d";
	};
};
