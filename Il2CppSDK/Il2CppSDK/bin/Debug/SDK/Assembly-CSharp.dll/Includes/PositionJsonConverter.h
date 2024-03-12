#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PositionJsonConverter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PositionJsonConverter"));
	}


	template <typename T = void> T WriteJson(uintptr_t writer, uintptr_t value, uintptr_t serializer) {
		return ((T (*)(PositionJsonConverter*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x16D5444))(this, writer, value, serializer);
	}
	template <typename T = uintptr_t> T ReadJson(uintptr_t reader, uintptr_t objectType, uintptr_t existingValue, uintptr_t serializer) {
		return ((T (*)(PositionJsonConverter*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x16D556C))(this, reader, objectType, existingValue, serializer);
	}
	template <typename T = bool> T get_CanRead() {
		return ((T (*)(PositionJsonConverter*))(Il2CppBase() + 0x16D5684))(this);
	}
	template <typename T = bool> T CanConvert(uintptr_t objectType) {
		return ((T (*)(PositionJsonConverter*, uintptr_t))(Il2CppBase() + 0x16D568C))(this, objectType);
	}

};

}
