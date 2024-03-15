#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UnlockedConditionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UnlockedConditionComponent"));
	}

	template <typename R = bool> R& Value() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(UnlockedConditionComponent*, Il2CppObject*))(Il2CppBase() + 0x153AF24))(this, target);
	}

};

