#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Serializer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Serializer"));
	}

	template <typename R = uintptr_t> R& builder() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = Il2CppString*> static R Serialize(Il2CppObject* obj) {
		return ((R (*)(void *, Il2CppObject*))(Il2CppBase() + 0x1158328))(0, obj);
	}
	template <typename R = void> R SerializeValue(Il2CppObject* value) {
		return ((R (*)(Serializer*, Il2CppObject*))(Il2CppBase() + 0x11583A0))(this, value);
	}
	template <typename R = void> R SerializeObject(uintptr_t obj) {
		return ((R (*)(Serializer*, uintptr_t))(Il2CppBase() + 0x1158B5C))(this, obj);
	}
	template <typename R = void> R SerializeArray(uintptr_t anArray) {
		return ((R (*)(Serializer*, uintptr_t))(Il2CppBase() + 0x1158854))(this, anArray);
	}
	template <typename R = void> R SerializeString(Il2CppString* str) {
		return ((R (*)(Serializer*, Il2CppString*))(Il2CppBase() + 0x115858C))(this, str);
	}
	template <typename R = void> R SerializeOther(Il2CppObject* value) {
		return ((R (*)(Serializer*, Il2CppObject*))(Il2CppBase() + 0x1158F9C))(this, value);
	}

};

