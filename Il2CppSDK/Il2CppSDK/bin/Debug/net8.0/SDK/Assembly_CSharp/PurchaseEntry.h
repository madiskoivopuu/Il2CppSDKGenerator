#pragma once

#include "../mscorlib/System/Object.h"


class PurchaseEntry : public Il2CppObject {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PurchaseEntry"));
	}

	Il2CppString*& ProductName() {
		return *(Il2CppString**)((uintptr_t)this + 0x10);
	}

	Il2CppString*& ProductId() {
		return *(Il2CppString**)((uintptr_t)this + 0x18);
	}

};};
