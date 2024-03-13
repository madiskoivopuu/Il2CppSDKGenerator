#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ScoutHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ScoutHelper"));
	}


	template <typename T = ScoutStatus*> static T GetScoutStatus(ClanEntity* clan, ICommonContexts* contexts) {
		return ((T (*)(void *, ClanEntity*, ICommonContexts*))(Il2CppBase() + 0x1357B10))(0, clan, contexts);
	}
	template <typename T = ScoutStatus*> static T GetStatus(ScoutStateComponent* scoutState, int64_t now) {
		return ((T (*)(void *, ScoutStateComponent*, int64_t))(Il2CppBase() + 0x1357CA4))(0, scoutState, now);
	}
	template <typename T = ScoutStatus*> static T GetScoutStatus_1(IClanEntity* actor, ICommonContexts* contexts) {
		return ((T (*)(void *, IClanEntity*, ICommonContexts*))(Il2CppBase() + 0x1357CDC))(0, actor, contexts);
	}

};

