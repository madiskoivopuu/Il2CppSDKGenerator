#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MapPointViewSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MapPointViewSystem"));
	}

	template <typename R = MapUnityWorld*> R& _world() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	 IGroup1<GameEntity*>*& _points() {
		return *(IGroup1<GameEntity*>**)((uintptr_t)this + 0x18);
	}
	 IGroup1<GameEntity*>*& _players() {
		return *(IGroup1<GameEntity*>**)((uintptr_t)this + 0x20);
	}
	 IGroup1<GameEntity*>*& _pointLabels() {
		return *(IGroup1<GameEntity*>**)((uintptr_t)this + 0x28);
	}
	 IGroup1<GameEntity*>*& _activeTargets() {
		return *(IGroup1<GameEntity*>**)((uintptr_t)this + 0x30);
	}
	 IGroup1<GameEntity*>*& _phasesPoints() {
		return *(IGroup1<GameEntity*>**)((uintptr_t)this + 0x38);
	}
	 IGroup1<GameEntity*>*& _lobbyPoints() {
		return *(IGroup1<GameEntity*>**)((uintptr_t)this + 0x40);
	}

	template <typename R = void> R Initialize() {
		return ((R (*)(MapPointViewSystem*))(Il2CppBase() + 0x12C1320))(this);
	}
	template <typename R = void> R Execute() {
		return ((R (*)(MapPointViewSystem*))(Il2CppBase() + 0x12C1754))(this);
	}
	template <typename R = void> R ChangePointLabelActive() {
		return ((R (*)(MapPointViewSystem*))(Il2CppBase() + 0x12C1834))(this);
	}
	template <typename R = void> R ChangePointViewActive(int64_t currentTick) {
		return ((R (*)(MapPointViewSystem*, int64_t))(Il2CppBase() + 0x12C1BCC))(this, currentTick);
	}
	template <typename R = void> R ChangePhaseView(int64_t currentTick) {
		return ((R (*)(MapPointViewSystem*, int64_t))(Il2CppBase() + 0x12C253C))(this, currentTick);
	}
	template <typename R = void> R ChangePortalView() {
		return ((R (*)(MapPointViewSystem*))(Il2CppBase() + 0x12C2940))(this);
	}

};

