////////////////////////////////////////////////////////////////////
//DeRap: P:\BastionRPitems\Chiemsee\oilpump\config.bin
//Produced from mikero's Dos Tools Dll version 7.70
//https://mikero.bytex.digital/Downloads
//'now' is Mon Aug 10 21:51:29 2020 : 'file' last modified on Mon Aug 10 21:51:29 2020
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgMods
{
	class Ind_Oil_Pump_EP1
	{
		dir = "oilpump";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "Ind_Oil_Pump_EP1";
		credits = "";
		author = "";
		authorID = "0";
		version = "1.0";
		extra = 0;
		type = "mod";
		dependencies[] = {"World"};
		class defs
		{
			class worldScriptModule
			{
				value = "";
				files[] = {"test3_map/Chiemsee/Ludwig_OBJCET/oilpump/scripts/4_World"};
			};
		};
	};
};
class CfgPatches
{
	class Ind_Oil_Pump_EP1
	{
		units[] = {"Land_Ind_Oil_Pump_EP1"};
		weapons[] = {};
		requiredVersion = 1.02;
		requiredAddons[] = {"DZ_Data","DZ_Surfaces"};
	};
};
class CfgVehicles
{
	class HouseNoDestruct;
	class Land_Ind_Oil_Pump_EP1: HouseNoDestruct
	{
		scope = 2;
		displayName = "Oil_Pump_EP1";
		descriptionShort = "Oil_Pump_EP1";
		model = "BastionRPitems\Chiemsee\oilpump\Ind_Oil_Pump_EP1.p3d";
		overrideDrawArea = "3.0";
		forceFarBubble = "true";
		lootCategory = "Crafted";
		carveNavmesh = 1;
		weight = 20000;
		itemSize[] = {6,6};
		physLayer = "item_large";
		createProxyPhysicsOnInit = "false";
		rotationFlags = 2;
		class Cargo
		{
			itemsCargoSize[] = {10,100};
			allowOwnedCargoManipulation = 1;
			openable = 0;
		};
		class AnimationSources
		{
			class AnimRotate
			{
				source = "user";
				animPeriod = 2.01;
				initPhase = 0;
			};
			class Vez_ropa_anim1_0: AnimRotate
			{
				source = "user";
				initPhase = 0;
			};
			class Kladivo: AnimRotate
			{
				source = "user";
				initPhase = 0;
			};
			class Pohon: AnimRotate
			{
				source = "user";
				initPhase = 0;
			};
			class Jezditko1: AnimRotate
			{
				source = "user";
				initPhase = 0;
			};
		};
	};
};
