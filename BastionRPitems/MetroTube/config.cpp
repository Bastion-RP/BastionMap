class CfgPatches
{
	class BastionRPitems_MetroTube
	{
		units[]=
		{
			"BRP_Land_MetroTube",
			"BRP_Land_MetroTubeV2",
			"BRP_Land_MetroTubeWall_Proxy",
			"BRP_Land_MetroTubeStorage_Proxy"
		};
		weapons[]={};
		requiredVersion=1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Surfaces"
		};
		author="Swade_93";
		name="MetroTube";
	};
};
class CfgVehicles
{
	class HouseNoDestruct;
	
	class BRP_Land_MetroTube: HouseNoDestruct
	{
		scope=2;
		model="BastionRPitems\MetroTube\MetroTube_Master.p3d";
		bounding="boundingmax";
	};
	class BRP_Land_MetroTubeV2: HouseNoDestruct
	{
		scope=2;
		model="BastionRPitems\MetroTube\MetroTube_Master2.p3d";
		bounding="boundingmax";
	};
	class BRP_Land_MetroTubeWall_Proxy: HouseNoDestruct
	{
		scope=2;
		model="BastionRPitems\MetroTube\Proxy\MetroTubeWall_Proxy.p3d";
	};
	class BRP_Land_MetroTubeStorage_Proxy: HouseNoDestruct
	{
		scope=2;
		model="BastionRPitems\MetroTube\Proxy\Storage_Proxy.p3d";
	};
};
