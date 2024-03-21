#pragma once

#include "../mscorlib/System/ValueType.h"


class ChangePvpClanRelationData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChangePvpClanRelationData"));
	}

	bool& SetWar() {
		return *(bool*)((uintptr_t)this + 0x0);
	}

	int64_t& TargetClanId() {
		return *(int64_t*)((uintptr_t)this + 0x8);
	}

};};
