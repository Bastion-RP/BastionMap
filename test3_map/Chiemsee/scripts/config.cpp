class CfgPatches
{
    class korolgrad_scripts
    {
        units[]={};
        weapons[]={};
        requiredVersion=0.1;
        requiredAddons[]={"DZ_Data","DZ_Scripts","DZ_Gear_Tools"};
        author="";
        name="Korolgrad";
        url="https://www.bastionrp.com";
    };
};

class CfgMods
{
    class korolgrad_scripts
    {
        dir = "korolgrad";
        picture = "";
        action = "";
        hideName = 1;
        hidePicture = 1;
        name = "Korolgrad";
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
                files[] = {"test3_map/Chiemsee/scripts/4_World"};
            };
            class missionScriptModule
            {
                value = "";
                files[] = {"test3_map/Chiemsee/scripts/5_Mission"};
            };
        };
    };
};

class CfgNonAIVehicles
{
    class StaticObject;
    class KorolgradLamp: StaticObject {};
    class Static_lampa_sidl: KorolgradLamp
    {
        scope = 2;
        displayName = "Lamp";
        model = "\BastionRPitems\Lights\lampa_sidl.p3d";
    };
    class Static_lampa_sidl_2: KorolgradLamp
    {
        scope = 2;
        displayName = "Lamp";
        model = "\BastionRPitems\Lights\lampa_sidl_2.p3d";
    };
    class Static_lampa_sidl_3: KorolgradLamp
    {
        scope = 2;
        displayName = "Lamp";
        model = "\BastionRPitems\Lights\lampa_sidl_3.p3d";
    };
    class Static_lampa_ind: KorolgradLamp
    {
        scope = 2;
        displayName = "Lamp";
        model = "\BastionRPitems\Lights\lampa_ind.p3d";
    };
    class Static_lampa_ind_b: KorolgradLamp
    {
        scope = 2;
        displayName = "Lamp";
        model = "\BastionRPitems\Lights\lampa_ind_b.p3d";
    };
    class Static_PowLines_WoodL: KorolgradLamp
    {
        scope = 2;
        displayName = "Lamp";
        model = "\BastionRPitems\Lights\PowLines_WoodL.p3d";
    };
    class Static_wall_lights: KorolgradLamp
    {
        scope = 2;
        displayName = "Lamp";
        model = "\BastionRPitems\Sewer\wall_lights.p3d";
    };
};
