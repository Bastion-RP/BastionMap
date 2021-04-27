////////////////////////////////////////////////////////////////////
//DeRap: BastionRPitems\config.bin
//Produced from mikero's Dos Tools Dll version 7.26
//https://bytex.market/products/item/weodpphdknnzm70o0h8q/Mikero%27s%20Dos%20Tools
//'now' is Fri Jul 19 01:04:59 2019 : 'file' last modified on Sun Jul 14 06:31:11 2019
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class BastionRP_Items
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
	class BastionRP_flat_block_32x32: HouseNoDestruct
	{
		scope = 2;
		displayName = "Block 32 x 32";
		descriptionShort = "Block 32 x 32";
		model = "\BastionRPitems\Misc\flat_block_32x32.p3d";
	};
	class BastionRP_keylock: HouseNoDestruct
	{
		scope = 2;
		displayName = "Keylock";
		descriptionShort = "Keylock";
		model = "\BastionRPitems\keylock\Bastion_Keylock.p3d";
	};
	class BastionRP_dark_cube_lugge: HouseNoDestruct
	{
		scope = 2;
		displayName = "Dark Cube";
		descriptionShort = "Dark Cube";
		model = "\BastionRPitems\Misc\dark_cube_lugge.p3d";
	};
	class BastionRP_hugewall: HouseNoDestruct
	{
		scope = 2;
		displayName = "Huge Wall";
		descriptionShort = "Huge Wall";
		model = "\BastionRPitems\HugeWall\BastionRP_hugewall.p3d";
	};
	class BastionRP_hugewall_nolc: HouseNoDestruct
	{
		scope = 2;
		displayName = "Huge Wall";
		descriptionShort = "Huge Wall";
		model = "\BastionRPitems\HugeWall\BastionRP_hugewall_NoLC.p3d";
	};
	class BastionRP_blastwall_1: HouseNoDestruct
	{
		scope = 2;
		displayName = "BlastWall";
		//bounding = "BSphere";
		descriptionShort = "Blast Wall";
		model = "\BastionRPitems\blastwall\blastwall_1.p3d";
	};
	class BastionRP_blastwall_1line: HouseNoDestruct
	{
		scope = 2;
		displayName = "BlastWall NCC";
		//bounding = "BSphere";
		descriptionShort = "Blast Wall NCC";
		model = "\BastionRPitems\blastwall\blastwall_1line.p3d";
	};
    class BastionRP_FlatTile_Block: HouseNoDestruct
    {
    	scope = 1;
    	displayName = "Flat Tile Block";
    	descriptionShort = "Flat Tile Block";
    	model = "\BastionRPitems\Block\block.p3d";
    };
	class BastionRP_blastwall_1_damaged: HouseNoDestruct
	{
		scope = 2;
		displayName = "BlastWall Dmg";
		//bounding = "BSphere";
		descriptionShort = "Blast Wall Damaged";
		model = "\BastionRPitems\blastwall\blastwall_1_damaged.p3d";
	};
	class BastionRP_blastwall_1_destroyed: HouseNoDestruct
	{
		scope = 2;
		displayName = "BlastWall Dst";
		//bounding = "BSphere";
		descriptionShort = "Blast wall Destroyed";
		model = "\BastionRPitems\blastwall\blastwall_1_destroyed.p3d";
	};
	class Land_bridge_asf1_25: HouseNoDestruct
	{
		scope = 2;
		displayName = "bridge_asf1_25";
		model = "\BastionRPitems\Roads\bridge_asf1_25.p3d";
	};
	class Land_BastionRP_maingates: HouseNoDestruct
	{
		scope=2;
		displayName = "Barrier"; // Name in editor
		model="\BastionRPitems\maingates\BastionRP_maingates.p3d";
		class Doors
		{
			class Doors1
			{
				displayName="Gate Left";
				component="Doors1";
				soundPos="doors1_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0;
				armor=0.2;
				soundOpen = "doorMetalGateOpen";
				soundClose = "doorMetalGateClose";
				soundLocked = "doorMetalGateRattle";
				soundOpenABit = "doorMetalGateOpenABit";
			};
			class Doors2
			{
				displayName="Gate Right";
				component="Doors2";
				soundPos="doors2_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0;
				armor=0.2;
				soundOpen = "doorMetalGateOpen";
				soundClose = "doorMetalGateClose";
				soundLocked = "doorMetalGateRattle";
				soundOpenABit = "doorMetalGateOpenABit";
			};
		};
	};
};

