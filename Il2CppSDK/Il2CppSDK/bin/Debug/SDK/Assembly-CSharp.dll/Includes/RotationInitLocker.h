#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RotationInitLocker
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RotationInitLocker"));
	}

	template <typename R = bool> R& _useStart() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = bool> R& _useOverride() {
		return *(R*)((uintptr_t)this + 0x19);
	}
	template <typename R = uintptr_t> R& _overrideRotation() {
		return *(R*)((uintptr_t)this + 0x1C);
	}
	template <typename R = uintptr_t> R& _rotation() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	template <typename R = void> R Start() {
		return ((R (*)(RotationInitLocker*))(Il2CppBase() + 0x11A5BC0))(this);
	}
	template <typename R = void> R Rotate() {
		return ((R (*)(RotationInitLocker*))(Il2CppBase() + 0x11A5C74))(this);
	}

};

