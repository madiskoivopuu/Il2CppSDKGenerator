#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ScoutViewSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ScoutViewSystem"));
	}

	template <typename T = ICommonUnityWorld*> T& _world() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = ArenaUnityWorld*> T& _arena() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = IGroup1GameEntity*>*> T& _entities() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = ScoutStatus*> T& _lastStatus() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Initialize() {
		return ((T (*)(ScoutViewSystem*))(Il2CppBase() + 0x135812C))(this);
	}
	template <typename T = void> T Execute() {
		return ((T (*)(ScoutViewSystem*))(Il2CppBase() + 0x1358308))(this);
	}

};

