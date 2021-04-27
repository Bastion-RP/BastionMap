class CfgPatches
{
	class BastionRPitems_BastionSewerage_SmallTunnel_SmallTunnelBlock
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
	
// - SmallTunnelBlock01 Divider
	class BRP_Sewerage_SmallTunnel_01_Divider: HouseNoDestruct
	{
		scope = 1;
		model = "BastionRPitems\BastionSewerage\SmallTunnel\SmallTunnelBlock\SmallTunnelBlock01_Divider.p3d";
		bounding="boundingmax";
	};
	
// - SmallTunnelBlock02 Divider
	class BRP_Sewerage_SmallTunnel_02_Divider: HouseNoDestruct
	{
		scope = 1;
		model = "BastionRPitems\BastionSewerage\SmallTunnel\SmallTunnelBlock\SmallTunnelBlock02_Divider.p3d";
		bounding="boundingmax";
	};
	
// - SmallTunnelBlock03 Doorway
	class BRP_Sewerage_SmallTunnel_03_Doorway: HouseNoDestruct
	{
		scope = 1;
		model = "BastionRPitems\BastionSewerage\SmallTunnel\SmallTunnelBlock\SmallTunnelBlock03_Doorway.p3d";
		bounding="boundingmax";
	};
	
// - SmallTunnelBlock04 Metal Doorway
	class BRP_Sewerage_SmallTunnel_04_MetalDoorway: HouseNoDestruct
	{
		scope = 1;
		model = "BastionRPitems\BastionSewerage\SmallTunnel\SmallTunnelBlock\SmallTunnelBlock04_MetalDoorway.p3d";
		bounding="boundingmax";
	};
	
// - SmallTunnelBlock05 Metal Doorway Wall
	class BRP_Sewerage_SmallTunnel_05_MetalWall: HouseNoDestruct
	{
		scope = 1;
		model = "BastionRPitems\BastionSewerage\SmallTunnel\SmallTunnelBlock\SmallTunnelBlock05_MetalWall.p3d";
		bounding="boundingmax";
	};
	
// - SmallTunnelBlock06 Divider
	class BRP_Sewerage_SmallTunnel_06_Divider: HouseNoDestruct
	{
		scope = 1;
		model = "BastionRPitems\BastionSewerage\SmallTunnel\SmallTunnelBlock\SmallTunnelBlock06_Divider.p3d";
		bounding="boundingmax";
	};
	
// - SmallTunnelBlock07 Concrete Doorway
	class BRP_Sewerage_SmallTunnel_07_ConcreteDoorway: HouseNoDestruct
	{
		scope = 1;
		model = "BastionRPitems\BastionSewerage\SmallTunnel\SmallTunnelBlock\SmallTunnelBlock07_ConcreteDoorway.p3d";
		bounding="boundingmax";
	};
};