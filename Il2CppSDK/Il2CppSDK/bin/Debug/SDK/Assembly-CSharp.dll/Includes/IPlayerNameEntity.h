#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IPlayerNameEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IPlayerNameEntity"));
	}


	template <typename T = PlayerNameComponent*> T get_playerName() {
		return ((T (*)(IPlayerNameEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasPlayerName() {
		return ((T (*)(IPlayerNameEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddPlayerName(Il2CppString* newValue) {
		return ((T (*)(IPlayerNameEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T ReplacePlayerName(Il2CppString* newValue) {
		return ((T (*)(IPlayerNameEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T RemovePlayerName() {
		return ((T (*)(IPlayerNameEntity*))(Il2CppBase() + 0x0))(this);
	}

};

