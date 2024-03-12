#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ITargetProcessor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ITargetProcessor"));
	}


	template <typename T = bool> T ProcessTarget(uintptr_t actor, uintptr_t target) {
		return ((T (*)(ITargetProcessor*, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, actor, target);
	}

};

}
