#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RotateToCamera
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RotateToCamera"));
	}

	template <typename R = uintptr_t> R& Camera() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppString*> R& cameraTag() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R Start() {
		return ((R (*)(RotateToCamera*))(Il2CppBase() + 0x11A4BA4))(this);
	}
	template <typename R = void> R Update() {
		return ((R (*)(RotateToCamera*))(Il2CppBase() + 0x11A4CAC))(this);
	}

};

