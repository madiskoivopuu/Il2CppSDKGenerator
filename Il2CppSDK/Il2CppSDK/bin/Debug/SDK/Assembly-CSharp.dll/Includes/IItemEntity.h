#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IItemEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IItemEntity"));
	}


	template <typename R = ItemComponent*> R get_item() {
		return ((R (*)(IItemEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasItem() {
		return ((R (*)(IItemEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddItem(Il2CppString* newName) {
		return ((R (*)(IItemEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R ReplaceItem(Il2CppString* newName) {
		return ((R (*)(IItemEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R RemoveItem() {
		return ((R (*)(IItemEntity*))(Il2CppBase() + 0x0))(this);
	}

};

