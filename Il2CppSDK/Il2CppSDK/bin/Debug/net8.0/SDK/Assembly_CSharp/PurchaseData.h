#pragma once

#include "../mscorlib/System/ValueType.h"
#include "ExternalStore.h"
#include "PurchaseMethod.h"


class PurchaseData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PurchaseData"));
	}

	ExternalStore& Store() {
		return *(ExternalStore*)((uintptr_t)this + 0x0);
	}

	PurchaseMethod& Method() {
		return *(PurchaseMethod*)((uintptr_t)this + 0x4);
	}

	Il2CppString*& BlueprintName() {
		return *(Il2CppString**)((uintptr_t)this + 0x8);
	}

	Il2CppString*& ProductId() {
		return *(Il2CppString**)((uintptr_t)this + 0x10);
	}

	Il2CppString*& Payload() {
		return *(Il2CppString**)((uintptr_t)this + 0x18);
	}

	Il2CppString*& TransactionId() {
		return *(Il2CppString**)((uintptr_t)this + 0x20);
	}

};};
