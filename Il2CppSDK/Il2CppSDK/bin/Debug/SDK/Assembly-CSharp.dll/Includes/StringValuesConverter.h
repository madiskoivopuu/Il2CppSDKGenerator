#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StringValuesConverter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StringValuesConverter"));
	}


	template <typename R = void> R WriteJson(uintptr_t writer, Il2CppObject* value, uintptr_t serializer) {
		return ((R (*)(StringValuesConverter*, uintptr_t, Il2CppObject*, uintptr_t))(Il2CppBase() + 0x16A0DFC))(this, writer, value, serializer);
	}
	template <typename R = Il2CppObject*> R ReadJson(uintptr_t reader, uintptr_t objectType, Il2CppObject* existingValue, uintptr_t serializer) {
		return ((R (*)(StringValuesConverter*, uintptr_t, uintptr_t, Il2CppObject*, uintptr_t))(Il2CppBase() + 0x16A0EA0))(this, reader, objectType, existingValue, serializer);
	}
	template <typename R = bool> R get_CanRead() {
		return ((R (*)(StringValuesConverter*))(Il2CppBase() + 0x16A0FF0))(this);
	}
	template <typename R = bool> R CanConvert(uintptr_t objectType) {
		return ((R (*)(StringValuesConverter*, uintptr_t))(Il2CppBase() + 0x16A0FF8))(this, objectType);
	}

};

