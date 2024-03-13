#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MapShieldSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MapShieldSystem"));
	}

	template <typename T = MapUnityWorld*> T& _world() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = IGroup1GameEntity*>*> T& _points() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Initialize() {
		return ((T (*)(MapShieldSystem*))(Il2CppBase() + 0x12C4298))(this);
	}
	template <typename T = void> T Execute() {
		return ((T (*)(MapShieldSystem*))(Il2CppBase() + 0x12C441C))(this);
	}

};

