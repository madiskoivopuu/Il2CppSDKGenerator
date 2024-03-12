#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IRequiredItemsEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IRequiredItemsEntity"));
	}


	template <typename T = uintptr_t> T get_requiredItems() {
		return ((T (*)(IRequiredItemsEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasRequiredItems() {
		return ((T (*)(IRequiredItemsEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddRequiredItems(Il2CppArray<uintptr_t>* newItems, Il2CppString* newInfoText) {
		return ((T (*)(IRequiredItemsEntity*, Il2CppArray<uintptr_t>*, Il2CppString*))(Il2CppBase() + 0x0))(this, newItems, newInfoText);
	}
	template <typename T = void> T ReplaceRequiredItems(Il2CppArray<uintptr_t>* newItems, Il2CppString* newInfoText) {
		return ((T (*)(IRequiredItemsEntity*, Il2CppArray<uintptr_t>*, Il2CppString*))(Il2CppBase() + 0x0))(this, newItems, newInfoText);
	}
	template <typename T = void> T RemoveRequiredItems() {
		return ((T (*)(IRequiredItemsEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
