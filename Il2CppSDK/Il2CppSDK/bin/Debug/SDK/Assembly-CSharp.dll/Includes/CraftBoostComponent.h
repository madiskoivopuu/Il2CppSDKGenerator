#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CraftBoostComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CraftBoostComponent"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& List() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(CraftBoostComponent*, uintptr_t))(Il2CppBase() + 0x13412F4))(this, target);
	}

};

}
