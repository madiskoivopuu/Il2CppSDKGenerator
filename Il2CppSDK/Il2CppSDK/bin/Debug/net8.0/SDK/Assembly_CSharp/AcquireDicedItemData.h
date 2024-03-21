#pragma once

#include "../mscorlib/System/ValueType.h"


class AcquireDicedItemData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AcquireDicedItemData"));
	}

	Il2CppString*& EntityName() {
		return *(Il2CppString**)((uintptr_t)this + 0x0);
	}

	int64_t& MailMessageId() {
		return *(int64_t*)((uintptr_t)this + 0x8);
	}

};};
