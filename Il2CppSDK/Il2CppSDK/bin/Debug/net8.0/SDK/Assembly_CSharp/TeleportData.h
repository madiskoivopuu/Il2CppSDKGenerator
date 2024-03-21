#pragma once

#include "../mscorlib/System/ValueType.h"
#include "../mscorlib/System/Nullable1.h"
#include "../mscorlib/System/Single.h"


class TeleportData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TeleportData"));
	}

	int32_t& Id() {
		return *(int32_t*)((uintptr_t)this + 0x0);
	}

	int64_t& Ticks() {
		return *(int64_t*)((uintptr_t)this + 0x8);
	}

	float& PosX() {
		return *(float*)((uintptr_t)this + 0x10);
	}

	float& PosY() {
		return *(float*)((uintptr_t)this + 0x14);
	}

	System::Nullable1<float>*& Rotation() {
		return *(System::Nullable1<float>**)((uintptr_t)this + 0x18);
	}

};};
