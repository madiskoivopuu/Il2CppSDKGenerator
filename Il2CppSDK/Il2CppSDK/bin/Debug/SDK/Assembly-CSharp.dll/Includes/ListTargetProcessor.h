#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ListTargetProcessor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ListTargetProcessor"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& Result() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = bool> T ProcessTarget(uintptr_t actor, uintptr_t target) {
		return ((T (*)(ListTargetProcessor*, uintptr_t, uintptr_t))(Il2CppBase() + 0x229E064))(this, actor, target);
	}

};

}
