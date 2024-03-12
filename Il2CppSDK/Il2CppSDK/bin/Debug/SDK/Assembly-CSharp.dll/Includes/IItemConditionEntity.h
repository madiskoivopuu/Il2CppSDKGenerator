#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IItemConditionEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IItemConditionEntity"));
	}


	template <typename T = uintptr_t> T get_itemCondition() {
		return ((T (*)(IItemConditionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasItemCondition() {
		return ((T (*)(IItemConditionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddItemCondition(bool newOrEmpty, Il2CppString* newName, Il2CppString* newTag, Il2CppArray<uintptr_t>* newAnyTags, Il2CppString* newNoTag, uintptr_t newEquipmentType) {
		return ((T (*)(IItemConditionEntity*, bool, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x0))(this, newOrEmpty, newName, newTag, newAnyTags, newNoTag, newEquipmentType);
	}
	template <typename T = void> T ReplaceItemCondition(bool newOrEmpty, Il2CppString* newName, Il2CppString* newTag, Il2CppArray<uintptr_t>* newAnyTags, Il2CppString* newNoTag, uintptr_t newEquipmentType) {
		return ((T (*)(IItemConditionEntity*, bool, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x0))(this, newOrEmpty, newName, newTag, newAnyTags, newNoTag, newEquipmentType);
	}
	template <typename T = void> T RemoveItemCondition() {
		return ((T (*)(IItemConditionEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
