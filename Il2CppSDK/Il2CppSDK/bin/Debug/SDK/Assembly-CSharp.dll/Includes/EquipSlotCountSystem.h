#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EquipSlotCountSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EquipSlotCountSystem"));
	}

	template <typename R = ICommonContexts*> R& _world() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	 ICollector1<GameEntity*>* GetTrigger(IContext1<GameEntity*>* context) {
		return ((ICollector1<GameEntity*>* (*)(EquipSlotCountSystem*, IContext1<GameEntity*>*))(Il2CppBase() + 0x137BEC0))(this, context);
	}
	template <typename R = bool> R Filter(GameEntity* entity) {
		return ((R (*)(EquipSlotCountSystem*, GameEntity*))(Il2CppBase() + 0x137C010))(this, entity);
	}
	template <typename R = void> R Execute(Il2CppList<GameEntity*>* entities) {
		return ((R (*)(EquipSlotCountSystem*, Il2CppList<GameEntity*>*))(Il2CppBase() + 0x137C02C))(this, entities);
	}
	template <typename R = void> R ChangingSlotCount(GameEntity* entity, int32_t oldSlotCount, int32_t newSlotCount) {
		return ((R (*)(EquipSlotCountSystem*, GameEntity*, int32_t, int32_t))(Il2CppBase() + 0x137C32C))(this, entity, oldSlotCount, newSlotCount);
	}

};

