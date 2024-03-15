#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StringNamesConverter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StringNamesConverter"));
	}


	template <typename R = void> R WriteJson(uintptr_t writer, Il2CppObject* value, uintptr_t serializer) {
		return ((R (*)(StringNamesConverter*, uintptr_t, Il2CppObject*, uintptr_t))(Il2CppBase() + 0x16A0674))(this, writer, value, serializer);
	}
	template <typename R = Il2CppObject*> R ReadJson(uintptr_t reader, uintptr_t objectType, Il2CppObject* existingValue, uintptr_t serializer) {
		return ((R (*)(StringNamesConverter*, uintptr_t, uintptr_t, Il2CppObject*, uintptr_t))(Il2CppBase() + 0x16A0718))(this, reader, objectType, existingValue, serializer);
	}
	template <typename R = bool> R get_CanRead() {
		return ((R (*)(StringNamesConverter*))(Il2CppBase() + 0x16A0868))(this);
	}
	template <typename R = bool> R CanConvert(uintptr_t objectType) {
		return ((R (*)(StringNamesConverter*, uintptr_t))(Il2CppBase() + 0x16A0870))(this, objectType);
	}

};

