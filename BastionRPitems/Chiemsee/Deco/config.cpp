////////////////////////////////////////////////////////////////////
//DeRap: P:\BastionRPitems\Chiemsee\Deco\config.bin
//Produced from mikero's Dos Tools Dll version 7.70
//https://mikero.bytex.digital/Downloads
//'now' is Mon Aug 10 21:18:25 2020 : 'file' last modified on Mon Aug 10 21:18:25 2020
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
	class DeadBody: HouseNoDestruct
	{
		scope = 1;
		model = "BastionRPitems\Chiemsee\Deco\DeadBody.p3d";
	};
};
