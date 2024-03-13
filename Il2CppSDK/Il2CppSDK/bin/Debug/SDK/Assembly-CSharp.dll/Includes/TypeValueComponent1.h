#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TypeValueComponent1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TypeValueComponent`1"));
	}

	template <typename T = uintptr_t> T& Value() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = void> T CopyTo(Il2CppObject* targetObject) {
		return ((T (*)(TypeValueComponent1*, Il2CppObject*))(Il2CppBase() + 0x0))(this, targetObject);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(TypeValueComponent1*, uintptr_t))(Il2CppBase() + 0x0))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(TypeValueComponent1*, uintptr_t))(Il2CppBase() + 0x0))(this, writer);
	}

};

