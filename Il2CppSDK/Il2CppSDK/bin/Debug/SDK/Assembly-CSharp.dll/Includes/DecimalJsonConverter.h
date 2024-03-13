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
	template <typename T = Il2CppObject*> T ReadJson(uintptr_t reader, uintptr_t objectType, Il2CppObject* existingValue, uintptr_t serializer) {
		return ((T (*)(DecimalJsonConverter*, uintptr_t, uintptr_t, Il2CppObject*, uintptr_t))(Il2CppBase() + 0xEB6294))(this, reader, objectType, existingValue, serializer);
	}
	template <typename T = bool> T CanConvert(uintptr_t objectType) {
		return ((T (*)(DecimalJsonConverter*, uintptr_t))(Il2CppBase() + 0xEB62E8))(this, objectType);
	}
	template <typename T = void> T WriteJson(uintptr_t writer, Il2CppObject* value, uintptr_t serializer) {
		return ((T (*)(DecimalJsonConverter*, uintptr_t, Il2CppObject*, uintptr_t))(Il2CppBase() + 0xEB6374))(this, writer, value, serializer);
	}
	template <typename T = bool> static T IsWholeValue(Il2CppObject* value) {
		return ((T (*)(void *, Il2CppObject*))(Il2CppBase() + 0xEB6480))(0, value);
	}

};

