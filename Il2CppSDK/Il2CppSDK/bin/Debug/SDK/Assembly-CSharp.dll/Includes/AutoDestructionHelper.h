#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AutoDestructionHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AutoDestructionHelper"));
	}


	template <typename T = bool> static T SetAutoDestruction(uintptr_t entity, int64_t startTime, float duration) {
		return ((T (*)(void *, uintptr_t, int64_t, float))(Il2CppBase() + 0x1A62904))(0, entity, startTime, duration);
	}

};

}
