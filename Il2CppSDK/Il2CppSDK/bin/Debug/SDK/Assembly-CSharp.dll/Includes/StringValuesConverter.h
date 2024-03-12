#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StringValuesConverter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StringValuesConverter"));
	}


	template <typename T = void> T WriteJson(uintptr_t writer, uintptr_t value, uintptr_t serializer) {
		return ((T (*)(StringValuesConverter*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x16A0DFC))(this, writer, value, serializer);
	}
	template <typename T = uintptr_t> T ReadJson(uintptr_t reader, uintptr_t objectType, uintptr_t existingValue, uintptr_t serializer) {
		return ((T (*)(StringValuesConverter*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x16A0EA0))(this, reader, objectType, existingValue, serializer);
	}
	template <typename T = bool> T get_CanRead() {
		return ((T (*)(StringValuesConverter*))(Il2CppBase() + 0x16A0FF0))(this);
	}
	template <typename T = bool> T CanConvert(uintptr_t objectType) {
		return ((T (*)(StringValuesConverter*, uintptr_t))(Il2CppBase() + 0x16A0FF8))(this, objectType);
	}

};

}
