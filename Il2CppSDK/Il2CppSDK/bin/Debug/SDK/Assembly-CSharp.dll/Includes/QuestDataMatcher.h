#pragma once
#include <Il2Cpp/Il2Cpp.h>

class QuestDataMatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "QuestDataMatcher"));
	}

	 static IMatcher1<QuestDataEntity*>*& _matcherAct() {
		return *(IMatcher1<QuestDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static IMatcher1<QuestDataEntity*>*& _matcherActivateNotify() {
		return *(IMatcher1<QuestDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 static IMatcher1<QuestDataEntity*>*& _matcherActivateQuests() {
		return *(IMatcher1<QuestDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	 static IMatcher1<QuestDataEntity*>*& _matcherActivateTournament() {
		return *(IMatcher1<QuestDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	 static IMatcher1<QuestDataEntity*>*& _matcherActiveCondition() {
		return *(IMatcher1<QuestDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	 static IMatcher1<QuestDataEntity*>*& _matcherActiveLocations() {
		return *(IMatcher1<QuestDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	 static IMatcher1<QuestDataEntity*>*& _matcherAlertButton() {
		return *(IMatcher1<QuestDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	 static IMatcher1<QuestDataEntity*>*& _matcherAliveCondition() {
		return *(IMatcher1<QuestDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	 static IMatcher1<QuestDataEntity*>*& _matcherAlwaysActual() {
		return *(IMatcher1<QuestDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	 static IMatcher1<QuestDataEntity*>*& _matcherAnalytics() {
		return *(IMatcher1<QuestDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	 static IMatcher1<QuestDataEntity*>*& _matcherApplyStartDialogue() {
		return *(IMatcher1<QuestDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	 static IMatcher1<QuestDataEntity*>*& _matcherAutoActivate() {
		return *(IMatcher1<QuestDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	 static IMatcher1<QuestDataEntity*>*& _matcherBlueprint() {
		return *(IMatcher1<QuestDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	 static IMatcher1<QuestDataEntity*>*& _matcherChildren() {
		return *(IMatcher1<QuestDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	 static IMatcher1<QuestDataEntity*>*& _matcherCompleteChatNotify() {
		return *(IMatcher1<QuestDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	 static IMatcher1<QuestDataEntity*>*& _matcherCompleteCutscene() {
		return *(IMatcher1<QuestDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	 static IMatcher1<QuestDataEntity*>*& _matcherCompleteNotify() {
		return *(IMatcher1<QuestDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	 static IMatcher1<QuestDataEntity*>*& _matcherDaily() {
		return *(IMatcher1<QuestDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	 static IMatcher1<QuestDataEntity*>*& _matcherDailyProgress() {
		return *(IMatcher1<QuestDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	 static IMatcher1<QuestDataEntity*>*& _matcherDescription() {
		return *(IMatcher1<QuestDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	 static IMatcher1<QuestDataEntity*>*& _matcherDestroyOnRewarded() {
		return *(IMatcher1<QuestDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	 static IMatcher1<QuestDataEntity*>*& _matcherDuration() {
		return *(IMatcher1<QuestDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	 static IMatcher1<QuestDataEntity*>*& _matcherEvent() {
		return *(IMatcher1<QuestDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	 static IMatcher1<QuestDataEntity*>*& _matcherFailNotify() {
		return *(IMatcher1<QuestDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	 static IMatcher1<QuestDataEntity*>*& _matcherFinishOnCompleted() {
		return *(IMatcher1<QuestDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	 static IMatcher1<QuestDataEntity*>*& _matcherFog() {
		return *(IMatcher1<QuestDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	 static IMatcher1<QuestDataEntity*>*& _matcherGetRewardQuest() {
		return *(IMatcher1<QuestDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	 static IMatcher1<QuestDataEntity*>*& _matcherGuildQuestDescription() {
		return *(IMatcher1<QuestDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	 static IMatcher1<QuestDataEntity*>*& _matcherIcon() {
		return *(IMatcher1<QuestDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	 static IMatcher1<QuestDataEntity*>*& _matcherItem() {
		return *(IMatcher1<QuestDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	 static IMatcher1<QuestDataEntity*>*& _matcherItemCondition() {
		return *(IMatcher1<QuestDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	 static IMatcher1<QuestDataEntity*>*& _matcherMagics() {
		return *(IMatcher1<QuestDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	 static IMatcher1<QuestDataEntity*>*& _matcherManualTrackProhibition() {
		return *(IMatcher1<QuestDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	 static IMatcher1<QuestDataEntity*>*& _matcherMaxProgress() {
		return *(IMatcher1<QuestDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	 static IMatcher1<QuestDataEntity*>*& _matcherMultiplierByCondition() {
		return *(IMatcher1<QuestDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	 static IMatcher1<QuestDataEntity*>*& _matcherMultiplierTags() {
		return *(IMatcher1<QuestDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	 static IMatcher1<QuestDataEntity*>*& _matcherNoSaveable() {
		return *(IMatcher1<QuestDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	 static IMatcher1<QuestDataEntity*>*& _matcherNotAutoComplete() {
		return *(IMatcher1<QuestDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x128);
	}
	 static IMatcher1<QuestDataEntity*>*& _matcherOffer() {
		return *(IMatcher1<QuestDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x130);
	}
	 static IMatcher1<QuestDataEntity*>*& _matcherOldBlueprint() {
		return *(IMatcher1<QuestDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x138);
	}
	 static IMatcher1<QuestDataEntity*>*& _matcherOnCompletedActorMagic() {
		return *(IMatcher1<QuestDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x140);
	}
	 static IMatcher1<QuestDataEntity*>*& _matcherOnCompletedTargetEffect() {
		return *(IMatcher1<QuestDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x148);
	}
	 static IMatcher1<QuestDataEntity*>*& _matcherOrder() {
		return *(IMatcher1<QuestDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x150);
	}
	 static IMatcher1<QuestDataEntity*>*& _matcherParameters() {
		return *(IMatcher1<QuestDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x158);
	}
	 static IMatcher1<QuestDataEntity*>*& _matcherPoint() {
		return *(IMatcher1<QuestDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x160);
	}
	 static IMatcher1<QuestDataEntity*>*& _matcherPortalQuest() {
		return *(IMatcher1<QuestDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x168);
	}
	 static IMatcher1<QuestDataEntity*>*& _matcherPositionTransaction() {
		return *(IMatcher1<QuestDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x170);
	}
	 static IMatcher1<QuestDataEntity*>*& _matcherProgressNotify() {
		return *(IMatcher1<QuestDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x178);
	}
	 static IMatcher1<QuestDataEntity*>*& _matcherResources() {
		return *(IMatcher1<QuestDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x180);
	}
	 static IMatcher1<QuestDataEntity*>*& _matcherRewardByTime() {
		return *(IMatcher1<QuestDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x188);
	}
	 static IMatcher1<QuestDataEntity*>*& _matcherReward() {
		return *(IMatcher1<QuestDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x190);
	}
	 static IMatcher1<QuestDataEntity*>*& _matcherShareable() {
		return *(IMatcher1<QuestDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x198);
	}
	 static IMatcher1<QuestDataEntity*>*& _matcherSkipPrice() {
		return *(IMatcher1<QuestDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1A0);
	}
	 static IMatcher1<QuestDataEntity*>*& _matcherStartCondition() {
		return *(IMatcher1<QuestDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1A8);
	}
	 static IMatcher1<QuestDataEntity*>*& _matcherTags() {
		return *(IMatcher1<QuestDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1B0);
	}
	 static IMatcher1<QuestDataEntity*>*& _matcherTargetMarker() {
		return *(IMatcher1<QuestDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1B8);
	}
	 static IMatcher1<QuestDataEntity*>*& _matcherTargetSelf() {
		return *(IMatcher1<QuestDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1C0);
	}
	 static IMatcher1<QuestDataEntity*>*& _matcherTargetTags() {
		return *(IMatcher1<QuestDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1C8);
	}
	 static IMatcher1<QuestDataEntity*>*& _matcherTrackingSetting() {
		return *(IMatcher1<QuestDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1D0);
	}
	 static IMatcher1<QuestDataEntity*>*& _matcherTriggerBuild() {
		return *(IMatcher1<QuestDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1D8);
	}
	 static IMatcher1<QuestDataEntity*>*& _matcherTriggerBuildOwn() {
		return *(IMatcher1<QuestDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1E0);
	}
	 static IMatcher1<QuestDataEntity*>*& _matcherTriggerCraft() {
		return *(IMatcher1<QuestDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1E8);
	}
	 static IMatcher1<QuestDataEntity*>*& _matcherTriggerCurrency() {
		return *(IMatcher1<QuestDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1F0);
	}
	 static IMatcher1<QuestDataEntity*>*& _matcherTriggerDamage() {
		return *(IMatcher1<QuestDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1F8);
	}
	 static IMatcher1<QuestDataEntity*>*& _matcherTriggerDeath() {
		return *(IMatcher1<QuestDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x200);
	}
	 static IMatcher1<QuestDataEntity*>*& _matcherTriggerDistrictLevel() {
		return *(IMatcher1<QuestDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x208);
	}
	 static IMatcher1<QuestDataEntity*>*& _matcherTriggerDonate() {
		return *(IMatcher1<QuestDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x210);
	}
	 static IMatcher1<QuestDataEntity*>*& _matcherTriggerExit() {
		return *(IMatcher1<QuestDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x218);
	}
	 static IMatcher1<QuestDataEntity*>*& _matcherTriggerExtract() {
		return *(IMatcher1<QuestDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x220);
	}
	 static IMatcher1<QuestDataEntity*>*& _matcherTriggerFinalize() {
		return *(IMatcher1<QuestDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x228);
	}
	 static IMatcher1<QuestDataEntity*>*& _matcherTriggerGameEvent() {
		return *(IMatcher1<QuestDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x230);
	}
	 static IMatcher1<QuestDataEntity*>*& _matcherTriggerHeal() {
		return *(IMatcher1<QuestDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x238);
	}
	 static IMatcher1<QuestDataEntity*>*& _matcherTriggerKill() {
		return *(IMatcher1<QuestDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x240);
	}
	 static IMatcher1<QuestDataEntity*>*& _matcherTriggerLevel() {
		return *(IMatcher1<QuestDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x248);
	}
	 static IMatcher1<QuestDataEntity*>*& _matcherTriggerOwn() {
		return *(IMatcher1<QuestDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x250);
	}
	 static IMatcher1<QuestDataEntity*>*& _matcherTriggerPickup() {
		return *(IMatcher1<QuestDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x258);
	}
	 static IMatcher1<QuestDataEntity*>*& _matcherTriggerPlayerClassProgress() {
		return *(IMatcher1<QuestDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x260);
	}
	 static IMatcher1<QuestDataEntity*>*& _matcherTriggerQuestCompleted() {
		return *(IMatcher1<QuestDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x268);
	}
	 static IMatcher1<QuestDataEntity*>*& _matcherTriggerSeasonEnd() {
		return *(IMatcher1<QuestDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x270);
	}
	 static IMatcher1<QuestDataEntity*>*& _matcherTriggerSeasonLevel() {
		return *(IMatcher1<QuestDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x278);
	}
	 static IMatcher1<QuestDataEntity*>*& _matcherTriggerSneak() {
		return *(IMatcher1<QuestDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x280);
	}
	 static IMatcher1<QuestDataEntity*>*& _matcherTriggerSneakDamage() {
		return *(IMatcher1<QuestDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x288);
	}
	 static IMatcher1<QuestDataEntity*>*& _matcherTriggerUnlock() {
		return *(IMatcher1<QuestDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x290);
	}
	 static IMatcher1<QuestDataEntity*>*& _matcherTriggerUpLevelCap() {
		return *(IMatcher1<QuestDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x298);
	}
	 static IMatcher1<QuestDataEntity*>*& _matcherTriggerUse() {
		return *(IMatcher1<QuestDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2A0);
	}
	 static IMatcher1<QuestDataEntity*>*& _matcherTriggerVisit() {
		return *(IMatcher1<QuestDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2A8);
	}
	 static IMatcher1<QuestDataEntity*>*& _matcherTriggerVisitGlobalMap() {
		return *(IMatcher1<QuestDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2B0);
	}
	 static IMatcher1<QuestDataEntity*>*& _matcherWorldStatus() {
		return *(IMatcher1<QuestDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2B8);
	}

	 static IMatcher1<QuestDataEntity*>* get_Act() {
		return ((IMatcher1<QuestDataEntity*>* (*)(void *))(Il2CppBase() + 0x1C1AF50))(0);
	}
	 static IMatcher1<QuestDataEntity*>* get_ActivateNotify() {
		return ((IMatcher1<QuestDataEntity*>* (*)(void *))(Il2CppBase() + 0x1C2918C))(0);
	}
	 static IMatcher1<QuestDataEntity*>* get_ActivateQuests() {
		return ((IMatcher1<QuestDataEntity*>* (*)(void *))(Il2CppBase() + 0x1C29328))(0);
	}
	 static IMatcher1<QuestDataEntity*>* get_ActivateTournament() {
		return ((IMatcher1<QuestDataEntity*>* (*)(void *))(Il2CppBase() + 0x1C1B408))(0);
	}
	 static IMatcher1<QuestDataEntity*>* get_ActiveCondition() {
		return ((IMatcher1<QuestDataEntity*>* (*)(void *))(Il2CppBase() + 0x1C294C4))(0);
	}
	 static IMatcher1<QuestDataEntity*>* get_ActiveLocations() {
		return ((IMatcher1<QuestDataEntity*>* (*)(void *))(Il2CppBase() + 0x1C29660))(0);
	}
	 static IMatcher1<QuestDataEntity*>* get_AlertButton() {
		return ((IMatcher1<QuestDataEntity*>* (*)(void *))(Il2CppBase() + 0x1C297FC))(0);
	}
	 static IMatcher1<QuestDataEntity*>* get_AliveCondition() {
		return ((IMatcher1<QuestDataEntity*>* (*)(void *))(Il2CppBase() + 0x1C29998))(0);
	}
	 static IMatcher1<QuestDataEntity*>* get_AlwaysActual() {
		return ((IMatcher1<QuestDataEntity*>* (*)(void *))(Il2CppBase() + 0x1C29B34))(0);
	}
	 static IMatcher1<QuestDataEntity*>* get_Analytics() {
		return ((IMatcher1<QuestDataEntity*>* (*)(void *))(Il2CppBase() + 0x1C29CD0))(0);
	}
	 static IMatcher1<QuestDataEntity*>* get_ApplyStartDialogue() {
		return ((IMatcher1<QuestDataEntity*>* (*)(void *))(Il2CppBase() + 0x1C29E6C))(0);
	}
	 static IMatcher1<QuestDataEntity*>* get_AutoActivate() {
		return ((IMatcher1<QuestDataEntity*>* (*)(void *))(Il2CppBase() + 0x1C1B0D0))(0);
	}
	 static IMatcher1<QuestDataEntity*>* get_Blueprint() {
		return ((IMatcher1<QuestDataEntity*>* (*)(void *))(Il2CppBase() + 0x1C2A008))(0);
	}
	 static IMatcher1<QuestDataEntity*>* get_Children() {
		return ((IMatcher1<QuestDataEntity*>* (*)(void *))(Il2CppBase() + 0x1C2A1A4))(0);
	}
	 static IMatcher1<QuestDataEntity*>* get_CompleteChatNotify() {
		return ((IMatcher1<QuestDataEntity*>* (*)(void *))(Il2CppBase() + 0x1C2A340))(0);
	}
	 static IMatcher1<QuestDataEntity*>* get_CompleteCutscene() {
		return ((IMatcher1<QuestDataEntity*>* (*)(void *))(Il2CppBase() + 0x1C2A4DC))(0);
	}
	 static IMatcher1<QuestDataEntity*>* get_CompleteNotify() {
		return ((IMatcher1<QuestDataEntity*>* (*)(void *))(Il2CppBase() + 0x1C2A678))(0);
	}
	 static IMatcher1<QuestDataEntity*>* get_Daily() {
		return ((IMatcher1<QuestDataEntity*>* (*)(void *))(Il2CppBase() + 0x1C2A814))(0);
	}
	 static IMatcher1<QuestDataEntity*>* get_DailyProgress() {
		return ((IMatcher1<QuestDataEntity*>* (*)(void *))(Il2CppBase() + 0x1C2A9B0))(0);
	}
	 static IMatcher1<QuestDataEntity*>* get_Description() {
		return ((IMatcher1<QuestDataEntity*>* (*)(void *))(Il2CppBase() + 0x1C2AB4C))(0);
	}
	 static IMatcher1<QuestDataEntity*>* get_DestroyOnRewarded() {
		return ((IMatcher1<QuestDataEntity*>* (*)(void *))(Il2CppBase() + 0x1C2ACE8))(0);
	}
	 static IMatcher1<QuestDataEntity*>* get_Duration() {
		return ((IMatcher1<QuestDataEntity*>* (*)(void *))(Il2CppBase() + 0x1C2AE84))(0);
	}
	 static IMatcher1<QuestDataEntity*>* get_Event() {
		return ((IMatcher1<QuestDataEntity*>* (*)(void *))(Il2CppBase() + 0x1C2B020))(0);
	}
	 static IMatcher1<QuestDataEntity*>* get_FailNotify() {
		return ((IMatcher1<QuestDataEntity*>* (*)(void *))(Il2CppBase() + 0x1C2B1BC))(0);
	}
	 static IMatcher1<QuestDataEntity*>* get_FinishOnCompleted() {
		return ((IMatcher1<QuestDataEntity*>* (*)(void *))(Il2CppBase() + 0x1C2B358))(0);
	}
	 static IMatcher1<QuestDataEntity*>* get_Fog() {
		return ((IMatcher1<QuestDataEntity*>* (*)(void *))(Il2CppBase() + 0x1C2B4F4))(0);
	}
	 static IMatcher1<QuestDataEntity*>* get_GetRewardQuest() {
		return ((IMatcher1<QuestDataEntity*>* (*)(void *))(Il2CppBase() + 0x1C2B690))(0);
	}
	 static IMatcher1<QuestDataEntity*>* get_GuildQuestDescription() {
		return ((IMatcher1<QuestDataEntity*>* (*)(void *))(Il2CppBase() + 0x1C1B26C))(0);
	}
	 static IMatcher1<QuestDataEntity*>* get_Icon() {
		return ((IMatcher1<QuestDataEntity*>* (*)(void *))(Il2CppBase() + 0x1C2B82C))(0);
	}
	 static IMatcher1<QuestDataEntity*>* get_Item() {
		return ((IMatcher1<QuestDataEntity*>* (*)(void *))(Il2CppBase() + 0x1C2B9C8))(0);
	}
	 static IMatcher1<QuestDataEntity*>* get_ItemCondition() {
		return ((IMatcher1<QuestDataEntity*>* (*)(void *))(Il2CppBase() + 0x1C2BB64))(0);
	}
	 static IMatcher1<QuestDataEntity*>* get_Magics() {
		return ((IMatcher1<QuestDataEntity*>* (*)(void *))(Il2CppBase() + 0x1C2BD00))(0);
	}
	 static IMatcher1<QuestDataEntity*>* get_ManualTrackProhibition() {
		return ((IMatcher1<QuestDataEntity*>* (*)(void *))(Il2CppBase() + 0x1C2BE9C))(0);
	}
	 static IMatcher1<QuestDataEntity*>* get_MaxProgress() {
		return ((IMatcher1<QuestDataEntity*>* (*)(void *))(Il2CppBase() + 0x1C1AD38))(0);
	}
	 static IMatcher1<QuestDataEntity*>* get_MultiplierByCondition() {
		return ((IMatcher1<QuestDataEntity*>* (*)(void *))(Il2CppBase() + 0x1C2C03C))(0);
	}
	 static IMatcher1<QuestDataEntity*>* get_MultiplierTags() {
		return ((IMatcher1<QuestDataEntity*>* (*)(void *))(Il2CppBase() + 0x1C2C1DC))(0);
	}
	 static IMatcher1<QuestDataEntity*>* get_NoSaveable() {
		return ((IMatcher1<QuestDataEntity*>* (*)(void *))(Il2CppBase() + 0x1C2C37C))(0);
	}
	 static IMatcher1<QuestDataEntity*>* get_NotAutoComplete() {
		return ((IMatcher1<QuestDataEntity*>* (*)(void *))(Il2CppBase() + 0x1C2C51C))(0);
	}
	 static IMatcher1<QuestDataEntity*>* get_Offer() {
		return ((IMatcher1<QuestDataEntity*>* (*)(void *))(Il2CppBase() + 0x1C2C6BC))(0);
	}
	 static IMatcher1<QuestDataEntity*>* get_OldBlueprint() {
		return ((IMatcher1<QuestDataEntity*>* (*)(void *))(Il2CppBase() + 0x1C2C85C))(0);
	}
	 static IMatcher1<QuestDataEntity*>* get_OnCompletedActorMagic() {
		return ((IMatcher1<QuestDataEntity*>* (*)(void *))(Il2CppBase() + 0x1C2C9FC))(0);
	}
	 static IMatcher1<QuestDataEntity*>* get_OnCompletedTargetEffect() {
		return ((IMatcher1<QuestDataEntity*>* (*)(void *))(Il2CppBase() + 0x1C2CB9C))(0);
	}
	 static IMatcher1<QuestDataEntity*>* get_Order() {
		return ((IMatcher1<QuestDataEntity*>* (*)(void *))(Il2CppBase() + 0x1C2CD3C))(0);
	}
	 static IMatcher1<QuestDataEntity*>* get_Parameters() {
		return ((IMatcher1<QuestDataEntity*>* (*)(void *))(Il2CppBase() + 0x1C2CEDC))(0);
	}
	 static IMatcher1<QuestDataEntity*>* get_Point() {
		return ((IMatcher1<QuestDataEntity*>* (*)(void *))(Il2CppBase() + 0x1C2D07C))(0);
	}
	 static IMatcher1<QuestDataEntity*>* get_PortalQuest() {
		return ((IMatcher1<QuestDataEntity*>* (*)(void *))(Il2CppBase() + 0x1C2D21C))(0);
	}
	 static IMatcher1<QuestDataEntity*>* get_PositionTransaction() {
		return ((IMatcher1<QuestDataEntity*>* (*)(void *))(Il2CppBase() + 0x1C2D3BC))(0);
	}
	 static IMatcher1<QuestDataEntity*>* get_ProgressNotify() {
		return ((IMatcher1<QuestDataEntity*>* (*)(void *))(Il2CppBase() + 0x1C2D55C))(0);
	}
	 static IMatcher1<QuestDataEntity*>* get_Resources() {
		return ((IMatcher1<QuestDataEntity*>* (*)(void *))(Il2CppBase() + 0x1C2D6FC))(0);
	}
	 static IMatcher1<QuestDataEntity*>* get_RewardByTime() {
		return ((IMatcher1<QuestDataEntity*>* (*)(void *))(Il2CppBase() + 0x1C2D89C))(0);
	}
	 static IMatcher1<QuestDataEntity*>* get_Reward() {
		return ((IMatcher1<QuestDataEntity*>* (*)(void *))(Il2CppBase() + 0x1C2DA3C))(0);
	}
	 static IMatcher1<QuestDataEntity*>* get_Shareable() {
		return ((IMatcher1<QuestDataEntity*>* (*)(void *))(Il2CppBase() + 0x1C2DBDC))(0);
	}
	 static IMatcher1<QuestDataEntity*>* get_SkipPrice() {
		return ((IMatcher1<QuestDataEntity*>* (*)(void *))(Il2CppBase() + 0x1C2DD7C))(0);
	}
	 static IMatcher1<QuestDataEntity*>* get_StartCondition() {
		return ((IMatcher1<QuestDataEntity*>* (*)(void *))(Il2CppBase() + 0x1C2DF1C))(0);
	}
	 static IMatcher1<QuestDataEntity*>* get_Tags() {
		return ((IMatcher1<QuestDataEntity*>* (*)(void *))(Il2CppBase() + 0x1C1AB98))(0);
	}
	 static IMatcher1<QuestDataEntity*>* get_TargetMarker() {
		return ((IMatcher1<QuestDataEntity*>* (*)(void *))(Il2CppBase() + 0x1C2E0BC))(0);
	}
	 static IMatcher1<QuestDataEntity*>* get_TargetSelf() {
		return ((IMatcher1<QuestDataEntity*>* (*)(void *))(Il2CppBase() + 0x1C2E25C))(0);
	}
	 static IMatcher1<QuestDataEntity*>* get_TargetTags() {
		return ((IMatcher1<QuestDataEntity*>* (*)(void *))(Il2CppBase() + 0x1C2E3FC))(0);
	}
	 static IMatcher1<QuestDataEntity*>* get_TrackingSetting() {
		return ((IMatcher1<QuestDataEntity*>* (*)(void *))(Il2CppBase() + 0x1C2E59C))(0);
	}
	 static IMatcher1<QuestDataEntity*>* get_TriggerBuild() {
		return ((IMatcher1<QuestDataEntity*>* (*)(void *))(Il2CppBase() + 0x1C2E73C))(0);
	}
	 static IMatcher1<QuestDataEntity*>* get_TriggerBuildOwn() {
		return ((IMatcher1<QuestDataEntity*>* (*)(void *))(Il2CppBase() + 0x1C2E8DC))(0);
	}
	 static IMatcher1<QuestDataEntity*>* get_TriggerCraft() {
		return ((IMatcher1<QuestDataEntity*>* (*)(void *))(Il2CppBase() + 0x1C2EA7C))(0);
	}
	 static IMatcher1<QuestDataEntity*>* get_TriggerCurrency() {
		return ((IMatcher1<QuestDataEntity*>* (*)(void *))(Il2CppBase() + 0x1C2EC1C))(0);
	}
	 static IMatcher1<QuestDataEntity*>* get_TriggerDamage() {
		return ((IMatcher1<QuestDataEntity*>* (*)(void *))(Il2CppBase() + 0x1C2EDBC))(0);
	}
	 static IMatcher1<QuestDataEntity*>* get_TriggerDeath() {
		return ((IMatcher1<QuestDataEntity*>* (*)(void *))(Il2CppBase() + 0x1C2EF5C))(0);
	}
	 static IMatcher1<QuestDataEntity*>* get_TriggerDistrictLevel() {
		return ((IMatcher1<QuestDataEntity*>* (*)(void *))(Il2CppBase() + 0x1C2F0FC))(0);
	}
	 static IMatcher1<QuestDataEntity*>* get_TriggerDonate() {
		return ((IMatcher1<QuestDataEntity*>* (*)(void *))(Il2CppBase() + 0x1C2F29C))(0);
	}
	 static IMatcher1<QuestDataEntity*>* get_TriggerExit() {
		return ((IMatcher1<QuestDataEntity*>* (*)(void *))(Il2CppBase() + 0x1C2F43C))(0);
	}
	 static IMatcher1<QuestDataEntity*>* get_TriggerExtract() {
		return ((IMatcher1<QuestDataEntity*>* (*)(void *))(Il2CppBase() + 0x1C2F5DC))(0);
	}
	 static IMatcher1<QuestDataEntity*>* get_TriggerFinalize() {
		return ((IMatcher1<QuestDataEntity*>* (*)(void *))(Il2CppBase() + 0x1C2F77C))(0);
	}
	 static IMatcher1<QuestDataEntity*>* get_TriggerGameEvent() {
		return ((IMatcher1<QuestDataEntity*>* (*)(void *))(Il2CppBase() + 0x1C2F91C))(0);
	}
	 static IMatcher1<QuestDataEntity*>* get_TriggerHeal() {
		return ((IMatcher1<QuestDataEntity*>* (*)(void *))(Il2CppBase() + 0x1C2FABC))(0);
	}
	 static IMatcher1<QuestDataEntity*>* get_TriggerKill() {
		return ((IMatcher1<QuestDataEntity*>* (*)(void *))(Il2CppBase() + 0x1C2FC5C))(0);
	}
	 static IMatcher1<QuestDataEntity*>* get_TriggerLevel() {
		return ((IMatcher1<QuestDataEntity*>* (*)(void *))(Il2CppBase() + 0x1C2FDFC))(0);
	}
	 static IMatcher1<QuestDataEntity*>* get_TriggerOwn() {
		return ((IMatcher1<QuestDataEntity*>* (*)(void *))(Il2CppBase() + 0x1C2FF9C))(0);
	}
	 static IMatcher1<QuestDataEntity*>* get_TriggerPickup() {
		return ((IMatcher1<QuestDataEntity*>* (*)(void *))(Il2CppBase() + 0x1C3013C))(0);
	}
	 static IMatcher1<QuestDataEntity*>* get_TriggerPlayerClassProgress() {
		return ((IMatcher1<QuestDataEntity*>* (*)(void *))(Il2CppBase() + 0x1C302DC))(0);
	}
	 static IMatcher1<QuestDataEntity*>* get_TriggerQuestCompleted() {
		return ((IMatcher1<QuestDataEntity*>* (*)(void *))(Il2CppBase() + 0x1C3047C))(0);
	}
	 static IMatcher1<QuestDataEntity*>* get_TriggerSeasonEnd() {
		return ((IMatcher1<QuestDataEntity*>* (*)(void *))(Il2CppBase() + 0x1C3061C))(0);
	}
	 static IMatcher1<QuestDataEntity*>* get_TriggerSeasonLevel() {
		return ((IMatcher1<QuestDataEntity*>* (*)(void *))(Il2CppBase() + 0x1C307BC))(0);
	}
	 static IMatcher1<QuestDataEntity*>* get_TriggerSneak() {
		return ((IMatcher1<QuestDataEntity*>* (*)(void *))(Il2CppBase() + 0x1C3095C))(0);
	}
	 static IMatcher1<QuestDataEntity*>* get_TriggerSneakDamage() {
		return ((IMatcher1<QuestDataEntity*>* (*)(void *))(Il2CppBase() + 0x1C30AFC))(0);
	}
	 static IMatcher1<QuestDataEntity*>* get_TriggerUnlock() {
		return ((IMatcher1<QuestDataEntity*>* (*)(void *))(Il2CppBase() + 0x1C30C9C))(0);
	}
	 static IMatcher1<QuestDataEntity*>* get_TriggerUpLevelCap() {
		return ((IMatcher1<QuestDataEntity*>* (*)(void *))(Il2CppBase() + 0x1C30E3C))(0);
	}
	 static IMatcher1<QuestDataEntity*>* get_TriggerUse() {
		return ((IMatcher1<QuestDataEntity*>* (*)(void *))(Il2CppBase() + 0x1C30FDC))(0);
	}
	 static IMatcher1<QuestDataEntity*>* get_TriggerVisit() {
		return ((IMatcher1<QuestDataEntity*>* (*)(void *))(Il2CppBase() + 0x1C3117C))(0);
	}
	 static IMatcher1<QuestDataEntity*>* get_TriggerVisitGlobalMap() {
		return ((IMatcher1<QuestDataEntity*>* (*)(void *))(Il2CppBase() + 0x1C3131C))(0);
	}
	 static IMatcher1<QuestDataEntity*>* get_WorldStatus() {
		return ((IMatcher1<QuestDataEntity*>* (*)(void *))(Il2CppBase() + 0x1C314BC))(0);
	}
	 static IAllOfMatcher1<QuestDataEntity*>* AllOf(Il2CppArray<int32_t>* indices) {
		return ((IAllOfMatcher1<QuestDataEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x1C3165C))(0, indices);
	}
	 static IAllOfMatcher1<QuestDataEntity*>* AllOf_1(Il2CppArray<IMatcher1<QuestDataEntity*>*>* matchers) {
		return ((IAllOfMatcher1<QuestDataEntity*>* (*)(void *, Il2CppArray<IMatcher1<QuestDataEntity*>*>*))(Il2CppBase() + 0x1C1AED8))(0, matchers);
	}
	 static IAnyOfMatcher1<QuestDataEntity*>* AnyOf(Il2CppArray<int32_t>* indices) {
		return ((IAnyOfMatcher1<QuestDataEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x1C316D4))(0, indices);
	}
	 static IAnyOfMatcher1<QuestDataEntity*>* AnyOf_1(Il2CppArray<IMatcher1<QuestDataEntity*>*>* matchers) {
		return ((IAnyOfMatcher1<QuestDataEntity*>* (*)(void *, Il2CppArray<IMatcher1<QuestDataEntity*>*>*))(Il2CppBase() + 0x1C3174C))(0, matchers);
	}

};

