class CfgPatches
{
	class BastionRPitems_BastionSewerage_Sewerage_SewerageTunnelCeiling
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
	
// - SewerageTunnelCeiling 01
	class BRP_SewerageTunnelCeiling_01: HouseNoDestruct
	{
		scope = 1;
		model = "BastionRPitems\BastionSewerage\Sewerage\SewerageTunnelCeiling\SewerageTunnelCeiling01.p3d";
		bounding="boundingmax";
	};
};