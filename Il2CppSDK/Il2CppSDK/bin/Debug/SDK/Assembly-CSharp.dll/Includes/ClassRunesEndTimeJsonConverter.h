#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ClassRunesEndTimeJsonConverter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClassRunesEndTimeJsonConverter"));
	}


	template <typename T = void> T WriteJson(uintptr_t writer, Il2CppObject* value, uintptr_t serializer) {
		return ((T (*)(ClassRunesEndTimeJsonConverter*, uintptr_t, Il2CppObject*, uintptr_t))(Il2CppBase() + 0x18F6DE0))(this, writer, value, serializer);
	}
	template <typename T = Il2CppObject*> T ReadJson(uintptr_t reader, uintptr_t objectType, Il2CppObject* existingValue, uintptr_t serializer) {
		return ((T (*)(ClassRunesEndTimeJsonConverter*, uintptr_t, uintptr_t, Il2CppObject*, uintptr_t))(Il2CppBase() + 0x18F7460))(this, reader, objectType, existingValue, serializer);
	}
	template <typename T = bool> T get_CanRead() {
		return ((T (*)(ClassRunesEndTimeJsonConverter*))(Il2CppBase() + 0x18F7820))(this);
	}
	template <typename T = bool> T CanConvert(uintptr_t objectType) {
		return ((T (*)(ClassRunesEndTimeJsonConverter*, uintptr_t))(Il2CppBase() + 0x18F7828))(this, objectType);
	}

};

