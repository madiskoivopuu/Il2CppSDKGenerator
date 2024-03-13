#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TemporaryHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TemporaryHelper"));
	}


	template <typename T = ValueTuple2int64_t, int64_t>*> static T GetTimers(ITemporaryEntity* temporaryEntity, ICommonContexts* world) {
		return ((T (*)(void *, ITemporaryEntity*, ICommonContexts*))(Il2CppBase() + 0x16B3C7C))(0, temporaryEntity, world);
	}
	template <typename T = bool> static T IsCyclic(ICommonContexts* world) {
		return ((T (*)(void *, ICommonContexts*))(Il2CppBase() + 0x16B5F30))(0, world);
	}

};

