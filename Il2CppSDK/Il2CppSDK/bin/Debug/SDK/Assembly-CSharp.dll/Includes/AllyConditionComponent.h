#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AllyConditionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AllyConditionComponent"));
	}

	template <typename R = bool> R& Value() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(AllyConditionComponent*, Il2CppObject*))(Il2CppBase() + 0x129E420))(this, target);
	}

};

