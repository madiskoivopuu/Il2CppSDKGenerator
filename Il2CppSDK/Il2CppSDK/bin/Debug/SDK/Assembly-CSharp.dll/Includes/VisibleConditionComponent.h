#pragma once
#include <Il2Cpp/Il2Cpp.h>

class VisibleConditionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "VisibleConditionComponent"));
	}

	template <typename T = bool> T& Value() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(VisibleConditionComponent*, uintptr_t))(Il2CppBase() + 0x15D0EA4))(this, target);
	}

};

}
