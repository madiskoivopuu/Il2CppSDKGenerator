#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Ferr {

class CameraShake
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Ferr", "CameraShake"));
	}

	template <typename T = CameraShake*> static T& instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& magnitude() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& duration() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& start() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& offset() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& curve() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = CameraShake*> static T get_Instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x15B3048))(0);
	}
	template <typename T = CameraShake*> static T Create() {
		return ((T (*)(void *))(Il2CppBase() + 0x15B3148))(0);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(CameraShake*))(Il2CppBase() + 0x15B31B0))(this);
	}
	template <typename T = void> static T Shake(uintptr_t aMagnitude, float aDuration) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x15B330C))(0, aMagnitude, aDuration);
	}

};

}
