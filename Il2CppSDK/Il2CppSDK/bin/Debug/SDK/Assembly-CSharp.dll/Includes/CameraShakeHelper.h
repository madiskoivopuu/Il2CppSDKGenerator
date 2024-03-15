#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CameraShakeHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CameraShakeHelper"));
	}

	template <typename R = bool> R& UseTriggerName() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppString*> R& CameraShakeTrigger() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R OnEnable() {
		return ((R (*)(CameraShakeHelper*))(Il2CppBase() + 0x15B3568))(this);
	}
	template <typename R = void> R CameraShake() {
		return ((R (*)(CameraShakeHelper*))(Il2CppBase() + 0x15B356C))(this);
	}
	template <typename R = int32_t> R ShakeStrength(uintptr_t avatarPos) {
		return ((R (*)(CameraShakeHelper*, uintptr_t))(Il2CppBase() + 0x15B372C))(this, avatarPos);
	}

};

