#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MoveToConditionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MoveToConditionComponent"));
	}

	template <typename T = bool> T& Valid() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(MoveToConditionComponent*, uintptr_t))(Il2CppBase() + 0x1557474))(this, target);
	}

};

}
