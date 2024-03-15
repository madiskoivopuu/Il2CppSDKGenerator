#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UnityMoveSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UnityMoveSystem"));
	}

	template <typename R = ITimeManager*> R& _timeManager() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = ArenaUnityWorld*> R& _world() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	 IGroup1GameEntity*>*& _targets() {
		return *(IGroup1GameEntity*>**)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R Initialize() {
		return ((R (*)(UnityMoveSystem*))(Il2CppBase() + 0x1539A04))(this);
	}
	template <typename R = void> R Execute() {
		return ((R (*)(UnityMoveSystem*))(Il2CppBase() + 0x1539A80))(this);
	}

};

