#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StepSound
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StepSound"));
	}

	template <typename R = int32_t> R& EntityId() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppString*> R& FootstepTheme() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = Il2CppString*> R& FootstepInvisibleTheme() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	template <typename R = void> R Step() {
		return ((R (*)(StepSound*))(Il2CppBase() + 0x14968A0))(this);
	}
	template <typename R = void> R StepStealth() {
		return ((R (*)(StepSound*))(Il2CppBase() + 0x1496A70))(this);
	}

};

