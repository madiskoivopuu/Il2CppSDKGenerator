#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "TypeValueComponent`1" 

class SByteValueComponent: TypeValueComponent1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SByteValueComponent"));
	}


	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(SByteValueComponent*, uintptr_t))(Il2CppBase() + 0x135499C))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(SByteValueComponent*, uintptr_t))(Il2CppBase() + 0x1354A08))(this, writer);
	}
	template <typename T = bool> T IsEqualsDefault(uintptr_t blueprintComponent) {
		return ((T (*)(SByteValueComponent*, uintptr_t))(Il2CppBase() + 0x1354A2C))(this, blueprintComponent);
	}

};

}
