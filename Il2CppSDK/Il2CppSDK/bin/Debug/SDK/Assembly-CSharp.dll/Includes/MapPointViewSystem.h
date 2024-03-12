#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MapPointViewSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MapPointViewSystem"));
	}

	template <typename T = uintptr_t> T& _world() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& _points() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& _players() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& _pointLabels() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& _activeTargets() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = void*> T& _phasesPoints() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = void*> T& _lobbyPoints() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T Initialize() {
		return ((T (*)(MapPointViewSystem*))(Il2CppBase() + 0x12C1320))(this);
	}
	template <typename T = void> T Execute() {
		return ((T (*)(MapPointViewSystem*))(Il2CppBase() + 0x12C1754))(this);
	}
	template <typename T = void> T ChangePointLabelActive() {
		return ((T (*)(MapPointViewSystem*))(Il2CppBase() + 0x12C1834))(this);
	}
	template <typename T = void> T ChangePointViewActive(int64_t currentTick) {
		return ((T (*)(MapPointViewSystem*, int64_t))(Il2CppBase() + 0x12C1BCC))(this, currentTick);
	}
	template <typename T = void> T ChangePhaseView(int64_t currentTick) {
		return ((T (*)(MapPointViewSystem*, int64_t))(Il2CppBase() + 0x12C253C))(this, currentTick);
	}
	template <typename T = void> T ChangePortalView() {
		return ((T (*)(MapPointViewSystem*))(Il2CppBase() + 0x12C2940))(this);
	}

};

}
