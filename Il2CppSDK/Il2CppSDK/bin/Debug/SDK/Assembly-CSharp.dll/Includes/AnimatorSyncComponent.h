#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AnimatorSyncComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AnimatorSyncComponent"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& BoolNames() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& IntNames() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Floats() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(AnimatorSyncComponent*, uintptr_t))(Il2CppBase() + 0x188DB14))(this, target);
	}

};

}
