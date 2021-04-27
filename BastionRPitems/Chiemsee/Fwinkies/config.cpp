////////////////////////////////////////////////////////////////////
//DeRap: P:\BastionRPitems\Chiemsee\Fwinkies\config.bin
//Produced from mikero's Dos Tools Dll version 7.70
//https://mikero.bytex.digital/Downloads
//'now' is Mon Aug 10 21:34:15 2020 : 'file' last modified on Mon Aug 10 21:34:15 2020
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class Lugge_OBJECT
	{
		units[] = {"Fwinkies"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class CfgMods
{
	class lxFoodScripts
	{
		dir = "";
		picture = "";
		action = "";
		hideName = 0;
		hidePicture = 1;
		name = "lxFoodScripts";
		type = "mod";
		dependencies[] = {"World"};
		class defs
		{
			class worldScriptModule
			{
				value = "";
				files[] = {""};
			};
		};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class BoxCerealCrunchin: Inventory_Base{};
	class Fwinkies: BoxCerealCrunchin
	{
		scope = 2;
		displayName = "Fwinkies";
		descriptionShort = "Golden sponge cake with CREAMY FILLING ";
		model = "BastionRPitems\Chiemsee\Fwinkies\Fwinkies.p3d";
		rotationFlags = 17;
		weight = 0.425;
		itemSize[] = {3,2};
		varQuantityInit = 425;
		varQuantityMin = 0;
		varQuantityMax = 425;
		absorbency = 0.9;
		isMeleeWeapon = 1;
		class Nutrition
		{
			fullnessIndex = 2.7;
			energy = 800;
			water = 100;
			nutritionalIndex = 1;
			toxicity = 0;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class openTunaCan
				{
					soundSet = "openTunaCan_SoundSet";
					id = 204;
				};
				class pickup
				{
					soundSet = "BoxCerealCrunchin_pickup_SoundSet";
					id = 797;
				};
				class Eating_TakeFood
				{
					soundSet = "Eating_TakeFood_Soundset";
					id = 889;
				};
				class Eating_BoxOpen
				{
					soundSet = "Eating_BoxOpen_Soundset";
					id = 893;
				};
				class Eating_BoxShake
				{
					soundSet = "Eating_BoxShake_Soundset";
					id = 894;
				};
				class Eating_BoxEnd
				{
					soundSet = "Eating_BoxEnd_Soundset";
					id = 895;
				};
				class drop
				{
					soundset = "BoxCerealCrunchin_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
};
