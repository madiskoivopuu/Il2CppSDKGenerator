#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IPetsInventoryWindow
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IPetsInventoryWindow"));
	}


	template <typename R = PetsInventoryContainer*> R get_PetsInventoryContainer() {
		return ((R (*)(IPetsInventoryWindow*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R add_OnBeginScrolling(Action2<IInventoryItem*, uintptr_t>* value) {
		return ((R (*)(IPetsInventoryWindow*, Action2<IInventoryItem*, uintptr_t>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R remove_OnBeginScrolling(Action2<IInventoryItem*, uintptr_t>* value) {
		return ((R (*)(IPetsInventoryWindow*, Action2<IInventoryItem*, uintptr_t>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R add_OnScrolling(Action2<IInventoryItem*, uintptr_t>* value) {
		return ((R (*)(IPetsInventoryWindow*, Action2<IInventoryItem*, uintptr_t>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R remove_OnScrolling(Action2<IInventoryItem*, uintptr_t>* value) {
		return ((R (*)(IPetsInventoryWindow*, Action2<IInventoryItem*, uintptr_t>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R add_OnEndScrolling(Action2<IInventoryItem*, uintptr_t>* value) {
		return ((R (*)(IPetsInventoryWindow*, Action2<IInventoryItem*, uintptr_t>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R remove_OnEndScrolling(Action2<IInventoryItem*, uintptr_t>* value) {
		return ((R (*)(IPetsInventoryWindow*, Action2<IInventoryItem*, uintptr_t>*))(Il2CppBase() + 0x0))(this, value);
	}

};

