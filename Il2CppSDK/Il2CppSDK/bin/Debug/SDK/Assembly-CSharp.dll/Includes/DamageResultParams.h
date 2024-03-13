#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DamageResultParams
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DamageResultParams"));
	}

	template <typename T = float> T& StartDamage() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& Damage() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = float> T& HpDamage() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& HpCoefDamage() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& Shielded() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& Blocked() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& Killed() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& Knockdown() {
		return *(T*)((uintptr_t)this + 0x19);
	}

	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(DamageResultParams*, uintptr_t))(Il2CppBase() + 0x164B580))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(DamageResultParams*, uintptr_t))(Il2CppBase() + 0x164B72C))(this, writer);
	}

};

