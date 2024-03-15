#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MapPathJsonConverter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MapPathJsonConverter"));
	}


	template <typename R = void> R WriteJson(uintptr_t writer, Il2CppObject* value, uintptr_t serializer) {
		return ((R (*)(MapPathJsonConverter*, uintptr_t, Il2CppObject*, uintptr_t))(Il2CppBase() + 0x12BED4C))(this, writer, value, serializer);
	}
	template <typename R = Il2CppObject*> R ReadJson(uintptr_t reader, uintptr_t objectType, Il2CppObject* existingValue, uintptr_t serializer) {
		return ((R (*)(MapPathJsonConverter*, uintptr_t, uintptr_t, Il2CppObject*, uintptr_t))(Il2CppBase() + 0x12BEE2C))(this, reader, objectType, existingValue, serializer);
	}
	template <typename R = bool> R get_CanRead() {
		return ((R (*)(MapPathJsonConverter*))(Il2CppBase() + 0x12BEF5C))(this);
	}
	template <typename R = bool> R CanConvert(uintptr_t objectType) {
		return ((R (*)(MapPathJsonConverter*, uintptr_t))(Il2CppBase() + 0x12BEF64))(this, objectType);
	}

};

