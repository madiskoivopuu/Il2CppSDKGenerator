#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ArmingEquipTagsSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ArmingEquipTagsSystem"));
	}

	template <typename T = ICommonContexts*> T& _world() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = ICollector1GameEntity*>*> T GetTrigger(IContext1GameEntity*>* context) {
		return ((T (*)(ArmingEquipTagsSystem*, IContext1GameEntity*>*))(Il2CppBase() + 0x1A51594))(this, context);
	}
	template <typename T = bool> T Filter(GameEntity* entity) {
		return ((T (*)(ArmingEquipTagsSystem*, GameEntity*))(Il2CppBase() + 0x1A519FC))(this, entity);
	}
	template <typename T = void> T Execute(Il2CppList<GameEntity*>* entities) {
		return ((T (*)(ArmingEquipTagsSystem*, Il2CppList<GameEntity*>*))(Il2CppBase() + 0x1A51A18))(this, entities);
	}

};

