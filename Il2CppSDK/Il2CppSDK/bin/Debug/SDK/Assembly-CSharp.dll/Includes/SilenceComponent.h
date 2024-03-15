#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseBoolModifierComponent.h" 

class SilenceComponent : public BaseBoolModifierComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SilenceComponent"));
	}

	template <typename R = bool> R& IgnoreImmune() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(SilenceComponent*, uintptr_t))(Il2CppBase() + 0x147F2F4))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(SilenceComponent*, uintptr_t))(Il2CppBase() + 0x147F374))(this, writer);
	}
	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(SilenceComponent*, Il2CppObject*))(Il2CppBase() + 0x147F3B0))(this, target);
	}

};

