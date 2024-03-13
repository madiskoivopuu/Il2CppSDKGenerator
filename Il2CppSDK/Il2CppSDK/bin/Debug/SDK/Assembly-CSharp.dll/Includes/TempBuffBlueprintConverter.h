#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TempBuffBlueprintConverter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TempBuffBlueprintConverter"));
	}


	template <typename T = Il2CppArray<uintptr_t>*> static T get_componentNames() {
		return ((T (*)(void *))(Il2CppBase() + 0x16AE218))(0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T get_componentTypes() {
		return ((T (*)(void *))(Il2CppBase() + 0x16AE27C))(0);
	}
	template <typename T = bool> T CanConvert(uintptr_t objectType) {
		return ((T (*)(TempBuffBlueprintConverter*, uintptr_t))(Il2CppBase() + 0x16AE2E0))(this, objectType);
	}
	template <typename T = void> T WriteJson(uintptr_t writer, Il2CppObject* value, uintptr_t serializer) {
		return ((T (*)(TempBuffBlueprintConverter*, uintptr_t, Il2CppObject*, uintptr_t))(Il2CppBase() + 0x16AE36C))(this, writer, value, serializer);
	}
	template <typename T = Il2CppObject*> T ReadJson(uintptr_t reader, uintptr_t objectType, Il2CppObject* existingValue, uintptr_t serializer) {
		return ((T (*)(TempBuffBlueprintConverter*, uintptr_t, uintptr_t, Il2CppObject*, uintptr_t))(Il2CppBase() + 0x16AE3AC))(this, reader, objectType, existingValue, serializer);
	}

};

