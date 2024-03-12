#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InventorySlotBlueprintConverter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InventorySlotBlueprintConverter"));
	}


	template <typename T = Il2CppArray<uintptr_t>*> static T get_componentNames() {
		return ((T (*)(void *))(Il2CppBase() + 0x1234638))(0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T get_componentTypes() {
		return ((T (*)(void *))(Il2CppBase() + 0x123469C))(0);
	}
	template <typename T = bool> T CanConvert(uintptr_t objectType) {
		return ((T (*)(InventorySlotBlueprintConverter*, uintptr_t))(Il2CppBase() + 0x1234700))(this, objectType);
	}
	template <typename T = void> T WriteJson(uintptr_t writer, uintptr_t value, uintptr_t serializer) {
		return ((T (*)(InventorySlotBlueprintConverter*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x123478C))(this, writer, value, serializer);
	}
	template <typename T = uintptr_t> T ReadJson(uintptr_t reader, uintptr_t objectType, uintptr_t existingValue, uintptr_t serializer) {
		return ((T (*)(InventorySlotBlueprintConverter*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x12347CC))(this, reader, objectType, existingValue, serializer);
	}

};

}
