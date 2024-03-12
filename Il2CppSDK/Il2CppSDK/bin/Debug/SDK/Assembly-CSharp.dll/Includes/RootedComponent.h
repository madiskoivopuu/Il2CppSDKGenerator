#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseBoolModifierComponent" 

class RootedComponent: BaseBoolModifierComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RootedComponent"));
	}

	template <typename T = bool> T& Stackable() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& IgnoreImmune() {
		return *(T*)((uintptr_t)this + 0x11);
	}

	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(RootedComponent*, uintptr_t))(Il2CppBase() + 0x11A4A04))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(RootedComponent*, uintptr_t))(Il2CppBase() + 0x11A4AB4))(this, writer);
	}
	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(RootedComponent*, uintptr_t))(Il2CppBase() + 0x11A4B00))(this, target);
	}

};

}
