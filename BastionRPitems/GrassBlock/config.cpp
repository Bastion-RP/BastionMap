class CfgPatches
{
	class BastionRPGlassBlock
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class CfgVehicles
{
	class HouseNoDestruct;
	class BRP_Assets_GrassBlock_clean: HouseNoDestruct
	{
		scope = 1;
		model = "BastionRPItems\GrassBlock\grassblock_clean.p3d";
	};
	
	class BRP_Assets_GrassBlock1: HouseNoDestruct
	{
		scope = 1;
		model = "BastionRPItems\GrassBlock\grassblock.p3d";
	};	
	
	class BRP_Assets_GrassBlock2: HouseNoDestruct
	{
		scope = 1;
		model = "BastionRPItems\GrassBlock\grassblock2.p3d";
	};

	class BRP_Assets_GrassBlock3: HouseNoDestruct
	{
		scope = 1;
		model = "BastionRPItems\GrassBlock\grassblock3.p3d";
	};			
};