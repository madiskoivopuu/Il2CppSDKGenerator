#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseContext1.h" 

class NewBlueprintContext2 : public BaseContext1<uintptr_t>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NewBlueprintContext`2"));
	}

	template <typename T = DataContext1uintptr_t>*> T& Data() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& FromEntityToDataEntity() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& FromDataEntityToEntity() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = DataContext1uintptr_t>*> T get_Data() {
		return ((T (*)(NewBlueprintContext2*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_Data(DataContext1uintptr_t>* value) {
		return ((T (*)(NewBlueprintContext2*, DataContext1uintptr_t>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = uintptr_t> T CreateFromBlueprintOrNull(Il2CppString* entityName) {
		return ((T (*)(NewBlueprintContext2*, Il2CppString*))(Il2CppBase() + 0x0))(this, entityName);
	}
	template <typename T = uintptr_t> T CreateFromData(uintptr_t dataEntity) {
		return ((T (*)(NewBlueprintContext2*, uintptr_t))(Il2CppBase() + 0x0))(this, dataEntity);
	}
	template <typename T = uintptr_t> T CreateFromBlueprint(Il2CppString* entityName) {
		return ((T (*)(NewBlueprintContext2*, Il2CppString*))(Il2CppBase() + 0x0))(this, entityName);
	}
	template <typename T = uintptr_t> T CreateUsingBlueprint(Il2CppString* entityName, EntityBlueprint* entityData) {
		return ((T (*)(NewBlueprintContext2*, Il2CppString*, EntityBlueprint*))(Il2CppBase() + 0x0))(this, entityName, entityData);
	}
	template <typename T = EntityBlueprint*> T GetEntityData(uintptr_t entity, Il2CppArray<uintptr_t>* requiredComponents, bool copy) {
		return ((T (*)(NewBlueprintContext2*, uintptr_t, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x0))(this, entity, requiredComponents, copy);
	}

};

