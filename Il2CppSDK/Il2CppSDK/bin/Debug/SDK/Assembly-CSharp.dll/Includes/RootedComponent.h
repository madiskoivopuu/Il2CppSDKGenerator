#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseBoolModifierComponent.h" 

class RootedComponent : public BaseBoolModifierComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RootedComponent"));
	}

	template <typename R = bool> R& Stackable() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = bool> R& IgnoreImmune() {
		return *(R*)((uintptr_t)this + 0x11);
	}

	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(RootedComponent*, uintptr_t))(Il2CppBase() + 0x11A4A04))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(RootedComponent*, uintptr_t))(Il2CppBase() + 0x11A4AB4))(this, writer);
	}
	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(RootedComponent*, Il2CppObject*))(Il2CppBase() + 0x11A4B00))(this, target);
	}

};

