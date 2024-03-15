#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InventorySlotBlueprintConverter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InventorySlotBlueprintConverter"));
	}


	template <typename R = Il2CppArray<Il2CppString*>*> static R get_componentNames() {
		return ((R (*)(void *))(Il2CppBase() + 0x1234638))(0);
	}
	template <typename R = Il2CppArray<uintptr_t>*> static R get_componentTypes() {
		return ((R (*)(void *))(Il2CppBase() + 0x123469C))(0);
	}
	template <typename R = bool> R CanConvert(uintptr_t objectType) {
		return ((R (*)(InventorySlotBlueprintConverter*, uintptr_t))(Il2CppBase() + 0x1234700))(this, objectType);
	}
	template <typename R = void> R WriteJson(uintptr_t writer, Il2CppObject* value, uintptr_t serializer) {
		return ((R (*)(InventorySlotBlueprintConverter*, uintptr_t, Il2CppObject*, uintptr_t))(Il2CppBase() + 0x123478C))(this, writer, value, serializer);
	}
	template <typename R = Il2CppObject*> R ReadJson(uintptr_t reader, uintptr_t objectType, Il2CppObject* existingValue, uintptr_t serializer) {
		return ((R (*)(InventorySlotBlueprintConverter*, uintptr_t, uintptr_t, Il2CppObject*, uintptr_t))(Il2CppBase() + 0x12347CC))(this, reader, objectType, existingValue, serializer);
	}

};

