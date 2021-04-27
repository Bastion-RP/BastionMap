class CfgPatches
{
	class BastionRPitems
	{
		units[]=
		{
			"BRP_Land_RadarTower",
		};
		weapons[]={};
		requiredVersion=1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Surfaces"
		};
		author="Bastion, Swade_93";
		name="BastionRPitems";
	};
};
class CfgVehicles
{
	class HouseNoDestruct;
	
// - Large Array Tower - Builder Item
	class BRP_Land_RadarTower: HouseNoDestruct
	{
		scope=1;
		model="\BastionRPitems\RadarTower\RadarTower.p3d";
		bounding="boundingmax";
	};
};