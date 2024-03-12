#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseBoolModifierComponent" 

class SilenceComponent: BaseBoolModifierComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SilenceComponent"));
	}

	template <typename T = bool> T& IgnoreImmune() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(SilenceComponent*, uintptr_t))(Il2CppBase() + 0x147F2F4))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(SilenceComponent*, uintptr_t))(Il2CppBase() + 0x147F374))(this, writer);
	}
	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(SilenceComponent*, uintptr_t))(Il2CppBase() + 0x147F3B0))(this, target);
	}

};

}
