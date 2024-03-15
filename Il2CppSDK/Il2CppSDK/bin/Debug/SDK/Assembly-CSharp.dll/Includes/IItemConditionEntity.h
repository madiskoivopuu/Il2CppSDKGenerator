#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IItemConditionEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IItemConditionEntity"));
	}


	template <typename R = ItemConditionComponent*> R get_itemCondition() {
		return ((R (*)(IItemConditionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasItemCondition() {
		return ((R (*)(IItemConditionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddItemCondition(bool newOrEmpty, Il2CppString* newName, Il2CppString* newTag, Il2CppArray<Il2CppString*>* newAnyTags, Il2CppString* newNoTag, EquipmentType* newEquipmentType) {
		return ((R (*)(IItemConditionEntity*, bool, Il2CppString*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppString*, EquipmentType*))(Il2CppBase() + 0x0))(this, newOrEmpty, newName, newTag, newAnyTags, newNoTag, newEquipmentType);
	}
	template <typename R = void> R ReplaceItemCondition(bool newOrEmpty, Il2CppString* newName, Il2CppString* newTag, Il2CppArray<Il2CppString*>* newAnyTags, Il2CppString* newNoTag, EquipmentType* newEquipmentType) {
		return ((R (*)(IItemConditionEntity*, bool, Il2CppString*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppString*, EquipmentType*))(Il2CppBase() + 0x0))(this, newOrEmpty, newName, newTag, newAnyTags, newNoTag, newEquipmentType);
	}
	template <typename R = void> R RemoveItemCondition() {
		return ((R (*)(IItemConditionEntity*))(Il2CppBase() + 0x0))(this);
	}

};

