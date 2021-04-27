class CfgPatches
{
	class Korolgrad
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={"DZ_Data","DZ_Surfaces","BastionRP_Items"};
		author="Bastion Development Team";
		name="Korolgrad";
		url="http://bastionrp.com/";
	};
};
class CfgWorlds
{
	class CAWorld;
	class Korolgrad: CAWorld
	{
		// link of world and required cutscene for the main menu
		cutscenes[]={"korolgradintro1"};
		description="Korolgrad";
		worldName="test3_map\Chiemsee\world\Korolgrad.wrp";
		icon="";
		class Navmesh
		{
			navmeshName="\test3_map\Chiemsee\navmesh\Korolgrad.nm";
			filterIsolatedIslandsOnLoad=1;
			visualiseOffset=0;
			class GenParams
			{
				tileWidth=50;
				cellSize1=0.25;
				cellSize2=0.1;
				cellSize3=0.1;
				filterIsolatedIslands=1;
				seedPosition[]={5120,0,5120};
				class Agent
				{
					diameter=0.60000002;
					standHeight=1.5;
					crouchHeight=1;
					proneHeight=0.5;
					maxStepHeight=0.44999999;
					maxSlope=60;
				};
				class Links
				{
					class ZedJump387_050
					{
						jumpLength=1.5;
						jumpHeight=0.5;
						minCenterHeight=0.30000001;
						jumpDropdownMin=0.5;
						jumpDropdownMax=-0.5;
						areaType="jump0";
						flags[]=
						{
							"jumpOver"
						};
						color=1727987712;
					};
					class ZedJump388_050
					{
						jumpLength=1.5;
						jumpHeight=0.5;
						minCenterHeight=-0.5;
						jumpDropdownMin=0.5;
						jumpDropdownMax=-0.5;
						areaType="jump0";
						flags[]=
						{
							"jumpOver"
						};
						color=1725781248;
					};
					class ZedJump387_110
					{
						jumpLength=3.9000001;
						jumpHeight=1.1;
						minCenterHeight=0.5;
						jumpDropdownMin=0.5;
						jumpDropdownMax=-0.5;
						areaType="jump0";
						flags[]=
						{
							"jumpOver"
						};
						color=1711308800;
					};
					class ZedJump420_160
					{
						jumpLength=4;
						jumpHeight=1.6;
						minCenterHeight=1.1;
						jumpDropdownMin=0.5;
						jumpDropdownMax=-0.5;
						areaType="jump0";
						flags[]=
						{
							"jumpOver"
						};
						color=1711276287;
					};
					class ZedJump265_210
					{
						jumpLength=2.45;
						jumpHeight=2.5;
						minCenterHeight=1.8;
						jumpDropdownMin=0.5;
						jumpDropdownMax=-0.5;
						areaType="jump0";
						flags[]=
						{
							"climb"
						};
						color=1720975571;
					};
					class Fence50_110deer
					{
						typeId=100;
						jumpLength=8;
						jumpHeight=1.1;
						minCenterHeight=0.5;
						jumpDropdownMin=1;
						jumpDropdownMax=-1;
						areaType="jump2";
						flags[]=
						{
							"jumpOver"
						};
						color=1722460927;
					};
					class Fence110_160deer
					{
						typeId=101;
						jumpLength=8;
						jumpHeight=1.6;
						minCenterHeight=1.1;
						jumpDropdownMin=1;
						jumpDropdownMax=-1;
						areaType="jump3";
						flags[]=
						{
							"jumpOver"
						};
						color=1713700856;
					};
					class Fence50_110hen
					{
						typeId=110;
						jumpLength=4;
						jumpHeight=1.1;
						minCenterHeight=0.5;
						jumpDropdownMin=0.5;
						jumpDropdownMax=-0.5;
						areaType="jump4";
						flags[]=
						{
							"jumpOver"
						};
						color=-22016;
					};
					class Fence110_160hen
					{
						typeId=111;
						jumpLength=4;
						jumpHeight=1.6;
						minCenterHeight=1.1;
						jumpDropdownMin=0.5;
						jumpDropdownMax=-0.5;
						areaType="jump4";
						flags[]=
						{
							"jumpOver"
						};
						color=-22016;
					};
				};
			};
		};
		class Grid
		{
			offsetX=0;
			offsetY=0;
			class Zoom1
			{
				zoomMax=0.15000001;
				format="XY";
				formatX="000";
				formatY="000";
				stepX=100;
				stepY=100;
			};
			class Zoom2
			{
				zoomMax=0.85000002;
				format="XY";
				formatX="00";
				formatY="00";
				stepX=1000;
				stepY=1000;
			};
			class Zoom3
			{
				zoomMax=1e+030;
				format="XY";
				formatX="0";
				formatY="0";
				stepX=10000;
				stepY=10000;
			};
		};
		class SecondaryAirports
		{
			class ChernarusPlusAirstrip1
			{
				ilsPosition[]={12410,12400};
				ilsDirection[]={0.926,0.079999998,-0.37799999};
				ilsTaxiIn[]={12385,12363,12250,12419,11939,12545};
				ilsTaxiOff[]={11917,12555,11864,12578,11875,12602};
				drawTaxiway=1;
			};
			class ChernarusPlusAirstrip2
			{
				ilsPosition[]={5244,2175};
				ilsDirection[]={0.64200002,0.079999998,-0.76700002};
				ilsTaxiIn[]={4958,2449,4975,2460,5072,2367};
				ilsTaxiOff[]={4888,2573,4973,2472,4958,2449};
				drawTaxiway=0;
			};
		};
		soundMapAttenCoef=0.0099999998;
		class SoundMapValues
		{
			treehard=0.029999999;
			treesoft=0.029999999;
			bushhard=0;
			bushsoft=0;
			forest=1;
			house=0.30000001;
			church=0.5;
		};
		class Sounds
		{
			sounds[]={};
		};
	 
