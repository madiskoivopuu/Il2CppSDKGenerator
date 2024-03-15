#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IMountsInventoryWindow
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IMountsInventoryWindow"));
	}


	template <typename R = MountsInventoryContainer*> R get_MountsInventoryContainer() {
		return ((R (*)(IMountsInventoryWindow*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R add_OnBeginScrolling(Action2IInventoryItem*, uintptr_t>* value) {
		return ((R (*)(IMountsInventoryWindow*, Action2IInventoryItem*, uintptr_t>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R remove_OnBeginScrolling(Action2IInventoryItem*, uintptr_t>* value) {
		return ((R (*)(IMountsInventoryWindow*, Action2IInventoryItem*, uintptr_t>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R add_OnScrolling(Action2IInventoryItem*, uintptr_t>* value) {
		return ((R (*)(IMountsInventoryWindow*, Action2IInventoryItem*, uintptr_t>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R remove_OnScrolling(Action2IInventoryItem*, uintptr_t>* value) {
		return ((R (*)(IMountsInventoryWindow*, Action2IInventoryItem*, uintptr_t>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R add_OnEndScrolling(Action2IInventoryItem*, uintptr_t>* value) {
		return ((R (*)(IMountsInventoryWindow*, Action2IInventoryItem*, uintptr_t>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R remove_OnEndScrolling(Action2IInventoryItem*, uintptr_t>* value) {
		return ((R (*)(IMountsInventoryWindow*, Action2IInventoryItem*, uintptr_t>*))(Il2CppBase() + 0x0))(this, value);
	}

};

