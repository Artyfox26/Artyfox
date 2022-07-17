modded class ActionWorldFlagActionSwitch
{
	override bool ActionCondition(PlayerBase player, ActionTarget target, ItemBase item)
	{
		if (target.GetObject().IsInherited(ExpansionQuestNPCBase))
			return false;

	#ifdef EXPANSIONMODAI
		if (target.GetObject().IsInherited(ExpansionQuestNPCAIBase))
			return false;
	#endif

		return super.ActionCondition(player, target, item);
	}
};