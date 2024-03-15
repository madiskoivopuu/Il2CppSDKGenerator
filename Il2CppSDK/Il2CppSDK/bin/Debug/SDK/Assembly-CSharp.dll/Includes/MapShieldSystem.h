#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MapShieldSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MapShieldSystem"));
	}

	template <typename R = MapUnityWorld*> R& _world() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	 IGroup1<GameEntity*>*& _points() {
		return *(IGroup1<GameEntity*>**)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R Initialize() {
		return ((R (*)(MapShieldSystem*))(Il2CppBase() + 0x12C4298))(this);
	}
	template <typename R = void> R Execute() {
		return ((R (*)(MapShieldSystem*))(Il2CppBase() + 0x12C441C))(this);
	}

};

