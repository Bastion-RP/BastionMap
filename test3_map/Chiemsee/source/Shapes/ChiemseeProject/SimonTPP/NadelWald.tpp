<?xml version="1.0" encoding="UTF-8"?>
<Project>
    <Version>79</Version>
    <Name>NadelWald</Name>
    <ExportSettings>
        <Directory></Directory>
        <ExportLBT>1</ExportLBT>
        <ExportSHP>0</ExportSHP>
    </ExportSettings>
    <Tasks>
        <Task>
            <Shapefile>P:\test3_map\Chiemsee\Shapes\Hauptwald.shp</Shapefile>
            <TaskName>Area: High-density Cluster</TaskName>
            <DEMInputFilename></DEMInputFilename>
            <DEMOutputFilename></DEMOutputFilename>
            <Enabled>1</Enabled>
            <Notes>Notes</Notes>
            <Parameters>
                <Parameter Name="Random seed" Type="0" Value="100"/>
                <Parameter Name="Hectare density" Type="0" Value="150"/>
                <Parameter Name="Fraction" Type="0" Value="1"/>
                <Parameter Name="Blend distance" Type="0" Value="15"/>
            </Parameters>
            <ObjectPrototypes>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="b_piceaabies_1f_summer"/>
                    <Parameter Name="PROB" Value="1"/>
                    <Parameter Name="MINHEIGHT" Value="80"/>
                    <Parameter Name="MAXHEIGHT" Value="120"/>
                    <Parameter Name="MINDIST" Value="1"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="b_piceaabies_1fb_summer"/>
                    <Parameter Name="PROB" Value="1"/>
                    <Parameter Name="MINHEIGHT" Value="80"/>
                    <Parameter Name="MAXHEIGHT" Value="130"/>
                    <Parameter Name="MINDIST" Value="1"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="b_caraganaarborescens_2s_summer"/>
                    <Parameter Name="PROB" Value="1"/>
                    <Parameter Name="MINHEIGHT" Value="80"/>
                    <Parameter Name="MAXHEIGHT" Value="130"/>
                    <Parameter Name="MINDIST" Value="1"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="b_betulanana_1s_summer"/>
                    <Parameter Name="PROB" Value="1"/>
                    <Parameter Name="MINHEIGHT" Value="80"/>
                    <Parameter Name="MAXHEIGHT" Value="130"/>
                    <Parameter Name="MINDIST" Value="1"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="b_corylusheterophylla_2s_summer"/>
                    <Parameter Name="PROB" Value="1"/>
                    <Parameter Name="MINHEIGHT" Value="80"/>
                    <Parameter Name="MAXHEIGHT" Value="130"/>
                    <Parameter Name="MINDIST" Value="1"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="b_prunusspinosa_2s_summer"/>
                    <Parameter Name="PROB" Value="1"/>
                    <Parameter Name="MINHEIGHT" Value="80"/>
                    <Parameter Name="MAXHEIGHT" Value="130"/>
                    <Parameter Name="MINDIST" Value="1"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="d_piceaabies_stumpc"/>
                    <Parameter Name="PROB" Value="1"/>
                    <Parameter Name="MINHEIGHT" Value="100"/>
                    <Parameter Name="MAXHEIGHT" Value="130"/>
                    <Parameter Name="MINDIST" Value="5"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="d_piceaabies_stumpd"/>
                    <Parameter Name="PROB" Value="1"/>
                    <Parameter Name="MINHEIGHT" Value="100"/>
                    <Parameter Name="MAXHEIGHT" Value="100"/>
                    <Parameter Name="MINDIST" Value="5"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="d_piceaabies_fallend"/>
                    <Parameter Name="PROB" Value="1"/>
                    <Parameter Name="MINHEIGHT" Value="100"/>
                    <Parameter Name="MAXHEIGHT" Value="100"/>
                    <Parameter Name="MINDIST" Value="5"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="d_piceaabies_fallene"/>
                    <Parameter Name="PROB" Value="2"/>
                    <Parameter Name="MINHEIGHT" Value="100"/>
                    <Parameter Name="MAXHEIGHT" Value="100"/>
                    <Parameter Name="MINDIST" Value="5"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="d_betulapendula_stump"/>
                    <Parameter Name="PROB" Value="1"/>
                    <Parameter Name="MINHEIGHT" Value="100"/>
                    <Parameter Name="MAXHEIGHT" Value="100"/>
                    <Parameter Name="MINDIST" Value="5"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="stone10_moss"/>
                    <Parameter Name="PROB" Value="1"/>
                    <Parameter Name="MINHEIGHT" Value="100"/>
                    <Parameter Name="MAXHEIGHT" Value="100"/>
                    <Parameter Name="MINDIST" Value="2"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="stone6_moss"/>
                    <Parameter Name="PROB" Value="1"/>
                    <Parameter Name="MINHEIGHT" Value="100"/>
                    <Parameter Name="MAXHEIGHT" Value="100"/>
                    <Parameter Name="MINDIST" Value="2"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="stone9_moss"/>
                    <Parameter Name="PROB" Value="1"/>
                    <Parameter Name="MINHEIGHT" Value="100"/>
                    <Parameter Name="MAXHEIGHT" Value="100"/>
                    <Parameter Name="MINDIST" Value="2"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="stone8_moss"/>
                    <Parameter Name="PROB" Value="1"/>
                    <Parameter Name="MINHEIGHT" Value="100"/>
                    <Parameter Name="MAXHEIGHT" Value="100"/>
                    <Parameter Name="MINDIST" Value="2"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="t_piceaabies_2f_summer"/>
                    <Parameter Name="PROB" Value="15"/>
                    <Parameter Name="MINHEIGHT" Value="100"/>
                    <Parameter Name="MAXHEIGHT" Value="180"/>
                    <Parameter Name="MINDIST" Value="4"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="t_piceaabies_2fb_summer"/>
                    <Parameter Name="PROB" Value="15"/>
                    <Parameter Name="MINHEIGHT" Value="100"/>
                    <Parameter Name="MAXHEIGHT" Value="180"/>
                    <Parameter Name="MINDIST" Value="4"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="t_piceaabies_3f_summer"/>
                    <Parameter Name="PROB" Value="15"/>
                    <Parameter Name="MINHEIGHT" Value="100"/>
                    <Parameter Name="MAXHEIGHT" Value="180"/>
                    <Parameter Name="MINDIST" Value="4"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="t_piceaabies_2s_summer"/>
                    <Parameter Name="PROB" Value="6"/>
                    <Parameter Name="MINHEIGHT" Value="100"/>
                    <Parameter Name="MAXHEIGHT" Value="180"/>
                    <Parameter Name="MINDIST" Value="5"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="t_piceaabies_2sb_summer"/>
                    <Parameter Name="PROB" Value="4"/>
                    <Parameter Name="MINHEIGHT" Value="100"/>
                    <Parameter Name="MAXHEIGHT" Value="150"/>
                    <Parameter Name="MINDIST" Value="4"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="t_larixdecidua_2fb_summer"/>
                    <Parameter Name="PROB" Value="8"/>
                    <Parameter Name="MINHEIGHT" Value="100"/>
                    <Parameter Name="MAXHEIGHT" Value="180"/>
                    <Parameter Name="MINDIST" Value="5"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="t_larixdecidua_2f_summer"/>
                    <Parameter Name="PROB" Value="8"/>
                    <Parameter Name="MINHEIGHT" Value="100"/>
                    <Parameter Name="MAXHEIGHT" Value="180"/>
                    <Parameter Name="MINDIST" Value="5"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="t_piceaabies_3s_summer"/>
                    <Parameter Name="PROB" Value="8"/>
                    <Parameter Name="MINHEIGHT" Value="100"/>
                    <Parameter Name="MAXHEIGHT" Value="200"/>
                    <Parameter Name="MINDIST" Value="15"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="t_fagussylvatica_3fb_summer"/>
                    <Parameter Name="PROB" Value="2"/>
                    <Parameter Name="MINHEIGHT" Value="100"/>
                    <Parameter Name="MAXHEIGHT" Value="180"/>
                    <Parameter Name="MINDIST" Value="2"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="t_fagussylvatica_1fe_summer"/>
                    <Parameter Name="PROB" Value="2"/>
                    <Parameter Name="MINHEIGHT" Value="100"/>
                    <Parameter Name="MAXHEIGHT" Value="180"/>
                    <Parameter Name="MINDIST" Value="2"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="t_fagussylvatica_3s_summer"/>
                    <Parameter Name="PROB" Value="1"/>
                    <Parameter Name="MINHEIGHT" Value="100"/>
                    <Parameter Name="MAXHEIGHT" Value="200"/>
                    <Parameter Name="MINDIST" Value="8"/>
                </ObjectPrototype>
            </ObjectPrototypes>
            <AdditionalDatabases/>
        </Task>
    </Tasks>
</Project>
