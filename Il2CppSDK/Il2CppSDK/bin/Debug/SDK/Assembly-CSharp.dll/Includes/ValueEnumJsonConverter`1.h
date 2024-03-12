#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ValueEnumJsonConverter1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ValueEnumJsonConverter`1"));
	}


	template <typename T = void> T WriteJson(uintptr_t writer, uintptr_t value, uintptr_t serializer) {
		return ((T (*)(ValueEnumJsonConverter1*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, writer, value, serializer);
	}
	template <typename T = uintptr_t> T ReadJson(uintptr_t reader, uintptr_t objectType, uintptr_t existingValue, uintptr_t serializer) {
		return ((T (*)(ValueEnumJsonConverter1*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, reader, objectType, existingValue, serializer);
	}
	template <typename T = bool> T get_CanRead() {
		return ((T (*)(ValueEnumJsonConverter1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T CanConvert(uintptr_t objectType) {
		return ((T (*)(ValueEnumJsonConverter1*, uintptr_t))(Il2CppBase() + 0x0))(this, objectType);
	}

};

}
