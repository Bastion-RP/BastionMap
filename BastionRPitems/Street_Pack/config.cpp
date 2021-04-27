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
	class TrafficCone2: HouseNoDestruct
	{
		scope = 2;
		displayName = "Traffic Cone";
		descriptionShort = "Traffic Cone";
		model = "\BastionRPitems\Street_Pack\TrafficCone2\BastionRP_TrafficCone2.p3d";
	};
	class BastionRP_ConcreteObstacleFence: HouseNoDestruct
	{
		scope = 2;
		displayName = "Concrete Obstacle Fence";
		descriptionShort = "Concrete Obstacle Fence";
		model = "\BastionRPitems\Street_Pack\ConcreteObstacleFence\BastionRP_ConcreteObstacleFence.p3d";
	};
	class BastionRP_ConcreteObstacleFence_NoLC: HouseNoDestruct
	{
		scope = 2;
		displayName = "Concrete Obstacle Fence";
		descriptionShort = "Concrete Obstacle Fence";
		model = "\BastionRPitems\Street_Pack\ConcreteObstacleFence\BastionRP_ConcreteObstacleFence_NoLC.p3d";
	};
	class BastionRP_Billboard_1: HouseNoDestruct
	{
		scope = 2;
		displayName = "Billboard 1";
		descriptionShort = "Billboard 1";
		model = "\BastionRPitems\Street_Pack\Signs\Billboard_Ad_1.p3d";
	};
	class BastionRP_Billboard_2: HouseNoDestruct
	{
		scope = 2;
		displayName = "Billboard 2";
		descriptionShort = "Billboard 2";
		model = "\BastionRPitems\Street_Pack\Signs\Billboard_Ad_2.p3d";
	};
	class BastionRP_Billboard_3: HouseNoDestruct
	{
		scope = 2;
		displayName = "Billboard 3";
		descriptionShort = "Billboard 3";
		model = "\BastionRPitems\Street_Pack\Signs\Billboard_Ad_3.p3d";
	};
	class BastionRP_Billboard_4: HouseNoDestruct
	{
		scope = 2;
		displayName = "Billboard 4";
		descriptionShort = "Billboard 4";
		model = "\BastionRPitems\Street_Pack\Signs\Billboard_Ad_4.p3d";
	};
	class BastionRP_Billboard_5: HouseNoDestruct
	{
		scope = 2;
		displayName = "Billboard 5";
		descriptionShort = "Billboard 5";
		model = "\BastionRPitems\Street_Pack\Signs\Billboard_Ad_5.p3d";
	};
	class BastionRP_PoliceBarrier: HouseNoDestruct
	{
		scope = 2;
		displayName = "Police Barrier";
		descriptionShort = "Police Barrier";
		model = "\BastionRPitems\Street_Pack\PoliceBarrier\BastionRP_police_barrier.p3d";
	};
	class BastionRP_TrafficCylinder: HouseNoDestruct
	{
		scope = 2;
		displayName = "Traffic Cylinder";
		descriptionShort = "Traffic Cylinder";
		model = "\BastionRPitems\Street_Pack\TrafficCylinder\BastionRP_TrafficCylinder.p3d";
	};
	class BastionRP_FenceChainlink: HouseNoDestruct
	{
		scope = 2;
		displayName = "Fence Chainlink";
		descriptionShort = "Fence Chainlink";
		model = "\BastionRPitems\Street_Pack\FenceChainlink\BastionRP_FenceChainlink.p3d";
	};
	class BastionRP_IronFencePrefab: HouseNoDestruct
	{
		scope = 2;
		displayName = "IronFence Prefab";
		descriptionShort = "IronFence Prefab";
		model = "\BastionRPitems\Street_Pack\IronFencePrefab\BastionRP_IronFencePrefab.p3d";
	};
	class BastionRP_ArrowBoardTrailer2: HouseNoDestruct
	{
		scope = 2;
		displayName = "ArrowBoard Trailer";
		descriptionShort = "ArrowBoard Trailer";
		model = "\BastionRPitems\Street_Pack\ArrowBoardTrailer2\BastionRP_ArrowBoardTrailer2_nolights.p3d";
	};
	class BastionRP_ArrowBoardTrailer2_l: HouseNoDestruct
	{
		scope = 2;
		displayName = "ArrowBoard Trailer Left";
		descriptionShort = "ArrowBoard Trailer Left";
		model = "\BastionRPitems\Street_Pack\ArrowBoardTrailer2\BastionRP_ArrowBoardTrailer2_l.p3d";
	};
	class BastionRP_ArrowBoardTrailer2_r: HouseNoDestruct
	{
		scope = 2;
		displayName = "ArrowBoard Trailer Right";
		descriptionShort = "ArrowBoard Trailer Right";
		model = "\BastionRPitems\Street_Pack\ArrowBoardTrailer2\BastionRP_ArrowBoardTrailer2_r.p3d";
	};
	class Land_BastionRP_barrier1: HouseNoDestruct
	{
		scope=2;
		displayName = "Barrier"; // Name in editor
		model="\BastionRPitems\Street_Pack\Barrier\BastionRP_barrier1.p3d";
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