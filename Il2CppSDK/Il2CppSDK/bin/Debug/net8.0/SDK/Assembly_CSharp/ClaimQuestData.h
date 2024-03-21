#pragma once

#include "../mscorlib/System/ValueType.h"
#include "GiveRewardResult.h"


class ClaimQuestData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClaimQuestData"));
	}

	Il2CppString*& Name() {
		return *(Il2CppString**)((uintptr_t)this + 0x0);
	}

	GiveRewardResult& Result() {
		return *(GiveRewardResult*)((uintptr_t)this + 0x8);
	}

};};
