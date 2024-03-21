#pragma once

#include "../mscorlib/System/ValueType.h"
#include "ProtoModels/PurchaseProvider.h"


class ValidatePurchaseData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ValidatePurchaseData"));
	}

	Il2CppString*& ProductId() {
		return *(Il2CppString**)((uintptr_t)this + 0x0);
	}

	Il2CppString*& Payload() {
		return *(Il2CppString**)((uintptr_t)this + 0x8);
	}

	Il2CppString*& TransactionId() {
		return *(Il2CppString**)((uintptr_t)this + 0x10);
	}

	ProtoModels::PurchaseProvider& Store() {
		return *(ProtoModels::PurchaseProvider*)((uintptr_t)this + 0x18);
	}

	float& USDPrice() {
		return *(float*)((uintptr_t)this + 0x1C);
	}

	Il2CppString*& HuaweiToken() {
		return *(Il2CppString**)((uintptr_t)this + 0x20);
	}

};};
