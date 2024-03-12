#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnCompletedUseComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OnCompletedUseComponent"));
	}

	template <typename T = uintptr_t> T& ActionType() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& ItemName() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& UseWeapon() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& MaxTargetPlayerHealthCoef() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(OnCompletedUseComponent*, uintptr_t))(Il2CppBase() + 0x11DC16C))(this, targetObject);
	}

};

}
