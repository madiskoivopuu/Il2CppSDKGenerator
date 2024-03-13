#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StatueHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StatueHelper"));
	}


	template <typename T = StatueStatus*> static T GetStatueStatus(ClanEntity* clan, ICommonContexts* contexts) {
		return ((T (*)(void *, ClanEntity*, ICommonContexts*))(Il2CppBase() + 0x148FBFC))(0, clan, contexts);
	}
	template <typename T = StatueStatus*> static T GetStatueStatus_1(IClanEntity* actor, ICommonContexts* contexts) {
		return ((T (*)(void *, IClanEntity*, ICommonContexts*))(Il2CppBase() + 0x148FD90))(0, actor, contexts);
	}

};

