#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StatueHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StatueHelper"));
	}


	template <typename R = StatueStatus> static R GetStatueStatus(ClanEntity* clan, ICommonContexts* contexts) {
		return ((R (*)(void *, ClanEntity*, ICommonContexts*))(Il2CppBase() + 0x148FBFC))(0, clan, contexts);
	}
	template <typename R = StatueStatus> static R GetStatueStatus_1(IClanEntity* actor, ICommonContexts* contexts) {
		return ((R (*)(void *, IClanEntity*, ICommonContexts*))(Il2CppBase() + 0x148FD90))(0, actor, contexts);
	}

};

