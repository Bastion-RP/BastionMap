class CfgPatches
{
	class BastionRPitems_BastionSewerage_SmallTunnel
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
	
// - SmallTunnel01 Straight
	class BRP_Sewerage_SmallTunnel_01_Straight: HouseNoDestruct
	{
		scope = 1;
		model = "BastionRPitems\BastionSewerage\SmallTunnel\SmallTunnel01_Straight.p3d";
		bounding="boundingmax";
	};
	
// - SmallTunnel02 Corner
	class BRP_Sewerage_SmallTunnel_02_Corner: HouseNoDestruct
	{
		scope = 1;
		model = "BastionRPitems\BastionSewerage\SmallTunnel\SmallTunnel02_Corner.p3d";
		bounding="boundingmax";
	};
	
// - SmallTunnel03 3Way Intersection
	class BRP_Sewerage_SmallTunnel_3Way_Intersection: HouseNoDestruct
	{
		scope = 1;
		model = "BastionRPitems\BastionSewerage\SmallTunnel\SmallTunnel03_3Way_Intersection.p3d";
		bounding="boundingmax";
	};
	
// - SmallTunnel04 4Way Intersection
	class BRP_Sewerage_SmallTunnel_4Way_Intersection: HouseNoDestruct
	{
		scope = 1;
		model = "BastionRPitems\BastionSewerage\SmallTunnel\SmallTunnel04_4Way_Intersection.p3d";
		bounding="boundingmax";
	};
	
// - SmallTunnel05 Curved Corner
	class BRP_Sewerage_SmallTunnel_CurvedCorner: HouseNoDestruct
	{
		scope = 1;
		model = "BastionRPitems\BastionSewerage\SmallTunnel\SmallTunnel05_CurvedCorner.p3d";
		bounding="boundingmax";
	};
	
// - SmallTunnel06 Straight Doorway
	class BRP_Sewerage_SmallTunnel_Doorway: HouseNoDestruct
	{
		scope = 1;
		model = "BastionRPitems\BastionSewerage\SmallTunnel\SmallTunnel06_Straight_Doorway.p3d";
		bounding="boundingmax";
	};
	
// - SmallTunnel07 Straight 2Doorways
	class BRP_Sewerage_SmallTunnel_2Doorway: HouseNoDestruct
	{
		scope = 1;
		model = "BastionRPitems\BastionSewerage\SmallTunnel\SmallTunnel07_Straight_2Doorway.p3d";
		bounding="boundingmax";
	};
	
// - SmallTunnel08 Stairs
	class BRP_Sewerage_SmallTunnel_Stairs: HouseNoDestruct
	{
		scope = 1;
		model = "BastionRPitems\BastionSewerage\SmallTunnel\SmallTunnel08_Stairs.p3d";
		bounding="boundingmax";
	};
};