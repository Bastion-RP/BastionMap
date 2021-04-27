////////////////////////////////////////////////////////////////////
//DeRap: P:\BastionRPitems\Chiemsee\zisb_modular_metro\config.bin
//Produced from mikero's Dos Tools Dll version 7.70
//https://mikero.bytex.digital/Downloads
//'now' is Mon Aug 10 22:05:11 2020 : 'file' last modified on Mon Aug 10 22:05:11 2020
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class zisb_modular_metro
	{
		units[] = {"zisb_Tun02_Curve01","zisb_Tun02_Straight01","zisb_Tun02_ConTun01","zisb_PlankConsturction02","zisb_garbage_pile","zisb_Tun01_ConTun02","zisb_RoomHall01","land_zisb_bunker_door","land_zisb_grate_door","land_zisb_bookshelf","zisb_bunker_light","zisb_Tun02_ConTun03","zisb_Tun03_ConTun02","zisb_Tun03_Stair","zisb_Tun03_T","zisb_Tun03_Straight","zisb_room1","zisb_Tun03_Curve","zisb_room4"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Surfaces","DZ_Structures_Furniture"};
		author[] = {"zisb"};
	};
};
class CfgVehicles
{
	class HouseNoDestruct;
	class Inventory_Base;
	class EnergyItem_Base;
	class zisb_Tun02_Curve01: HouseNoDestruct
	{
		scope = 2;
		model = "BastionRPitems\Chiemsee\zisb_modular_metro\zisb_Tun02_Curve01.p3d";
	};
	class zisb_Tun02_Straight01: HouseNoDestruct
	{
		scope = 2;
		model = "BastionRPitems\Chiemsee\zisb_modular_metro\zisb_Tun02_Straight01.p3d";
	};
	class zisb_Tun02_ConTun01: HouseNoDestruct
	{
		scope = 2;
		model = "BastionRPitems\Chiemsee\zisb_modular_metro\zisb_Tun02_ConTun01.p3d";
	};
	class zisb_PlankConsturction02: HouseNoDestruct
	{
		scope = 2;
		model = "BastionRPitems\Chiemsee\zisb_modular_metro\zisb_PlankConsturction02.p3d";
	};
	class zisb_garbage_pile: HouseNoDestruct
	{
		scope = 2;
		model = "BastionRPitems\Chiemsee\zisb_modular_metro\zisb_garbage_pile.p3d";
	};
	class zisb_Tun01_ConTun02: HouseNoDestruct
	{
		scope = 2;
		model = "BastionRPitems\Chiemsee\zisb_modular_metro\zisb_Tun01_ConTun02.p3d";
	};
	class zisb_RoomHall01: HouseNoDestruct
	{
		scope = 2;
		model = "BastionRPitems\Chiemsee\zisb_modular_metro\zisb_RoomHall01.p3d";
	};
	class land_zisb_bunker_door: HouseNoDestruct
	{
		scope = 2;
		model = "BastionRPitems\Chiemsee\zisb_modular_metro\zisb_bunker_door.p3d";
		class Doors
		{
			class Door1
			{
				displayName = "door 1";
				component = "Door1";
				soundPos = "door1_action";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 0.5;
				armor = 0.9;
				soundOpen = "doorMetalTwinOpen";
				soundClose = "doorMetalTwinClose";
				soundLocked = "doorWoodRattle";
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1000;
				};
			};
			class DamageZones
			{
				class Door1
				{
					class Health
					{
						hitpoints = 1000;
						transferToGlobalCoef = 0;
					};
					componentNames[] = {"door1"};
					fatalInjuryCoef = -1;
				};
			};
		};
	};
	class land_zisb_grate_door: HouseNoDestruct
	{
		scope = 2;
		model = "BastionRPitems\Chiemsee\zisb_modular_metro\zisb_grate_door.p3d";
		class Doors
		{
			class Door1
			{
				displayName = "door 1";
				component = "Door1";
				soundPos = "door1_action";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 0.5;
				armor = 0.9;
				soundOpen = "doorMetalTwinOpen";
				soundClose = "doorMetalTwinClose";
				soundLocked = "doorWoodRattle";
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1000;
				};
			};
			class DamageZones
			{
				class Door1
				{
					class Health
					{
						hitpoints = 1000;
						transferToGlobalCoef = 0;
					};
					componentNames[] = {"door1"};
					fatalInjuryCoef = -1;
				};
			};
		};
	};
	class land_zisb_bookshelf: HouseNoDestruct
	{
		scope = 2;
		model = "BastionRPitems\Chiemsee\zisb_modular_metro\zisb_bookshelf.p3d";
		class Doors
		{
			class Door1
			{
				displayName = "door 1";
				component = "Door1";
				soundPos = "door1_action";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 0.5;
				armor = 0.9;
				soundOpen = "doorWoodSlideOpen";
				soundClose = "doorWoodSlideClose";
				soundLocked = "doorWoodRattle";
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1000;
				};
			};
			class DamageZones
			{
				class Door1
				{
					class Health
					{
						hitpoints = 1000;
						transferToGlobalCoef = 0;
					};
					componentNames[] = {"door1"};
					fatalInjuryCoef = -1;
				};
			};
		};
	};
	class zisb_bunker_light: HouseNoDestruct
	{
		scope = 2;
		model = "BastionRPitems\Chiemsee\zisb_modular_metro\zisb_bunker_light.p3d";
	};
	class zisb_Tun02_ConTun03: HouseNoDestruct
	{
		scope = 2;
		model = "BastionRPitems\Chiemsee\zisb_modular_metro\zisb_Tun02_ConTun03.p3d";
	};
	class zisb_Tun03_ConTun02: HouseNoDestruct
	{
		scope = 2;
		model = "BastionRPitems\Chiemsee\zisb_modular_metro\zisb_Tun03_ConTun02.p3d";
	};
	class zisb_Tun03_Stair: HouseNoDestruct
	{
		scope = 2;
		model = "BastionRPitems\Chiemsee\zisb_modular_metro\zisb_Tun03_Stair.p3d";
	};
	class zisb_Tun03_T: HouseNoDestruct
	{
		scope = 2;
		model = "BastionRPitems\Chiemsee\zisb_modular_metro\zisb_Tun03_T.p3d";
	};
	class zisb_Tun03_Straight: HouseNoDestruct
	{
		scope = 2;
		model = "BastionRPitems\Chiemsee\zisb_modular_metro\zisb_Tun03_Straight.p3d";
	};
	class zisb_room1: HouseNoDestruct
	{
		scope = 2;
		model = "BastionRPitems\Chiemsee\zisb_modular_metro\zisb_room1.p3d";
	};
	class zisb_Tun03_Curve: HouseNoDestruct
	{
		scope = 2;
		model = "BastionRPitems\Chiemsee\zisb_modular_metro\zisb_Tun03_Curve.p3d";
	};
	class zisb_room4: HouseNoDestruct
	{
		scope = 2;
		model = "BastionRPitems\Chiemsee\zisb_modular_metro\zisb_room4.p3d";
	};
};
