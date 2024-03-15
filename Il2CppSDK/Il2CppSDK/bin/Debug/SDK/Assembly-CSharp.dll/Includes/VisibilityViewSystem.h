#pragma once
#include <Il2Cpp/Il2Cpp.h>

class VisibilityViewSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "VisibilityViewSystem"));
	}

	template <typename R = ArenaUnityWorld*> R& _world() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	 ICollector1ModifierEntity*>* GetTrigger(IContext1ModifierEntity*>* context) {
		return ((ICollector1ModifierEntity*>* (*)(VisibilityViewSystem*, IContext1ModifierEntity*>*))(Il2CppBase() + 0x15D09F4))(this, context);
	}
	template <typename R = bool> R Filter(ModifierEntity* entity) {
		return ((R (*)(VisibilityViewSystem*, ModifierEntity*))(Il2CppBase() + 0x15D0B64))(this, entity);
	}
	template <typename R = void> R Execute(Il2CppList<ModifierEntity*>* modifiers) {
		return ((R (*)(VisibilityViewSystem*, Il2CppList<ModifierEntity*>*))(Il2CppBase() + 0x15D0B80))(this, modifiers);
	}
	template <typename R = void> static R UpdateVisibility(ArenaUnityWorld* world, GameEntity* entity, int64_t ownerTeamId) {
		return ((R (*)(void *, ArenaUnityWorld*, GameEntity*, int64_t))(Il2CppBase() + 0x15D0D18))(0, world, entity, ownerTeamId);
	}

};

