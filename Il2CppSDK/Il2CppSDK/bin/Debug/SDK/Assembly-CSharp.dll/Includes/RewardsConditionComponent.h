#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RewardsConditionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RewardsConditionComponent"));
	}

	template <typename R = bool> R& Exist() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(RewardsConditionComponent*, Il2CppObject*))(Il2CppBase() + 0x11A257C))(this, target);
	}

};

