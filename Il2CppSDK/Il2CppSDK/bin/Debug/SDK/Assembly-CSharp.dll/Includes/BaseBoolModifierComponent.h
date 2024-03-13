#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BaseBoolModifierComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BaseBoolModifierComponent"));
	}


	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(BaseBoolModifierComponent*, Il2CppObject*))(Il2CppBase() + 0xFBC7F8))(this, target);
	}
	template <typename T = ModifierGroup*> T GetGroup() {
		return ((T (*)(BaseBoolModifierComponent*))(Il2CppBase() + 0xFBC7FC))(this);
	}
	template <typename T = float> T GetValue() {
		return ((T (*)(BaseBoolModifierComponent*))(Il2CppBase() + 0xFBC804))(this);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(BaseBoolModifierComponent*, uintptr_t))(Il2CppBase() + 0xFBC80C))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(BaseBoolModifierComponent*, uintptr_t))(Il2CppBase() + 0xFBC814))(this, writer);
	}

};

