class CfgPatches
{
	class BastionRPitems_BastionSewerage_Sewerage_SewerageTunnelHatch
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
	
// - SewerageTunnelHatch 01
	class BRP_SewerageTunnelHatch_01: HouseNoDestruct
	{
		scope = 1;
		model = "BastionRPitems\BastionSewerage\Sewerage\SewerageTunnelHatch\SewerageTunnelHatch01.p3d";
		bounding="boundingmax";
	};
	
// - SewerageTunnelHatch 02
	class BRP_SewerageTunnelHatch_02: HouseNoDestruct
	{
		scope = 1;
		model = "BastionRPitems\BastionSewerage\Sewerage\SewerageTunnelHatch\SewerageTunnelHatch02.p3d";
		bounding="boundingmax";
	};
};