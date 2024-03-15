#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DecimalJsonConverter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DecimalJsonConverter"));
	}


	template <typename R = bool> R get_CanRead() {
		return ((R (*)(DecimalJsonConverter*))(Il2CppBase() + 0xEB628C))(this);
	}
	template <typename R = Il2CppObject*> R ReadJson(uintptr_t reader, uintptr_t objectType, Il2CppObject* existingValue, uintptr_t serializer) {
		return ((R (*)(DecimalJsonConverter*, uintptr_t, uintptr_t, Il2CppObject*, uintptr_t))(Il2CppBase() + 0xEB6294))(this, reader, objectType, existingValue, serializer);
	}
	template <typename R = bool> R CanConvert(uintptr_t objectType) {
		return ((R (*)(DecimalJsonConverter*, uintptr_t))(Il2CppBase() + 0xEB62E8))(this, objectType);
	}
	template <typename R = void> R WriteJson(uintptr_t writer, Il2CppObject* value, uintptr_t serializer) {
		return ((R (*)(DecimalJsonConverter*, uintptr_t, Il2CppObject*, uintptr_t))(Il2CppBase() + 0xEB6374))(this, writer, value, serializer);
	}
	template <typename R = bool> static R IsWholeValue(Il2CppObject* value) {
		return ((R (*)(void *, Il2CppObject*))(Il2CppBase() + 0xEB6480))(0, value);
	}

};

