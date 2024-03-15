#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PvpConfiguration
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PvpConfiguration"));
	}

	template <typename R = int32_t> R& MinRaidPlayerLevel() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> R& PeaceShieldTime() {
		return *(R*)((uintptr_t)this + 0x14);
	}
	template <typename R = int32_t> R& CombatTime() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> R& SearchingTime() {
		return *(R*)((uintptr_t)this + 0x1C);
	}
	template <typename R = int32_t> R& PassiveMaxCountOffline() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> R& TireCount() {
		return *(R*)((uintptr_t)this + 0x24);
	}
	template <typename R = Il2CppArray<int32_t>*> R& TierMask() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> R& ShieldMaxSecond() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = int32_t> R& ShieldTimeSecond() {
		return *(R*)((uintptr_t)this + 0x34);
	}

	template <typename R = int32_t> R get_TireCount() {
		return ((R (*)(PvpConfiguration*))(Il2CppBase() + 0x11BF5C8))(this);
	}
	template <typename R = void> R set_TireCount(int32_t value) {
		return ((R (*)(PvpConfiguration*, int32_t))(Il2CppBase() + 0x11BF5D0))(this, value);
	}
	template <typename R = Il2CppArray<int32_t>*> R get_TierMask() {
		return ((R (*)(PvpConfiguration*))(Il2CppBase() + 0x11BF5D8))(this);
	}
	template <typename R = void> R set_TierMask(Il2CppArray<int32_t>* value) {
		return ((R (*)(PvpConfiguration*, Il2CppArray<int32_t>*))(Il2CppBase() + 0x11BF5E0))(this, value);
	}
	template <typename R = int32_t> R get_ShieldMaxSecond() {
		return ((R (*)(PvpConfiguration*))(Il2CppBase() + 0x11BF5E8))(this);
	}
	template <typename R = void> R set_ShieldMaxSecond(int32_t value) {
		return ((R (*)(PvpConfiguration*, int32_t))(Il2CppBase() + 0x11BF5F0))(this, value);
	}
	template <typename R = int32_t> R get_ShieldTimeSecond() {
		return ((R (*)(PvpConfiguration*))(Il2CppBase() + 0x11BF5F8))(this);
	}
	template <typename R = void> R set_ShieldTimeSecond(int32_t value) {
		return ((R (*)(PvpConfiguration*, int32_t))(Il2CppBase() + 0x11BF600))(this, value);
	}

};

