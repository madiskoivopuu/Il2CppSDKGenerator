#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EquipPowerSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EquipPowerSystem"));
	}

	template <typename T = ICommonContexts*> T& _world() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = ICollector1GameEntity*>*> T GetTrigger(IContext1GameEntity*>* context) {
		return ((T (*)(EquipPowerSystem*, IContext1GameEntity*>*))(Il2CppBase() + 0x137B68C))(this, context);
	}
	template <typename T = bool> T Filter(GameEntity* entity) {
		return ((T (*)(EquipPowerSystem*, GameEntity*))(Il2CppBase() + 0x137B9E4))(this, entity);
	}
	template <typename T = void> T Execute(Il2CppList<GameEntity*>* entities) {
		return ((T (*)(EquipPowerSystem*, Il2CppList<GameEntity*>*))(Il2CppBase() + 0x137BA00))(this, entities);
	}

};

