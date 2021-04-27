#define _ARMA_

class CfgPatches
{
	class BastionRP_Items
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={"DZ_Data"};
	};
};
class CfgVehicles
{
	class HouseNoDestruct;
	class Land_BastionRP_armored_tactical_wall_block1: HouseNoDestruct
	{
		scope = 2;
		displayName = "Armored wall 1";
		model = "\BastionRPitems\ArmoredWall\BastionRP_armored_tactical_wall_block1.p3d";
	};
	class Land_BastionRP_armored_tactical_wall_block2: HouseNoDestruct
	{
		scope = 2;
		displayName = "Armored wall 2";
		model = "\BastionRPitems\ArmoredWall\BastionRP_armored_tactical_wall_block2.p3d";
	};
	class Land_BastionRP_armored_tactical_wall_block4: HouseNoDestruct
	{
		scope = 2;
		displayName = "Armored wall 4";
		model = "\BastionRPitems\ArmoredWall\BastionRP_armored_tactical_wall_block4.p3d";
	};
	class Land_BastionRP_armored_tactical_wall_block5: HouseNoDestruct
	{
		scope = 2;
		displayName = "Armored wall 5";
		model = "\BastionRPitems\ArmoredWall\BastionRP_armored_tactical_wall_block5.p3d";
	};
	class Land_BastionRP_armored_tactical_wall_block3_A: HouseNoDestruct
	{
		scope=2;
		displayName = "Armored wall with door"; // Name in editor
		model="\BastionRPitems\ArmoredWall\BastionRP_armored_tactical_wall_block3_A.p3d";
		class Doors
		{
			class Doors1
			{
				displayName="Barrier";
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
		};
	};
};