#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IconJsonConverter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IconJsonConverter"));
	}


	template <typename T = void> T WriteJson(uintptr_t writer, uintptr_t value, uintptr_t serializer) {
		return ((T (*)(IconJsonConverter*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1E3D760))(this, writer, value, serializer);
	}
	template <typename T = uintptr_t> T ReadJson(uintptr_t reader, uintptr_t objectType, uintptr_t existingValue, uintptr_t serializer) {
		return ((T (*)(IconJsonConverter*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1E3D804))(this, reader, objectType, existingValue, serializer);
	}
	template <typename T = bool> T get_CanRead() {
		return ((T (*)(IconJsonConverter*))(Il2CppBase() + 0x1E3D950))(this);
	}
	template <typename T = bool> T CanConvert(uintptr_t objectType) {
		return ((T (*)(IconJsonConverter*, uintptr_t))(Il2CppBase() + 0x1E3D958))(this, objectType);
	}

};

}
