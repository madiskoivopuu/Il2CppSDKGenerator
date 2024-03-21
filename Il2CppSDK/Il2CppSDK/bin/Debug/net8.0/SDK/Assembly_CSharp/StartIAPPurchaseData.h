#pragma once

#include "../mscorlib/System/ValueType.h"


class StartIAPPurchaseData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StartIAPPurchaseData"));
	}

	Il2CppString*& ProductName() {
		return *(Il2CppString**)((uintptr_t)this + 0x0);
	}

	Il2CppString*& ProductId() {
		return *(Il2CppString**)((uintptr_t)this + 0x8);
	}

};};
