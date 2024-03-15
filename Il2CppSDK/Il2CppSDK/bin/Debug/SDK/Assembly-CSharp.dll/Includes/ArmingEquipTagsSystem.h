#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ArmingEquipTagsSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ArmingEquipTagsSystem"));
	}

	template <typename R = ICommonContexts*> R& _world() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	 ICollector1<GameEntity*>* GetTrigger(IContext1<GameEntity*>* context) {
		return ((ICollector1<GameEntity*>* (*)(ArmingEquipTagsSystem*, IContext1<GameEntity*>*))(Il2CppBase() + 0x1A51594))(this, context);
	}
	template <typename R = bool> R Filter(GameEntity* entity) {
		return ((R (*)(ArmingEquipTagsSystem*, GameEntity*))(Il2CppBase() + 0x1A519FC))(this, entity);
	}
	template <typename R = void> R Execute(Il2CppList<GameEntity*>* entities) {
		return ((R (*)(ArmingEquipTagsSystem*, Il2CppList<GameEntity*>*))(Il2CppBase() + 0x1A51A18))(this, entities);
	}

};

