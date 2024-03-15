#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IntCountJsonConverter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IntCountJsonConverter"));
	}


	template <typename R = void> R WriteJson(uintptr_t writer, Il2CppObject* value, uintptr_t serializer) {
		return ((R (*)(IntCountJsonConverter*, uintptr_t, Il2CppObject*, uintptr_t))(Il2CppBase() + 0x1469130))(this, writer, value, serializer);
	}
	template <typename R = Il2CppObject*> R ReadJson(uintptr_t reader, uintptr_t objectType, Il2CppObject* existingValue, uintptr_t serializer) {
		return ((R (*)(IntCountJsonConverter*, uintptr_t, uintptr_t, Il2CppObject*, uintptr_t))(Il2CppBase() + 0x1469208))(this, reader, objectType, existingValue, serializer);
	}
	template <typename R = bool> R get_CanRead() {
		return ((R (*)(IntCountJsonConverter*))(Il2CppBase() + 0x1469348))(this);
	}
	template <typename R = bool> R CanConvert(uintptr_t objectType) {
		return ((R (*)(IntCountJsonConverter*, uintptr_t))(Il2CppBase() + 0x1469350))(this, objectType);
	}

};

