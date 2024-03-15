#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MoveViewSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MoveViewSystem"));
	}

	template <typename R = ArenaUnityWorld*> R& _world() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	 IGroup1<GameEntity*>*& _entities() {
		return *(IGroup1<GameEntity*>**)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R Initialize() {
		return ((R (*)(MoveViewSystem*))(Il2CppBase() + 0x1557788))(this);
	}
	template <typename R = void> R Execute() {
		return ((R (*)(MoveViewSystem*))(Il2CppBase() + 0x15578CC))(this);
	}

};

