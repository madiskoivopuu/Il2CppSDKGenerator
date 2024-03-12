#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ScoutConditionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ScoutConditionComponent"));
	}

	template <typename T = uintptr_t> T& Status() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(ScoutConditionComponent*, uintptr_t))(Il2CppBase() + 0x1357A74))(this, target);
	}

};

}
