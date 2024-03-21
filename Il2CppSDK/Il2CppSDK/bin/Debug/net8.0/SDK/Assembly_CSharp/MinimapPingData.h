#pragma once

#include "../mscorlib/System/ValueType.h"


class MinimapPingData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MinimapPingData"));
	}

	float& XPos() {
		return *(float*)((uintptr_t)this + 0x0);
	}

	float& YPos() {
		return *(float*)((uintptr_t)this + 0x4);
	}

	int32_t& Id() {
		return *(int32_t*)((uintptr_t)this + 0x8);
	}

	int64_t& OwnerId() {
		return *(int64_t*)((uintptr_t)this + 0x10);
	}

};};
