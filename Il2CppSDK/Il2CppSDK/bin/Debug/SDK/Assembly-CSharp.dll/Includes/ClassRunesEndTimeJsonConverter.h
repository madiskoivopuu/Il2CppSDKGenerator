#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ClassRunesEndTimeJsonConverter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClassRunesEndTimeJsonConverter"));
	}


	template <typename T = void> T WriteJson(uintptr_t writer, uintptr_t value, uintptr_t serializer) {
		return ((T (*)(ClassRunesEndTimeJsonConverter*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x18F6DE0))(this, writer, value, serializer);
	}
	template <typename T = uintptr_t> T ReadJson(uintptr_t reader, uintptr_t objectType, uintptr_t existingValue, uintptr_t serializer) {
		return ((T (*)(ClassRunesEndTimeJsonConverter*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x18F7460))(this, reader, objectType, existingValue, serializer);
	}
	template <typename T = bool> T get_CanRead() {
		return ((T (*)(ClassRunesEndTimeJsonConverter*))(Il2CppBase() + 0x18F7820))(this);
	}
	template <typename T = bool> T CanConvert(uintptr_t objectType) {
		return ((T (*)(ClassRunesEndTimeJsonConverter*, uintptr_t))(Il2CppBase() + 0x18F7828))(this, objectType);
	}

};

}
