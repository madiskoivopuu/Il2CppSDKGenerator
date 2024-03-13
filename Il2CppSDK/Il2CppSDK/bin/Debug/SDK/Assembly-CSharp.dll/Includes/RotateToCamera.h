#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RotateToCamera
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RotateToCamera"));
	}

	template <typename T = uintptr_t> T& Camera() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& cameraTag() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T Start() {
		return ((T (*)(RotateToCamera*))(Il2CppBase() + 0x11A4BA4))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(RotateToCamera*))(Il2CppBase() + 0x11A4CAC))(this);
	}

};

