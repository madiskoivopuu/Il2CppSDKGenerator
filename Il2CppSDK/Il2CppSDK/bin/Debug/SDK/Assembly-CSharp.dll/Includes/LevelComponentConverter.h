#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LevelComponentConverter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LevelComponentConverter"));
	}


	template <typename R = void> R WriteJson(uintptr_t writer, Il2CppObject* value, uintptr_t serializer) {
		return ((R (*)(LevelComponentConverter*, uintptr_t, Il2CppObject*, uintptr_t))(Il2CppBase() + 0x142B91C))(this, writer, value, serializer);
	}
	template <typename R = Il2CppObject*> R ReadJson(uintptr_t reader, uintptr_t objectType, Il2CppObject* existingValue, uintptr_t serializer) {
		return ((R (*)(LevelComponentConverter*, uintptr_t, uintptr_t, Il2CppObject*, uintptr_t))(Il2CppBase() + 0x142BA68))(this, reader, objectType, existingValue, serializer);
	}
	template <typename R = bool> R get_CanRead() {
		return ((R (*)(LevelComponentConverter*))(Il2CppBase() + 0x142BBA8))(this);
	}
	template <typename R = bool> R CanConvert(uintptr_t objectType) {
		return ((R (*)(LevelComponentConverter*, uintptr_t))(Il2CppBase() + 0x142BBB0))(this, objectType);
	}

};

