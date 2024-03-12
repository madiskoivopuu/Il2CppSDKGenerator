#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BaseInventoryContentJsonConverter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BaseInventoryContentJsonConverter"));
	}


	template <typename T = void> T WriteJson(uintptr_t writer, uintptr_t value, uintptr_t serializer) {
		return ((T (*)(BaseInventoryContentJsonConverter*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x166D3C8))(this, writer, value, serializer);
	}
	template <typename T = uintptr_t> T ReadJson(uintptr_t reader, uintptr_t objectType, uintptr_t existingValue, uintptr_t serializer) {
		return ((T (*)(BaseInventoryContentJsonConverter*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x166D830))(this, reader, objectType, existingValue, serializer);
	}
	template <typename T = bool> T get_CanRead() {
		return ((T (*)(BaseInventoryContentJsonConverter*))(Il2CppBase() + 0x166DD54))(this);
	}
	template <typename T = bool> T CanConvert(uintptr_t objectType) {
		return ((T (*)(BaseInventoryContentJsonConverter*, uintptr_t))(Il2CppBase() + 0x166DD5C))(this, objectType);
	}

};

}
