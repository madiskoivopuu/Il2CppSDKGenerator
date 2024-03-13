#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BaseInventoryContentJsonConverter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BaseInventoryContentJsonConverter"));
	}


	template <typename T = void> T WriteJson(uintptr_t writer, Il2CppObject* value, uintptr_t serializer) {
		return ((T (*)(BaseInventoryContentJsonConverter*, uintptr_t, Il2CppObject*, uintptr_t))(Il2CppBase() + 0x166D3C8))(this, writer, value, serializer);
	}
	template <typename T = Il2CppObject*> T ReadJson(uintptr_t reader, uintptr_t objectType, Il2CppObject* existingValue, uintptr_t serializer) {
		return ((T (*)(BaseInventoryContentJsonConverter*, uintptr_t, uintptr_t, Il2CppObject*, uintptr_t))(Il2CppBase() + 0x166D830))(this, reader, objectType, existingValue, serializer);
	}
	template <typename T = bool> T get_CanRead() {
		return ((T (*)(BaseInventoryContentJsonConverter*))(Il2CppBase() + 0x166DD54))(this);
	}
	template <typename T = bool> T CanConvert(uintptr_t objectType) {
		return ((T (*)(BaseInventoryContentJsonConverter*, uintptr_t))(Il2CppBase() + 0x166DD5C))(this, objectType);
	}

};

