#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IPlayerIdEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IPlayerIdEntity"));
	}


	template <typename R = PlayerIdComponent*> R get_playerId() {
		return ((R (*)(IPlayerIdEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasPlayerId() {
		return ((R (*)(IPlayerIdEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddPlayerId(int64_t newValue) {
		return ((R (*)(IPlayerIdEntity*, int64_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R ReplacePlayerId(int64_t newValue) {
		return ((R (*)(IPlayerIdEntity*, int64_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R RemovePlayerId() {
		return ((R (*)(IPlayerIdEntity*))(Il2CppBase() + 0x0))(this);
	}

};

