#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StoreCategoriesBlueprintConverter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StoreCategoriesBlueprintConverter"));
	}


	template <typename R = Il2CppArray<Il2CppString*>*> static R get_componentNames() {
		return ((R (*)(void *))(Il2CppBase() + 0x141A410))(0);
	}
	template <typename R = Il2CppArray<uintptr_t>*> static R get_componentTypes() {
		return ((R (*)(void *))(Il2CppBase() + 0x141A474))(0);
	}
	template <typename R = bool> R CanConvert(uintptr_t objectType) {
		return ((R (*)(StoreCategoriesBlueprintConverter*, uintptr_t))(Il2CppBase() + 0x141A4D8))(this, objectType);
	}
	template <typename R = void> R WriteJson(uintptr_t writer, Il2CppObject* value, uintptr_t serializer) {
		return ((R (*)(StoreCategoriesBlueprintConverter*, uintptr_t, Il2CppObject*, uintptr_t))(Il2CppBase() + 0x141A564))(this, writer, value, serializer);
	}
	template <typename R = Il2CppObject*> R ReadJson(uintptr_t reader, uintptr_t objectType, Il2CppObject* existingValue, uintptr_t serializer) {
		return ((R (*)(StoreCategoriesBlueprintConverter*, uintptr_t, uintptr_t, Il2CppObject*, uintptr_t))(Il2CppBase() + 0x141A5A4))(this, reader, objectType, existingValue, serializer);
	}

};
