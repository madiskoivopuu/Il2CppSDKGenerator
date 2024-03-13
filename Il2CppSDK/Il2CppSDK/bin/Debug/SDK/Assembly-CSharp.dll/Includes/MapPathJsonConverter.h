#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MapPathJsonConverter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MapPathJsonConverter"));
	}


	template <typename T = void> T WriteJson(uintptr_t writer, Il2CppObject* value, uintptr_t serializer) {
		return ((T (*)(MapPathJsonConverter*, uintptr_t, Il2CppObject*, uintptr_t))(Il2CppBase() + 0x12BED4C))(this, writer, value, serializer);
	}
	template <typename T = Il2CppObject*> T ReadJson(uintptr_t reader, uintptr_t objectType, Il2CppObject* existingValue, uintptr_t serializer) {
		return ((T (*)(MapPathJsonConverter*, uintptr_t, uintptr_t, Il2CppObject*, uintptr_t))(Il2CppBase() + 0x12BEE2C))(this, reader, objectType, existingValue, serializer);
	}
	template <typename T = bool> T get_CanRead() {
		return ((T (*)(MapPathJsonConverter*))(Il2CppBase() + 0x12BEF5C))(this);
	}
	template <typename T = bool> T CanConvert(uintptr_t objectType) {
		return ((T (*)(MapPathJsonConverter*, uintptr_t))(Il2CppBase() + 0x12BEF64))(this, objectType);
	}

};

