#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SoundOutputDebug
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SoundOutputDebug"));
	}

	template <typename R = uintptr_t> R& audioSource() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R Start() {
		return ((R (*)(SoundOutputDebug*))(Il2CppBase() + 0x1485110))(this);
	}

};

