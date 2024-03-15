#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DurabilityHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DurabilityHelper"));
	}


	template <typename R = bool> static R NeedClearStack(InventorySlotEntity* slot, ICommonContexts* world) {
		return ((R (*)(void *, InventorySlotEntity*, ICommonContexts*))(Il2CppBase() + 0x1A971EC))(0, slot, world);
	}
	 static Nullable1<float>* GetDurabilityCoef(IDurabilityCoefEntity* entity) {
		return ((Nullable1<float>* (*)(void *, IDurabilityCoefEntity*))(Il2CppBase() + 0x1A97330))(0, entity);
	}
	template <typename R = bool> static R SetDurabilityCoef(IDurabilityCoefEntity* entity, Nullable1<float>* coef) {
		return ((R (*)(void *, IDurabilityCoefEntity*, Nullable1<float>*))(Il2CppBase() + 0x1A97488))(0, entity, coef);
	}
	 static ValueTuple2<float, float>* GetDurability(ItemEntity* item, float durabilityCoef) {
		return ((ValueTuple2<float, float>* (*)(void *, ItemEntity*, float))(Il2CppBase() + 0x1A976BC))(0, item, durabilityCoef);
	}
	 static ValueTuple2<float, float>* GetDurability_1(uintptr_t entity, ItemDataContext* itemContext) {
		return ((ValueTuple2<float, float>* (*)(void *, uintptr_t, ItemDataContext*))(Il2CppBase() + 0x0))(0, entity, itemContext);
	}
	template <typename R = bool> static R ChangeDurability(uintptr_t entity, ItemDataContext* itemContext, float delta) {
		return ((R (*)(void *, uintptr_t, ItemDataContext*, float))(Il2CppBase() + 0x0))(0, entity, itemContext, delta);
	}

};

