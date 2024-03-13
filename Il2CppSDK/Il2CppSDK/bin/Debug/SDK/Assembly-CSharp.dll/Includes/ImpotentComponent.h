#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseBoolModifierComponent.h" 

class ImpotentComponent : public BaseBoolModifierComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ImpotentComponent"));
	}

	template <typename T = bool> T& IgnoreImmune() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(ImpotentComponent*, uintptr_t))(Il2CppBase() + 0x1E3DE74))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(ImpotentComponent*, uintptr_t))(Il2CppBase() + 0x1E3DEF4))(this, writer);
	}
	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(ImpotentComponent*, Il2CppObject*))(Il2CppBase() + 0x1E3DF30))(this, target);
	}

};

