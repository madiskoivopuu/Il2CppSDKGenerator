#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "ActionProgress.h" 

class PlayerKillActionProgress : public ActionProgress
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlayerKillActionProgress"));
	}

	template <typename R = uintptr_t> R& KillStateColor() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = uintptr_t> R& NeutralStateColor() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = bool> R& _previouseState() {
		return *(R*)((uintptr_t)this + 0x70);
	}

	template <typename R = void> R Init(bool isPlayerKill) {
		return ((R (*)(PlayerKillActionProgress*, bool))(Il2CppBase() + 0x1569454))(this, isPlayerKill);
	}
	template <typename R = ActionEntity*> R GetRelevantAction(GameEntity* entity) {
		return ((R (*)(PlayerKillActionProgress*, GameEntity*))(Il2CppBase() + 0x1569510))(this, entity);
	}
	template <typename R = void> R UpdateIcon(ActionEntity* action, GameEntity* entity, GameEntity* target) {
		return ((R (*)(PlayerKillActionProgress*, ActionEntity*, GameEntity*, GameEntity*))(Il2CppBase() + 0x156964C))(this, action, entity, target);
	}
	template <typename R = void> R UpdateProgressBar(ActionEntity* action, GameEntity* entity) {
		return ((R (*)(PlayerKillActionProgress*, ActionEntity*, GameEntity*))(Il2CppBase() + 0x1569650))(this, action, entity);
	}

};

