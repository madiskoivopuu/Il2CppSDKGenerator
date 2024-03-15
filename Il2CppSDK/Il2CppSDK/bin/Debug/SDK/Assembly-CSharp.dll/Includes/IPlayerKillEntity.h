#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IPlayerKillEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IPlayerKillEntity"));
	}


	template <typename R = bool> R get_isPlayerKill() {
		return ((R (*)(IPlayerKillEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R set_isPlayerKill(bool value) {
		return ((R (*)(IPlayerKillEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

