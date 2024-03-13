#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RotationLocker
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RotationLocker"));
	}

	template <typename T = bool> T& _useStart() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& _useEulerAngles() {
		return *(T*)((uintptr_t)this + 0x19);
	}
	template <typename T = uintptr_t> T& _eulerAngles() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& _rotation() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Start() {
		return ((T (*)(RotationLocker*))(Il2CppBase() + 0x11A5CF0))(this);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(RotationLocker*))(Il2CppBase() + 0x11A5D58))(this);
	}

};

