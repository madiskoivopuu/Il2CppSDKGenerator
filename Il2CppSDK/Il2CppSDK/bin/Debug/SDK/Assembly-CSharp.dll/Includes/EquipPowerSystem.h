#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EquipPowerSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EquipPowerSystem"));
	}

	template <typename R = ICommonContexts*> R& _world() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	 ICollector1<GameEntity*>* GetTrigger(IContext1<GameEntity*>* context) {
		return ((ICollector1<GameEntity*>* (*)(EquipPowerSystem*, IContext1<GameEntity*>*))(Il2CppBase() + 0x137B68C))(this, context);
	}
	template <typename R = bool> R Filter(GameEntity* entity) {
		return ((R (*)(EquipPowerSystem*, GameEntity*))(Il2CppBase() + 0x137B9E4))(this, entity);
	}
	template <typename R = void> R Execute(Il2CppList<GameEntity*>* entities) {
		return ((R (*)(EquipPowerSystem*, Il2CppList<GameEntity*>*))(Il2CppBase() + 0x137BA00))(this, entities);
	}

};

