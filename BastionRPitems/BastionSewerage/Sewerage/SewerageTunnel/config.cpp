class CfgPatches
{
	class BastionRPitems_BastionSewerage_Sewerage_SewerageTunnel
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
	
// - SewerageTunnel 01
	class BRP_SewerageTunnel_01_Straight: HouseNoDestruct
	{
		scope = 1;
		model = "BastionRPitems\BastionSewerage\Sewerage\SewerageTunnel\SewerageTunnel01_Straight.p3d";
		bounding="boundingmax";
	};
	
// - SewerageTunnel 02
	class BRP_SewerageTunnel_02_Corner: HouseNoDestruct
	{
		scope = 1;
		model = "BastionRPitems\BastionSewerage\Sewerage\SewerageTunnel\SewerageTunnel02_Corner.p3d";
		bounding="boundingmax";
	};
	
// - SewerageTunnel 03
	class BRP_SewerageTunnel_03_Turn_90: HouseNoDestruct
	{
		scope = 1;
		model = "BastionRPitems\BastionSewerage\Sewerage\SewerageTunnel\SewerageTunnel03_Turn_90.p3d";
		bounding="boundingmax";
	};
	
// - SewerageTunnel 04
	class BRP_SewerageTunnel_04_3Way: HouseNoDestruct
	{
		scope = 1;
		model = "BastionRPitems\BastionSewerage\Sewerage\SewerageTunnel\SewerageTunnel04_3Way.p3d";
		bounding="boundingmax";
	};
	
// - SewerageTunnel 05
	class BRP_SewerageTunnel_05_4Way: HouseNoDestruct
	{
		scope = 1;
		model = "BastionRPitems\BastionSewerage\Sewerage\SewerageTunnel\SewerageTunnel05_4Way.p3d";
		bounding="boundingmax";
	};
	
// - SewerageTunnel 06
	class BRP_SewerageTunnel_06_Entrance: HouseNoDestruct
	{
		scope = 1;
		model = "BastionRPitems\BastionSewerage\Sewerage\SewerageTunnel\SewerageTunnel06_Entrance.p3d";
		bounding="boundingmax";
	};

// - SewerageTunnel 07
	class BRP_SewerageTunnel_07_EndCap: HouseNoDestruct
	{
		scope = 1;
		model = "BastionRPitems\BastionSewerage\Sewerage\SewerageTunnel\SewerageTunnel07_EndCap.p3d";
		bounding="boundingmax";
	};

// - SewerageTunnel 08
	class BRP_SewerageTunnel_08_Y: HouseNoDestruct
	{
		scope = 1;
		model = "BastionRPitems\BastionSewerage\Sewerage\SewerageTunnel\SewerageTunnel08_Y.p3d";
		bounding="boundingmax";
	};

// - SewerageTunnel 09
	class BRP_SewerageTunnel_09_OverflowVent: HouseNoDestruct
	{
		scope = 1;
		model = "BastionRPitems\BastionSewerage\Sewerage\SewerageTunnel\SewerageTunnel09_OverflowVent.p3d";
		bounding="boundingmax";
	};

// - SewerageTunnel 10
	class BRP_SewerageTunnel_10_Ramp: HouseNoDestruct
	{
		scope = 1;
		model = "BastionRPitems\BastionSewerage\Sewerage\SewerageTunnel\SewerageTunnel10_Ramp.p3d";
		bounding="boundingmax";
	};
};
