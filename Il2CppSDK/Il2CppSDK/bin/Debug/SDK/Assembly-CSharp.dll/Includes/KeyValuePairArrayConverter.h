#pragma once
#include <Il2Cpp/Il2Cpp.h>

class KeyValuePairArrayConverter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "KeyValuePairArrayConverter"));
	}


	template <typename R = bool> R CanConvert(uintptr_t objectType) {
		return ((R (*)(KeyValuePairArrayConverter*, uintptr_t))(Il2CppBase() + 0x14EBD30))(this, objectType);
	}
	template <typename R = Il2CppObject*> R ReadJson(uintptr_t reader, uintptr_t objectType, Il2CppObject* existingValue, uintptr_t serializer) {
		return ((R (*)(KeyValuePairArrayConverter*, uintptr_t, uintptr_t, Il2CppObject*, uintptr_t))(Il2CppBase() + 0x14EBDBC))(this, reader, objectType, existingValue, serializer);
	}
	template <typename R = void> R WriteJson(uintptr_t writer, Il2CppObject* value, uintptr_t serializer) {
		return ((R (*)(KeyValuePairArrayConverter*, uintptr_t, Il2CppObject*, uintptr_t))(Il2CppBase() + 0x14EC1B4))(this, writer, value, serializer);
	}

};
