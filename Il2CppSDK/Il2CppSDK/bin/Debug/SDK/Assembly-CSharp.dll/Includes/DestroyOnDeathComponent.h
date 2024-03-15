#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DestroyOnDeathComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DestroyOnDeathComponent"));
	}

	template <typename R = bool> R& Instantly() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(DestroyOnDeathComponent*, Il2CppObject*))(Il2CppBase() + 0xEBEB1C))(this, targetObject);
	}

};

