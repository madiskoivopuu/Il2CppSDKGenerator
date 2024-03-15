#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BaseBoolModifierComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BaseBoolModifierComponent"));
	}


	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(BaseBoolModifierComponent*, Il2CppObject*))(Il2CppBase() + 0xFBC7F8))(this, target);
	}
	template <typename R = ModifierGroup> R GetGroup() {
		return ((R (*)(BaseBoolModifierComponent*))(Il2CppBase() + 0xFBC7FC))(this);
	}
	template <typename R = float> R GetValue() {
		return ((R (*)(BaseBoolModifierComponent*))(Il2CppBase() + 0xFBC804))(this);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(BaseBoolModifierComponent*, uintptr_t))(Il2CppBase() + 0xFBC80C))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(BaseBoolModifierComponent*, uintptr_t))(Il2CppBase() + 0xFBC814))(this, writer);
	}

};

