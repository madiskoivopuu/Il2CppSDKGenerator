#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MaxHealthComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MaxHealthComponent"));
	}

	template <typename R = float> R& Value() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = float> R& ResurrectValue() {
		return *(R*)((uintptr_t)this + 0x14);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(MaxHealthComponent*, Il2CppObject*))(Il2CppBase() + 0x12CD484))(this, targetObject);
	}

};

