////////////////////////////////////////////////////////////////////
//DeRap: P:\BastionRPitems\Chiemsee\hanged\config.bin
//Produced from mikero's Dos Tools Dll version 7.70
//https://mikero.bytex.digital/Downloads
//'now' is Mon Aug 10 21:40:01 2020 : 'file' last modified on Mon Aug 10 21:40:01 2020
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class lugge_animated_hanged
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class CfgVehicles
{
	class HouseNoDestruct;
	class Land_hanged: HouseNoDestruct
	{
		scope = 1;
		displayName = "hanged";
		model = "BastionRPitems\Chiemsee\hanged\hanged.p3d";
	};
	class Land_hanged_color1: HouseNoDestruct
	{
		scope = 1;
		displayName = "hanged_color1";
		model = "BastionRPitems\Chiemsee\hanged\hanged_color1.p3d";
	};
	class Land_hanged_color2: HouseNoDestruct
	{
		scope = 1;
		displayName = "hanged_color2";
		model = "BastionRPitems\Chiemsee\hanged\hanged_color2.p3d";
	};
	class Land_hanged_color3: HouseNoDestruct
	{
		scope = 1;
		displayName = "hanged_color3";
		model = "BastionRPitems\Chiemsee\hanged\hanged_color3.p3d";
	};
	class Land_hanged_color4: HouseNoDestruct
	{
		scope = 1;
		displayName = "hanged_color4";
		model = "BastionRPitems\Chiemsee\hanged\hanged_color4.p3d";
	};
};