		longitude = 30.0;	// positive is east
		latitude = -45.0;	// positive is south
		
		mapDisplayNameKey="ChiemseeMap";
		mapDescriptionKey="ChiemseeMap";
		mapTextureClosed="test3_map\Chiemsee\data\map\map_koroldgrad_co.paa";
		mapTextureOpened="test3_map\Chiemsee\data\map\karta_co.paa";
		mapTextureLegend="test3_map\Chiemsee\data\map\karta_side_co.paa";

		centerPosition[]={5120,5120,300};
		ilsPosition[]={4827,9595};
		ilsDirection[]={0.49599999,0.079999998,-0.86699998};
		ilsTaxiIn[]={4717,9862,4820,9922,4819,9959,4731,10115,4648,10269};
		ilsTaxiOff[]={4591,10366,4516,10497,4426,10653,4390,10713,4325,10831,4271,10911,4229,10904,4135,10840};
		drawTaxiway=1;

		startTime="9:20";
		startDate="11/10/2017";
		
		minTreesInForestSquare=10;
		minRocksInRockSquare=5;

		clutterGrid=1;
		clutterDist=125;
		noDetailDist=65.0;
		fullDetailDist=10.0;
		midDetailTexture = "test3_map\Chiemsee\data\middle_sat_mco.paa";
		terrainNormalTexture="test3_map\Chiemsee\data\global_nohq.paa";
		
		class OutsideTerrain
		{
			satellite="test3_map\Chiemsee\data\enoch_satout_co.paa";
			enableTerrainSynth=1;
			class Layers
			{
				class Layer0
				{
					nopx="DZ\surfaces\data\terrain\cp_grass_tall_nopx.paa";
					texture="DZ\surfaces\data\terrain\cp_grass_tall_ca.paa";
				};
			};
		};
		class UsedTerrainMaterials
		{		
			material0 = "DZ\surfaces\data\terrain\cp_grass_tall.rvmat";
			material1 = "DZ\surfaces_bliss\data\terrain\en_grass1.rvmat";
			material2 = "DZ\surfaces_bliss\data\terrain\en_stones.rvmat";
			material3 = "DZ\surfaces_bliss\data\terrain\en_tarmac_old.rvmat";
			material4 = "DZ\surfaces_bliss\data\terrain\en_forest_con.rvmat";
			material5 = "DZ\surfaces_bliss\data\terrain\en_forest_dec.rvmat";
			material6 = "DZ\surfaces\data\terrain\cp_grass.rvmat";
			material7 = "DZ\surfaces\data\terrain\cp_conifer_common1.rvmat"; 
			material8 = "DZ\surfaces\data\terrain\cp_concrete1.rvmat";
			material9 = "DZ\surfaces\data\terrain\cp_rock.rvmat";
			material10 = "DZ\surfaces\data\terrain\cp_broadleaf_dense1.rvmat";
			material11 = "DZ\surfaces\data\terrain\cp_gravel.rvmat";
			material12 = "DZ\surfaces\data\terrain\cp_conifer_moss1.rvmat";
			material13 = "DZ\surfaces\data\terrain\cp_conifer_common2.rvmat"; 
			material14 = "DZ\surfaces\data\terrain\cp_conifer_moss2.rvmat";
			material15 = "DZ\surfaces_bliss\data\terrain\en_stubble.rvmat";
			material16 = "DZ\surfaces_bliss\data\terrain\en_soil.rvmat";
		};
        class Names
		{
			class Gollenhausen
			{
				name="Gollenhausen";
				position[]={9326.24,8830.74};
				type="Local";
				
