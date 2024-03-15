#pragma once
#include <Il2Cpp/Il2Cpp.h>

template <typename T>
class TypeTypeComponent1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TypeTypeComponent`1"));
	}

	 T& Type() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(TypeTypeComponent1*, Il2CppObject*))(Il2CppBase() + 0x0))(this, targetObject);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(TypeTypeComponent1*, uintptr_t))(Il2CppBase() + 0x0))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(TypeTypeComponent1*, uintptr_t))(Il2CppBase() + 0x0))(this, writer);
	}

};

