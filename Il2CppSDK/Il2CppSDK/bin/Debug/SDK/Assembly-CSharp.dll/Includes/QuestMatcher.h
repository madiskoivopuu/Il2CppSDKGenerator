#pragma once
#include <Il2Cpp/Il2Cpp.h>

class QuestMatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "QuestMatcher"));
	}

	template <typename T = void*> static T& _matcherActual() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& _matcherAlive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> static T& _matcherCheckTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = void*> static T& _matcherClan() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = void*> static T& _matcherCompleted() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = void*> static T& _matcherEndTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = void*> static T& _matcherGeneratedReward() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = void*> static T& _matcherGuildQuest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = void*> static T& _matcherId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = void*> static T& _matcherLastProgress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = void*> static T& _matcherManualTracking() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = void*> static T& _matcherNextActiveTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = void*> static T& _matcherNoSaveable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = void*> static T& _matcherNoStarted() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = void*> static T& _matcherNotAutoComplete() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = void*> static T& _matcherNotified() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = void*> static T& _matcherOwner() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = void*> static T& _matcherPremiumRewarded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = void*> static T& _matcherProgress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = void*> static T& _matcherProgressPerLocation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = void*> static T& _matcherQuestData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = void*> static T& _matcherReplicated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = void*> static T& _matcherRewardCoef() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = void*> static T& _matcherRewarded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = void*> static T& _matcherSourceItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = void*> static T& _matcherStartTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = void*> static T& _matcherTournament() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = void*> static T& _matcherTracking() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}

	template <typename T = void*> static T get_Actual() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C36E6C))(0);
	}
	template <typename T = void*> static T get_Alive() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C36FEC))(0);
	}
	template <typename T = void*> static T get_CheckTime() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C37188))(0);
	}
	template <typename T = void*> static T get_Clan() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C37324))(0);
	}
	template <typename T = void*> static T get_Completed() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C374C0))(0);
	}
	template <typename T = void*> static T get_EndTime() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C3765C))(0);
	}
	template <typename T = void*> static T get_GeneratedReward() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C377F8))(0);
	}
	template <typename T = void*> static T get_GuildQuest() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C37994))(0);
	}
	template <typename T = void*> static T get_Id() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C37B30))(0);
	}
	template <typename T = void*> static T get_LastProgress() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C37CCC))(0);
	}
	template <typename T = void*> static T get_ManualTracking() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C37E68))(0);
	}
	template <typename T = void*> static T get_NextActiveTime() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C38004))(0);
	}
	template <typename T = void*> static T get_NoSaveable() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C381A0))(0);
	}
	template <typename T = void*> static T get_NoStarted() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C3833C))(0);
	}
	template <typename T = void*> static T get_NotAutoComplete() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C384D8))(0);
	}
	template <typename T = void*> static T get_Notified() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C38674))(0);
	}
	template <typename T = void*> static T get_Owner() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C38810))(0);
	}
	template <typename T = void*> static T get_PremiumRewarded() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C389AC))(0);
	}
	template <typename T = void*> static T get_Progress() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C38B48))(0);
	}
	template <typename T = void*> static T get_ProgressPerLocation() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C38CE4))(0);
	}
	template <typename T = void*> static T get_QuestData() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C38E80))(0);
	}
	template <typename T = void*> static T get_Replicated() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C3901C))(0);
	}
	template <typename T = void*> static T get_RewardCoef() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C391B8))(0);
	}
	template <typename T = void*> static T get_Rewarded() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C39354))(0);
	}
	template <typename T = void*> static T get_SourceItem() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C394F0))(0);
	}
	template <typename T = void*> static T get_StartTime() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C3968C))(0);
	}
	template <typename T = void*> static T get_Tournament() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C39828))(0);
	}
	template <typename T = void*> static T get_Tracking() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C399C4))(0);
	}
	template <typename T = void*> static T AllOf(Il2CppArray<uintptr_t>* indices) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1C39B60))(0, indices);
	}
	template <typename T = void*> static T AllOf_1(Il2CppArray<uintptr_t>* matchers) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1C39BD8))(0, matchers);
	}
	template <typename T = void*> static T AnyOf(Il2CppArray<uintptr_t>* indices) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1C39C50))(0, indices);
	}
	template <typename T = void*> static T AnyOf_1(Il2CppArray<uintptr_t>* matchers) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1C39CC8))(0, matchers);
	}

};

}