				radiusA=177.38;
				radiusB=140.51;
				angle=0.000;
			};
			class Soll
			{
				name="Soll";
				position[]={8416.99,9849.76};
				type="Local";
				
				radiusA=285.68;
				radiusB=226.30;
				angle=0.000;
			};
			class Krater
			{
				name="Krater";
				position[]={7263.26,9619.06};
				type="Local";
				
				radiusA=117.01;
				radiusB=92.69;
				angle=0.000;
			};
			class Obing
			{
				name="Obing";
				position[]={6343.64,9256.23};
				type="Local";
				
				radiusA=228.54;
				radiusB=181.04;
				angle=0.000;
			};
			class WeitmoosIndustrie
			{
				name="WeitmoosIndustrie";
				position[]={6189.88,9720.06};
				type="Local";
				
				radiusA=150.78;
				radiusB=119.43;
				angle=0.000;
			};
			class HerrenInsel
			{
				name="Herreninsel";
				position[]={6783.17,3396.33};
				type="Local";
				
				radiusA=1000.00;
				radiusB=1000.00;
				angle=0.000;
			};
			class GstadtIndustrie
			{
				name="Gstadt Industrie";
				position[]={8214.28,6325.23};
				type="Local";
				
				radiusA=242.61;
				radiusB=212.97;
				angle=0.000;
			};
			class GstadtFreizeitpark
			{
				name="Gstadt Freizeitpark";
				position[]={8050.66,6039.78};
				type="Local";
				
				radiusA=278.54;
				radiusB=220.64;
				angle=0.000;
			};
			class Fraueninsel
			{
				name="Fraueninsel";
				position[]={8915.93,4873.09};
				type="Local";
				
				radiusA=435.21;
				radiusB=344.75;
				angle=0.000;
			};
			class Krautinsel
			{
				name="Krautinsel";
				position[]={8210.47,4370.84};
				type="Local";
				
				radiusA=135.21;
				radiusB=144.74;
				angle=0.000;
			};
				class HerrnChiemsee
			{
				name="HerrnChiemsee";
				position[]={7066.27,3508.24};
				type="Local";
					
				radiusA=278.54;
				radiusB=220.64;
				angle=0.000;
			};
			class Mittermuhle
			{
				name="Mittermuhle";
				position[]={7132.33,5379.02};
				type="Local";
				
				radiusA=142.61;
				radiusB=112.97;
				angle=0.000;
			};
			class Oberleiten
			{
				name="Oberleiten";
				position[]={6419.43,5937.52};
				type="Local";
				
				radiusA=142.61;
				radiusB=112.97;
				angle=0.000;
			};
			class Breitbrunn
			{
				name="Breitbrunn";
				position[]={6941.44,6487.45};
				type="Local";
				
				radiusA=142.61;
				radiusB=112.97;
				angle=0.000;
			};
			class Eggstatt
			{
				name="Eggstatt";
				position[]={5289.57,8429.54};
				type="Local";
				
				radiusA=378.26;
				radiusB=341.21;
				angle=0.000;
			};
			class Stein
			{
				name="Stein";
				position[]={4636.57,7636.22};
				type="Ruin";
				
				radiusA=178.26;
				radiusB=141.21;
				angle=0.000;
			};
			class Chiemsee
			{
				name="Chiemsee";
				position[]={8895.97,2430.96};
				type="Marine";
				
				radiusA=2075.26;
				radiusB=1643.87;
				angle=310.000;
			};
			class Loiberting
			{
				name="Loiberting";
				position[]={6638.56,6942.89};
				type="Local";
				
