// Script File
class LI_Base
{
	static ref LI_Base m_Instance;		 	
	//static ref DI_SmokeController m_smokeController;
	
	void LI_Base() 
	{	
		Print("[LI_Base] Base class created");		
				
		// 1. Init StreetLights
		// done via DI_Lamp autom. on all objects
		
		// 2. Init Smoke Envoirment
		//m_smokeController = new DI_SmokeController();
		
		// 3. Mining Ability
		// unprocessed ore (Silver, Gold, Diamant) -> Processed ore(Silver, Gold, Diamant)		
	}
	
	void ~LI_Base() 
	{
		Print("[Korolgrad] Base class destroyed");

	}

	static ref LI_Base GetInstance()
	{
		if ( !LI_Base.m_Instance )
		{
			LI_Base.m_Instance = new ref LI_Base();
		}
		
		return LI_Base.m_Instance;
	}
}