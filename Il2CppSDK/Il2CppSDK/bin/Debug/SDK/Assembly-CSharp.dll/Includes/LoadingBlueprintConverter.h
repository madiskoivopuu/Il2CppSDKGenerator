#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LoadingBlueprintConverter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LoadingBlueprintConverter"));
	}


	template <typename T = Il2CppArray<uintptr_t>*> static T get_componentNames() {
		return ((T (*)(void *))(Il2CppBase() + 0x1430FC0))(0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T get_componentTypes() {
		return ((T (*)(void *))(Il2CppBase() + 0x1431024))(0);
	}
	template <typename T = bool> T CanConvert(uintptr_t objectType) {
		return ((T (*)(LoadingBlueprintConverter*, uintptr_t))(Il2CppBase() + 0x1431088))(this, objectType);
	}
	template <typename T = void> T WriteJson(uintptr_t writer, Il2CppObject* value, uintptr_t serializer) {
		return ((T (*)(LoadingBlueprintConverter*, uintptr_t, Il2CppObject*, uintptr_t))(Il2CppBase() + 0x1431114))(this, writer, value, serializer);
	}
	template <typename T = Il2CppObject*> T ReadJson(uintptr_t reader, uintptr_t objectType, Il2CppObject* existingValue, uintptr_t serializer) {
		return ((T (*)(LoadingBlueprintConverter*, uintptr_t, uintptr_t, Il2CppObject*, uintptr_t))(Il2CppBase() + 0x1431154))(this, reader, objectType, existingValue, serializer);
	}

};

