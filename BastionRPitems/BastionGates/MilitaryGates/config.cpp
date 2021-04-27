class CfgPatches
{
	class BastionRPitems_BastionGates_MilitaryGates
	{
		units[]=
		{
			"Bastion_Military_TwinGate",
			"Bastion_Military_StopGate"
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
	
// - Military Gate
	class BRP_Military_LargeGate: HouseNoDestruct
	{
		scope = 1;
		model = "BastionRPitems\BastionGates\MilitaryGates\TwinGate\MilitaryGate.p3d";
		bounding="boundingmax";
		hiddenSelections[]=
		{
			"all"
		};
		hiddenSelectionsTextures[]=
		{
			"BastionRPitems\BastionGates\MilitaryGates\Data\MilitaryGate_CO.paa"
		};
		class Doors
		{
			class DoorsTwin1
			{
				displayName = "Twin Doors 1";
				component = "DoorsTwin1";
				soundPos = "DoorsTwin1_action";
				animPeriod = 4.8;
				initPhase = 0.0;
				initOpened = 0.0;
				soundOpen="doorMetalTwinLargeOpen";
				soundClose="doorMetalTwinLargeClose";
				soundLocked="doorMetalTwinLargeRattle";
				soundOpenABit="doorMetalTwinLargeOpenABit";
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
							class Health { damage = 2; };
							class Blood { damage = 0; };
							class Shock { damage = 0; };
						};
						class Melee
						{
							class Health { damage = 2.5; };
							class Blood { damage = 0; };
							class Shock { damage = 0; };
						};
					};
				};
			};
		};
	};
	
// - Bastion Military Stop Gate
	class BRP_Military_StopGate: HouseNoDestruct
	{
		scope = 1;
		model = "BastionRPitems\BastionGates\MilitaryGates\StopGate\StopGate.p3d";
		bounding="boundingmax";
		hiddenSelections[]=
		{
			"all"
		};
		hiddenSelectionsTextures[]=
		{
			"BastionRPitems\BastionGates\MilitaryGates\Data\MilitaryGate_CO.paa"
		};
		class Doors
		{
			class Gate
			{
				displayName = "Gate";
				component = "gate";
				soundPos = "gate_action";
				animPeriod = 3.0;
				initPhase = 0.0;
				initOpened = 0.0;
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
				class Gate
				{
					class Health
					{
						hitpoints = 2000;
						transferToGlobalCoef = 0;
					};
					componentNames[] = {"gate"};
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