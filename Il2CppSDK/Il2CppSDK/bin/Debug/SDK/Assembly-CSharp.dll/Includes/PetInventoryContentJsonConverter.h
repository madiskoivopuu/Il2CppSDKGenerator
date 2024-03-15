#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PetInventoryContentJsonConverter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PetInventoryContentJsonConverter"));
	}


	template <typename R = void> R WriteJson(uintptr_t writer, Il2CppObject* value, uintptr_t serializer) {
		return ((R (*)(PetInventoryContentJsonConverter*, uintptr_t, Il2CppObject*, uintptr_t))(Il2CppBase() + 0x11EDD4C))(this, writer, value, serializer);
	}
	template <typename R = Il2CppObject*> R ReadJson(uintptr_t reader, uintptr_t objectType, Il2CppObject* existingValue, uintptr_t serializer) {
		return ((R (*)(PetInventoryContentJsonConverter*, uintptr_t, uintptr_t, Il2CppObject*, uintptr_t))(Il2CppBase() + 0x11EDFE0))(this, reader, objectType, existingValue, serializer);
	}
	template <typename R = bool> R get_CanRead() {
		return ((R (*)(PetInventoryContentJsonConverter*))(Il2CppBase() + 0x11EE360))(this);
	}
	template <typename R = bool> R CanConvert(uintptr_t objectType) {
		return ((R (*)(PetInventoryContentJsonConverter*, uintptr_t))(Il2CppBase() + 0x11EE368))(this, objectType);
	}

};

