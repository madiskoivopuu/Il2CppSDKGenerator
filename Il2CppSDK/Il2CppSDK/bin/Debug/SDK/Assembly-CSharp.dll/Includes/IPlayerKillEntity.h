#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IPlayerKillEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IPlayerKillEntity"));
	}


	template <typename T = bool> T get_isPlayerKill() {
		return ((T (*)(IPlayerKillEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_isPlayerKill(bool value) {
		return ((T (*)(IPlayerKillEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

