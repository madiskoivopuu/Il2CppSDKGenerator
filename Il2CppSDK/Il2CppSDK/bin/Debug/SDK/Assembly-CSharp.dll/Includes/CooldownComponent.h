#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CooldownComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CooldownComponent"));
	}

	template <typename T = float> T& Value() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& Initial() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(CooldownComponent*, uintptr_t))(Il2CppBase() + 0x1334F60))(this, targetObject);
	}

};

}
