#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IPetsInventoryWindow
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IPetsInventoryWindow"));
	}


	template <typename T = PetsInventoryContainer*> T get_PetsInventoryContainer() {
		return ((T (*)(IPetsInventoryWindow*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T add_OnBeginScrolling(Action2IInventoryItem*, uintptr_t>* value) {
		return ((T (*)(IPetsInventoryWindow*, Action2IInventoryItem*, uintptr_t>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnBeginScrolling(Action2IInventoryItem*, uintptr_t>* value) {
		return ((T (*)(IPetsInventoryWindow*, Action2IInventoryItem*, uintptr_t>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnScrolling(Action2IInventoryItem*, uintptr_t>* value) {
		return ((T (*)(IPetsInventoryWindow*, Action2IInventoryItem*, uintptr_t>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnScrolling(Action2IInventoryItem*, uintptr_t>* value) {
		return ((T (*)(IPetsInventoryWindow*, Action2IInventoryItem*, uintptr_t>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnEndScrolling(Action2IInventoryItem*, uintptr_t>* value) {
		return ((T (*)(IPetsInventoryWindow*, Action2IInventoryItem*, uintptr_t>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnEndScrolling(Action2IInventoryItem*, uintptr_t>* value) {
		return ((T (*)(IPetsInventoryWindow*, Action2IInventoryItem*, uintptr_t>*))(Il2CppBase() + 0x0))(this, value);
	}

};

