#pragma once

#include "../mscorlib/System/ValueType.h"
#include "Vec2.h"
#include "../mscorlib/System/Nullable1.h"


class LocalActionStartData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LocalActionStartData"));
	}

	int32_t& LocalId() {
		return *(int32_t*)((uintptr_t)this + 0x0);
	}

	int32_t& ServerId() {
		return *(int32_t*)((uintptr_t)this + 0x4);
	}

	Il2CppString*& ItemName() {
		return *(Il2CppString**)((uintptr_t)this + 0x8);
	}

	int64_t& StartTime() {
		return *(int64_t*)((uintptr_t)this + 0x10);
	}

	float& DurationCoef() {
		return *(float*)((uintptr_t)this + 0x18);
	}

	System::Nullable1<Vec2>*& TargetPosition() {
		return *(System::Nullable1<Vec2>**)((uintptr_t)this + 0x1C);
	}

};};
