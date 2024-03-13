#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IRespawnPointEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IRespawnPointEntity"));
	}


	template <typename T = RespawnPointComponent*> T get_respawnPoint() {
		return ((T (*)(IRespawnPointEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasRespawnPoint() {
		return ((T (*)(IRespawnPointEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddRespawnPoint(float newRange) {
		return ((T (*)(IRespawnPointEntity*, float))(Il2CppBase() + 0x0))(this, newRange);
	}
	template <typename T = void> T ReplaceRespawnPoint(float newRange) {
		return ((T (*)(IRespawnPointEntity*, float))(Il2CppBase() + 0x0))(this, newRange);
	}
	template <typename T = void> T RemoveRespawnPoint() {
		return ((T (*)(IRespawnPointEntity*))(Il2CppBase() + 0x0))(this);
	}

};

