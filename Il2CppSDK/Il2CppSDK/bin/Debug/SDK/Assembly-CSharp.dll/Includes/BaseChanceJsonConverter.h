#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BaseChanceJsonConverter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BaseChanceJsonConverter"));
	}


	template <typename T = void> T WriteJson(uintptr_t writer, uintptr_t value, uintptr_t serializer) {
		return ((T (*)(BaseChanceJsonConverter*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0xFBCB30))(this, writer, value, serializer);
	}
	template <typename T = uintptr_t> T ReadJson(uintptr_t reader, uintptr_t objectType, uintptr_t existingValue, uintptr_t serializer) {
		return ((T (*)(BaseChanceJsonConverter*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0xFBCC08))(this, reader, objectType, existingValue, serializer);
	}
	template <typename T = bool> T get_CanRead() {
		return ((T (*)(BaseChanceJsonConverter*))(Il2CppBase() + 0xFBCD48))(this);
	}
	template <typename T = bool> T CanConvert(uintptr_t objectType) {
		return ((T (*)(BaseChanceJsonConverter*, uintptr_t))(Il2CppBase() + 0xFBCD50))(this, objectType);
	}

};

}
