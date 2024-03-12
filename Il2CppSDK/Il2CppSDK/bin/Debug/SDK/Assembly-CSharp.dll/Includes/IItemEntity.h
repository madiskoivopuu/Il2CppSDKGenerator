#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IItemEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IItemEntity"));
	}


	template <typename T = uintptr_t> T get_item() {
		return ((T (*)(IItemEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasItem() {
		return ((T (*)(IItemEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddItem(Il2CppString* newName) {
		return ((T (*)(IItemEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T ReplaceItem(Il2CppString* newName) {
		return ((T (*)(IItemEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T RemoveItem() {
		return ((T (*)(IItemEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
