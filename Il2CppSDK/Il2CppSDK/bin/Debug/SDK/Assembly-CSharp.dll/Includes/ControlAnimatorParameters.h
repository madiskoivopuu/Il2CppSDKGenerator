#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ControlAnimatorParameters
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ControlAnimatorParameters"));
	}

	template <typename T = uintptr_t> T& animator() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& controlledAnimators() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(ControlAnimatorParameters*))(Il2CppBase() + 0x15F3614))(this);
	}
	template <typename T = void> T PassStateToChild() {
		return ((T (*)(ControlAnimatorParameters*))(Il2CppBase() + 0x15F370C))(this);
	}

};

}
