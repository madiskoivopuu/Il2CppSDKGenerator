#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CameraShakeHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CameraShakeHelper"));
	}

	template <typename T = bool> T& UseTriggerName() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& CameraShakeTrigger() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T OnEnable() {
		return ((T (*)(CameraShakeHelper*))(Il2CppBase() + 0x15B3568))(this);
	}
	template <typename T = void> T CameraShake() {
		return ((T (*)(CameraShakeHelper*))(Il2CppBase() + 0x15B356C))(this);
	}
	template <typename T = int32_t> T ShakeStrength(Il2CppVector3 avatarPos) {
		return ((T (*)(CameraShakeHelper*, Il2CppVector3))(Il2CppBase() + 0x15B372C))(this, avatarPos);
	}

};

}
