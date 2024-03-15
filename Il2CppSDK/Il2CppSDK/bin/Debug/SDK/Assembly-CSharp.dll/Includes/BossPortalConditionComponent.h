#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BossPortalConditionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BossPortalConditionComponent"));
	}

	template <typename R = bool> R& IsOpen() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(BossPortalConditionComponent*, Il2CppObject*))(Il2CppBase() + 0x16CCF70))(this, target);
	}

};

