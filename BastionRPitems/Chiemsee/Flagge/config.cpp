////////////////////////////////////////////////////////////////////
//DeRap: P:\BastionRPitems\Chiemsee\Flagge\config.bin
//Produced from mikero's Dos Tools Dll version 7.70
//https://mikero.bytex.digital/Downloads
//'now' is Mon Aug 10 21:33:38 2020 : 'file' last modified on Mon Aug 10 21:33:38 2020
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class flagge
	{
		units[] = {"flagge"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Surfaces","DZ_Structures_Furniture"};
		author[] = {"Lugge"};
	};
};
class CfgVehicles
{
	class HouseNoDestruct;
	class flagge: HouseNoDestruct
	{
		scope = 2;
		model = "BastionRPitems\Chiemsee\Flagge\FlaggeBayern_01.p3d";
	};
};
