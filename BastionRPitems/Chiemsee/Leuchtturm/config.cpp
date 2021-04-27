////////////////////////////////////////////////////////////////////
//DeRap: P:\BastionRPitems\Chiemsee\Leuchtturm\config.bin
//Produced from mikero's Dos Tools Dll version 7.70
//https://mikero.bytex.digital/Downloads
//'now' is Mon Aug 10 21:43:23 2020 : 'file' last modified on Mon Aug 10 21:43:23 2020
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class Leuchtturm
	{
		requiredAddons[] = {"DZ_Data"};
		units[] = {};
		weapons[] = {};
	};
};
class CfgMods
{
	class Leuchtturm
	{
		dir = "Leuchtturm";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "Leuchtturm";
		credits = "";
		author = "Lugge";
		authorID = "0";
		version = "1.0";
		extra = 0;
		type = "mod";
		dependencies[] = {"Game","World","Mission"};
		class defs
		{
			class gameScriptModule
			{
				value = "";
				files[] = {"BastionRPitems/Chiemsee/Leuchtturm/scripts/3_Game"};
			};
			class worldScriptModule
			{
				value = "";
				files[] = {"BastionRPitems/Chiemsee/Leuchtturm/scripts/4_World"};
			};
			class missionScriptModule
			{
				value = "";
				files[] = {"BastionRPitems/Chiemsee/Leuchtturm/scripts/5_Mission"};
			};
		};
	};
};
class CfgVehicles
{
	class HouseNoDestruct;
	class Land_Leuchtturm: HouseNoDestruct
	{
		scope = 1;
		model = "BastionRPitems\Chiemsee\Leuchtturm\Leuchtturm.p3d";
		class Doors
		{
			class Door1
			{
				displayName = "Door 1";
				component = "door1";
				soundPos = "door1_action";
				animPeriod = 1.0;
				initPhase = 0.0;
				initOpened = 0.5;
				soundOpen = "doorMetalSmallOpen";
				soundClose = "doorMetalSmallClose";
				soundLocked = "doorMetalSmallRattle";
				soundOpenABit = "doorMetalSmallOpenABit";
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
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
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
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage = 2;
							};
							class Blood
							{
								damage = 0;
							};
							class Shock
							{
								damage = 0;
							};
						};
						class Melee
						{
							class Health
							{
								damage = 2.5;
							};
							class Blood
							{
								damage = 0;
							};
							class Shock
							{
								damage = 0;
							};
						};
					};
				};
			};
		};
	};
};
