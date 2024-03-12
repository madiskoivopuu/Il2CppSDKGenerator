#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SizeJsonConverter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SizeJsonConverter"));
	}


	template <typename T = void> T WriteJson(uintptr_t writer, uintptr_t value, uintptr_t serializer) {
		return ((T (*)(SizeJsonConverter*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1480AA0))(this, writer, value, serializer);
	}
	template <typename T = uintptr_t> T ReadJson(uintptr_t reader, uintptr_t objectType, uintptr_t existingValue, uintptr_t serializer) {
		return ((T (*)(SizeJsonConverter*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1480BC8))(this, reader, objectType, existingValue, serializer);
	}
	template <typename T = bool> T get_CanRead() {
		return ((T (*)(SizeJsonConverter*))(Il2CppBase() + 0x1480CE0))(this);
	}
	template <typename T = bool> T CanConvert(uintptr_t objectType) {
		return ((T (*)(SizeJsonConverter*, uintptr_t))(Il2CppBase() + 0x1480CE8))(this, objectType);
	}

};

}
