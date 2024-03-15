#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TemporaryHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TemporaryHelper"));
	}


	 static ValueTuple2<int64_t, int64_t>* GetTimers(ITemporaryEntity* temporaryEntity, ICommonContexts* world) {
		return ((ValueTuple2<int64_t, int64_t>* (*)(void *, ITemporaryEntity*, ICommonContexts*))(Il2CppBase() + 0x16B3C7C))(0, temporaryEntity, world);
	}
	template <typename R = bool> static R IsCyclic(ICommonContexts* world) {
		return ((R (*)(void *, ICommonContexts*))(Il2CppBase() + 0x16B5F30))(0, world);
	}

};

