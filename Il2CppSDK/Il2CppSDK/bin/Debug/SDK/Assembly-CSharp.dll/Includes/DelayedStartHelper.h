#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DelayedStartHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DelayedStartHelper"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& _targets() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& _delay() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& _timer() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(DelayedStartHelper*))(Il2CppBase() + 0xEB8A20))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(DelayedStartHelper*))(Il2CppBase() + 0xEB8A98))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(DelayedStartHelper*))(Il2CppBase() + 0xEB8AA4))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(DelayedStartHelper*))(Il2CppBase() + 0xEB8B4C))(this);
	}

};

}
