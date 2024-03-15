#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TournamentStatesSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TournamentStatesSystem"));
	}

	template <typename R = BaseClientWorld*> R& _world() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = TournamentState> R& _previousTournamentState() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppString*> static R& AnalyticsTournamentJoinedCountKey() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename R = void> R Execute() {
		return ((R (*)(TournamentStatesSystem*))(Il2CppBase() + 0x150B5A8))(this);
	}

};

