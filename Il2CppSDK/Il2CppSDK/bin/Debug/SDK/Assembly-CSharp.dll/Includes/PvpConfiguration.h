#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PvpConfiguration
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PvpConfiguration"));
	}

	template <typename T = int32_t> T& MinRaidPlayerLevel() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& PeaceShieldTime() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& CombatTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& SearchingTime() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& PassiveMaxCountOffline() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& TireCount() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& TierMask() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& ShieldMaxSecond() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& ShieldTimeSecond() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = int32_t> T get_TireCount() {
		return ((T (*)(PvpConfiguration*))(Il2CppBase() + 0x11BF5C8))(this);
	}
	template <typename T = void> T set_TireCount(int32_t value) {
		return ((T (*)(PvpConfiguration*, int32_t))(Il2CppBase() + 0x11BF5D0))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_TierMask() {
		return ((T (*)(PvpConfiguration*))(Il2CppBase() + 0x11BF5D8))(this);
	}
	template <typename T = void> T set_TierMask(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(PvpConfiguration*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x11BF5E0))(this, value);
	}
	template <typename T = int32_t> T get_ShieldMaxSecond() {
		return ((T (*)(PvpConfiguration*))(Il2CppBase() + 0x11BF5E8))(this);
	}
	template <typename T = void> T set_ShieldMaxSecond(int32_t value) {
		return ((T (*)(PvpConfiguration*, int32_t))(Il2CppBase() + 0x11BF5F0))(this, value);
	}
	template <typename T = int32_t> T get_ShieldTimeSecond() {
		return ((T (*)(PvpConfiguration*))(Il2CppBase() + 0x11BF5F8))(this);
	}
	template <typename T = void> T set_ShieldTimeSecond(int32_t value) {
		return ((T (*)(PvpConfiguration*, int32_t))(Il2CppBase() + 0x11BF600))(this, value);
	}

};

}
