////////////////////////////////////////////////////////////////////
//DeRap: P:\BastionRPitems\Chiemsee\Bunker\config.bin
//Produced from mikero's Dos Tools Dll version 7.70
//https://mikero.bytex.digital/Downloads
//'now' is Mon Aug 10 20:20:09 2020 : 'file' last modified on Mon Aug 10 20:20:09 2020
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class Smallbunker_open
	{
		units[] = {"land_Smallbunker_open"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Surfaces","DZ_Structures_Furniture"};
		author[] = {"Lugge"};
	};
};
class CfgVehicles
{
	class HouseNoDestruct;
	class land_Smallbunker_open: HouseNoDestruct
	{
		scope = 2;
		model = "\BastionRPitems\Chiemsee\Bunker\Smallbunker_open.p3d";
	};
};
