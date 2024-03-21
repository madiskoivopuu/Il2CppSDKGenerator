#pragma once

#include "../mscorlib/System/ValueType.h"
#include "ActionType.h"
#include "Vec2.h"
#include "../mscorlib/System/Nullable1.h"
#include "../mscorlib/System/Int32.h"


class ActionData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ActionData"));
	}

	int32_t& Id() {
		return *(int32_t*)((uintptr_t)this + 0x0);
	}

	ActionType& ActionType() {
		return *(ActionType*)((uintptr_t)this + 0x4);
	}

	Il2CppString*& ActionName() {
		return *(Il2CppString**)((uintptr_t)this + 0x8);
	}

	int32_t& ActorId() {
		return *(int32_t*)((uintptr_t)this + 0x10);
	}

	int32_t& TargetId() {
		return *(int32_t*)((uintptr_t)this + 0x14);
	}

	Il2CppString*& ItemName() {
		return *(Il2CppString**)((uintptr_t)this + 0x18);
	}

	int32_t& InventoryItemId() {
		return *(int32_t*)((uintptr_t)this + 0x20);
	}

	float& Angle() {
		return *(float*)((uintptr_t)this + 0x24);
	}

	int64_t& StartTime() {
		return *(int64_t*)((uintptr_t)this + 0x28);
	}

	float& DurationCoef() {
		return *(float*)((uintptr_t)this + 0x30);
	}

	System::Nullable1<Vec2>*& TargetPosition() {
		return *(System::Nullable1<Vec2>**)((uintptr_t)this + 0x34);
	}

	System::Nullable1<int32_t>*& SequenceValue() {
		return *(System::Nullable1<int32_t>**)((uintptr_t)this + 0x40);
	}

};};
