#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IPlayerIdEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IPlayerIdEntity"));
	}


	template <typename T = PlayerIdComponent*> T get_playerId() {
		return ((T (*)(IPlayerIdEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasPlayerId() {
		return ((T (*)(IPlayerIdEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddPlayerId(int64_t newValue) {
		return ((T (*)(IPlayerIdEntity*, int64_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T ReplacePlayerId(int64_t newValue) {
		return ((T (*)(IPlayerIdEntity*, int64_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T RemovePlayerId() {
		return ((T (*)(IPlayerIdEntity*))(Il2CppBase() + 0x0))(this);
	}

};

