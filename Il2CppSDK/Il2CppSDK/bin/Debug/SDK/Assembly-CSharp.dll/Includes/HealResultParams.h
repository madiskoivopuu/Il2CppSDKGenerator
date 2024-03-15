#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HealResultParams
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HealResultParams"));
	}

	template <typename R = float> R& StartHeal() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = float> R& Heal() {
		return *(R*)((uintptr_t)this + 0x4);
	}
	template <typename R = float> R& HpHeal() {
		return *(R*)((uintptr_t)this + 0x8);
	}
	template <typename R = bool> R& Full() {
		return *(R*)((uintptr_t)this + 0xC);
	}

	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(HealResultParams*, uintptr_t))(Il2CppBase() + 0x128AB60))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(HealResultParams*, uintptr_t))(Il2CppBase() + 0x128AC5C))(this, writer);
	}

};

