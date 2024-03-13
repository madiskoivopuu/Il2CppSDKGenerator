#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PetInventoryContentJsonConverter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PetInventoryContentJsonConverter"));
	}


	template <typename T = void> T WriteJson(uintptr_t writer, Il2CppObject* value, uintptr_t serializer) {
		return ((T (*)(PetInventoryContentJsonConverter*, uintptr_t, Il2CppObject*, uintptr_t))(Il2CppBase() + 0x11EDD4C))(this, writer, value, serializer);
	}
	template <typename T = Il2CppObject*> T ReadJson(uintptr_t reader, uintptr_t objectType, Il2CppObject* existingValue, uintptr_t serializer) {
		return ((T (*)(PetInventoryContentJsonConverter*, uintptr_t, uintptr_t, Il2CppObject*, uintptr_t))(Il2CppBase() + 0x11EDFE0))(this, reader, objectType, existingValue, serializer);
	}
	template <typename T = bool> T get_CanRead() {
		return ((T (*)(PetInventoryContentJsonConverter*))(Il2CppBase() + 0x11EE360))(this);
	}
	template <typename T = bool> T CanConvert(uintptr_t objectType) {
		return ((T (*)(PetInventoryContentJsonConverter*, uintptr_t))(Il2CppBase() + 0x11EE368))(this, objectType);
	}

};

