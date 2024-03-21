#pragma once

#include "../mscorlib/System/Object.h"

class PurchaseEntry*;

class PurchaseHistoryComponent : public Il2CppObject {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PurchaseHistoryComponent"));
	}

	Il2CppList<PurchaseEntry*>*& Entries() {
		return *(Il2CppList<PurchaseEntry*>**)((uintptr_t)this + 0x10);
	}

};};
