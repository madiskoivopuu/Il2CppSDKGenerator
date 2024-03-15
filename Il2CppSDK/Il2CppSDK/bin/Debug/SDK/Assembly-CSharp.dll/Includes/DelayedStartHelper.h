#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DelayedStartHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DelayedStartHelper"));
	}

	template <typename R = Il2CppArray<uintptr_t>*> R& _targets() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = float> R& _delay() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = float> R& _timer() {
		return *(R*)((uintptr_t)this + 0x24);
	}

	template <typename R = void> R Awake() {
		return ((R (*)(DelayedStartHelper*))(Il2CppBase() + 0xEB8A20))(this);
	}
	template <typename R = void> R OnEnable() {
		return ((R (*)(DelayedStartHelper*))(Il2CppBase() + 0xEB8A98))(this);
	}
	template <typename R = void> R Update() {
		return ((R (*)(DelayedStartHelper*))(Il2CppBase() + 0xEB8AA4))(this);
	}
	template <typename R = void> R OnDisable() {
		return ((R (*)(DelayedStartHelper*))(Il2CppBase() + 0xEB8B4C))(this);
	}

};

