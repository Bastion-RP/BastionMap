////////////////////////////////////////////////////////////////////
//DeRap: P:\BastionRPitems\Chiemsee\Segelboot\config.bin
//Produced from mikero's Dos Tools Dll version 7.70
//https://mikero.bytex.digital/Downloads
//'now' is Mon Aug 10 21:52:06 2020 : 'file' last modified on Mon Aug 10 21:52:06 2020
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class lug_boot
	{
		units[] = {"Land_boot_lug","Land_Elektroboot"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Surfaces","DZ_Structures_Furniture"};
		author[] = {"Lugge"};
	};
};
class CfgVehicles
{
	class HouseNoDestruct;
	class Land_boot_lug: HouseNoDestruct
	{
		scope = 2;
		model = "BastionRPitems\Chiemsee\Segelboot\boot_lug.p3d";
	};
	class Land_Elektroboot: HouseNoDestruct
	{
		scope = 2;
		model = "BastionRPitems\Chiemsee\Segelboot\Elektroboot.p3d";
	};
};
