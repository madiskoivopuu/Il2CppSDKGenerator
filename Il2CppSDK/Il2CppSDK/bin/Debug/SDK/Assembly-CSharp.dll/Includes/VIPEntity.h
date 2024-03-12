#pragma once
#include <Il2Cpp/Il2Cpp.h>

class VIPEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "VIPEntity"));
	}


	template <typename T = uintptr_t> T get_playerId() {
		return ((T (*)(VIPEntity*))(Il2CppBase() + 0x15BFA2C))(this);
	}
	template <typename T = bool> T get_hasPlayerId() {
		return ((T (*)(VIPEntity*))(Il2CppBase() + 0x15BFAB4))(this);
	}
	template <typename T = void> T AddPlayerId(int64_t newValue) {
		return ((T (*)(VIPEntity*, int64_t))(Il2CppBase() + 0x15BFAC0))(this, newValue);
	}
	template <typename T = void> T ReplacePlayerId(int64_t newValue) {
		return ((T (*)(VIPEntity*, int64_t))(Il2CppBase() + 0x15BFBC4))(this, newValue);
	}
	template <typename T = void> T RemovePlayerId() {
		return ((T (*)(VIPEntity*))(Il2CppBase() + 0x15BFCC8))(this);
	}
	template <typename T = uintptr_t> T get_vipBonus() {
		return ((T (*)(VIPEntity*))(Il2CppBase() + 0x15BFCD4))(this);
	}
	template <typename T = bool> T get_hasVipBonus() {
		return ((T (*)(VIPEntity*))(Il2CppBase() + 0x15BFD5C))(this);
	}
	template <typename T = void> T AddVipBonus(uintptr_t newType, Il2CppString* newName, float newValue) {
		return ((T (*)(VIPEntity*, uintptr_t, Il2CppString*, float))(Il2CppBase() + 0x15BFD68))(this, newType, newName, newValue);
	}
	template <typename T = void> T ReplaceVipBonus(uintptr_t newType, Il2CppString* newName, float newValue) {
		return ((T (*)(VIPEntity*, uintptr_t, Il2CppString*, float))(Il2CppBase() + 0x15BFE94))(this, newType, newName, newValue);
	}
	template <typename T = void> T RemoveVipBonus() {
		return ((T (*)(VIPEntity*))(Il2CppBase() + 0x15BFFC0))(this);
	}
	template <typename T = uintptr_t> T get_vipId() {
		return ((T (*)(VIPEntity*))(Il2CppBase() + 0x15BFFCC))(this);
	}
	template <typename T = bool> T get_hasVipId() {
		return ((T (*)(VIPEntity*))(Il2CppBase() + 0x15C0054))(this);
	}
	template <typename T = void> T AddVipId(int64_t newId) {
		return ((T (*)(VIPEntity*, int64_t))(Il2CppBase() + 0x15BCAF4))(this, newId);
	}
	template <typename T = void> T ReplaceVipId(int64_t newId) {
		return ((T (*)(VIPEntity*, int64_t))(Il2CppBase() + 0x15C0060))(this, newId);
	}
	template <typename T = void> T RemoveVipId() {
		return ((T (*)(VIPEntity*))(Il2CppBase() + 0x15C0164))(this);
	}

};

}
