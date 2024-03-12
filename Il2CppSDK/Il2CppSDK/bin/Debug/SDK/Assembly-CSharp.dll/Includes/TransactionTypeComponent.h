#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "TypeTypeComponent`1" 

class TransactionTypeComponent: TypeTypeComponent1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TransactionTypeComponent"));
	}


	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(TransactionTypeComponent*, uintptr_t))(Il2CppBase() + 0x1522C10))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(TransactionTypeComponent*, uintptr_t))(Il2CppBase() + 0x1522C8C))(this, writer);
	}
	template <typename T = bool> T IsEqualsDefault(uintptr_t blueprintComponent) {
		return ((T (*)(TransactionTypeComponent*, uintptr_t))(Il2CppBase() + 0x1522CB0))(this, blueprintComponent);
	}

};

}
