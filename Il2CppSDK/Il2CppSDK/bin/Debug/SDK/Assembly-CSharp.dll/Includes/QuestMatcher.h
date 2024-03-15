#pragma once
#include <Il2Cpp/Il2Cpp.h>

class QuestMatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "QuestMatcher"));
	}

	 static IMatcher1QuestEntity*>*& _matcherActual() {
		return *(IMatcher1QuestEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static IMatcher1QuestEntity*>*& _matcherAlive() {
		return *(IMatcher1QuestEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 static IMatcher1QuestEntity*>*& _matcherCheckTime() {
		return *(IMatcher1QuestEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	 static IMatcher1QuestEntity*>*& _matcherClan() {
		return *(IMatcher1QuestEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	 static IMatcher1QuestEntity*>*& _matcherCompleted() {
		return *(IMatcher1QuestEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	 static IMatcher1QuestEntity*>*& _matcherEndTime() {
		return *(IMatcher1QuestEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	 static IMatcher1QuestEntity*>*& _matcherGeneratedReward() {
		return *(IMatcher1QuestEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	 static IMatcher1QuestEntity*>*& _matcherGuildQuest() {
		return *(IMatcher1QuestEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	 static IMatcher1QuestEntity*>*& _matcherId() {
		return *(IMatcher1QuestEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	 static IMatcher1QuestEntity*>*& _matcherLastProgress() {
		return *(IMatcher1QuestEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	 static IMatcher1QuestEntity*>*& _matcherManualTracking() {
		return *(IMatcher1QuestEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	 static IMatcher1QuestEntity*>*& _matcherNextActiveTime() {
		return *(IMatcher1QuestEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	 static IMatcher1QuestEntity*>*& _matcherNoSaveable() {
		return *(IMatcher1QuestEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	 static IMatcher1QuestEntity*>*& _matcherNoStarted() {
		return *(IMatcher1QuestEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	 static IMatcher1QuestEntity*>*& _matcherNotAutoComplete() {
		return *(IMatcher1QuestEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	 static IMatcher1QuestEntity*>*& _matcherNotified() {
		return *(IMatcher1QuestEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	 static IMatcher1QuestEntity*>*& _matcherOwner() {
		return *(IMatcher1QuestEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	 static IMatcher1QuestEntity*>*& _matcherPremiumRewarded() {
		return *(IMatcher1QuestEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	 static IMatcher1QuestEntity*>*& _matcherProgress() {
		return *(IMatcher1QuestEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	 static IMatcher1QuestEntity*>*& _matcherProgressPerLocation() {
		return *(IMatcher1QuestEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	 static IMatcher1QuestEntity*>*& _matcherQuestData() {
		return *(IMatcher1QuestEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	 static IMatcher1QuestEntity*>*& _matcherReplicated() {
		return *(IMatcher1QuestEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	 static IMatcher1QuestEntity*>*& _matcherRewardCoef() {
		return *(IMatcher1QuestEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	 static IMatcher1QuestEntity*>*& _matcherRewarded() {
		return *(IMatcher1QuestEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	 static IMatcher1QuestEntity*>*& _matcherSourceItem() {
		return *(IMatcher1QuestEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	 static IMatcher1QuestEntity*>*& _matcherStartTime() {
		return *(IMatcher1QuestEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	 static IMatcher1QuestEntity*>*& _matcherTournament() {
		return *(IMatcher1QuestEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	 static IMatcher1QuestEntity*>*& _matcherTracking() {
		return *(IMatcher1QuestEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}

	 static IMatcher1QuestEntity*>* get_Actual() {
		return ((IMatcher1QuestEntity*>* (*)(void *))(Il2CppBase() + 0x1C36E6C))(0);
	}
	 static IMatcher1QuestEntity*>* get_Alive() {
		return ((IMatcher1QuestEntity*>* (*)(void *))(Il2CppBase() + 0x1C36FEC))(0);
	}
	 static IMatcher1QuestEntity*>* get_CheckTime() {
		return ((IMatcher1QuestEntity*>* (*)(void *))(Il2CppBase() + 0x1C37188))(0);
	}
	 static IMatcher1QuestEntity*>* get_Clan() {
		return ((IMatcher1QuestEntity*>* (*)(void *))(Il2CppBase() + 0x1C37324))(0);
	}
	 static IMatcher1QuestEntity*>* get_Completed() {
		return ((IMatcher1QuestEntity*>* (*)(void *))(Il2CppBase() + 0x1C374C0))(0);
	}
	 static IMatcher1QuestEntity*>* get_EndTime() {
		return ((IMatcher1QuestEntity*>* (*)(void *))(Il2CppBase() + 0x1C3765C))(0);
	}
	 static IMatcher1QuestEntity*>* get_GeneratedReward() {
		return ((IMatcher1QuestEntity*>* (*)(void *))(Il2CppBase() + 0x1C377F8))(0);
	}
	 static IMatcher1QuestEntity*>* get_GuildQuest() {
		return ((IMatcher1QuestEntity*>* (*)(void *))(Il2CppBase() + 0x1C37994))(0);
	}
	 static IMatcher1QuestEntity*>* get_Id() {
		return ((IMatcher1QuestEntity*>* (*)(void *))(Il2CppBase() + 0x1C37B30))(0);
	}
	 static IMatcher1QuestEntity*>* get_LastProgress() {
		return ((IMatcher1QuestEntity*>* (*)(void *))(Il2CppBase() + 0x1C37CCC))(0);
	}
	 static IMatcher1QuestEntity*>* get_ManualTracking() {
		return ((IMatcher1QuestEntity*>* (*)(void *))(Il2CppBase() + 0x1C37E68))(0);
	}
	 static IMatcher1QuestEntity*>* get_NextActiveTime() {
		return ((IMatcher1QuestEntity*>* (*)(void *))(Il2CppBase() + 0x1C38004))(0);
	}
	 static IMatcher1QuestEntity*>* get_NoSaveable() {
		return ((IMatcher1QuestEntity*>* (*)(void *))(Il2CppBase() + 0x1C381A0))(0);
	}
	 static IMatcher1QuestEntity*>* get_NoStarted() {
		return ((IMatcher1QuestEntity*>* (*)(void *))(Il2CppBase() + 0x1C3833C))(0);
	}
	 static IMatcher1QuestEntity*>* get_NotAutoComplete() {
		return ((IMatcher1QuestEntity*>* (*)(void *))(Il2CppBase() + 0x1C384D8))(0);
	}
	 static IMatcher1QuestEntity*>* get_Notified() {
		return ((IMatcher1QuestEntity*>* (*)(void *))(Il2CppBase() + 0x1C38674))(0);
	}
	 static IMatcher1QuestEntity*>* get_Owner() {
		return ((IMatcher1QuestEntity*>* (*)(void *))(Il2CppBase() + 0x1C38810))(0);
	}
	 static IMatcher1QuestEntity*>* get_PremiumRewarded() {
		return ((IMatcher1QuestEntity*>* (*)(void *))(Il2CppBase() + 0x1C389AC))(0);
	}
	 static IMatcher1QuestEntity*>* get_Progress() {
		return ((IMatcher1QuestEntity*>* (*)(void *))(Il2CppBase() + 0x1C38B48))(0);
	}
	 static IMatcher1QuestEntity*>* get_ProgressPerLocation() {
		return ((IMatcher1QuestEntity*>* (*)(void *))(Il2CppBase() + 0x1C38CE4))(0);
	}
	 static IMatcher1QuestEntity*>* get_QuestData() {
		return ((IMatcher1QuestEntity*>* (*)(void *))(Il2CppBase() + 0x1C38E80))(0);
	}
	 static IMatcher1QuestEntity*>* get_Replicated() {
		return ((IMatcher1QuestEntity*>* (*)(void *))(Il2CppBase() + 0x1C3901C))(0);
	}
	 static IMatcher1QuestEntity*>* get_RewardCoef() {
		return ((IMatcher1QuestEntity*>* (*)(void *))(Il2CppBase() + 0x1C391B8))(0);
	}
	 static IMatcher1QuestEntity*>* get_Rewarded() {
		return ((IMatcher1QuestEntity*>* (*)(void *))(Il2CppBase() + 0x1C39354))(0);
	}
	 static IMatcher1QuestEntity*>* get_SourceItem() {
		return ((IMatcher1QuestEntity*>* (*)(void *))(Il2CppBase() + 0x1C394F0))(0);
	}
	 static IMatcher1QuestEntity*>* get_StartTime() {
		return ((IMatcher1QuestEntity*>* (*)(void *))(Il2CppBase() + 0x1C3968C))(0);
	}
	 static IMatcher1QuestEntity*>* get_Tournament() {
		return ((IMatcher1QuestEntity*>* (*)(void *))(Il2CppBase() + 0x1C39828))(0);
	}
	 static IMatcher1QuestEntity*>* get_Tracking() {
		return ((IMatcher1QuestEntity*>* (*)(void *))(Il2CppBase() + 0x1C399C4))(0);
	}
	 static IAllOfMatcher1QuestEntity*>* AllOf(Il2CppArray<int32_t>* indices) {
		return ((IAllOfMatcher1QuestEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x1C39B60))(0, indices);
	}
	 static IAllOfMatcher1QuestEntity*>* AllOf_1(Il2CppArray<IMatcher1QuestEntity*>*>* matchers) {
		return ((IAllOfMatcher1QuestEntity*>* (*)(void *, Il2CppArray<IMatcher1QuestEntity*>*>*))(Il2CppBase() + 0x1C39BD8))(0, matchers);
	}
	 static IAnyOfMatcher1QuestEntity*>* AnyOf(Il2CppArray<int32_t>* indices) {
		return ((IAnyOfMatcher1QuestEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x1C39C50))(0, indices);
	}
	 static IAnyOfMatcher1QuestEntity*>* AnyOf_1(Il2CppArray<IMatcher1QuestEntity*>*>* matchers) {
		return ((IAnyOfMatcher1QuestEntity*>* (*)(void *, Il2CppArray<IMatcher1QuestEntity*>*>*))(Il2CppBase() + 0x1C39CC8))(0, matchers);
	}

};

