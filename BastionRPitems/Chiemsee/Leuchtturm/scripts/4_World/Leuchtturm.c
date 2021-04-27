class LeuchtturmLight extends SpotLightBase
{
	void LeuchtturmLight()
	{
		SetVisibleDuringDaylight(false);
		SetRadiusTo(250);
		SetSpotLightAngle(100);
		SetCastShadow(true);
		EnableSpecular(true);
		SetBrightnessTo(15.0);
		SetFadeOutTime(0.3);
		FadeIn(0.2);
		SetAmbientColor(0.8, 0.9, 1.0);
		SetDiffuseColor(0.8, 0.9, 1.0);
	}
};


class Leuchtturm_Base : House
{
    LeuchtturmLight m_Light;
	vector m_LocalPos;
	vector m_LocalOri;
	

	ref Timer 					m_SoundLoopStartTimer;
	void Leuchtturm_Base()
	{
		if ( !GetGame().IsMultiplayer() || GetGame().IsClient() )
		{
			m_LocalOri = "0 0 0";
            m_LocalPos = ModelToWorld( GetMemoryPointPos( "lampe" ) );
			m_Light = LeuchtturmLight.Cast( ScriptedLightBase.CreateLight( LeuchtturmLight, "0 0 0") );
			m_Light.AttachOnObject(this, m_LocalPos, m_LocalOri);
			if (!m_SoundLoopStartTimer)
				m_SoundLoopStartTimer = new Timer( CALL_CATEGORY_SYSTEM );
		
			if ( !m_SoundLoopStartTimer.IsRunning() )
			{
				m_SoundLoopStartTimer.Run(0.05, this, "Rotate", NULL, true);
			}
		}        
	}
	void Rotate()
	{
		m_LocalOri += "1 0 0";
		m_Light.AttachOnObject(this, m_LocalPos, m_LocalOri);
	}

	override void EEDelete(EntityAI parent)
	{
		if ( !GetGame().IsMultiplayer() || GetGame().IsClient() )
		{
			if (m_Light)
				m_Light.Destroy();
		}
	}
};
class Land_Leuchtturm : Leuchtturm_Base {};