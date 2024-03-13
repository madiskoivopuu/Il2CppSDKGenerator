#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IntCountJsonConverter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IntCountJsonConverter"));
	}


	template <typename T = void> T WriteJson(uintptr_t writer, Il2CppObject* value, uintptr_t serializer) {
		return ((T (*)(IntCountJsonConverter*, uintptr_t, Il2CppObject*, uintptr_t))(Il2CppBase() + 0x1469130))(this, writer, value, serializer);
	}
	template <typename T = Il2CppObject*> T ReadJson(uintptr_t reader, uintptr_t objectType, Il2CppObject* existingValue, uintptr_t serializer) {
		return ((T (*)(IntCountJsonConverter*, uintptr_t, uintptr_t, Il2CppObject*, uintptr_t))(Il2CppBase() + 0x1469208))(this, reader, objectType, existingValue, serializer);
	}
	template <typename T = bool> T get_CanRead() {
		return ((T (*)(IntCountJsonConverter*))(Il2CppBase() + 0x1469348))(this);
	}
	template <typename T = bool> T CanConvert(uintptr_t objectType) {
		return ((T (*)(IntCountJsonConverter*, uintptr_t))(Il2CppBase() + 0x1469350))(this, objectType);
	}

};

