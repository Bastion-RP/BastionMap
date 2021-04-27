class CfgPatches
{
	class BastionRPitems_BastionSewerage_Sewerage_SewerageTunnelColumn
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
	
// - SewerageTunnelColumn 01
	class BRP_SewerageTunnelColumn_01: HouseNoDestruct
	{
		scope = 1;
		model = "BastionRPitems\BastionSewerage\Sewerage\SewerageTunnelColumn\SewerageTunnelColumn01.p3d";
		bounding="boundingmax";
	};
	
// - SewerageTunnelColumn 02
	class BRP_SewerageTunnelColumn_02: HouseNoDestruct
	{
		scope = 1;
		model = "BastionRPitems\BastionSewerage\Sewerage\SewerageTunnelColumn\SewerageTunnelColumn02.p3d";
		bounding="boundingmax";
	};
	
// - SewerageTunnelColumn 03
	class BRP_SewerageTunnelColumn_03: HouseNoDestruct
	{
		scope = 1;
		model = "BastionRPitems\BastionSewerage\Sewerage\SewerageTunnelColumn\SewerageTunnelColumn03.p3d";
		bounding="boundingmax";
	};
	
// - SewerageTunnelColumn 04
	class BRP_SewerageTunnelColumn_04: HouseNoDestruct
	{
		scope = 1;
		model = "BastionRPitems\BastionSewerage\Sewerage\SewerageTunnelColumn\SewerageTunnelColumn04.p3d";
		bounding="boundingmax";
	};
};