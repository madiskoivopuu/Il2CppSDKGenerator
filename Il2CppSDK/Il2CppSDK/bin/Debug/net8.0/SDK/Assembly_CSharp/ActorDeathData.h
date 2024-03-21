#pragma once

#include "../mscorlib/System/ValueType.h"
#include "DamageStatType.h"


class ActorDeathData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ActorDeathData"));
	}

	int32_t& EntityId() {
		return *(int32_t*)((uintptr_t)this + 0x0);
	}

	int64_t& AccountId() {
		return *(int64_t*)((uintptr_t)this + 0x8);
	}

	int64_t& TimeOut() {
		return *(int64_t*)((uintptr_t)this + 0x10);
	}

	DamageStatType& DamageStat() {
		return *(DamageStatType*)((uintptr_t)this + 0x18);
	}

};};
