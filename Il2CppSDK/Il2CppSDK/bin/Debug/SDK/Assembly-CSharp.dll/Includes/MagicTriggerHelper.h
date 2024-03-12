#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MagicTriggerHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MagicTriggerHelper"));
	}


	template <typename T = int32_t> static T GetParentMagicCount(uintptr_t trigger, uintptr_t world) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1A45F74))(0, trigger, world);
	}
	template <typename T = void> static T ResetTriggers(uintptr_t magic, uintptr_t world) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1A46070))(0, magic, world);
	}
	template <typename T = bool> static T CheckActive(uintptr_t magicTrigger, uintptr_t world, uintptr_t withItem, uintptr_t triggetTarget, uintptr_t parentMagic) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1A46284))(0, magicTrigger, world, withItem, triggetTarget, parentMagic);
	}

};

}
