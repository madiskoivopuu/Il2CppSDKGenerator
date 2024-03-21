#pragma once

#include "../mscorlib/System/ValueType.h"
#include "LinkType.h"


class LinkAccountData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LinkAccountData"));
	}

	LinkType& Type() {
		return *(LinkType*)((uintptr_t)this + 0x0);
	}

	Il2CppString*& Id() {
		return *(Il2CppString**)((uintptr_t)this + 0x8);
	}

	bool& IsForce() {
		return *(bool*)((uintptr_t)this + 0x10);
	}

	int64_t& TargetUserId() {
		return *(int64_t*)((uintptr_t)this + 0x18);
	}

};};
