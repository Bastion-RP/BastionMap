class CfgPatches
{
	class BastionRPitems_BastionSewerage_Sewerage_SewerageTunnelBig
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
	
// - SewerageTunnelBig 01
	class BRP_SewerageTunnelBig_01: HouseNoDestruct
	{
		scope = 1;
		model = "BastionRPitems\BastionSewerage\Sewerage\SewerageTunnelBig\SewerageTunnelBig01.p3d";
		bounding="boundingmax";
	};
};
