class CfgPatches
{
	class BastionRPitems_BastionSewerage_Sewerage_SewerageTunnelArch
	{
		units[]={};
		weapons[]={};
		requiredVersion=1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Surfaces"
		};
		author="Swade_93";
		name="BastionRPitems";
	};
};
class CfgVehicles
{
	class HouseNoDestruct;
	
// - SewerageTunnelArch 01
	class BRP_SewerageTunnelArch_01: HouseNoDestruct
	{
		scope = 1;
		model = "BastionRPitems\BastionSewerage\Sewerage\SewerageTunnelArch\SewerageTunnelArch01.p3d";
		bounding="boundingmax";
	};
	
// - SewerageTunnelArch 02
	class BRP_SewerageTunnelArch_02: HouseNoDestruct
	{
		scope = 1;
		model = "BastionRPitems\BastionSewerage\Sewerage\SewerageTunnelArch\SewerageTunnelArch02.p3d";
		bounding="boundingmax";
	};
	
// - SewerageTunnelArch 03
	class BRP_SewerageTunnelArch_03: HouseNoDestruct
	{
		scope = 1;
		model = "BastionRPitems\BastionSewerage\Sewerage\SewerageTunnelArch\SewerageTunnelArch03.p3d";
		bounding="boundingmax";
	};
	
// - SewerageTunnelArch 04
	class BRP_SewerageTunnelArch_04: HouseNoDestruct
	{
		scope = 1;
		model = "BastionRPitems\BastionSewerage\Sewerage\SewerageTunnelArch\SewerageTunnelArch04.p3d";
		bounding="boundingmax";
	};
};