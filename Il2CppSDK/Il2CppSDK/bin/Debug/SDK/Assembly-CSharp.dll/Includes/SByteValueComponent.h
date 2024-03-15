#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "TypeValueComponent1.h" 

class SByteValueComponent : public TypeValueComponent1<int8_t>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SByteValueComponent"));
	}


	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(SByteValueComponent*, uintptr_t))(Il2CppBase() + 0x135499C))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(SByteValueComponent*, uintptr_t))(Il2CppBase() + 0x1354A08))(this, writer);
	}
	template <typename R = bool> R IsEqualsDefault(Il2CppObject* blueprintComponent) {
		return ((R (*)(SByteValueComponent*, Il2CppObject*))(Il2CppBase() + 0x1354A2C))(this, blueprintComponent);
	}

};

