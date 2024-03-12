#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StepSound
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StepSound"));
	}

	template <typename T = int32_t> T& EntityId() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& FootstepTheme() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& FootstepInvisibleTheme() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Step() {
		return ((T (*)(StepSound*))(Il2CppBase() + 0x14968A0))(this);
	}
	template <typename T = void> T StepStealth() {
		return ((T (*)(StepSound*))(Il2CppBase() + 0x1496A70))(this);
	}

};

}
