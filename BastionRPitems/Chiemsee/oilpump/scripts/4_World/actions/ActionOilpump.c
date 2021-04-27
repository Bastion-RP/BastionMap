class ActionOilpumpCB : ActionContinuousBaseCB
{
	private const float REPEAT_AFTER_SEC = 12; // Abfrage wiederhol zeit für anzeige
	
	override void CreateActionComponent()
	{
		m_ActionData.m_ActionComponent = new CAContinuousRepeat(REPEAT_AFTER_SEC);
	}
}

class ActionOilpump: ActionContinuousBase
{

	void ActionOilpump()
	{
		m_CallbackClass = ActionOilpumpCB;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_OPENITEM; //CMD_ACTIONMOD_CRAFTING
		m_CommandUIDProne = DayZPlayerConstants.CMD_ACTIONMOD_OPENITEM;		 //CMD_ACTIONMOD_OPENITEM
		m_SpecialtyWeight = UASoftSkillsWeight.ROUGH_LOW;		
	}
	
	override void CreateConditionComponents()  
	{	
		m_ConditionItem = new CCINotPresent;
		m_ConditionTarget = new CCTNonRuined( UAMaxDistances.DEFAULT );
	}
	
	override bool HasProneException()
	{
		return true;
	}

	override string GetText()
	{		
		return "Pump Oil"; //Anzeige text
	}

	override typename GetInputType()
	{
		return ContinuousInteractActionInput;
	}

	override bool ActionCondition ( PlayerBase player, ActionTarget target, ItemBase item )
	{	
		
		Object targetObject = target.GetObject();
	

		
		if(targetObject)
		{
			Land_Ind_Oil_Pump_EP1 fence = Land_Ind_Oil_Pump_EP1.Cast( targetObject );
			
			
				string selection = fence.GetActionComponentName( target.GetComponentIndex() );

				if ( selection == "telo" ) 
				{
					
					//Print("I Found it dame!!!!!!!!!!!"+ selection);

					
					return true;
				}
			
		}
		
		return false;
	}
	
	
	
	
	
	override void OnFinishProgressClient( ActionData action_data )
	{
		//PileOfWoodenPlanks item_POWP = PileOfWoodenPlanks.Cast( action_data.m_Target.GetObject() ); änderung prüfen ob ok

//		Object targetObject = target.GetObject();

		
		
		
		vector pos = action_data.m_Player.GetPosition();
		
		
		
		Land_Ind_Oil_Pump_EP1 oilpump_p = Land_Ind_Oil_Pump_EP1.Cast(action_data.m_Target.GetObject());

		
	
		
		if (oilpump_p)
		{
			oilpump_p.StartCraftOil();
			

			
			
		}
	};
	override void OnFinishProgressServer( ActionData action_data )
	{
		//PileOfWoodenPlanks item_POWP = PileOfWoodenPlanks.Cast( action_data.m_Target.GetObject() ); änderung prüfen ob ok

//		Object targetObject = target.GetObject();

		
		
		
		vector pos = action_data.m_Player.GetPosition();
		
		
		
		Land_Ind_Oil_Pump_EP1 oilpump_p = Land_Ind_Oil_Pump_EP1.Cast(action_data.m_Target.GetObject());

		Print("Lugerino"+oilpump_p);
	
		
		if (oilpump_p)
		{
			oilpump_p.StartCraftOil();
			

			
			
		}
	};
};
		
		
	