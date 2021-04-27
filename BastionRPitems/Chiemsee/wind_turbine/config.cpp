////////////////////////////////////////////////////////////////////
//DeRap: P:\BastionRPitems\Chiemsee\wind_turbine\config.bin
//Produced from mikero's Dos Tools Dll version 7.70
//https://mikero.bytex.digital/Downloads
//'now' is Mon Aug 10 21:53:12 2020 : 'file' last modified on Mon Aug 10 21:53:12 2020
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class zeroy_custom_buildings
	{
		units[] = {"Land_zeroy_wind_turbine"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class CfgVehicles
{
	class HouseNoDestruct;
	class Land_zeroy_wind_turbine: HouseNoDestruct
	{
		scope = 2;
		displayName = "Wind Turbine";
		model = "BastionRPitems\Chiemsee\wind_turbine\zeroy_wind_turbine.p3d";
	};
};
