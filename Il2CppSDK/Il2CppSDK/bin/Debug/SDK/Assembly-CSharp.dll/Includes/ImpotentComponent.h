#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseBoolModifierComponent.h" 

class ImpotentComponent : public BaseBoolModifierComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ImpotentComponent"));
	}

	template <typename R = bool> R& IgnoreImmune() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(ImpotentComponent*, uintptr_t))(Il2CppBase() + 0x1E3DE74))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(ImpotentComponent*, uintptr_t))(Il2CppBase() + 0x1E3DEF4))(this, writer);
	}
	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(ImpotentComponent*, Il2CppObject*))(Il2CppBase() + 0x1E3DF30))(this, target);
	}

};

