////////////////////////////////////////////////////////////////////
//DeRap: P:\BastionRPitems\Chiemsee\Hausholz\config.bin
//Produced from mikero's Dos Tools Dll version 7.70
//https://mikero.bytex.digital/Downloads
//'now' is Mon Aug 10 21:42:16 2020 : 'file' last modified on Mon Aug 10 21:42:16 2020
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class house_holz_lug
	{
		units[] = {"Land_house_holz_lug"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Surfaces","DZ_Structures_Furniture"};
		author[] = {"Lugge"};
	};
};
class CfgVehicles
{
	class HouseNoDestruct;
	class Land_house_holz_lug: HouseNoDestruct
	{
		scope = 2;
		model = "BastionRPitems\Chiemsee\Hausholz\house_holz_finish_lug.p3d";
	};
};
