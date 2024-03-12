#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "ActionProgress" 

class PlayerKillActionProgress: ActionProgress
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlayerKillActionProgress"));
	}

	template <typename T = uintptr_t> T& KillStateColor() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& NeutralStateColor() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = bool> T& _previouseState() {
		return *(T*)((uintptr_t)this + 0x70);
	}

	template <typename T = void> T Init(bool isPlayerKill) {
		return ((T (*)(PlayerKillActionProgress*, bool))(Il2CppBase() + 0x1569454))(this, isPlayerKill);
	}
	template <typename T = uintptr_t> T GetRelevantAction(uintptr_t entity) {
		return ((T (*)(PlayerKillActionProgress*, uintptr_t))(Il2CppBase() + 0x1569510))(this, entity);
	}
	template <typename T = void> T UpdateIcon(uintptr_t action, uintptr_t entity, uintptr_t target) {
		return ((T (*)(PlayerKillActionProgress*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x156964C))(this, action, entity, target);
	}
	template <typename T = void> T UpdateProgressBar(uintptr_t action, uintptr_t entity) {
		return ((T (*)(PlayerKillActionProgress*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1569650))(this, action, entity);
	}

};

}
