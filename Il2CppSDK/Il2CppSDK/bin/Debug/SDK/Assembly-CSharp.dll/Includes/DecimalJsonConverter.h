#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DecimalJsonConverter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DecimalJsonConverter"));
	}


	template <typename T = bool> T get_CanRead() {
		return ((T (*)(DecimalJsonConverter*))(Il2CppBase() + 0xEB628C))(this);
	}
	template <typename T = uintptr_t> T ReadJson(uintptr_t reader, uintptr_t objectType, uintptr_t existingValue, uintptr_t serializer) {
		return ((T (*)(DecimalJsonConverter*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0xEB6294))(this, reader, objectType, existingValue, serializer);
	}
	template <typename T = bool> T CanConvert(uintptr_t objectType) {
		return ((T (*)(DecimalJsonConverter*, uintptr_t))(Il2CppBase() + 0xEB62E8))(this, objectType);
	}
	template <typename T = void> T WriteJson(uintptr_t writer, uintptr_t value, uintptr_t serializer) {
		return ((T (*)(DecimalJsonConverter*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0xEB6374))(this, writer, value, serializer);
	}
	template <typename T = bool> static T IsWholeValue(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0xEB6480))(0, value);
	}

};

}
