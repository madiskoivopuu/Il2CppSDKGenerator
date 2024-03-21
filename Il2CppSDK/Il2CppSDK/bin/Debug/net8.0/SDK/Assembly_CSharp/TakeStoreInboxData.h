#pragma once

#include "../mscorlib/System/ValueType.h"


class TakeStoreInboxData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TakeStoreInboxData"));
	}

	int64_t& Id() {
		return *(int64_t*)((uintptr_t)this + 0x0);
	}

};};
