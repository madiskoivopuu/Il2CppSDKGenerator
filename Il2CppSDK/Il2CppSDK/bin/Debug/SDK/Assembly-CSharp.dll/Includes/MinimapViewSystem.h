#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MinimapViewSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MinimapViewSystem"));
	}

	template <typename R = ArenaUnityWorld*> R& _world() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	 IGroup1<GameEntity*>*& _entities() {
		return *(IGroup1<GameEntity*>**)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R Initialize() {
		return ((R (*)(MinimapViewSystem*))(Il2CppBase() + 0x1D69950))(this);
	}
	template <typename R = void> R Execute() {
		return ((R (*)(MinimapViewSystem*))(Il2CppBase() + 0x1D69A94))(this);
	}

};

