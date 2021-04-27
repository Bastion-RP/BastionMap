class CfgPatches
{
	class BastionRPitems_BastionSewerage_Sewerage_Lattice
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
	class BRP_SeweragePipes_Lattice_01: HouseNoDestruct
	{
		scope = 1;
		model = "BastionRPitems\BastionSewerage\Sewerage\Lattice\SewerageLattice01.p3d";
	};
	class BRP_SeweragePipes_Lattice_02: HouseNoDestruct
	{
		scope = 1;
		model = "BastionRPitems\BastionSewerage\Sewerage\Lattice\SewerageLattice02.p3d";
	};
	
	class BRP_SeweragePipes_Lattice_03: HouseNoDestruct
	{
		scope = 1;
		model = "BastionRPitems\BastionSewerage\Sewerage\Lattice\SewerageLattice03.p3d";
	};	
	class BRP_SeweragePipes_Lattice_04: HouseNoDestruct
	{
		scope = 1;
		model = "BastionRPitems\BastionSewerage\Sewerage\Lattice\SewerageLattice04.p3d";
	};	
};

