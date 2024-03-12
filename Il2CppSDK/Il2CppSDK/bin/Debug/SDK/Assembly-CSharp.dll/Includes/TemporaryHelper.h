#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TemporaryHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TemporaryHelper"));
	}


	template <typename T = void*> static T GetTimers(uintptr_t temporaryEntity, uintptr_t world) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x16B3C7C))(0, temporaryEntity, world);
	}
	template <typename T = bool> static T IsCyclic(uintptr_t world) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x16B5F30))(0, world);
	}

};

}
