#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ScaleLocker
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ScaleLocker"));
	}

	template <typename R = bool> R& update() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& scale() {
		return *(R*)((uintptr_t)this + 0x1C);
	}
	template <typename R = uintptr_t> R& _scale() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& scaleParent() {
		return *(R*)((uintptr_t)this + 0x34);
	}

	template <typename R = uintptr_t> R InvVector3(uintptr_t vec3) {
		return ((R (*)(ScaleLocker*, uintptr_t))(Il2CppBase() + 0x1357080))(this, vec3);
	}
	template <typename R = uintptr_t> R InvVector3NoUpdate(uintptr_t vec3) {
		return ((R (*)(ScaleLocker*, uintptr_t))(Il2CppBase() + 0x13570E0))(this, vec3);
	}
	template <typename R = float> R CheckedFloat(float a) {
		return ((R (*)(ScaleLocker*, float))(Il2CppBase() + 0x13570C8))(this, a);
	}
	template <typename R = void> R SetScale() {
		return ((R (*)(ScaleLocker*))(Il2CppBase() + 0x1357110))(this);
	}
	template <typename R = void> R UpdateScale() {
		return ((R (*)(ScaleLocker*))(Il2CppBase() + 0x13571B0))(this);
	}
	template <typename R = void> R Start() {
		return ((R (*)(ScaleLocker*))(Il2CppBase() + 0x1357278))(this);
	}
	template <typename R = void> R LateUpdate() {
		return ((R (*)(ScaleLocker*))(Il2CppBase() + 0x13572DC))(this);
	}

};
