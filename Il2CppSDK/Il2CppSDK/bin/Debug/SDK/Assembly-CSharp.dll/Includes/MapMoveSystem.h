#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MapMoveSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MapMoveSystem"));
	}

	template <typename T = MapUnityWorld*> T& _world() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = IGroup1GameEntity*>*> T& _players() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Initialize() {
		return ((T (*)(MapMoveSystem*))(Il2CppBase() + 0x12BDEA0))(this);
	}
	template <typename T = void> T Execute() {
		return ((T (*)(MapMoveSystem*))(Il2CppBase() + 0x12BDFE4))(this);
	}

};

