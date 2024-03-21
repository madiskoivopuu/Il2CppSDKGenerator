#pragma once

#include "../mscorlib/System/ValueType.h"
#include "DamageType.h"
#include "ActionType.h"


class ChangeHealthData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChangeHealthData"));
	}

	int32_t& TargetId() {
		return *(int32_t*)((uintptr_t)this + 0x0);
	}

	int32_t& ActorId() {
		return *(int32_t*)((uintptr_t)this + 0x4);
	}

	int32_t& SourceId() {
		return *(int32_t*)((uintptr_t)this + 0x8);
	}

	float& Delta() {
		return *(float*)((uintptr_t)this + 0xC);
	}

	float& Blocked() {
		return *(float*)((uintptr_t)this + 0x10);
	}

	float& Shielded() {
		return *(float*)((uintptr_t)this + 0x14);
	}

	DamageType& DamageType() {
		return *(DamageType*)((uintptr_t)this + 0x18);
	}

	ActionType& ActionType() {
		return *(ActionType*)((uintptr_t)this + 0x20);
	}

};};
