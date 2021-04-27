////////////////////////////////////////////////////////////////////
//DeRap: worlds_chernarusplus_ai\spawner\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Thu Dec 20 12:45:12 2018 : 'file' last modified on Wed Nov 07 03:15:07 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class test3_map_Chiemsee_ai_spawner{};
};
class ChiemseeSpawner
{
	class AISpawnerParams
	{
		territoriesFiles[] = {"test3_map\Chiemsee\ai\cattle_territories.xml","test3_map\Chiemsee\ai\sheep_goat_territories.xml","test3_map\Chiemsee\ai\red_deer_territories.xml","test3_map\Chiemsee\ai\roe_deer_territories.xml","test3_map\Chiemsee\ai\wild_boar_territories.xml","test3_map\Chiemsee\ai\pig_territories.xml","test3_map\Chiemsee\ai\hen_territories.xml","test3_map\Chiemsee\ai\wolf_territories.xml","test3_map\Chiemsee\ai\hare_territories.xml","test3_map\Chiemsee\ai\zombie_territories.xml"};
		class HerdDeer
		{
			usableTerritories[] = {"red_deer_territories"};
			groupBehaviourTemplateName = "DZDeerGroupBeh";
		};
		class HerdCow
		{
			usableTerritories[] = {"cattle_territories"};
			groupBehaviourTemplateName = "DZdomesticGroupBeh";
		};
		class HerdGoat
		{
			usableTerritories[] = {"sheep_goat_territories"};
			groupBehaviourTemplateName = "DZSheepGroupBeh";
		};
		class HerdSheep
		{
			usableTerritories[] = {"sheep_goat_territories"};
			groupBehaviourTemplateName = "DZSheepGroupBeh";
		};
		class HerdRoeDeer
		{
			usableTerritories[] = {"roe_deer_territories"};
			groupBehaviourTemplateName = "DZDeerGroupBeh";
		};
		class HerdWolf
		{
			usableTerritories[] = {"wolf_territories"};
			groupBehaviourTemplateName = "DZWolfGroupBeh";
		};
		class HerdWildBoar
		{
			usableTerritories[] = {"wild_boar_territories"};
			groupBehaviourTemplateName = "DZDeerGroupBeh";
		};
		class HerdPig
		{
			usableTerritories[] = {"pig_territories"};
			groupBehaviourTemplateName = "DZSheepGroupBeh";
		};
		class AmbientHen
		{
			usableTerritories[] = {"hen_territories"};
			groupBehaviourTemplateName = "DZAmbientLifeGroupBeh";
			globalCountMax = 50;
			zoneCountMin = 1;
			zoneCountMax = 1;
			playerSpawnRadiusNear = 25;
			playerSpawnRadiusFar = 75;
			class AgentTypeMale
			{
				agentConfigName[] = {"Animal_GallusGallusDomesticus"};
				agentSpawnChance[] = {"1"};
			};
			class AgentTypeFemale
			{
				agentConfigName[] = {"Animal_GallusGallusDomesticusF_Brown","Animal_GallusGallusDomesticusF_Spotted","Animal_GallusGallusDomesticusF_White"};
				agentSpawnChance[] = {"1","10","20"};
			};
			agentTypeSpawnChance[] = {"1","3"};
		};
		class AmbientHare
		{
			usableTerritories[] = {"hare_territories"};
			groupBehaviourTemplateName = "DZAmbientLifeGroupBeh";
			globalCountMax = 0;
			zoneCountMin = 3;
			zoneCountMax = 5;
			playerSpawnRadiusNear = 15;
			playerSpawnRadiusFar = 200;
			class AgentTypeMale
			{
				agentConfigName[] = {"Animal_LepusEuropaeus"};
				agentSpawnChance[] = {"1"};
			};
			class AgentTypeFemale
			{
				agentConfigName[] = {"Animal_LepusEuropaeus"};
				agentSpawnChance[] = {"1"};
			};
			agentTypeSpawnChance[] = {"1","3"};
		};
		class HerdZombieTest
		{
			usableTerritories[] = {"zombie_territories"};
			groupBehaviourTemplateName = "DZdomesticGroupBeh";
			herdsCount = 0;
			class AgentTypeMale
			{
				agentConfigName[] = {"ZombieMale3_NewAI"};
				countMin = 0;
				countMax = 0;
			};
			class AgentTypeFemale
			{
				agentConfigName[] = {"ZombieFemale3_NewAI"};
				countMin = 0;
				countMax = 0;
			};
		};
	};
};
