////////////////////////////////////////////////////////////////////
//DeRap: P:\BastionRPitems\Chiemsee\street\config.bin
//Produced from mikero's Dos Tools Dll version 7.70
//https://mikero.bytex.digital/Downloads
//'now' is Mon Aug 10 21:52:47 2020 : 'file' last modified on Mon Aug 10 21:52:47 2020
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class strasenblockade
	{
		units[] = {"strasenblockade"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Surfaces","DZ_Structures_Furniture"};
		author[] = {"Lugge"};
	};
};
class CfgVehicles
{
	class HouseNoDestruct;
	class strasenblockade: HouseNoDestruct
	{
		scope = 2;
		model = "BastionRPitems\Chiemsee\street\strasenblockade.p3d";
	};
};
