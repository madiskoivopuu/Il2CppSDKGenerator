#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MinimapHideSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MinimapHideSystem"));
	}

	template <typename T = ArenaUnityWorld*> T& _world() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = ICollector1ModifierEntity*>*> T GetTrigger(IContext1ModifierEntity*>* context) {
		return ((T (*)(MinimapHideSystem*, IContext1ModifierEntity*>*))(Il2CppBase() + 0x12D31B0))(this, context);
	}
	template <typename T = bool> T Filter(ModifierEntity* entity) {
		return ((T (*)(MinimapHideSystem*, ModifierEntity*))(Il2CppBase() + 0x12D327C))(this, entity);
	}
	template <typename T = void> T Execute(Il2CppList<ModifierEntity*>* entities) {
		return ((T (*)(MinimapHideSystem*, Il2CppList<ModifierEntity*>*))(Il2CppBase() + 0x12D3298))(this, entities);
	}

};

