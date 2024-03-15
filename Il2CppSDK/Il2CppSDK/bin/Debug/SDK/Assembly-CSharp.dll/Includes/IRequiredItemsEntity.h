#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IRequiredItemsEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IRequiredItemsEntity"));
	}


	template <typename R = RequiredItemsComponent*> R get_requiredItems() {
		return ((R (*)(IRequiredItemsEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasRequiredItems() {
		return ((R (*)(IRequiredItemsEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddRequiredItems(Il2CppArray<Item>* newItems, Il2CppString* newInfoText) {
		return ((R (*)(IRequiredItemsEntity*, Il2CppArray<Item>*, Il2CppString*))(Il2CppBase() + 0x0))(this, newItems, newInfoText);
	}
	template <typename R = void> R ReplaceRequiredItems(Il2CppArray<Item>* newItems, Il2CppString* newInfoText) {
		return ((R (*)(IRequiredItemsEntity*, Il2CppArray<Item>*, Il2CppString*))(Il2CppBase() + 0x0))(this, newItems, newInfoText);
	}
	template <typename R = void> R RemoveRequiredItems() {
		return ((R (*)(IRequiredItemsEntity*))(Il2CppBase() + 0x0))(this);
	}

};

