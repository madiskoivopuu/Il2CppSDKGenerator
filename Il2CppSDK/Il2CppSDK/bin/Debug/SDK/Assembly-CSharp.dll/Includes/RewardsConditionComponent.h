#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RewardsConditionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RewardsConditionComponent"));
	}

	template <typename T = bool> T& Exist() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(RewardsConditionComponent*, uintptr_t))(Il2CppBase() + 0x11A257C))(this, target);
	}

};

}
