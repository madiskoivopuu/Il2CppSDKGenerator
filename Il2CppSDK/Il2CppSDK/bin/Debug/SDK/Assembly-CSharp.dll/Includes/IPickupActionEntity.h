#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IPickupActionEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IPickupActionEntity"));
	}


	template <typename T = uintptr_t> T get_pickupAction() {
		return ((T (*)(IPickupActionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasPickupAction() {
		return ((T (*)(IPickupActionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddPickupAction(Il2CppString* newName, Il2CppArray<uintptr_t>* newList) {
		return ((T (*)(IPickupActionEntity*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, newName, newList);
	}
	template <typename T = void> T ReplacePickupAction(Il2CppString* newName, Il2CppArray<uintptr_t>* newList) {
		return ((T (*)(IPickupActionEntity*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, newName, newList);
	}
	template <typename T = void> T RemovePickupAction() {
		return ((T (*)(IPickupActionEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
