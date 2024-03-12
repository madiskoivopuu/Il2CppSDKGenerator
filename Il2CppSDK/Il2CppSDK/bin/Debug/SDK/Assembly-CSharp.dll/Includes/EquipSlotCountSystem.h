#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EquipSlotCountSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EquipSlotCountSystem"));
	}

	template <typename T = uintptr_t> T& _world() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void*> T GetTrigger(void* context) {
		return ((T (*)(EquipSlotCountSystem*, void*))(Il2CppBase() + 0x137BEC0))(this, context);
	}
	template <typename T = bool> T Filter(uintptr_t entity) {
		return ((T (*)(EquipSlotCountSystem*, uintptr_t))(Il2CppBase() + 0x137C010))(this, entity);
	}
	template <typename T = void> T Execute(Il2CppList<uintptr_t>* entities) {
		return ((T (*)(EquipSlotCountSystem*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x137C02C))(this, entities);
	}
	template <typename T = void> T ChangingSlotCount(uintptr_t entity, int32_t oldSlotCount, int32_t newSlotCount) {
		return ((T (*)(EquipSlotCountSystem*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x137C32C))(this, entity, oldSlotCount, newSlotCount);
	}

};

}
