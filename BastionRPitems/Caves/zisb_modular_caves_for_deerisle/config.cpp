#define _ARMA_

class CfgPatches
{
	class zisb_modular_caves_for_deerisle
	{
		units[] = {"zisb_di_cave_hall_1", "zisb_di_cave_short_1", "zisb_di_cave_90_bend_1","zisb_di_cave_cross_1", "zisb_di_cave_end_1"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Surfaces","DZ_Structures_Furniture"};
		author[] = {"zisb"};
	};
};
class CfgVehicles
{
	class HouseNoDestruct;
	class zisb_di_cave_hall_1: HouseNoDestruct
	{
		scope = 2;
		model = "BastionRPitems\Caves\zisb_modular_caves_for_deerisle\zisb_di_cave_hall_1.p3d";
	};
	class zisb_di_cave_short_1: HouseNoDestruct
	{
		scope = 2;
		model = "BastionRPitems\Caves\zisb_modular_caves_for_deerisle\zisb_di_cave_short_1.p3d";
	};
	class zisb_di_cave_90_bend_1: HouseNoDestruct
	{
		scope = 2;
		model = "BastionRPitems\Caves\zisb_modular_caves_for_deerisle\zisb_di_cave_90_bend_1.p3d";
	};
	class zisb_di_cave_cross_1: HouseNoDestruct
	{
		scope = 2;
		model = "BastionRPitems\Caves\zisb_modular_caves_for_deerisle\zisb_di_cave_cross_1.p3d";
	};
	class zisb_di_cave_end_1: HouseNoDestruct
	{
		scope = 2;
		model = "BastionRPitems\Caves\zisb_modular_caves_for_deerisle\zisb_di_cave_end_1.p3d";
	};
	class zisb_was_here: HouseNoDestruct
	{
		scope = 2;
		model = "BastionRPitems\Caves\zisb_modular_caves_for_deerisle\zisb_was_here.p3d";
	};
		class zisb_di_small_cave_hall_1: HouseNoDestruct
	{
		scope = 2;
		model = "BastionRPitems\Caves\zisb_modular_caves_for_deerisle\zisb_di_small_cave_hall_1.p3d";
	};
	class zisb_di_small_cave_short_1: HouseNoDestruct
	{
		scope = 2;
		model = "BastionRPitems\Caves\zisb_modular_caves_for_deerisle\zisb_di_small_cave_short_1.p3d";
	};
	class zisb_di_small_cave_90_bend_1: HouseNoDestruct
	{
		scope = 2;
		model = "BastionRPitems\Caves\zisb_modular_caves_for_deerisle\zisb_di_small_cave_90_bend_1.p3d";
	};
	class zisb_di_small_cave_cross_1: HouseNoDestruct
	{
		scope = 2;
		model = "BastionRPitems\Caves\zisb_modular_caves_for_deerisle\zisb_di_small_cave_cross_1.p3d";
	};
	class Land_zisb_di_small_cave_end_1: HouseNoDestruct
	{
		scope = 2;
		model = "BastionRPitems\Caves\zisb_modular_caves_for_deerisle\zisb_di_small_cave_end_1.p3d";
		displayName = "ZISB SMALL CAVE END";
		descriptionShort = "Snakk Cave End";
	};
	class zisb_di_large_cave_hall_1: HouseNoDestruct
	{
		scope = 2;
		model = "BastionRPitems\Caves\zisb_modular_caves_for_deerisle\zisb_di_large_cave_hall_1.p3d";
	};
	class zisb_di_large_cave_short_1: HouseNoDestruct
	{
		scope = 2;
		model = "BastionRPitems\Caves\zisb_modular_caves_for_deerisle\zisb_di_large_cave_short_1.p3d";
	};
	class zisb_di_large_cave_90_bend_1: HouseNoDestruct
	{
		scope = 2;
		model = "BastionRPitems\Caves\zisb_modular_caves_for_deerisle\zisb_di_large_cave_90_bend_1.p3d";
	};
	class zisb_di_large_cave_cross_1: HouseNoDestruct
	{
		scope = 2;
		model = "BastionRPitems\Caves\zisb_modular_caves_for_deerisle\zisb_di_large_cave_cross_1.p3d";
	};
	class zisb_di_large_cave_end_1: HouseNoDestruct
	{
		scope = 2;
		model = "BastionRPitems\Caves\zisb_modular_caves_for_deerisle\zisb_di_large_cave_end_1.p3d";
	};
};
