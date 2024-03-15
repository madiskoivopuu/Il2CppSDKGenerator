#pragma once
#include <Il2Cpp/Il2Cpp.h>

template <typename T>
class TypeArrayComponent1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TypeArrayComponent`1"));
	}

	 Il2CppArray<T>*& Values() {
		return *(Il2CppArray<T>**)((uintptr_t)this + 0x0);
	}

	template <typename R = bool> R Contains(T value) {
		return ((R (*)(TypeArrayComponent1*, T))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(TypeArrayComponent1*, Il2CppObject*))(Il2CppBase() + 0x0))(this, targetObject);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(TypeArrayComponent1*, uintptr_t))(Il2CppBase() + 0x0))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(TypeArrayComponent1*, uintptr_t))(Il2CppBase() + 0x0))(this, writer);
	}

};

