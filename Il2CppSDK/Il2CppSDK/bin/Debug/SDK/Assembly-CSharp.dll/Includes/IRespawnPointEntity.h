#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IRespawnPointEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IRespawnPointEntity"));
	}


	template <typename R = RespawnPointComponent*> R get_respawnPoint() {
		return ((R (*)(IRespawnPointEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasRespawnPoint() {
		return ((R (*)(IRespawnPointEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddRespawnPoint(float newRange) {
		return ((R (*)(IRespawnPointEntity*, float))(Il2CppBase() + 0x0))(this, newRange);
	}
	template <typename R = void> R ReplaceRespawnPoint(float newRange) {
		return ((R (*)(IRespawnPointEntity*, float))(Il2CppBase() + 0x0))(this, newRange);
	}
	template <typename R = void> R RemoveRespawnPoint() {
		return ((R (*)(IRespawnPointEntity*))(Il2CppBase() + 0x0))(this);
	}

};

