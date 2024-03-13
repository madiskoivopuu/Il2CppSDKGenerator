#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Serializer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Serializer"));
	}

	template <typename T = uintptr_t> T& builder() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = Il2CppString*> static T Serialize(Il2CppObject* obj) {
		return ((T (*)(void *, Il2CppObject*))(Il2CppBase() + 0x1158328))(0, obj);
	}
	template <typename T = void> T SerializeValue(Il2CppObject* value) {
		return ((T (*)(Serializer*, Il2CppObject*))(Il2CppBase() + 0x11583A0))(this, value);
	}
	template <typename T = void> T SerializeObject(uintptr_t obj) {
		return ((T (*)(Serializer*, uintptr_t))(Il2CppBase() + 0x1158B5C))(this, obj);
	}
	template <typename T = void> T SerializeArray(uintptr_t anArray) {
		return ((T (*)(Serializer*, uintptr_t))(Il2CppBase() + 0x1158854))(this, anArray);
	}
	template <typename T = void> T SerializeString(Il2CppString* str) {
		return ((T (*)(Serializer*, Il2CppString*))(Il2CppBase() + 0x115858C))(this, str);
	}
	template <typename T = void> T SerializeOther(Il2CppObject* value) {
		return ((T (*)(Serializer*, Il2CppObject*))(Il2CppBase() + 0x1158F9C))(this, value);
	}

};

