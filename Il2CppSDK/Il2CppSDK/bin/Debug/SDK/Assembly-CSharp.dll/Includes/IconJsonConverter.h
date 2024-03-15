#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IconJsonConverter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IconJsonConverter"));
	}


	template <typename R = void> R WriteJson(uintptr_t writer, Il2CppObject* value, uintptr_t serializer) {
		return ((R (*)(IconJsonConverter*, uintptr_t, Il2CppObject*, uintptr_t))(Il2CppBase() + 0x1E3D760))(this, writer, value, serializer);
	}
	template <typename R = Il2CppObject*> R ReadJson(uintptr_t reader, uintptr_t objectType, Il2CppObject* existingValue, uintptr_t serializer) {
		return ((R (*)(IconJsonConverter*, uintptr_t, uintptr_t, Il2CppObject*, uintptr_t))(Il2CppBase() + 0x1E3D804))(this, reader, objectType, existingValue, serializer);
	}
	template <typename R = bool> R get_CanRead() {
		return ((R (*)(IconJsonConverter*))(Il2CppBase() + 0x1E3D950))(this);
	}
	template <typename R = bool> R CanConvert(uintptr_t objectType) {
		return ((R (*)(IconJsonConverter*, uintptr_t))(Il2CppBase() + 0x1E3D958))(this, objectType);
	}

};

