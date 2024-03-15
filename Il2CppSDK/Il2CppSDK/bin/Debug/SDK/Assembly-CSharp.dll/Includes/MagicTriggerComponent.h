#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MagicTriggerComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MagicTriggerComponent"));
	}

	template <typename R = Il2CppString*> R& Name() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppArray<Il2CppString*>*> R& Names() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = MagicTriggerType> R& Types() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(MagicTriggerComponent*, Il2CppObject*))(Il2CppBase() + 0x1A2F870))(this, target);
	}
	template <typename R = ModifierGroup> R GetGroup() {
		return ((R (*)(MagicTriggerComponent*))(Il2CppBase() + 0x1A2F924))(this);
	}
	template <typename R = float> R GetValue() {
		return ((R (*)(MagicTriggerComponent*))(Il2CppBase() + 0x1A2F92C))(this);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(MagicTriggerComponent*, uintptr_t))(Il2CppBase() + 0x1A2F934))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(MagicTriggerComponent*, uintptr_t))(Il2CppBase() + 0x1A2FA0C))(this, writer);
	}

};

