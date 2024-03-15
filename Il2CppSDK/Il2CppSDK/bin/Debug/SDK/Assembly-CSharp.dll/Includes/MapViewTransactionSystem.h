#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MapViewTransactionSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MapViewTransactionSystem"));
	}

	template <typename R = MapUnityWorld*> R& _world() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	 IGroup1<GameEntity*>*& _views() {
		return *(IGroup1<GameEntity*>**)((uintptr_t)this + 0x18);
	}
	 Il2CppList<GameEntity*>*& _viewsToRemove() {
		return *(Il2CppList<GameEntity*>**)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R Initialize() {
		return ((R (*)(MapViewTransactionSystem*))(Il2CppBase() + 0x12CB450))(this);
	}
	template <typename R = void> R Execute() {
		return ((R (*)(MapViewTransactionSystem*))(Il2CppBase() + 0x12CB5E0))(this);
	}

};

