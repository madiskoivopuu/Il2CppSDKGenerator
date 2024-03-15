#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MapMoveSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MapMoveSystem"));
	}

	template <typename R = MapUnityWorld*> R& _world() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	 IGroup1<GameEntity*>*& _players() {
		return *(IGroup1<GameEntity*>**)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R Initialize() {
		return ((R (*)(MapMoveSystem*))(Il2CppBase() + 0x12BDEA0))(this);
	}
	template <typename R = void> R Execute() {
		return ((R (*)(MapMoveSystem*))(Il2CppBase() + 0x12BDFE4))(this);
	}

};

