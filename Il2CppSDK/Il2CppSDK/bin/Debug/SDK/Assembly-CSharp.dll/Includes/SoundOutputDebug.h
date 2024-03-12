#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SoundOutputDebug
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SoundOutputDebug"));
	}

	template <typename T = uintptr_t> T& audioSource() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Start() {
		return ((T (*)(SoundOutputDebug*))(Il2CppBase() + 0x1485110))(this);
	}

};

}
