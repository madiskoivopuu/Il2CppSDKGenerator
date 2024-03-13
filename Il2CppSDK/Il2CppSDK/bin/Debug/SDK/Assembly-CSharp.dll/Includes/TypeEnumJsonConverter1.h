#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TypeEnumJsonConverter1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TypeEnumJsonConverter`1"));
	}


	template <typename T = void> T WriteJson(uintptr_t writer, Il2CppObject* value, uintptr_t serializer) {
		return ((T (*)(TypeEnumJsonConverter1*, uintptr_t, Il2CppObject*, uintptr_t))(Il2CppBase() + 0x0))(this, writer, value, serializer);
	}
	template <typename T = Il2CppObject*> T ReadJson(uintptr_t reader, uintptr_t objectType, Il2CppObject* existingValue, uintptr_t serializer) {
		return ((T (*)(TypeEnumJsonConverter1*, uintptr_t, uintptr_t, Il2CppObject*, uintptr_t))(Il2CppBase() + 0x0))(this, reader, objectType, existingValue, serializer);
	}
	template <typename T = bool> T get_CanRead() {
		return ((T (*)(TypeEnumJsonConverter1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T CanConvert(uintptr_t objectType) {
		return ((T (*)(TypeEnumJsonConverter1*, uintptr_t))(Il2CppBase() + 0x0))(this, objectType);
	}

};

