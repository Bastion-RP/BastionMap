class CfgPatches
{
	class BastionRPitems_BastionSewerage_Sewerage_Leaves
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
	
// - Leaves01
	class BRP_Sewerage_Leaves01: HouseNoDestruct
	{
		scope = 1;
		model = "BastionRPitems\BastionSewerage\Sewerage\Leaves\Leaves01.p3d";
		bounding="boundingmax";
	};
	
// - Leaves02
	class BRP_Sewerage_Leaves02: HouseNoDestruct
	{
		scope = 1;
		model = "BastionRPitems\BastionSewerage\Sewerage\Leaves\Leaves02.p3d";
		bounding="boundingmax";
	};
};