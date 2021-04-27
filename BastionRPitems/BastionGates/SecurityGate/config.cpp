class CfgPatches
{
	class BastionRPitems_BastionGates_Security
	{
		units[]=
		{
			"BRP_Security_FenceX1",
			"BRP_Security_FenceX2",
			"BRP_Security_FenceX3",
			"BRP_Security_FenceLong",
			"BRP_Security_TwinGate"			
		};
		weapons[]={};
		requiredVersion=1;
		requiredAddons[]=
		{
			"DZ_Data"
		};
		author="Bastion, Swade_93";
		name="BastionRPitems";
	};
};
class CfgVehicles
{
	class HouseNoDestruct;
	
// - Bastion Security Fences
	class BRP_Security_FenceX1: HouseNoDestruct
	{
		scope=1;
		model="\BastionRPitems\BastionGates\SecurityGate\FenceX1.p3d";
	};
	class BRP_Security_FenceX2: HouseNoDestruct
	{
		scope=1;
		model="\BastionRPitems\BastionGates\SecurityGate\FenceX2.p3d";
	};
	class BRP_Security_FenceX3: HouseNoDestruct
	{
		scope=1;
		model="\BastionRPitems\BastionGates\SecurityGate\FenceX3.p3d";
	};
	class BRP_Security_FenceLong: HouseNoDestruct
	{
		scope=1;
		model="\BastionRPitems\BastionGates\SecurityGate\FenceLong.p3d";
	};
	
// - Bastion Security Gate
	class BRP_Security_TwinGate: HouseNoDestruct
	{
		scope = 1;
		model = "BastionRPitems\BastionGates\SecurityGate\GateFrame.p3d";
		bounding="boundingmax";
		hiddenSelections[]=
		{
			"all"
		};
		hiddenSelectionsTextures[]=
		{
			"BastionRPitems\BastionGates\SecurityGate\Data\SecurityGate_CO.paa"
		};
		
		class Doors
		{
			class DoorsTwin1
			{
				displayName = "Twin Doors 1";
				component = "DoorsTwin1";
				soundPos = "DoorsTwin1_action";
				animPeriod = 4.0;
				initPhase = 0.0;
				initOpened = 0.0;
				soundOpen = "doorMetalTwinBigOpen";
				soundClose = "doorMetalTwinBigClose";
				soundLocked = "doorMetalTwinBigRattle";
				soundOpenABit = "doorMetalTwinBigOpenABit";
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
					class Health { damage = 0; };
					class Blood { damage = 0; };
					class Shock { damage = 0; };
				};
				class Melee
				{
					class Health { damage = 0; };
					class Blood { damage = 0; };
					class Shock { damage = 0; };
				};
			};
			class DamageZones
			{
				class DoorTwin1
				{
					class Health
					{
						hitpoints = 1000;
						transferToGlobalCoef = 0;
					};
					componentNames[] = {"door1","door2"};
					fatalInjuryCoef = -1;
					class ArmorType
					{
						class Projectile
						{
							class Health { damage = 0; };
							class Blood { damage = 0; };
							class Shock { damage = 0; };
						};
						class Melee
						{
							class Health { damage = 0; };
							class Blood { damage = 0; };
							class Shock { damage = 0; };
						};
					};
				};
			};
		};
	};
};