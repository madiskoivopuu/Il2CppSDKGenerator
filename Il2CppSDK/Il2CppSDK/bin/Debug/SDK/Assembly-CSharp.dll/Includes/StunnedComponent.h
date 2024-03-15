#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseBoolModifierComponent.h" 

class StunnedComponent : public BaseBoolModifierComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StunnedComponent"));
	}

	template <typename R = bool> R& Stackable() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = bool> R& IgnoreImmune() {
		return *(R*)((uintptr_t)this + 0x11);
	}

	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(StunnedComponent*, uintptr_t))(Il2CppBase() + 0x16A10A0))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(StunnedComponent*, uintptr_t))(Il2CppBase() + 0x16A1150))(this, writer);
	}
	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(StunnedComponent*, Il2CppObject*))(Il2CppBase() + 0x16A119C))(this, target);
	}

};

