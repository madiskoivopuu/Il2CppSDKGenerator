#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnCompletedUseComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OnCompletedUseComponent"));
	}

	template <typename R = ActionType*> R& ActionType() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& ItemName() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = bool> R& UseWeapon() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = float> R& MaxTargetPlayerHealthCoef() {
		return *(R*)((uintptr_t)this + 0x24);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(OnCompletedUseComponent*, Il2CppObject*))(Il2CppBase() + 0x11DC16C))(this, targetObject);
	}

};

