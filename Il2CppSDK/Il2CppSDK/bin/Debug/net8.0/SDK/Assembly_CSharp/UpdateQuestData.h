#pragma once

#include "../mscorlib/System/ValueType.h"


class UpdateQuestData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UpdateQuestData"));
	}

	int32_t& Id() {
		return *(int32_t*)((uintptr_t)this + 0x0);
	}

	int32_t& Progress() {
		return *(int32_t*)((uintptr_t)this + 0x4);
	}

	bool& Completed() {
		return *(bool*)((uintptr_t)this + 0x8);
	}

	bool& Rewarded() {
		return *(bool*)((uintptr_t)this + 0x9);
	}

	bool& PremiumRewarded() {
		return *(bool*)((uintptr_t)this + 0xA);
	}

	bool& Actual() {
		return *(bool*)((uintptr_t)this + 0xB);
	}

	bool& Tracking() {
		return *(bool*)((uintptr_t)this + 0xC);
	}

	bool& NotStarted() {
		return *(bool*)((uintptr_t)this + 0xD);
	}

	float& RewardCoef() {
		return *(float*)((uintptr_t)this + 0x10);
	}

};};
