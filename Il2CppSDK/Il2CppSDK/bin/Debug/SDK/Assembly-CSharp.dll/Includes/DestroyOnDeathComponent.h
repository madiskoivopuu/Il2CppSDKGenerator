#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DestroyOnDeathComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DestroyOnDeathComponent"));
	}

	template <typename T = bool> T& Instantly() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(DestroyOnDeathComponent*, uintptr_t))(Il2CppBase() + 0xEBEB1C))(this, targetObject);
	}

};

}
