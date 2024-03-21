#pragma once

#include "../mscorlib/System/ValueType.h"
#include "ServiceMessage.h"


class SkipQuestData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SkipQuestData"));
	}

	Il2CppString*& Name() {
		return *(Il2CppString**)((uintptr_t)this + 0x0);
	}

	ServiceMessage& Result() {
		return *(ServiceMessage*)((uintptr_t)this + 0x8);
	}

};};
