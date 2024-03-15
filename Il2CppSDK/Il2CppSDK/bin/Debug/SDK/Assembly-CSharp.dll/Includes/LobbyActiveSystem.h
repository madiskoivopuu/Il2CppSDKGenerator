#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LobbyActiveSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LobbyActiveSystem"));
	}

	template <typename R = ArenaUnityWorld*> R& _world() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = ITimeManager*> R& _timeManager() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	 IGroup1<GameEntity*>*& _gameLobbyEntities() {
		return *(IGroup1<GameEntity*>**)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R Execute() {
		return ((R (*)(LobbyActiveSystem*))(Il2CppBase() + 0x1435B08))(this);
	}

};

