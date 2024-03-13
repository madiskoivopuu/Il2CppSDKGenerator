#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StringNamesConverter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StringNamesConverter"));
	}


	template <typename T = void> T WriteJson(uintptr_t writer, Il2CppObject* value, uintptr_t serializer) {
		return ((T (*)(StringNamesConverter*, uintptr_t, Il2CppObject*, uintptr_t))(Il2CppBase() + 0x16A0674))(this, writer, value, serializer);
	}
	template <typename T = Il2CppObject*> T ReadJson(uintptr_t reader, uintptr_t objectType, Il2CppObject* existingValue, uintptr_t serializer) {
		return ((T (*)(StringNamesConverter*, uintptr_t, uintptr_t, Il2CppObject*, uintptr_t))(Il2CppBase() + 0x16A0718))(this, reader, objectType, existingValue, serializer);
	}
	template <typename T = bool> T get_CanRead() {
		return ((T (*)(StringNamesConverter*))(Il2CppBase() + 0x16A0868))(this);
	}
	template <typename T = bool> T CanConvert(uintptr_t objectType) {
		return ((T (*)(StringNamesConverter*, uintptr_t))(Il2CppBase() + 0x16A0870))(this, objectType);
	}

};

