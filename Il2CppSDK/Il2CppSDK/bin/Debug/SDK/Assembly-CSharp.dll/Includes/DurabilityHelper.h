#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DurabilityHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DurabilityHelper"));
	}


	template <typename T = bool> static T NeedClearStack(InventorySlotEntity* slot, ICommonContexts* world) {
		return ((T (*)(void *, InventorySlotEntity*, ICommonContexts*))(Il2CppBase() + 0x1A971EC))(0, slot, world);
	}
	template <typename T = Nullable1float>*> static T GetDurabilityCoef(IDurabilityCoefEntity* entity) {
		return ((T (*)(void *, IDurabilityCoefEntity*))(Il2CppBase() + 0x1A97330))(0, entity);
	}
	template <typename T = bool> static T SetDurabilityCoef(IDurabilityCoefEntity* entity, Nullable1float>* coef) {
		return ((T (*)(void *, IDurabilityCoefEntity*, Nullable1float>*))(Il2CppBase() + 0x1A97488))(0, entity, coef);
	}
	template <typename T = ValueTuple2float, float>*> static T GetDurability(ItemEntity* item, float durabilityCoef) {
		return ((T (*)(void *, ItemEntity*, float))(Il2CppBase() + 0x1A976BC))(0, item, durabilityCoef);
	}
	template <typename T = ValueTuple2float, float>*> static T GetDurability_1(uintptr_t entity, ItemDataContext* itemContext) {
		return ((T (*)(void *, uintptr_t, ItemDataContext*))(Il2CppBase() + 0x0))(0, entity, itemContext);
	}
	template <typename T = bool> static T ChangeDurability(uintptr_t entity, ItemDataContext* itemContext, float delta) {
		return ((T (*)(void *, uintptr_t, ItemDataContext*, float))(Il2CppBase() + 0x0))(0, entity, itemContext, delta);
	}

};

