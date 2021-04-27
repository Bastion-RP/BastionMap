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
	class Bastion_military_concrete_wall_color: HouseNoDestruct
	{
		scope = 2;
		displayName = "Military Wall 1";
		descriptionShort = "Military Wall 1";
		model = "\BastionRPitems\ConcreteWall\military_concrete_wall_color.p3d";
	};

// #1 - Black
	class Bastion_military_concrete_wall_0_Black: Bastion_military_concrete_wall_color
	{
		model = "\BastionRPitems\ConcreteWall\military_concrete_wall_0_black.p3d";
	};
	
// #2 - Black_Blue
	class Bastion_military_concrete_wall_0_Black_Blue: Bastion_military_concrete_wall_color
	{
		model = "\BastionRPitems\ConcreteWall\military_concrete_wall_0_black_blue.p3d";
	};
	
// #3 - Black_Purple
	class Bastion_military_concrete_wall_0_Black_Purple: Bastion_military_concrete_wall_color
	{
		model = "\BastionRPitems\ConcreteWall\military_concrete_wall_0_black_purple.p3d";
	};
	
// #4 - Black_Orange
	class Bastion_military_concrete_wall_0_Black_Orange: Bastion_military_concrete_wall_color
	{
		model = "\BastionRPitems\ConcreteWall\military_concrete_wall_0_black_orange.p3d";
	};
	
// #5 - Blue
	class Bastion_military_concrete_wall_1_Blue: Bastion_military_concrete_wall_color
	{
		model = "\BastionRPitems\ConcreteWall\military_concrete_wall_1_blue.p3d";
	};
	
// #6 - Blue_Black
	class Bastion_military_concrete_wall_1_Blue_Black: Bastion_military_concrete_wall_color
	{
		model = "\BastionRPitems\ConcreteWall\military_concrete_wall_1_blue_black.p3d";
	};
	
// #6 - Blue_Orange
	class Bastion_military_concrete_wall_1_Blue_Orange: Bastion_military_concrete_wall_color
	{
		model = "\BastionRPitems\ConcreteWall\military_concrete_wall_1_blue_orange.p3d";
	};

// #6b - Blue_Green
	class Bastion_military_concrete_wall_1_Blue_Green: Bastion_military_concrete_wall_color
	{
		model = "\BastionRPitems\ConcreteWall\military_concrete_wall_1_blue_green.p3d";
	};
	
// #7 - Purple
	class Bastion_military_concrete_wall_2_Purple: Bastion_military_concrete_wall_color
	{
		model = "\BastionRPitems\ConcreteWall\military_concrete_wall_2_purple.p3d";
	};
	
// #8 - Purple_Black
	class Bastion_military_concrete_wall_2_Purple_Black: Bastion_military_concrete_wall_color
	{
		model = "\BastionRPitems\ConcreteWall\military_concrete_wall_2_purple_black.p3d";
	};
	
// #9 - Purple_Orange
	class Bastion_military_concrete_wall_2_Purple_Orange: Bastion_military_concrete_wall_color
	{
		model = "\BastionRPitems\ConcreteWall\military_concrete_wall_2_purple_orange.p3d";
	};
	
// #10 - Purple_Red
	class Bastion_military_concrete_wall_2_Purple_Red: Bastion_military_concrete_wall_color
	{
		model = "\BastionRPitems\ConcreteWall\military_concrete_wall_2_purple_red.p3d";
	};
	
// #11 - Orange
	class Bastion_military_concrete_wall_3_Orange: Bastion_military_concrete_wall_color
	{
		model = "\BastionRPitems\ConcreteWall\military_concrete_wall_3_orange.p3d";
	};
	
// #12 - Orange_Blue
	class Bastion_military_concrete_wall_3_Orange_Blue: Bastion_military_concrete_wall_color
	{
		model = "\BastionRPitems\ConcreteWall\military_concrete_wall_3_orange_blue.p3d";
	};
	
// #13 - Orange_Purple
	class Bastion_military_concrete_wall_3_Orange_Purple: Bastion_military_concrete_wall_color
	{
		model = "\BastionRPitems\ConcreteWall\military_concrete_wall_3_orange_purple.p3d";
	};
	
// #14 - Orange_Red
	class Bastion_military_concrete_wall_3_Orange_Red: Bastion_military_concrete_wall_color
	{
		model = "\BastionRPitems\ConcreteWall\military_concrete_wall_3_orange_red.p3d";
	};
	
// #15 - Red
	class Bastion_military_concrete_wall_4_Red: Bastion_military_concrete_wall_color
	{
		model = "\BastionRPitems\ConcreteWall\military_concrete_wall_4_red.p3d";
	};
	
// #16 - Red_Orange
	class Bastion_military_concrete_wall_4_Red_Orange: Bastion_military_concrete_wall_color
	{
		model = "\BastionRPitems\ConcreteWall\military_concrete_wall_4_red_orange.p3d";
	};
	
// #17 - Red_Purple
	class Bastion_military_concrete_wall_4_Red_Purple: Bastion_military_concrete_wall_color
	{
		model = "\BastionRPitems\ConcreteWall\military_concrete_wall_4_red_purple.p3d";
	};
	
// #18 - Green
	class Bastion_military_concrete_wall_5_Green: Bastion_military_concrete_wall_color
	{
		model = "\BastionRPitems\ConcreteWall\military_concrete_wall_5_green.p3d";
	};
// Signs 0-1
	class Bastion_SectorSign_0_1: HouseNoDestruct
	{
		scope = 2;
		displayName = "Sector Sign";
		descriptionShort = "Sector Sign";
		model = "\BastionRPitems\ConcreteWall\sector_signs\0_1.p3d";
	};
};