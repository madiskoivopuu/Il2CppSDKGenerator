#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HealComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HealComponent"));
	}

	template <typename T = float> T& Value() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(HealComponent*, uintptr_t))(Il2CppBase() + 0x128AA04))(this, targetObject);
	}

};

}