				radiusA=222.83;
				radiusB=176.51;
				angle=0.000;
			};
			class Aisching
			{
				name="Aisching";
				position[]={8254.94,7225.36};
				type="Local";
				
				radiusA=91.27;
				radiusB=72.30;
				angle=0.000;
			};
			class Hemhof
			{
				name="Hemhof";
				position[]={3347.05,8689.77};
				type="Local";
				
				radiusA=91.27;
				radiusB=72.30;
				angle=0.000;
			};
			class Atomkraftwerk
			{
				name="Atomkraftwerk";
				position[]={3052.34,8411.48};
				type="Local";
				
				radiusA=435.21;
				radiusB=344.75;
				angle=0.000;
			};
			class BadEndorf
			{
				name="Bad Endorf";
				position[]={2286.05,8740.92};
				type="Local";
				
				radiusA=222.83;
				radiusB=176.51;
				angle=0.000;
			};
			class BurgTeisenham
			{
				name="Burg Teisenham";
				position[]={2550.44,9864.84};
				type="Ruin";
				
				radiusA=142.61;
				radiusB=112.97;
				angle=0.000;
			};
			class Jolling
			{
				name="Jolling";
				position[]={1120.30,9485.70};
				type="Local";
				
				radiusA=142.61;
				radiusB=112.97;
				angle=0.000;
			};
			class Pelham
			{
				name="Pelham";
				position[]={1916.95,8267.85};
				type="Local";
				
				radiusA=178.26;
				radiusB=141.21;
				angle=0.000;
			};
			class Steinkreis
			{
				name="";
				position[]={1730.17,7382.42};
				type="RockArea";
				
				radiusA=58.41;
				radiusB=46.27;
				angle=0.000;
			};
			class Milcamp
			{
				name="Milcamp";
				position[]={2428.54,7229.00};
				type="Camp";
				
				radiusA=91.27;
				radiusB=72.30;
				angle=0.000;
			};
			class Milcamp1
			{
				name="";
				position[]={5303.41,9797.46};
				type="Camp";
				
				radiusA=114.09;
				radiusB=90.37;
				angle=0.000;
			};
			class NeviHof
			{
				name="NeviHof";
				position[]={5932.91,7762.56};
				type="Local";
				
				radiusA=73.02;
				radiusB=57.84;
				angle=0.000;
			};
			class Mine1
			{
				name="Mine";
				position[]={8765.72,8759.90};
				type="Local";
				
				radiusA=29.91;
				radiusB=23.69;
				angle=0.000;
			};
			class Mine2
			{
				name="Mine";
				position[]={9121.72,8737.49};
				type="Local";
				
				radiusA=46.73;
				radiusB=37.02;
				angle=0.000;
			};
			class EschenauerSee
			{
				name="Eschenauer See";
				position[]={5006.20,9431.77};
				type="Marine";
				
				radiusA=142.61;
				radiusB=112.97;
				angle=0.000;
			};
			class Hartsee
			{
				name="Hartsee";
				position[]={2978.14,7898.38};
				type="Marine";
				
				radiusA=444.02;
				radiusB=230.93;
				angle=40.000;
			};
			class Sagewerk
			{
				name="Sagewerk";
				position[]={4251.81,6708.53};
				type="Local";
				
				radiusA=91.27;
				radiusB=72.30;
				angle=0.000;
			};
			class DefaultKeyPoint1
			{
				name="";
				position[]={5008.52,5084.34};
				type="ViewPoint";
				
				radiusA=37.39;
				radiusB=29.61;
				angle=0.000;
			};
			class Baustelle
			{
				name="Baustelle";
				position[]={4037.75,5118.19};
				type="Local";
				
				radiusA=73.02;
				radiusB=57.84;
				angle=0.000;
			};
			class CampRefugi
			{
				name="Camp Refugi";
				position[]={4673.30,5237.19};
				type="Camp";
				
				radiusA=278.54;
				radiusB=220.64;
				angle=0.000;
			};
			class Hochstatt
			{
				name="Hochstatt";
				position[]={2571.13,5930.47};
				type="Local";
				
				radiusA=348.17;
				radiusB=275.80;
				angle=0.000;
			};
			class Antwort
			{
				name="Antwort";
				position[]={2035.28,5216.31};
				type="Local";
				
				radiusA=278.54;
				radiusB=220.64;
				angle=0.000;
			};
			class KleinerHof
			{
				name="Kleiner Hof";
				position[]={2319.38,4618.72};
				type="Local";
				
