#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BossPortalConditionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BossPortalConditionComponent"));
	}

	template <typename T = bool> T& IsOpen() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(BossPortalConditionComponent*, uintptr_t))(Il2CppBase() + 0x16CCF70))(this, target);
	}

};

}
