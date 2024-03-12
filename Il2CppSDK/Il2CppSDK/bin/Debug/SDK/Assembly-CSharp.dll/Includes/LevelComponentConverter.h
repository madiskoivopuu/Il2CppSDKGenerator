#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LevelComponentConverter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LevelComponentConverter"));
	}


	template <typename T = void> T WriteJson(uintptr_t writer, uintptr_t value, uintptr_t serializer) {
		return ((T (*)(LevelComponentConverter*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x142B91C))(this, writer, value, serializer);
	}
	template <typename T = uintptr_t> T ReadJson(uintptr_t reader, uintptr_t objectType, uintptr_t existingValue, uintptr_t serializer) {
		return ((T (*)(LevelComponentConverter*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x142BA68))(this, reader, objectType, existingValue, serializer);
	}
	template <typename T = bool> T get_CanRead() {
		return ((T (*)(LevelComponentConverter*))(Il2CppBase() + 0x142BBA8))(this);
	}
	template <typename T = bool> T CanConvert(uintptr_t objectType) {
		return ((T (*)(LevelComponentConverter*, uintptr_t))(Il2CppBase() + 0x142BBB0))(this, objectType);
	}

};

}