				radiusA=58.41;
				radiusB=46.27;
				angle=0.000;
			};
			class Alterhof
			{
				name="Alterhof";
				position[]={2017.91,4493.97};
				type="Local";
				
				radiusA=58.41;
				radiusB=46.27;
				angle=0.000;
			};
			class Rimsting
			{
				name="Rimsting";
				position[]={3248.64,5336.95};
				type="Local";
				
				radiusA=178.26;
				radiusB=141.21;
				angle=0.000;
			};
			class Mauerkirchen
			{
				name="Mauerkirchen";
				position[]={3012.97,4260.66};
				type="Local";
				
				radiusA=222.83;
				radiusB=176.51;
				angle=0.000;
			};
			class GroserHof
			{
				name="Groser Hof";
				position[]={3243.73,3931.12};
				type="Local";
				
				radiusA=73.02;
				radiusB=57.84;
				angle=0.000;
			};
			class Osternach
			{
				name="Osternach";
				position[]={3918.69,2671.05};
				type="Local";
				
				radiusA=73.02;
				radiusB=57.84;
				angle=0.000;
			};
			class PrienIndustrie
			{
				name="PrienIndustrie";
				position[]={4478.84,2385.33};
				type="Local";
				
				radiusA=222.83;
				radiusB=176.51;
				angle=0.000;
			};
			class Prien
			{
				name="Prien";
				position[]={4621.73,1818.85};
				type="Local";
				
				radiusA=435.21;
				radiusB=344.75;
				angle=0.000;
			};
			class Ernstdorf
			{
				name="Ernstdorf";
				position[]={4707.30,988.77};
				type="Local";
				
				radiusA=178.26;
				radiusB=141.21;
				angle=0.000;
			};
			class DefaultKeyPoint2
			{
				name="Serpentinen str";
				position[]={3628.67,634.80};
				type="ViewPoint";
				
				radiusA=91.27;
				radiusB=72.30;
				angle=0.000;
			};
			class TedValley
			{
				name="TedValley";
				position[]={1066.72,1666.37};
				type="Local";
				
				radiusA=435.21;
				radiusB=344.75;
				angle=0.000;
			};
			class DefaultKeyPoint3
			{
				name="Alm";
				position[]={1415.27,1755.11};
				type="ViewPoint";
				
				radiusA=58.41;
				radiusB=46.27;
				angle=0.000;
			};
			class Simssee
			{
				name="Simssee";
				position[]={1063.80,1372.47};
				type="Marine";
				
				radiusA=278.54;
				radiusB=220.64;
				angle=0.000;
			};
			class HofstatterSee
			{
				name="Hofstatter See";
				position[]={881.33,2468.98};
				type="Marine";
				
				radiusA=114.09;
				radiusB=90.37;
				angle=0.000;
			};
			class RebellenCamp
			{
				name="Rebellen Camp";
				position[]={998.84,2373.67};
				type="Camp";
				
				radiusA=129.91;
				radiusB=103.69;
				angle=0.000;
			};
			class Bachham
			{
				name="Bachham";
				position[]={1137.58,2560.41};
				type="Local";
				
				radiusA=114.09;
				radiusB=90.37;
				angle=0.000;
			};
			class Urschalling
			{
				name="Urschalling";
				position[]={2233.13,2630.96};
				type="Local";
				
				radiusA=91.27;
				radiusB=72.30;
				angle=0.000;
			};
			class Schlachtfeld
			{
				name="Schlachtfeld";
				position[]={3231.11,1654.43};
				type="Local";
				
				radiusA=222.83;
				radiusB=176.51;
				angle=0.000;
			};
			class ChiemseeOil
			{
				name="ChiemseeOil";
				position[]={3386.52,1337.29};
				type="FlatAreaLocal";
				
				radiusA=114.09;
				radiusB=90.37;
				angle=0.000;
			};
			class Wendelstein
			{
				name="Wendelstein";
				position[]={3394.56,2422.49};
				type="Hill";
				
				radiusA=178.26;
				radiusB=141.21;
				angle=0.000;
			};
			class Obermaierhof
			{
				name="Obermaier hof";
				position[]={3070.55,2994.03};
				type="Local";
				
				radiusA=91.27;
				radiusB=72.30;
				angle=0.000;
			};
			class Untermaierhof
			{
				name="Untermaier hof";
				position[]={2733.58,3086.10};
				type="Local";
				
