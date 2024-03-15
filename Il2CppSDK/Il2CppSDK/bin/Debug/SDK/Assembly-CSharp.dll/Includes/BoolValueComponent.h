#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "TypeValueComponent1.h" 

class BoolValueComponent : public TypeValueComponent1<bool>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BoolValueComponent"));
	}


	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(BoolValueComponent*, uintptr_t))(Il2CppBase() + 0x16C94E0))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(BoolValueComponent*, uintptr_t))(Il2CppBase() + 0x16C954C))(this, writer);
	}
	template <typename R = bool> R IsEqualsDefault(Il2CppObject* blueprintComponent) {
		return ((R (*)(BoolValueComponent*, Il2CppObject*))(Il2CppBase() + 0x16C9570))(this, blueprintComponent);
	}

};

