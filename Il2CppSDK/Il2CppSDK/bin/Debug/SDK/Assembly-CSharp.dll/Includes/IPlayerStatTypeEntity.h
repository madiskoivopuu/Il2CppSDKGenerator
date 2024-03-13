#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IPlayerStatTypeEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IPlayerStatTypeEntity"));
	}


	template <typename T = PlayerStatTypeComponent*> T get_playerStatType() {
		return ((T (*)(IPlayerStatTypeEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasPlayerStatType() {
		return ((T (*)(IPlayerStatTypeEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddPlayerStatType(PlayerStatType* newValue) {
		return ((T (*)(IPlayerStatTypeEntity*, PlayerStatType*))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T ReplacePlayerStatType(PlayerStatType* newValue) {
		return ((T (*)(IPlayerStatTypeEntity*, PlayerStatType*))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T RemovePlayerStatType() {
		return ((T (*)(IPlayerStatTypeEntity*))(Il2CppBase() + 0x0))(this);
	}

};