				radiusA=73.02;
				radiusB=57.84;
				angle=0.000;
			};
			class Burgensdorf
			{
				name="Burgensdorf";
				position[]={1810.35,3524.75};
				type="Local";
				
				radiusA=435.21;
				radiusB=344.75;
				angle=0.000;
			};
			class AltSchwanstein
			{
				name="AltSchwanstein";
				position[]={3944.30,1277.83};
				type="Ruin";
				
				radiusA=58.41;
				radiusB=46.27;
				angle=0.000;
			};
			class Kieswerk
			{
				name="Kieswerk";
				position[]={2909.41,4924.09};
				type="Local";
				
				radiusA=114.09;
				radiusB=90.37;
				angle=0.000;
			};
			class Hub
			{
				name="Hub";
				position[]={2188.53,540.46};
				type="Local";
				
				radiusA=114.09;
				radiusB=90.37;
				angle=0.000;
			};
			class BarnSee
			{
				name="Barnsee";
				position[]={1905.69,323.07};
				type="Marine";
				
				radiusA=73.02;
				radiusB=57.84;
				angle=0.000;
			};
			class GrundloserSee
			{
				name="Grundloser See";
				position[]={8969.00,8031.45};
				type="Marine";
				
				radiusA=114.09;
				radiusB=90.37;
				angle=0.000;
			};
		};
		class Ambient
		{
			class BigInsects
			{
				radius=20;
				cost="(5 - (2 * houses)) * (1 - night) * (1 - rain) * (1 - sea) * (1 - windy)";
				class Species
				{
				};
			};
			class BigInsectsAquatic
			{
				radius=20;
				cost="(3 * sea) * (1 - night) * (1 - rain) * (1 - windy)";
				class Species
				{
				};
			};
			class SmallInsects
			{
				radius=3;
				cost="(12 - 8 * hills) * (1 - night) * (1 - rain) * (1 - sea) * (1 - windy)";
				class Species
				{
				};
			};
			class NightInsects
			{
				radius=3;
				cost="(9 - 8 * hills) * night * (1 - rain) * (1 - sea) * (1 - windy)";
				class Species
				{
				};
			};
			class WindClutter
			{
				radius=10;
				cost="((20 - 5 * rain) * (3 * (windy factor [0.2, 0.5]))) * (1 - sea)";
				class Species
				{
					class FxWindGrass1
					{
						probability="0.4 - 0.2 * hills - 0.2 * trees";
						cost=1;
					};
					class FxWindGrass2
					{
						probability="0.4 - 0.2 * hills - 0.2 * trees";
						cost=1;
					};
					class FxWindRock1
					{
						probability="0.4 * hills";
						cost=1;
					};
					class FxCrWindLeaf1
					{
						probability="0.2 * trees";
						cost=1;
					};
					class FxCrWindLeaf2
					{
						probability="0.1 * trees + 0.2";
						cost=1;
					};
					class FxCrWindLeaf3
					{
						probability="0.1 * trees";
						cost=1;
					};
				};
			};
			class NoWindClutter
			{
				radius=15;
				cost=8;
				class Species
				{
					class FxWindPollen1
					{
						probability=1;
						cost=1;
					};
					class FxCrWindLeaf1
					{
						probability="0.2 * trees";
						cost=1;
					};
					class FxCrWindLeaf2
					{
						probability="0.1 * trees + 0.2";
						cost=1;
					};
					class FxCrWindLeaf3
					{
						probability="0.1 * trees";
						cost=1;
					};
				};
			};
		};
	};
};
// scenes for the mission in main menu
class cfgCharacterScenes
{
    class korolgrad
    {
        class loc1
        {
            target[] = {4697.89,4388.72,10}; // Position of character
            position[] = {4696.40,4390.70,0.8}; // Position of camera
            fov = 0.55; // Zoom of scene on character
            date[] = {2019/01/01/12/00}; // The time/date of scene
            overcast = 1.25; // The overcast for the scene
            rain = 0.0; // The amount of rain in scene
            fog = 0.15; // The amount of fog in scene
        };
    };
};

// mission for the main menu this path does not have to exist, the important is \intro.worldname
class CfgMissions
{
    class Cutscenes
    {
        class korolgradintro1
        {
            directory="test3_map\Chiemsee\data\scenes\intro.Korolgrad";
        };
    };
};
