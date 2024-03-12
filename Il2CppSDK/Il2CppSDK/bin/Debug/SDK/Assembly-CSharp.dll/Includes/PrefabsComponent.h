#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PrefabsComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PrefabsComponent"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& Items() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(PrefabsComponent*, uintptr_t))(Il2CppBase() + 0x16DEFF8))(this, target);
	}
	template <typename T = void*> T GetName(uintptr_t world, uintptr_t target) {
		return ((T (*)(PrefabsComponent*, uintptr_t, uintptr_t))(Il2CppBase() + 0x16DF090))(this, world, target);
	}

};

}
