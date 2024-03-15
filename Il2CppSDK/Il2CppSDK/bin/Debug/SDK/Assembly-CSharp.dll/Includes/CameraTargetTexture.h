#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CameraTargetTexture
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CameraTargetTexture"));
	}

	template <typename R = uintptr_t> R& _camera() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R Awake() {
		return ((R (*)(CameraTargetTexture*))(Il2CppBase() + 0x15B3814))(this);
	}
	template <typename R = void> R OnDisable() {
		return ((R (*)(CameraTargetTexture*))(Il2CppBase() + 0x15B3870))(this);
	}

};

