#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "TypeValueComponent1.h" 

class BoolValueComponent : public TypeValueComponent1<bool>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BoolValueComponent"));
	}


	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(BoolValueComponent*, uintptr_t))(Il2CppBase() + 0x16C94E0))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(BoolValueComponent*, uintptr_t))(Il2CppBase() + 0x16C954C))(this, writer);
	}
	template <typename T = bool> T IsEqualsDefault(Il2CppObject* blueprintComponent) {
		return ((T (*)(BoolValueComponent*, Il2CppObject*))(Il2CppBase() + 0x16C9570))(this, blueprintComponent);
	}

};

