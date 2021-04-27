// Script File
class LI_StreetLightPoint extends PointLightBase 
{									
	private static float m_DefaultBrightness = 2.5;
	private static float m_DefaultRadius = 10;

	void LI_StreetLightPoint() 
	{		
		//Print("[LI_StreetLightPoint] class created");
		SetCastShadow(true);
		SetVisibleDuringDaylight(false);
		SetRadiusTo(m_DefaultRadius);
		SetBrightnessTo(m_DefaultBrightness);
		SetFadeOutTime(2);
		SetAmbientColor(1.0, 1.0, 0.3);
		SetDiffuseColor(1.0, 1.0, 0.3);
		SetFlareVisible(false);
	}
	
	void SetIntensity( float coef, float time )
	{
		FadeBrightnessTo(m_DefaultBrightness * coef, time);
		FadeRadiusTo(m_DefaultRadius * coef, time);
	}

	//void PrintStatus(){
	//	Print("[LI_StreetLightPoint] DebugInfo: " + this + " Position: " + GetPosition() + " SetEnabled = :" + IsEnabled() + " Bright: " + GetBrightness() + " Radius: " + GetRadius());
	//}	
}
