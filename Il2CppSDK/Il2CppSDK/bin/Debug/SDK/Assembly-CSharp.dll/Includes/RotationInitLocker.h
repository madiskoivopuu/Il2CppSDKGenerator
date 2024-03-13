#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RotationInitLocker
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RotationInitLocker"));
	}

	template <typename T = bool> T& _useStart() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& _useOverride() {
		return *(T*)((uintptr_t)this + 0x19);
	}
	template <typename T = uintptr_t> T& _overrideRotation() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& _rotation() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Start() {
		return ((T (*)(RotationInitLocker*))(Il2CppBase() + 0x11A5BC0))(this);
	}
	template <typename T = void> T Rotate() {
		return ((T (*)(RotationInitLocker*))(Il2CppBase() + 0x11A5C74))(this);
	}

};

