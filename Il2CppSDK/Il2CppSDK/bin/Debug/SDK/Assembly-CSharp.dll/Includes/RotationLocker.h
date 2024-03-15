#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RotationLocker
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RotationLocker"));
	}

	template <typename R = bool> R& _useStart() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = bool> R& _useEulerAngles() {
		return *(R*)((uintptr_t)this + 0x19);
	}
	template <typename R = uintptr_t> R& _eulerAngles() {
		return *(R*)((uintptr_t)this + 0x1C);
	}
	template <typename R = uintptr_t> R& _rotation() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	template <typename R = void> R Start() {
		return ((R (*)(RotationLocker*))(Il2CppBase() + 0x11A5CF0))(this);
	}
	template <typename R = void> R LateUpdate() {
		return ((R (*)(RotationLocker*))(Il2CppBase() + 0x11A5D58))(this);
	}

};

