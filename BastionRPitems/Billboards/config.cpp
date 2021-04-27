class CfgPatches
{
	class BRP_Billboards
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data"
		};
	};
};
class CfgVehicles
{
	class HouseNoDestruct;
	class billboard_bastion1: HouseNoDestruct
	{
		scope=1;
		model="BastionRPitems\Billboards\billboard_bastion1.p3d";
	};
	
	class billboard_bastion1_board: HouseNoDestruct
	{
		scope=1;
		model="BastionRPitems\Billboards\billboard_bastion1_board.p3d";
	};
};
