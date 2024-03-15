#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ScoutViewSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ScoutViewSystem"));
	}

	template <typename R = ICommonUnityWorld*> R& _world() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = ArenaUnityWorld*> R& _arena() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	 IGroup1GameEntity*>*& _entities() {
		return *(IGroup1GameEntity*>**)((uintptr_t)this + 0x20);
	}
	template <typename R = ScoutStatus*> R& _lastStatus() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	template <typename R = void> R Initialize() {
		return ((R (*)(ScoutViewSystem*))(Il2CppBase() + 0x135812C))(this);
	}
	template <typename R = void> R Execute() {
		return ((R (*)(ScoutViewSystem*))(Il2CppBase() + 0x1358308))(this);
	}

};

