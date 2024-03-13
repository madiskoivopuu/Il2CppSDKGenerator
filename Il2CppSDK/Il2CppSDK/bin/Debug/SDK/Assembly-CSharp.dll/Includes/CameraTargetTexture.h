#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CameraTargetTexture
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CameraTargetTexture"));
	}

	template <typename T = uintptr_t> T& _camera() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(CameraTargetTexture*))(Il2CppBase() + 0x15B3814))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(CameraTargetTexture*))(Il2CppBase() + 0x15B3870))(this);
	}

};

