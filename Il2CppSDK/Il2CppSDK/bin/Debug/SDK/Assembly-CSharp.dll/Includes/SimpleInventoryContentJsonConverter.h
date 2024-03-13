#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SimpleInventoryContentJsonConverter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SimpleInventoryContentJsonConverter"));
	}


	template <typename T = void> T WriteJson(uintptr_t writer, Il2CppObject* value, uintptr_t serializer) {
		return ((T (*)(SimpleInventoryContentJsonConverter*, uintptr_t, Il2CppObject*, uintptr_t))(Il2CppBase() + 0x147F5E4))(this, writer, value, serializer);
	}
	template <typename T = Il2CppObject*> T ReadJson(uintptr_t reader, uintptr_t objectType, Il2CppObject* existingValue, uintptr_t serializer) {
		return ((T (*)(SimpleInventoryContentJsonConverter*, uintptr_t, uintptr_t, Il2CppObject*, uintptr_t))(Il2CppBase() + 0x147F7E4))(this, reader, objectType, existingValue, serializer);
	}
	template <typename T = bool> T get_CanRead() {
		return ((T (*)(SimpleInventoryContentJsonConverter*))(Il2CppBase() + 0x147FAEC))(this);
	}
	template <typename T = bool> T CanConvert(uintptr_t objectType) {
		return ((T (*)(SimpleInventoryContentJsonConverter*, uintptr_t))(Il2CppBase() + 0x147FAF4))(this, objectType);
	}

};

