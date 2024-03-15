#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FireFXController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FireFXController"));
	}

	template <typename R = uintptr_t> R& _renderer() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& _transform() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& _lasPos() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& _lastVelosity() {
		return *(R*)((uintptr_t)this + 0x34);
	}
	template <typename R = uintptr_t> R& _material() {
		return *(R*)((uintptr_t)this + 0x40);
	}

	template <typename R = void> R Start() {
		return ((R (*)(FireFXController*))(Il2CppBase() + 0x1698D00))(this);
	}
	template <typename R = void> R Update() {
		return ((R (*)(FireFXController*))(Il2CppBase() + 0x1698D54))(this);
	}

};

