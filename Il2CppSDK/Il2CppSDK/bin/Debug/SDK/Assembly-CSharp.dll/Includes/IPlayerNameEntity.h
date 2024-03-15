#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IPlayerNameEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IPlayerNameEntity"));
	}


	template <typename R = PlayerNameComponent*> R get_playerName() {
		return ((R (*)(IPlayerNameEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasPlayerName() {
		return ((R (*)(IPlayerNameEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddPlayerName(Il2CppString* newValue) {
		return ((R (*)(IPlayerNameEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R ReplacePlayerName(Il2CppString* newValue) {
		return ((R (*)(IPlayerNameEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R RemovePlayerName() {
		return ((R (*)(IPlayerNameEntity*))(Il2CppBase() + 0x0))(this);
	}

};

