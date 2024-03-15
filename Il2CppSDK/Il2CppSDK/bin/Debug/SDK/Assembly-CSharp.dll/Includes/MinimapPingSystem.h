#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MinimapPingSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MinimapPingSystem"));
	}

	template <typename R = ArenaUnityWorld*> R& _world() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	 IGroup1GameEntity*>*& _entities() {
		return *(IGroup1GameEntity*>**)((uintptr_t)this + 0x18);
	}
	 Il2CppList<GameEntity*>*& _entitiesToDestroy() {
		return *(Il2CppList<GameEntity*>**)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R Initialize() {
		return ((R (*)(MinimapPingSystem*))(Il2CppBase() + 0x12D3D0C))(this);
	}
	template <typename R = void> R Execute() {
		return ((R (*)(MinimapPingSystem*))(Il2CppBase() + 0x12D3E10))(this);
	}

};

