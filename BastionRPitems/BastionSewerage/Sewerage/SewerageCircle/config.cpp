class CfgPatches
{
	class BastionRPitems_BastionSewerage_Sewerage_SewerageCircle
	{
		units[]={};
		weapons[]={};
		requiredVersion=1;
		requiredAddons[]=
		{
			"DZ_Data"
		};
	};
};
class CfgVehicles
{
	class HouseNoDestruct;
	class BRP_SewerageCircle_01_EntranceWithFloor: HouseNoDestruct
	{
		scope = 1;
		model = "BastionRPitems\BastionSewerage\Sewerage\SewerageCircle\SewerageCircle01.p3d";
		bounding="boundingmax";
	};
	class BRP_SewerageCircle_02_WallWithFloor: HouseNoDestruct
	{
		scope = 1;
		model = "BastionRPitems\BastionSewerage\Sewerage\SewerageCircle\SewerageCircle02.p3d";
		bounding="boundingmax";
	};
	class BRP_SewerageCircle_03_Wall: HouseNoDestruct
	{
		scope = 1;
		model = "BastionRPitems\BastionSewerage\Sewerage\SewerageCircle\SewerageCircle03.p3d";
		bounding="boundingmax";
	};
	class BRP_SewerageCircle_04_CurvedCeiling: HouseNoDestruct
	{
		scope = 1;
		model = "BastionRPitems\BastionSewerage\Sewerage\SewerageCircle\SewerageCircle04.p3d";
		bounding="boundingmax";
	};
	class BRP_SewerageCircle_05_Pillar: HouseNoDestruct
	{
		scope = 1;
		model = "BastionRPitems\BastionSewerage\Sewerage\SewerageCircle\SewerageCircle05.p3d";
		bounding="boundingmax";
	};
	class BRP_SewerageCircle_06_CurvedPillar: HouseNoDestruct
	{
		scope = 1;
		model = "BastionRPitems\BastionSewerage\Sewerage\SewerageCircle\SewerageCircle06.p3d";
		bounding="boundingmax";
	};
	class BRP_SewerageCircle_07_Wall: HouseNoDestruct
	{
		scope = 1;
		model = "BastionRPitems\BastionSewerage\Sewerage\SewerageCircle\SewerageCircle07.p3d";
		bounding="boundingmax";
	};
	class BRP_SewerageCircle_08_Floor: HouseNoDestruct
	{
		scope = 1;
		model = "BastionRPitems\BastionSewerage\Sewerage\SewerageCircle\SewerageCircle08.p3d";
		bounding="boundingmax";
	};
	class BRP_SewerageCircle_09_FloorCircle: HouseNoDestruct
	{
		scope = 1;
		model = "BastionRPitems\BastionSewerage\Sewerage\SewerageCircle\SewerageCircle09.p3d";
		bounding="boundingmax";
	};
	class BRP_SewerageCircle_10_Entrance: HouseNoDestruct
	{
		scope = 1;
		model = "BastionRPitems\BastionSewerage\Sewerage\SewerageCircle\SewerageCircle10.p3d";
		bounding="boundingmax";
	};	
	class BRP_SewerageCircle_11_CurvedEntrance: HouseNoDestruct
	{
		scope = 1;
		model = "BastionRPitems\BastionSewerage\Sewerage\SewerageCircle\SewerageCircle11.p3d";
		bounding="boundingmax";
	};
};
