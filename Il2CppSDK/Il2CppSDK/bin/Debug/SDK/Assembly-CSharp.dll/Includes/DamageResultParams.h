#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DamageResultParams
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DamageResultParams"));
	}

	template <typename R = float> R& StartDamage() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = float> R& Damage() {
		return *(R*)((uintptr_t)this + 0x4);
	}
	template <typename R = float> R& HpDamage() {
		return *(R*)((uintptr_t)this + 0x8);
	}
	template <typename R = float> R& HpCoefDamage() {
		return *(R*)((uintptr_t)this + 0xC);
	}
	template <typename R = float> R& Shielded() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = float> R& Blocked() {
		return *(R*)((uintptr_t)this + 0x14);
	}
	template <typename R = bool> R& Killed() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = bool> R& Knockdown() {
		return *(R*)((uintptr_t)this + 0x19);
	}

	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(DamageResultParams*, uintptr_t))(Il2CppBase() + 0x164B580))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(DamageResultParams*, uintptr_t))(Il2CppBase() + 0x164B72C))(this, writer);
	}

};

