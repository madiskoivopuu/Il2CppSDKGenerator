#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MaxHealthComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MaxHealthComponent"));
	}

	template <typename T = float> T& Value() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& ResurrectValue() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(MaxHealthComponent*, uintptr_t))(Il2CppBase() + 0x12CD484))(this, targetObject);
	}

};

}
