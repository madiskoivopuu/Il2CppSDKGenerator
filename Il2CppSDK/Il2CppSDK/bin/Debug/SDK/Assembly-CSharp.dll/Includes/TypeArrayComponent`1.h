#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TypeArrayComponent1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TypeArrayComponent`1"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& Values() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = bool> T Contains(uintptr_t value) {
		return ((T (*)(TypeArrayComponent1*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(TypeArrayComponent1*, uintptr_t))(Il2CppBase() + 0x0))(this, targetObject);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(TypeArrayComponent1*, uintptr_t))(Il2CppBase() + 0x0))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(TypeArrayComponent1*, uintptr_t))(Il2CppBase() + 0x0))(this, writer);
	}

};

}
