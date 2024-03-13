#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StringListNamesConverter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StringListNamesConverter"));
	}


	template <typename T = void> T WriteJson(uintptr_t writer, Il2CppObject* value, uintptr_t serializer) {
		return ((T (*)(StringListNamesConverter*, uintptr_t, Il2CppObject*, uintptr_t))(Il2CppBase() + 0x169FB54))(this, writer, value, serializer);
	}
	template <typename T = Il2CppObject*> T ReadJson(uintptr_t reader, uintptr_t objectType, Il2CppObject* existingValue, uintptr_t serializer) {
		return ((T (*)(StringListNamesConverter*, uintptr_t, uintptr_t, Il2CppObject*, uintptr_t))(Il2CppBase() + 0x169FBF8))(this, reader, objectType, existingValue, serializer);
	}
	template <typename T = bool> T get_CanRead() {
		return ((T (*)(StringListNamesConverter*))(Il2CppBase() + 0x169FD48))(this);
	}
	template <typename T = bool> T CanConvert(uintptr_t objectType) {
		return ((T (*)(StringListNamesConverter*, uintptr_t))(Il2CppBase() + 0x169FD50))(this, objectType);
	}

};

