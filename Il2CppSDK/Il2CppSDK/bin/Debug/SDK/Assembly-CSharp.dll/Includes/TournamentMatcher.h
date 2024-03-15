#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TournamentMatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TournamentMatcher"));
	}

	 static IMatcher1TournamentEntity*>*& _matcherAnalyticEvent() {
		return *(IMatcher1TournamentEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static IMatcher1TournamentEntity*>*& _matcherAvatar() {
		return *(IMatcher1TournamentEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 static IMatcher1TournamentEntity*>*& _matcherBanner() {
		return *(IMatcher1TournamentEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	 static IMatcher1TournamentEntity*>*& _matcherBlueprint() {
		return *(IMatcher1TournamentEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	 static IMatcher1TournamentEntity*>*& _matcherCurrencyType() {
		return *(IMatcher1TournamentEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	 static IMatcher1TournamentEntity*>*& _matcherDescription() {
		return *(IMatcher1TournamentEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	 static IMatcher1TournamentEntity*>*& _matcherDuration() {
		return *(IMatcher1TournamentEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	 static IMatcher1TournamentEntity*>*& _matcherFoundPlayers() {
		return *(IMatcher1TournamentEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	 static IMatcher1TournamentEntity*>*& _matcherGeneratedPositionRewards() {
		return *(IMatcher1TournamentEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	 static IMatcher1TournamentEntity*>*& _matcherGuaranteedRewards() {
		return *(IMatcher1TournamentEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	 static IMatcher1TournamentEntity*>*& _matcherHistoryTempBuff() {
		return *(IMatcher1TournamentEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	 static IMatcher1TournamentEntity*>*& _matcherIcon() {
		return *(IMatcher1TournamentEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	 static IMatcher1TournamentEntity*>*& _matcherMaxPlayers() {
		return *(IMatcher1TournamentEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	 static IMatcher1TournamentEntity*>*& _matcherMinPointsToReward() {
		return *(IMatcher1TournamentEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	 static IMatcher1TournamentEntity*>*& _matcherName() {
		return *(IMatcher1TournamentEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	 static IMatcher1TournamentEntity*>*& _matcherOldBlueprint() {
		return *(IMatcher1TournamentEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	 static IMatcher1TournamentEntity*>*& _matcherPositionRewards() {
		return *(IMatcher1TournamentEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	 static IMatcher1TournamentEntity*>*& _matcherQuest() {
		return *(IMatcher1TournamentEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	 static IMatcher1TournamentEntity*>*& _matcherStartTime() {
		return *(IMatcher1TournamentEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	 static IMatcher1TournamentEntity*>*& _matcherTempBuff() {
		return *(IMatcher1TournamentEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	 static IMatcher1TournamentEntity*>*& _matcherTournament() {
		return *(IMatcher1TournamentEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	 static IMatcher1TournamentEntity*>*& _matcherTournamentState() {
		return *(IMatcher1TournamentEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}

	 static IMatcher1TournamentEntity*>* get_AnalyticEvent() {
		return ((IMatcher1TournamentEntity*>* (*)(void *))(Il2CppBase() + 0x15074E4))(0);
	}
	 static IMatcher1TournamentEntity*>* get_Avatar() {
		return ((IMatcher1TournamentEntity*>* (*)(void *))(Il2CppBase() + 0x14FEDB0))(0);
	}
	 static IMatcher1TournamentEntity*>* get_Banner() {
		return ((IMatcher1TournamentEntity*>* (*)(void *))(Il2CppBase() + 0x1507664))(0);
	}
	 static IMatcher1TournamentEntity*>* get_Blueprint() {
		return ((IMatcher1TournamentEntity*>* (*)(void *))(Il2CppBase() + 0x1507800))(0);
	}
	 static IMatcher1TournamentEntity*>* get_CurrencyType() {
		return ((IMatcher1TournamentEntity*>* (*)(void *))(Il2CppBase() + 0x14FF758))(0);
	}
	 static IMatcher1TournamentEntity*>* get_Description() {
		return ((IMatcher1TournamentEntity*>* (*)(void *))(Il2CppBase() + 0x150799C))(0);
	}
	 static IMatcher1TournamentEntity*>* get_Duration() {
		return ((IMatcher1TournamentEntity*>* (*)(void *))(Il2CppBase() + 0x1507B38))(0);
	}
	 static IMatcher1TournamentEntity*>* get_FoundPlayers() {
		return ((IMatcher1TournamentEntity*>* (*)(void *))(Il2CppBase() + 0x1507CD4))(0);
	}
	 static IMatcher1TournamentEntity*>* get_GeneratedPositionRewards() {
		return ((IMatcher1TournamentEntity*>* (*)(void *))(Il2CppBase() + 0x1507E70))(0);
	}
	 static IMatcher1TournamentEntity*>* get_GuaranteedRewards() {
		return ((IMatcher1TournamentEntity*>* (*)(void *))(Il2CppBase() + 0x150800C))(0);
	}
	 static IMatcher1TournamentEntity*>* get_HistoryTempBuff() {
		return ((IMatcher1TournamentEntity*>* (*)(void *))(Il2CppBase() + 0x14FF5BC))(0);
	}
	 static IMatcher1TournamentEntity*>* get_Icon() {
		return ((IMatcher1TournamentEntity*>* (*)(void *))(Il2CppBase() + 0x15081A8))(0);
	}
	 static IMatcher1TournamentEntity*>* get_MaxPlayers() {
		return ((IMatcher1TournamentEntity*>* (*)(void *))(Il2CppBase() + 0x1508344))(0);
	}
	 static IMatcher1TournamentEntity*>* get_MinPointsToReward() {
		return ((IMatcher1TournamentEntity*>* (*)(void *))(Il2CppBase() + 0x15084E0))(0);
	}
	 static IMatcher1TournamentEntity*>* get_Name() {
		return ((IMatcher1TournamentEntity*>* (*)(void *))(Il2CppBase() + 0x150867C))(0);
	}
	 static IMatcher1TournamentEntity*>* get_OldBlueprint() {
		return ((IMatcher1TournamentEntity*>* (*)(void *))(Il2CppBase() + 0x1508818))(0);
	}
	 static IMatcher1TournamentEntity*>* get_PositionRewards() {
		return ((IMatcher1TournamentEntity*>* (*)(void *))(Il2CppBase() + 0x15089B4))(0);
	}
	 static IMatcher1TournamentEntity*>* get_Quest() {
		return ((IMatcher1TournamentEntity*>* (*)(void *))(Il2CppBase() + 0x1508B50))(0);
	}
	 static IMatcher1TournamentEntity*>* get_StartTime() {
		return ((IMatcher1TournamentEntity*>* (*)(void *))(Il2CppBase() + 0x1508CEC))(0);
	}
	 static IMatcher1TournamentEntity*>* get_TempBuff() {
		return ((IMatcher1TournamentEntity*>* (*)(void *))(Il2CppBase() + 0x14FF420))(0);
	}
	 static IMatcher1TournamentEntity*>* get_Tournament() {
		return ((IMatcher1TournamentEntity*>* (*)(void *))(Il2CppBase() + 0x14FE6B8))(0);
	}
	 static IMatcher1TournamentEntity*>* get_TournamentState() {
		return ((IMatcher1TournamentEntity*>* (*)(void *))(Il2CppBase() + 0x1508E88))(0);
	}
	 static IAllOfMatcher1TournamentEntity*>* AllOf(Il2CppArray<int32_t>* indices) {
		return ((IAllOfMatcher1TournamentEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x1509024))(0, indices);
	}
	 static IAllOfMatcher1TournamentEntity*>* AllOf_1(Il2CppArray<IMatcher1TournamentEntity*>*>* matchers) {
		return ((IAllOfMatcher1TournamentEntity*>* (*)(void *, Il2CppArray<IMatcher1TournamentEntity*>*>*))(Il2CppBase() + 0x14FF8F4))(0, matchers);
	}
	 static IAnyOfMatcher1TournamentEntity*>* AnyOf(Il2CppArray<int32_t>* indices) {
		return ((IAnyOfMatcher1TournamentEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x150909C))(0, indices);
	}
	 static IAnyOfMatcher1TournamentEntity*>* AnyOf_1(Il2CppArray<IMatcher1TournamentEntity*>*>* matchers) {
		return ((IAnyOfMatcher1TournamentEntity*>* (*)(void *, Il2CppArray<IMatcher1TournamentEntity*>*>*))(Il2CppBase() + 0x1509114))(0, matchers);
	}

};

