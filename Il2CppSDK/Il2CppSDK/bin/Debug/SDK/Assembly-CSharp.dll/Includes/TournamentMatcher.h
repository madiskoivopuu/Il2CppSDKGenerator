#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TournamentMatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TournamentMatcher"));
	}

	template <typename T = IMatcher1TournamentEntity*>*> static T& _matcherAnalyticEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = IMatcher1TournamentEntity*>*> static T& _matcherAvatar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = IMatcher1TournamentEntity*>*> static T& _matcherBanner() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = IMatcher1TournamentEntity*>*> static T& _matcherBlueprint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = IMatcher1TournamentEntity*>*> static T& _matcherCurrencyType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = IMatcher1TournamentEntity*>*> static T& _matcherDescription() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = IMatcher1TournamentEntity*>*> static T& _matcherDuration() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = IMatcher1TournamentEntity*>*> static T& _matcherFoundPlayers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = IMatcher1TournamentEntity*>*> static T& _matcherGeneratedPositionRewards() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = IMatcher1TournamentEntity*>*> static T& _matcherGuaranteedRewards() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = IMatcher1TournamentEntity*>*> static T& _matcherHistoryTempBuff() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = IMatcher1TournamentEntity*>*> static T& _matcherIcon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = IMatcher1TournamentEntity*>*> static T& _matcherMaxPlayers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = IMatcher1TournamentEntity*>*> static T& _matcherMinPointsToReward() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = IMatcher1TournamentEntity*>*> static T& _matcherName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = IMatcher1TournamentEntity*>*> static T& _matcherOldBlueprint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = IMatcher1TournamentEntity*>*> static T& _matcherPositionRewards() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = IMatcher1TournamentEntity*>*> static T& _matcherQuest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = IMatcher1TournamentEntity*>*> static T& _matcherStartTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = IMatcher1TournamentEntity*>*> static T& _matcherTempBuff() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = IMatcher1TournamentEntity*>*> static T& _matcherTournament() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = IMatcher1TournamentEntity*>*> static T& _matcherTournamentState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}

	template <typename T = IMatcher1TournamentEntity*>*> static T get_AnalyticEvent() {
		return ((T (*)(void *))(Il2CppBase() + 0x15074E4))(0);
	}
	template <typename T = IMatcher1TournamentEntity*>*> static T get_Avatar() {
		return ((T (*)(void *))(Il2CppBase() + 0x14FEDB0))(0);
	}
	template <typename T = IMatcher1TournamentEntity*>*> static T get_Banner() {
		return ((T (*)(void *))(Il2CppBase() + 0x1507664))(0);
	}
	template <typename T = IMatcher1TournamentEntity*>*> static T get_Blueprint() {
		return ((T (*)(void *))(Il2CppBase() + 0x1507800))(0);
	}
	template <typename T = IMatcher1TournamentEntity*>*> static T get_CurrencyType() {
		return ((T (*)(void *))(Il2CppBase() + 0x14FF758))(0);
	}
	template <typename T = IMatcher1TournamentEntity*>*> static T get_Description() {
		return ((T (*)(void *))(Il2CppBase() + 0x150799C))(0);
	}
	template <typename T = IMatcher1TournamentEntity*>*> static T get_Duration() {
		return ((T (*)(void *))(Il2CppBase() + 0x1507B38))(0);
	}
	template <typename T = IMatcher1TournamentEntity*>*> static T get_FoundPlayers() {
		return ((T (*)(void *))(Il2CppBase() + 0x1507CD4))(0);
	}
	template <typename T = IMatcher1TournamentEntity*>*> static T get_GeneratedPositionRewards() {
		return ((T (*)(void *))(Il2CppBase() + 0x1507E70))(0);
	}
	template <typename T = IMatcher1TournamentEntity*>*> static T get_GuaranteedRewards() {
		return ((T (*)(void *))(Il2CppBase() + 0x150800C))(0);
	}
	template <typename T = IMatcher1TournamentEntity*>*> static T get_HistoryTempBuff() {
		return ((T (*)(void *))(Il2CppBase() + 0x14FF5BC))(0);
	}
	template <typename T = IMatcher1TournamentEntity*>*> static T get_Icon() {
		return ((T (*)(void *))(Il2CppBase() + 0x15081A8))(0);
	}
	template <typename T = IMatcher1TournamentEntity*>*> static T get_MaxPlayers() {
		return ((T (*)(void *))(Il2CppBase() + 0x1508344))(0);
	}
	template <typename T = IMatcher1TournamentEntity*>*> static T get_MinPointsToReward() {
		return ((T (*)(void *))(Il2CppBase() + 0x15084E0))(0);
	}
	template <typename T = IMatcher1TournamentEntity*>*> static T get_Name() {
		return ((T (*)(void *))(Il2CppBase() + 0x150867C))(0);
	}
	template <typename T = IMatcher1TournamentEntity*>*> static T get_OldBlueprint() {
		return ((T (*)(void *))(Il2CppBase() + 0x1508818))(0);
	}
	template <typename T = IMatcher1TournamentEntity*>*> static T get_PositionRewards() {
		return ((T (*)(void *))(Il2CppBase() + 0x15089B4))(0);
	}
	template <typename T = IMatcher1TournamentEntity*>*> static T get_Quest() {
		return ((T (*)(void *))(Il2CppBase() + 0x1508B50))(0);
	}
	template <typename T = IMatcher1TournamentEntity*>*> static T get_StartTime() {
		return ((T (*)(void *))(Il2CppBase() + 0x1508CEC))(0);
	}
	template <typename T = IMatcher1TournamentEntity*>*> static T get_TempBuff() {
		return ((T (*)(void *))(Il2CppBase() + 0x14FF420))(0);
	}
	template <typename T = IMatcher1TournamentEntity*>*> static T get_Tournament() {
		return ((T (*)(void *))(Il2CppBase() + 0x14FE6B8))(0);
	}
	template <typename T = IMatcher1TournamentEntity*>*> static T get_TournamentState() {
		return ((T (*)(void *))(Il2CppBase() + 0x1508E88))(0);
	}
	template <typename T = IAllOfMatcher1TournamentEntity*>*> static T AllOf(Il2CppArray<uintptr_t>* indices) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1509024))(0, indices);
	}
	template <typename T = IAllOfMatcher1TournamentEntity*>*> static T AllOf_1(Il2CppArray<uintptr_t>* matchers) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x14FF8F4))(0, matchers);
	}
	template <typename T = IAnyOfMatcher1TournamentEntity*>*> static T AnyOf(Il2CppArray<uintptr_t>* indices) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x150909C))(0, indices);
	}
	template <typename T = IAnyOfMatcher1TournamentEntity*>*> static T AnyOf_1(Il2CppArray<uintptr_t>* matchers) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1509114))(0, matchers);
	}

};

