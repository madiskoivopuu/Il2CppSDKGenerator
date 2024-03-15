#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "TypeTypeComponent1.h" 
#include "TransactionType.h" 

class TransactionTypeComponent : public TypeTypeComponent1<TransactionType*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TransactionTypeComponent"));
	}


	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(TransactionTypeComponent*, uintptr_t))(Il2CppBase() + 0x1522C10))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(TransactionTypeComponent*, uintptr_t))(Il2CppBase() + 0x1522C8C))(this, writer);
	}
	template <typename R = bool> R IsEqualsDefault(Il2CppObject* blueprintComponent) {
		return ((R (*)(TransactionTypeComponent*, Il2CppObject*))(Il2CppBase() + 0x1522CB0))(this, blueprintComponent);
	}

};

