#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseBoolModifierComponent" 

class StunnedComponent: BaseBoolModifierComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StunnedComponent"));
	}

	template <typename T = bool> T& Stackable() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& IgnoreImmune() {
		return *(T*)((uintptr_t)this + 0x11);
	}

	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(StunnedComponent*, uintptr_t))(Il2CppBase() + 0x16A10A0))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(StunnedComponent*, uintptr_t))(Il2CppBase() + 0x16A1150))(this, writer);
	}
	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(StunnedComponent*, uintptr_t))(Il2CppBase() + 0x16A119C))(this, target);
	}

};

}
