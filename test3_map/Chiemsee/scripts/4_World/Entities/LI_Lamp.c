// Script File
class LI_Lamp: Static
{
    protected FlashlightLight m_Light;
    protected LI_StreetLightPoint m_LightPoint;

    void LI_Lamp() 
    {        
        if ( GetGame().IsClient() || !GetGame().IsMultiplayer() ) // Client side
        {
            Print("[LI_Lamp] class created");
            
            GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(this.EnableLight, 10000, false);
        }    
    }

    void EnableLight()
    {
        if (m_Light)
        {
            m_Light.Destroy();
        }

        m_Light = FlashlightLight.Cast( ScriptedLightBase.CreateLight(FlashlightLight, "0 0 0", 0.08) );
        m_LightPoint = LI_StreetLightPoint.Cast( ScriptedLightBase.CreateLight( LI_StreetLightPoint, "0 0 0" ) );
        if ( MemoryPointExists( "light" ) )
        {
        	m_Light.AttachOnMemoryPoint(this, "light", "0 0 0");
        	m_Light.SetIntensity( 1, 0 );
        }

        if ( MemoryPointExists( "point_light" ) )
        {
			m_LightPoint.AttachOnMemoryPoint( this, "point_light");//"light_dir"
        }
    }
}

class Static_lampa_sidl: LI_Lamp
{
};
class Static_lampa_sidl_2: LI_Lamp
{
};
class Static_lampa_sidl_3: LI_Lamp
{
};
class Static_lampa_ind: LI_Lamp
{
};
class Static_lampa_ind_b: LI_Lamp
{
};
class Static_PowLines_WoodL: LI_Lamp
{
};
class Static_wall_lights: LI_Lamp
{
};