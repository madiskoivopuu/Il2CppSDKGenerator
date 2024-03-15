#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IPlayerStatTypeEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IPlayerStatTypeEntity"));
	}


	template <typename R = PlayerStatTypeComponent*> R get_playerStatType() {
		return ((R (*)(IPlayerStatTypeEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasPlayerStatType() {
		return ((R (*)(IPlayerStatTypeEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddPlayerStatType(PlayerStatType newValue) {
		return ((R (*)(IPlayerStatTypeEntity*, PlayerStatType))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R ReplacePlayerStatType(PlayerStatType newValue) {
		return ((R (*)(IPlayerStatTypeEntity*, PlayerStatType))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R RemovePlayerStatType() {
		return ((R (*)(IPlayerStatTypeEntity*))(Il2CppBase() + 0x0))(this);
	}

};

