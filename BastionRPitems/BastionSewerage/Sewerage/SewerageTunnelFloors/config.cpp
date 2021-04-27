class CfgPatches
{
	class BastionRPitems_BastionSewerage_Sewerage_SewerageTunnelFloors
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
	
// - SewerageTunnelFloor 01
	class BRP_SewerageTunnelFloor_01: HouseNoDestruct
	{
		scope = 1;
		model = "BastionRPitems\BastionSewerage\Sewerage\SewerageTunnelFloors\SewerageTunnelFloor01.p3d";
		bounding="boundingmax";
	};
	
// - SewerageTunnel2Floors 01
	class BRP_SewerageTunnel2Floors_01: HouseNoDestruct
	{
		scope = 1;
		model = "BastionRPitems\BastionSewerage\Sewerage\SewerageTunnelFloors\SewerageTunnel2Floors01.p3d";
		bounding="boundingmax";
	};
	
// - SewerageTunnel2Floors 02
	class BRP_SewerageTunnel2Floors_02: HouseNoDestruct
	{
		scope = 1;
		model = "BastionRPitems\BastionSewerage\Sewerage\SewerageTunnelFloors\SewerageTunnel2Floors02.p3d";
		bounding="boundingmax";
	};
	
// - SewerageTunnel2Floors 03
	class BRP_SewerageTunnel2Floors_03: HouseNoDestruct
	{
		scope = 1;
		model = "BastionRPitems\BastionSewerage\Sewerage\SewerageTunnelFloors\SewerageTunnel2Floors03.p3d";
		bounding="boundingmax";
	};
	
// - SewerageTunnel2Floors 04
	class BRP_SewerageTunnel2Floors_04: HouseNoDestruct
	{
		scope = 1;
		model = "BastionRPitems\BastionSewerage\Sewerage\SewerageTunnelFloors\SewerageTunnel2Floors04.p3d";
		bounding="boundingmax";
	};
	
// - SewerageTunnel2Floors 05
	class BRP_SewerageTunnel2Floors_05: HouseNoDestruct
	{
		scope = 1;
		model = "BastionRPitems\BastionSewerage\Sewerage\SewerageTunnelFloors\SewerageTunnel2Floors05.p3d";
		bounding="boundingmax";
	};

};