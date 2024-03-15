#pragma once
#include <Il2Cpp/Il2Cpp.h>

class VIPEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "VIPEntity"));
	}


	template <typename R = PlayerIdComponent*> R get_playerId() {
		return ((R (*)(VIPEntity*))(Il2CppBase() + 0x15BFA2C))(this);
	}
	template <typename R = bool> R get_hasPlayerId() {
		return ((R (*)(VIPEntity*))(Il2CppBase() + 0x15BFAB4))(this);
	}
	template <typename R = void> R AddPlayerId(int64_t newValue) {
		return ((R (*)(VIPEntity*, int64_t))(Il2CppBase() + 0x15BFAC0))(this, newValue);
	}
	template <typename R = void> R ReplacePlayerId(int64_t newValue) {
		return ((R (*)(VIPEntity*, int64_t))(Il2CppBase() + 0x15BFBC4))(this, newValue);
	}
	template <typename R = void> R RemovePlayerId() {
		return ((R (*)(VIPEntity*))(Il2CppBase() + 0x15BFCC8))(this);
	}
	template <typename R = VipBonusComponent*> R get_vipBonus() {
		return ((R (*)(VIPEntity*))(Il2CppBase() + 0x15BFCD4))(this);
	}
	template <typename R = bool> R get_hasVipBonus() {
		return ((R (*)(VIPEntity*))(Il2CppBase() + 0x15BFD5C))(this);
	}
	template <typename R = void> R AddVipBonus(VipBonusType* newType, Il2CppString* newName, float newValue) {
		return ((R (*)(VIPEntity*, VipBonusType*, Il2CppString*, float))(Il2CppBase() + 0x15BFD68))(this, newType, newName, newValue);
	}
	template <typename R = void> R ReplaceVipBonus(VipBonusType* newType, Il2CppString* newName, float newValue) {
		return ((R (*)(VIPEntity*, VipBonusType*, Il2CppString*, float))(Il2CppBase() + 0x15BFE94))(this, newType, newName, newValue);
	}
	template <typename R = void> R RemoveVipBonus() {
		return ((R (*)(VIPEntity*))(Il2CppBase() + 0x15BFFC0))(this);
	}
	template <typename R = VipIdComponent*> R get_vipId() {
		return ((R (*)(VIPEntity*))(Il2CppBase() + 0x15BFFCC))(this);
	}
	template <typename R = bool> R get_hasVipId() {
		return ((R (*)(VIPEntity*))(Il2CppBase() + 0x15C0054))(this);
	}
	template <typename R = void> R AddVipId(int64_t newId) {
		return ((R (*)(VIPEntity*, int64_t))(Il2CppBase() + 0x15BCAF4))(this, newId);
	}
	template <typename R = void> R ReplaceVipId(int64_t newId) {
		return ((R (*)(VIPEntity*, int64_t))(Il2CppBase() + 0x15C0060))(this, newId);
	}
	template <typename R = void> R RemoveVipId() {
		return ((R (*)(VIPEntity*))(Il2CppBase() + 0x15C0164))(this);
	}

};

