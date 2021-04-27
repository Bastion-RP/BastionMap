class CfgPatches
{
	class Ludwig_OBJCET
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Surfaces"};
	};
};
class CfgVehicles
{
	class HouseNoDestruct;
	class Land_jmc_van_pinkies: HouseNoDestruct
	{
		scope = 2;
		model = "BastionRPitems\Caves\jmc_di_objects\jmc_van_pinkies.p3d";
		storageCategory=4;
	};
;	
};