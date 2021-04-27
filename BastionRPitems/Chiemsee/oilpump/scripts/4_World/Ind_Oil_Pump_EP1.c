class Land_Ind_Oil_Pump_EP1 extends BuildingSuper
{
	ItemBase my_ResaultOil;
	ActionData action_data;
	ActionTarget target;
	RecipeBase myquatity;
	float animtime = 5;
	protected EffectSound 		m_EngineLoop;
	static const string			LOOP_SOUND = "powerGeneratorLoop_SoundSet";
	ref protected Effect 		m_Smoke;
	protected EffectSound 		m_EngineStart;
	static const string			START_SOUND = "powerGeneratorTurnOn_SoundSet";
	ref Timer 					m_SoundStopTimer;
	ref Timer 					m_SoundStartTimer;
	ref Timer 					m_SpawnItemTimer;
	protected EffectSound 		m_EngineStop;
	static const string			STOP_SOUND = "powerGeneratorTurnOff_SoundSet";
	
	void StartCraftOil()
	{


		float Animationstatus = GetAnimationPhase("Pohon");
		//if ( GetGame().IsServer() || GetGame().IsClient() )
		//{	
		Print("Lugge"+Animationstatus);
		
			if (GetAnimationPhase("Pohon") == 0) 
			{
			Print("AnimationAbspielen");
				float value = animtime;
				SetSynchDirty();	
				SetAnimationPhase( "Vez_ropa_anim1_0", 		value );//Play Animation if door closed
				SetAnimationPhase( "Kladivo", 				value );
				SetAnimationPhase( "Pohon", 				value );
				SetAnimationPhase( "Jezditko1", 			value );
						
			}
			else if (GetAnimationPhase("Pohon") == animtime) 
			{
				SetSynchDirty();
				SetAnimationPhase( "Vez_ropa_anim1_0", 		0 );//Play Animation if door opend
				SetAnimationPhase( "Kladivo", 				0 );
				SetAnimationPhase( "Pohon", 				0 );
				SetAnimationPhase( "Jezditko1", 			0 );	
					
			}		
		//}
		if ( GetGame().IsClient()  ||  GetGame().IsServer() && Animationstatus == 0 || Animationstatus == animtime )//ony when door 1 or 0
		{
			PlaySoundSet( m_EngineStart, START_SOUND, 0, 0 ); //start start sound

			
			if (!m_SoundStartTimer)
				m_SoundStartTimer = new Timer( CALL_CATEGORY_SYSTEM );
			
			if (!m_SoundStartTimer.IsRunning() ) 
			{
				m_SoundStartTimer.Run(1.5, this, "StartLoopSound", NULL, false); //call  loop sound method 			
			}
			if (!m_SoundStopTimer)
				m_SoundStopTimer = new Timer( CALL_CATEGORY_SYSTEM );
			
			if (!m_SoundStopTimer.IsRunning() ) 
			{
				m_SoundStopTimer.Run(10, this, "StopLoopSound", NULL, false); //call stop sound and particle method			
			}
			if (!m_SpawnItemTimer)
				m_SpawnItemTimer = new Timer( CALL_CATEGORY_SYSTEM );
			
			if (!m_SpawnItemTimer.IsRunning() ) 
			{
				m_SpawnItemTimer.Run(10, this, "SpawnItem", NULL, false); //call spawn item method after 10 sec.
			}
		}
	}
	
	vector MySavedPosition()
	{
		if ( GetGame().IsClient()  ||  GetGame().IsServer() )
		{
			vector myspawn = "0 0 0";
			myspawn  = action_data.m_Target.GetObject().GetPosition();
			vector minusvector = "-3 -1.95 -0.4";
			myspawn = myspawn + minusvector;
			return myspawn;	
		}
		vector nullvector = "0 0 0";
		return nullvector;
	}
	void SpawnItem()
	{
		

		if ( !GetGame().IsClient() || GetGame().IsServer() )
		{

			vector oilSpawnPosition = this.GetPosition() + "2 -1.95 -1.5";
			ItemBase my_ResaultOil = ItemBase.Cast( GetGame().CreateObject("EngineOil", oilSpawnPosition) ); //spawn item
		}			
		my_ResaultOil.SetQuantity(1000);
		myquatity.m_ResultSetFullQuantity[7] = true;
		
	}
	void StartLoopSound()
	{

		if ( GetGame().IsClient()  ||  GetGame().IsServer() )
		{
			
				PlaySoundSetLoop( m_EngineLoop, LOOP_SOUND, 0, 0 );
				
				// Particle
				vector local_pos = "0.3 0.21 5.4";
				vector local_ori = "0 0 270";
				m_Smoke = new EffGeneratorSmoke();
				SEffectManager.PlayOnObject(m_Smoke, this, local_pos, local_ori);	
		}
	}
	void StopLoopSound()
	{
		/*
		Print("VorIf");
		if ( !GetGame().IsClient() )
		{
			Print("NachIf");
			ItemBase my_ResaultOil = ItemBase.Cast( GetGame().CreateObject("EngineOil", MySavedPosition()) ); //spawn item
		}			
		my_ResaultOil.SetQuantity(1000);
		myquatity.m_ResultSetFullQuantity[7] = true;
		*/
		if ( GetGame().IsClient()  ||  GetGame().IsServer() )
		{
			
			
			
			
		
			// Sound
			PlaySoundSet( m_EngineStop, STOP_SOUND, 0, 0 );
			StopSoundSet(m_EngineLoop);
			// particle
			if (m_Smoke)
				delete m_Smoke;
		}		
	}	
	override void SetActions()
	{
		super.SetActions();
		AddAction(ActionOilpump);
	}	
}
