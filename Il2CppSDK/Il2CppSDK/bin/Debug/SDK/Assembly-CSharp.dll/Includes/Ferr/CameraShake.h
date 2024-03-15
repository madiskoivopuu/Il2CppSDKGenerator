#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Ferr {

class CameraShake
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Ferr", "CameraShake"));
	}

	template <typename R = Ferr::CameraShake*> static R& instance() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = uintptr_t> R& magnitude() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = float> R& duration() {
		return *(R*)((uintptr_t)this + 0x24);
	}
	template <typename R = float> R& start() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& offset() {
		return *(R*)((uintptr_t)this + 0x2C);
	}
	template <typename R = uintptr_t> R& curve() {
		return *(R*)((uintptr_t)this + 0x38);
	}

	template <typename R = Ferr::CameraShake*> static R get_Instance() {
		return ((R (*)(void *))(Il2CppBase() + 0x15B3048))(0);
	}
	template <typename R = Ferr::CameraShake*> static R Create() {
		return ((R (*)(void *))(Il2CppBase() + 0x15B3148))(0);
	}
	template <typename R = void> R LateUpdate() {
		return ((R (*)(CameraShake*))(Il2CppBase() + 0x15B31B0))(this);
	}
	template <typename R = void> static R Shake(uintptr_t aMagnitude, float aDuration) {
		return ((R (*)(void *, uintptr_t, float))(Il2CppBase() + 0x15B330C))(0, aMagnitude, aDuration);
	}

};

}
