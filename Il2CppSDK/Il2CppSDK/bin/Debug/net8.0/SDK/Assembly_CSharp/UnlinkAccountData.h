#pragma once

#include "../mscorlib/System/ValueType.h"
#include "LinkType.h"


class UnlinkAccountData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UnlinkAccountData"));
	}

	LinkType& Type() {
		return *(LinkType*)((uintptr_t)this + 0x0);
	}

	Il2CppString*& Id() {
		return *(Il2CppString**)((uintptr_t)this + 0x8);
	}

};};
