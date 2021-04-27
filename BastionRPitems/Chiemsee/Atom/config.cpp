////////////////////////////////////////////////////////////////////
//DeRap: P:\BastionRPitems\Chiemsee\Atom\config.bin
//Produced from mikero's Dos Tools Dll version 7.70
//https://mikero.bytex.digital/Downloads
//'now' is Mon Aug 10 20:21:23 2020 : 'file' last modified on Mon Aug 10 20:21:23 2020
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class Ludwig_OBJCET
	{
		units[] = {"atom"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Surfaces"};
	};
};
class CfgVehicles
{
	class HouseNoDestruct;
	class atom: HouseNoDestruct
	{
		scope = 2;
		model = "BastionRPitems\Chiemsee\Atom\atomkraftwerkkueler.p3d";
	};
};
