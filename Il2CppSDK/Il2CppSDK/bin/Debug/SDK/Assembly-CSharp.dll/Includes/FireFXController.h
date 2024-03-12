#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FireFXController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FireFXController"));
	}

	template <typename T = uintptr_t> T& _renderer() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _transform() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppVector3> T& _lasPos() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppVector3> T& _lastVelosity() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& _material() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T Start() {
		return ((T (*)(FireFXController*))(Il2CppBase() + 0x1698D00))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(FireFXController*))(Il2CppBase() + 0x1698D54))(this);
	}

};

}
