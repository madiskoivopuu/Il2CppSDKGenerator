#pragma once
#include <Il2Cpp/Il2Cpp.h>

class VisibilityViewSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "VisibilityViewSystem"));
	}

	template <typename T = ArenaUnityWorld*> T& _world() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = ICollector1ModifierEntity*>*> T GetTrigger(IContext1ModifierEntity*>* context) {
		return ((T (*)(VisibilityViewSystem*, IContext1ModifierEntity*>*))(Il2CppBase() + 0x15D09F4))(this, context);
	}
	template <typename T = bool> T Filter(ModifierEntity* entity) {
		return ((T (*)(VisibilityViewSystem*, ModifierEntity*))(Il2CppBase() + 0x15D0B64))(this, entity);
	}
	template <typename T = void> T Execute(Il2CppList<ModifierEntity*>* modifiers) {
		return ((T (*)(VisibilityViewSystem*, Il2CppList<ModifierEntity*>*))(Il2CppBase() + 0x15D0B80))(this, modifiers);
	}
	template <typename T = void> static T UpdateVisibility(ArenaUnityWorld* world, GameEntity* entity, int64_t ownerTeamId) {
		return ((T (*)(void *, ArenaUnityWorld*, GameEntity*, int64_t))(Il2CppBase() + 0x15D0D18))(0, world, entity, ownerTeamId);
	}

};

