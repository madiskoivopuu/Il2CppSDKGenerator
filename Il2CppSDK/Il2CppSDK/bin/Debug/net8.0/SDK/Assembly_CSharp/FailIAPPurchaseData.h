#pragma once

#include "../mscorlib/System/ValueType.h"


class FailIAPPurchaseData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FailIAPPurchaseData"));
	}

	Il2CppString*& ProductName() {
		return *(Il2CppString**)((uintptr_t)this + 0x0);
	}

	Il2CppString*& ProductId() {
		return *(Il2CppString**)((uintptr_t)this + 0x8);
	}

	Il2CppString*& FailReason() {
		return *(Il2CppString**)((uintptr_t)this + 0x10);
	}

};};
