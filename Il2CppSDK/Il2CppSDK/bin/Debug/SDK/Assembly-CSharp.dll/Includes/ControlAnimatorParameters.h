#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ControlAnimatorParameters
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ControlAnimatorParameters"));
	}

	template <typename R = uintptr_t> R& animator() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppArray<uintptr_t>*> R& controlledAnimators() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R Awake() {
		return ((R (*)(ControlAnimatorParameters*))(Il2CppBase() + 0x15F3614))(this);
	}
	template <typename R = void> R PassStateToChild() {
		return ((R (*)(ControlAnimatorParameters*))(Il2CppBase() + 0x15F370C))(this);
	}

};

