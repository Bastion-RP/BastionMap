<?xml version="1.0" encoding="UTF-8"?>
<Project>
    <Version>79</Version>
    <Name>Auwald</Name>
    <ExportSettings>
        <Directory></Directory>
        <ExportLBT>1</ExportLBT>
        <ExportSHP>0</ExportSHP>
    </ExportSettings>
    <Tasks>
        <Task>
            <Shapefile>P:\test3_map\Chiemsee\Shapes\Outputlayers\Simon\auwald.shp</Shapefile>
            <TaskName>Area: High-density Cluster</TaskName>
            <DEMInputFilename></DEMInputFilename>
            <DEMOutputFilename></DEMOutputFilename>
            <Enabled>1</Enabled>
            <Notes>Notes</Notes>
            <Parameters>
                <Parameter Name="Random seed" Type="0" Value="100"/>
                <Parameter Name="Hectare density" Type="0" Value="350"/>
                <Parameter Name="Fraction" Type="0" Value="1"/>
                <Parameter Name="Blend distance" Type="0" Value="10"/>
            </Parameters>
            <ObjectPrototypes>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="t_betulapendulae_2w_summer"/>
                    <Parameter Name="PROB" Value="100"/>
                    <Parameter Name="MINHEIGHT" Value="30"/>
                    <Parameter Name="MAXHEIGHT" Value="150"/>
                    <Parameter Name="MINDIST" Value="2"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="b_corylusheterophylla_2s_summer"/>
                    <Parameter Name="PROB" Value="100"/>
                    <Parameter Name="MINHEIGHT" Value="30"/>
                    <Parameter Name="MAXHEIGHT" Value="150"/>
                    <Parameter Name="MINDIST" Value="1"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="b_sambucusnigra_2s_summer"/>
                    <Parameter Name="PROB" Value="100"/>
                    <Parameter Name="MINHEIGHT" Value="30"/>
                    <Parameter Name="MAXHEIGHT" Value="150"/>
                    <Parameter Name="MINDIST" Value="2"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="b_prunusspinosa_2s_summer"/>
                    <Parameter Name="PROB" Value="100"/>
                    <Parameter Name="MINHEIGHT" Value="30"/>
                    <Parameter Name="MAXHEIGHT" Value="150"/>
                    <Parameter Name="MINDIST" Value="1"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="b_betulanana_1s_summer"/>
                    <Parameter Name="PROB" Value="2"/>
                    <Parameter Name="MINHEIGHT" Value="30"/>
                    <Parameter Name="MAXHEIGHT" Value="150"/>
                    <Parameter Name="MINDIST" Value="2"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="b_sambucusnigra_1s_summer"/>
                    <Parameter Name="PROB" Value="2"/>
                    <Parameter Name="MINHEIGHT" Value="70"/>
                    <Parameter Name="MAXHEIGHT" Value="150"/>
                    <Parameter Name="MINDIST" Value="1"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="d_betulapendula_fallen"/>
                    <Parameter Name="PROB" Value="3"/>
                    <Parameter Name="MINHEIGHT" Value="100"/>
                    <Parameter Name="MAXHEIGHT" Value="100"/>
                    <Parameter Name="MINDIST" Value="3"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="d_betulapendula_stump"/>
                    <Parameter Name="PROB" Value="2"/>
                    <Parameter Name="MINHEIGHT" Value="100"/>
                    <Parameter Name="MAXHEIGHT" Value="100"/>
                    <Parameter Name="MINDIST" Value="5"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="d_piceaabies_stumpc"/>
                    <Parameter Name="PROB" Value="2"/>
                    <Parameter Name="MINHEIGHT" Value="100"/>
                    <Parameter Name="MAXHEIGHT" Value="100"/>
                    <Parameter Name="MINDIST" Value="5"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="stone10_moss"/>
                    <Parameter Name="PROB" Value="1"/>
                    <Parameter Name="MINHEIGHT" Value="90"/>
                    <Parameter Name="MAXHEIGHT" Value="120"/>
                    <Parameter Name="MINDIST" Value="5"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="stone7_moss"/>
                    <Parameter Name="PROB" Value="1"/>
                    <Parameter Name="MINHEIGHT" Value="80"/>
                    <Parameter Name="MAXHEIGHT" Value="100"/>
                    <Parameter Name="MINDIST" Value="5"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="stone6_moss"/>
                    <Parameter Name="PROB" Value="1"/>
                    <Parameter Name="MINHEIGHT" Value="80"/>
                    <Parameter Name="MAXHEIGHT" Value="100"/>
                    <Parameter Name="MINDIST" Value="5"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="stone8_moss"/>
                    <Parameter Name="PROB" Value="1"/>
                    <Parameter Name="MINHEIGHT" Value="80"/>
                    <Parameter Name="MAXHEIGHT" Value="100"/>
                    <Parameter Name="MINDIST" Value="5"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="t_salixalba_2sb_summer"/>
                    <Parameter Name="PROB" Value="17"/>
                    <Parameter Name="MINHEIGHT" Value="100"/>
                    <Parameter Name="MAXHEIGHT" Value="180"/>
                    <Parameter Name="MINDIST" Value="10"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="t_pyruscommunis_3s_summer"/>
                    <Parameter Name="PROB" Value="13"/>
                    <Parameter Name="MINHEIGHT" Value="60"/>
                    <Parameter Name="MAXHEIGHT" Value="120"/>
                    <Parameter Name="MINDIST" Value="5"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="t_sorbus_2s_summer"/>
                    <Parameter Name="PROB" Value="10"/>
                    <Parameter Name="MINHEIGHT" Value="100"/>
                    <Parameter Name="MAXHEIGHT" Value="160"/>
                    <Parameter Name="MINDIST" Value="5"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="t_betulapendulae_3f_summer"/>
                    <Parameter Name="PROB" Value="15"/>
                    <Parameter Name="MINHEIGHT" Value="100"/>
                    <Parameter Name="MAXHEIGHT" Value="180"/>
                    <Parameter Name="MINDIST" Value="5"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="t_betulapendulae_3s_summer"/>
                    <Parameter Name="PROB" Value="14"/>
                    <Parameter Name="MINHEIGHT" Value="100"/>
                    <Parameter Name="MAXHEIGHT" Value="170"/>
                    <Parameter Name="MINDIST" Value="5"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="t_fagussylvatica_1fd_summer"/>
                    <Parameter Name="PROB" Value="13"/>
                    <Parameter Name="MINHEIGHT" Value="100"/>
                    <Parameter Name="MAXHEIGHT" Value="100"/>
                    <Parameter Name="MINDIST" Value="5"/>
                </ObjectPrototype>
            </ObjectPrototypes>
            <AdditionalDatabases/>
        </Task>
    </Tasks>
</Project>
