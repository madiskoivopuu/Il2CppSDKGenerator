#pragma once

#include "../mscorlib/System/ValueType.h"


class ExtractWorkData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ExtractWorkData"));
	}

	int32_t& Id() {
		return *(int32_t*)((uintptr_t)this + 0x0);
	}

	bool& Remove() {
		return *(bool*)((uintptr_t)this + 0x4);
	}

	int64_t& StartTime() {
		return *(int64_t*)((uintptr_t)this + 0x8);
	}

	float& RewardCount() {
		return *(float*)((uintptr_t)this + 0x10);
	}

	int32_t& ResourceCount() {
		return *(int32_t*)((uintptr_t)this + 0x14);
	}

	float& RobbedResult() {
		return *(float*)((uintptr_t)this + 0x18);
	}

	int64_t& RobbedTime() {
		return *(int64_t*)((uintptr_t)this + 0x20);
	}

	int64_t& RobberId() {
		return *(int64_t*)((uintptr_t)this + 0x28);
	}

};};
