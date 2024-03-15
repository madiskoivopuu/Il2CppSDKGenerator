#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IPickupActionEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IPickupActionEntity"));
	}


	template <typename R = PickupActionComponent*> R get_pickupAction() {
		return ((R (*)(IPickupActionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasPickupAction() {
		return ((R (*)(IPickupActionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddPickupAction(Il2CppString* newName, Il2CppArray<Item>* newList) {
		return ((R (*)(IPickupActionEntity*, Il2CppString*, Il2CppArray<Item>*))(Il2CppBase() + 0x0))(this, newName, newList);
	}
	template <typename R = void> R ReplacePickupAction(Il2CppString* newName, Il2CppArray<Item>* newList) {
		return ((R (*)(IPickupActionEntity*, Il2CppString*, Il2CppArray<Item>*))(Il2CppBase() + 0x0))(this, newName, newList);
	}
	template <typename R = void> R RemovePickupAction() {
		return ((R (*)(IPickupActionEntity*))(Il2CppBase() + 0x0))(this);
	}

};

