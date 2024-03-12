#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TournamentStatesSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TournamentStatesSystem"));
	}

	template <typename T = uintptr_t> T& _world() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& _previousTournamentState() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> static T& AnalyticsTournamentJoinedCountKey() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T Execute() {
		return ((T (*)(TournamentStatesSystem*))(Il2CppBase() + 0x150B5A8))(this);
	}

};

}
