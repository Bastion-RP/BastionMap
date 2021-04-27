class CfgPatches
{
	class BastionRPBlock
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
	class BRP_Assets_FloorBlock: HouseNoDestruct
	{
		scope = 1;
		model = "BastionRPitems\Block\block.p3d";
	};
};