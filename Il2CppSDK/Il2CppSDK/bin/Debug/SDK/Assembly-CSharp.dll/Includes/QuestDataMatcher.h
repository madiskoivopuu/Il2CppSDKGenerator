#pragma once
#include <Il2Cpp/Il2Cpp.h>

class QuestDataMatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "QuestDataMatcher"));
	}

	template <typename T = void*> static T& _matcherAct() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& _matcherActivateNotify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> static T& _matcherActivateQuests() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = void*> static T& _matcherActivateTournament() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = void*> static T& _matcherActiveCondition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = void*> static T& _matcherActiveLocations() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = void*> static T& _matcherAlertButton() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = void*> static T& _matcherAliveCondition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = void*> static T& _matcherAlwaysActual() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = void*> static T& _matcherAnalytics() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = void*> static T& _matcherApplyStartDialogue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = void*> static T& _matcherAutoActivate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = void*> static T& _matcherBlueprint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = void*> static T& _matcherChildren() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = void*> static T& _matcherCompleteChatNotify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = void*> static T& _matcherCompleteCutscene() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = void*> static T& _matcherCompleteNotify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = void*> static T& _matcherDaily() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = void*> static T& _matcherDailyProgress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = void*> static T& _matcherDescription() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = void*> static T& _matcherDestroyOnRewarded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = void*> static T& _matcherDuration() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = void*> static T& _matcherEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = void*> static T& _matcherFailNotify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = void*> static T& _matcherFinishOnCompleted() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = void*> static T& _matcherFog() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = void*> static T& _matcherGetRewardQuest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = void*> static T& _matcherGuildQuestDescription() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = void*> static T& _matcherIcon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = void*> static T& _matcherItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = void*> static T& _matcherItemCondition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = void*> static T& _matcherMagics() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = void*> static T& _matcherManualTrackProhibition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	template <typename T = void*> static T& _matcherMaxProgress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	template <typename T = void*> static T& _matcherMultiplierByCondition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	template <typename T = void*> static T& _matcherMultiplierTags() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	template <typename T = void*> static T& _matcherNoSaveable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	template <typename T = void*> static T& _matcherNotAutoComplete() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x128);
	}
	template <typename T = void*> static T& _matcherOffer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x130);
	}
	template <typename T = void*> static T& _matcherOldBlueprint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x138);
	}
	template <typename T = void*> static T& _matcherOnCompletedActorMagic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x140);
	}
	template <typename T = void*> static T& _matcherOnCompletedTargetEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x148);
	}
	template <typename T = void*> static T& _matcherOrder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x150);
	}
	template <typename T = void*> static T& _matcherParameters() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x158);
	}
	template <typename T = void*> static T& _matcherPoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x160);
	}
	template <typename T = void*> static T& _matcherPortalQuest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x168);
	}
	template <typename T = void*> static T& _matcherPositionTransaction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x170);
	}
	template <typename T = void*> static T& _matcherProgressNotify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x178);
	}
	template <typename T = void*> static T& _matcherResources() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x180);
	}
	template <typename T = void*> static T& _matcherRewardByTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x188);
	}
	template <typename T = void*> static T& _matcherReward() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x190);
	}
	template <typename T = void*> static T& _matcherShareable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x198);
	}
	template <typename T = void*> static T& _matcherSkipPrice() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A0);
	}
	template <typename T = void*> static T& _matcherStartCondition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A8);
	}
	template <typename T = void*> static T& _matcherTags() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B0);
	}
	template <typename T = void*> static T& _matcherTargetMarker() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B8);
	}
	template <typename T = void*> static T& _matcherTargetSelf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C0);
	}
	template <typename T = void*> static T& _matcherTargetTags() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C8);
	}
	template <typename T = void*> static T& _matcherTrackingSetting() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1D0);
	}
	template <typename T = void*> static T& _matcherTriggerBuild() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1D8);
	}
	template <typename T = void*> static T& _matcherTriggerBuildOwn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1E0);
	}
	template <typename T = void*> static T& _matcherTriggerCraft() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1E8);
	}
	template <typename T = void*> static T& _matcherTriggerCurrency() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1F0);
	}
	template <typename T = void*> static T& _matcherTriggerDamage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1F8);
	}
	template <typename T = void*> static T& _matcherTriggerDeath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x200);
	}
	template <typename T = void*> static T& _matcherTriggerDistrictLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x208);
	}
	template <typename T = void*> static T& _matcherTriggerDonate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x210);
	}
	template <typename T = void*> static T& _matcherTriggerExit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x218);
	}
	template <typename T = void*> static T& _matcherTriggerExtract() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x220);
	}
	template <typename T = void*> static T& _matcherTriggerFinalize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x228);
	}
	template <typename T = void*> static T& _matcherTriggerGameEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x230);
	}
	template <typename T = void*> static T& _matcherTriggerHeal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x238);
	}
	template <typename T = void*> static T& _matcherTriggerKill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x240);
	}
	template <typename T = void*> static T& _matcherTriggerLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x248);
	}
	template <typename T = void*> static T& _matcherTriggerOwn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x250);
	}
	template <typename T = void*> static T& _matcherTriggerPickup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x258);
	}
	template <typename T = void*> static T& _matcherTriggerPlayerClassProgress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x260);
	}
	template <typename T = void*> static T& _matcherTriggerQuestCompleted() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x268);
	}
	template <typename T = void*> static T& _matcherTriggerSeasonEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x270);
	}
	template <typename T = void*> static T& _matcherTriggerSeasonLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x278);
	}
	template <typename T = void*> static T& _matcherTriggerSneak() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x280);
	}
	template <typename T = void*> static T& _matcherTriggerSneakDamage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x288);
	}
	template <typename T = void*> static T& _matcherTriggerUnlock() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x290);
	}
	template <typename T = void*> static T& _matcherTriggerUpLevelCap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x298);
	}
	template <typename T = void*> static T& _matcherTriggerUse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2A0);
	}
	template <typename T = void*> static T& _matcherTriggerVisit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2A8);
	}
	template <typename T = void*> static T& _matcherTriggerVisitGlobalMap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2B0);
	}
	template <typename T = void*> static T& _matcherWorldStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2B8);
	}

	template <typename T = void*> static T get_Act() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C1AF50))(0);
	}
	template <typename T = void*> static T get_ActivateNotify() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C2918C))(0);
	}
	template <typename T = void*> static T get_ActivateQuests() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C29328))(0);
	}
	template <typename T = void*> static T get_ActivateTournament() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C1B408))(0);
	}
	template <typename T = void*> static T get_ActiveCondition() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C294C4))(0);
	}
	template <typename T = void*> static T get_ActiveLocations() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C29660))(0);
	}
	template <typename T = void*> static T get_AlertButton() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C297FC))(0);
	}
	template <typename T = void*> static T get_AliveCondition() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C29998))(0);
	}
	template <typename T = void*> static T get_AlwaysActual() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C29B34))(0);
	}
	template <typename T = void*> static T get_Analytics() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C29CD0))(0);
	}
	template <typename T = void*> static T get_ApplyStartDialogue() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C29E6C))(0);
	}
	template <typename T = void*> static T get_AutoActivate() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C1B0D0))(0);
	}
	template <typename T = void*> static T get_Blueprint() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C2A008))(0);
	}
	template <typename T = void*> static T get_Children() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C2A1A4))(0);
	}
	template <typename T = void*> static T get_CompleteChatNotify() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C2A340))(0);
	}
	template <typename T = void*> static T get_CompleteCutscene() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C2A4DC))(0);
	}
	template <typename T = void*> static T get_CompleteNotify() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C2A678))(0);
	}
	template <typename T = void*> static T get_Daily() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C2A814))(0);
	}
	template <typename T = void*> static T get_DailyProgress() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C2A9B0))(0);
	}
	template <typename T = void*> static T get_Description() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C2AB4C))(0);
	}
	template <typename T = void*> static T get_DestroyOnRewarded() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C2ACE8))(0);
	}
	template <typename T = void*> static T get_Duration() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C2AE84))(0);
	}
	template <typename T = void*> static T get_Event() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C2B020))(0);
	}
	template <typename T = void*> static T get_FailNotify() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C2B1BC))(0);
	}
	template <typename T = void*> static T get_FinishOnCompleted() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C2B358))(0);
	}
	template <typename T = void*> static T get_Fog() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C2B4F4))(0);
	}
	template <typename T = void*> static T get_GetRewardQuest() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C2B690))(0);
	}
	template <typename T = void*> static T get_GuildQuestDescription() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C1B26C))(0);
	}
	template <typename T = void*> static T get_Icon() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C2B82C))(0);
	}
	template <typename T = void*> static T get_Item() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C2B9C8))(0);
	}
	template <typename T = void*> static T get_ItemCondition() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C2BB64))(0);
	}
	template <typename T = void*> static T get_Magics() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C2BD00))(0);
	}
	template <typename T = void*> static T get_ManualTrackProhibition() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C2BE9C))(0);
	}
	template <typename T = void*> static T get_MaxProgress() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C1AD38))(0);
	}
	template <typename T = void*> static T get_MultiplierByCondition() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C2C03C))(0);
	}
	template <typename T = void*> static T get_MultiplierTags() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C2C1DC))(0);
	}
	template <typename T = void*> static T get_NoSaveable() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C2C37C))(0);
	}
	template <typename T = void*> static T get_NotAutoComplete() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C2C51C))(0);
	}
	template <typename T = void*> static T get_Offer() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C2C6BC))(0);
	}
	template <typename T = void*> static T get_OldBlueprint() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C2C85C))(0);
	}
	template <typename T = void*> static T get_OnCompletedActorMagic() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C2C9FC))(0);
	}
	template <typename T = void*> static T get_OnCompletedTargetEffect() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C2CB9C))(0);
	}
	template <typename T = void*> static T get_Order() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C2CD3C))(0);
	}
	template <typename T = void*> static T get_Parameters() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C2CEDC))(0);
	}
	template <typename T = void*> static T get_Point() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C2D07C))(0);
	}
	template <typename T = void*> static T get_PortalQuest() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C2D21C))(0);
	}
	template <typename T = void*> static T get_PositionTransaction() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C2D3BC))(0);
	}
	template <typename T = void*> static T get_ProgressNotify() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C2D55C))(0);
	}
	template <typename T = void*> static T get_Resources() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C2D6FC))(0);
	}
	template <typename T = void*> static T get_RewardByTime() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C2D89C))(0);
	}
	template <typename T = void*> static T get_Reward() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C2DA3C))(0);
	}
	template <typename T = void*> static T get_Shareable() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C2DBDC))(0);
	}
	template <typename T = void*> static T get_SkipPrice() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C2DD7C))(0);
	}
	template <typename T = void*> static T get_StartCondition() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C2DF1C))(0);
	}
	template <typename T = void*> static T get_Tags() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C1AB98))(0);
	}
	template <typename T = void*> static T get_TargetMarker() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C2E0BC))(0);
	}
	template <typename T = void*> static T get_TargetSelf() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C2E25C))(0);
	}
	template <typename T = void*> static T get_TargetTags() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C2E3FC))(0);
	}
	template <typename T = void*> static T get_TrackingSetting() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C2E59C))(0);
	}
	template <typename T = void*> static T get_TriggerBuild() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C2E73C))(0);
	}
	template <typename T = void*> static T get_TriggerBuildOwn() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C2E8DC))(0);
	}
	template <typename T = void*> static T get_TriggerCraft() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C2EA7C))(0);
	}
	template <typename T = void*> static T get_TriggerCurrency() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C2EC1C))(0);
	}
	template <typename T = void*> static T get_TriggerDamage() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C2EDBC))(0);
	}
	template <typename T = void*> static T get_TriggerDeath() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C2EF5C))(0);
	}
	template <typename T = void*> static T get_TriggerDistrictLevel() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C2F0FC))(0);
	}
	template <typename T = void*> static T get_TriggerDonate() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C2F29C))(0);
	}
	template <typename T = void*> static T get_TriggerExit() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C2F43C))(0);
	}
	template <typename T = void*> static T get_TriggerExtract() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C2F5DC))(0);
	}
	template <typename T = void*> static T get_TriggerFinalize() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C2F77C))(0);
	}
	template <typename T = void*> static T get_TriggerGameEvent() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C2F91C))(0);
	}
	template <typename T = void*> static T get_TriggerHeal() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C2FABC))(0);
	}
	template <typename T = void*> static T get_TriggerKill() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C2FC5C))(0);
	}
	template <typename T = void*> static T get_TriggerLevel() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C2FDFC))(0);
	}
	template <typename T = void*> static T get_TriggerOwn() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C2FF9C))(0);
	}
	template <typename T = void*> static T get_TriggerPickup() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C3013C))(0);
	}
	template <typename T = void*> static T get_TriggerPlayerClassProgress() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C302DC))(0);
	}
	template <typename T = void*> static T get_TriggerQuestCompleted() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C3047C))(0);
	}
	template <typename T = void*> static T get_TriggerSeasonEnd() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C3061C))(0);
	}
	template <typename T = void*> static T get_TriggerSeasonLevel() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C307BC))(0);
	}
	template <typename T = void*> static T get_TriggerSneak() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C3095C))(0);
	}
	template <typename T = void*> static T get_TriggerSneakDamage() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C30AFC))(0);
	}
	template <typename T = void*> static T get_TriggerUnlock() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C30C9C))(0);
	}
	template <typename T = void*> static T get_TriggerUpLevelCap() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C30E3C))(0);
	}
	template <typename T = void*> static T get_TriggerUse() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C30FDC))(0);
	}
	template <typename T = void*> static T get_TriggerVisit() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C3117C))(0);
	}
	template <typename T = void*> static T get_TriggerVisitGlobalMap() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C3131C))(0);
	}
	template <typename T = void*> static T get_WorldStatus() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C314BC))(0);
	}
	template <typename T = void*> static T AllOf(Il2CppArray<uintptr_t>* indices) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1C3165C))(0, indices);
	}
	template <typename T = void*> static T AllOf_1(Il2CppArray<uintptr_t>* matchers) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1C1AED8))(0, matchers);
	}
	template <typename T = void*> static T AnyOf(Il2CppArray<uintptr_t>* indices) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1C316D4))(0, indices);
	}
	template <typename T = void*> static T AnyOf_1(Il2CppArray<uintptr_t>* matchers) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1C3174C))(0, matchers);
	}

};

}
