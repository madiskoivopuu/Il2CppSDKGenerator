#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MinimapHideSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MinimapHideSystem"));
	}

	template <typename R = ArenaUnityWorld*> R& _world() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	 ICollector1ModifierEntity*>* GetTrigger(IContext1ModifierEntity*>* context) {
		return ((ICollector1ModifierEntity*>* (*)(MinimapHideSystem*, IContext1ModifierEntity*>*))(Il2CppBase() + 0x12D31B0))(this, context);
	}
	template <typename R = bool> R Filter(ModifierEntity* entity) {
		return ((R (*)(MinimapHideSystem*, ModifierEntity*))(Il2CppBase() + 0x12D327C))(this, entity);
	}
	template <typename R = void> R Execute(Il2CppList<ModifierEntity*>* entities) {
		return ((R (*)(MinimapHideSystem*, Il2CppList<ModifierEntity*>*))(Il2CppBase() + 0x12D3298))(this, entities);
	}

};

