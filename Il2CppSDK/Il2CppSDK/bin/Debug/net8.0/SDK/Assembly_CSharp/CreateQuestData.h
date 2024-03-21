#pragma once

#include "../mscorlib/System/ValueType.h"
#include "../mscorlib/System/Nullable1.h"
#include "../mscorlib/System/Int64.h"


class CreateQuestData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CreateQuestData"));
	}

	int32_t& Id() {
		return *(int32_t*)((uintptr_t)this + 0x0);
	}

	Il2CppString*& Blueprint() {
		return *(Il2CppString**)((uintptr_t)this + 0x8);
	}

	System::Nullable1<int64_t>*& StartTime() {
		return *(System::Nullable1<int64_t>**)((uintptr_t)this + 0x10);
	}

	System::Nullable1<int64_t>*& EndTime() {
		return *(System::Nullable1<int64_t>**)((uintptr_t)this + 0x20);
	}

	int32_t& Progress() {
		return *(int32_t*)((uintptr_t)this + 0x30);
	}

	bool& Completed() {
		return *(bool*)((uintptr_t)this + 0x34);
	}

	bool& Rewarded() {
		return *(bool*)((uintptr_t)this + 0x35);
	}

	bool& PremiumRewarded() {
		return *(bool*)((uintptr_t)this + 0x36);
	}

	bool& Actual() {
		return *(bool*)((uintptr_t)this + 0x37);
	}

	int64_t& OwnerId() {
		return *(int64_t*)((uintptr_t)this + 0x38);
	}

	bool& Tracking() {
		return *(bool*)((uintptr_t)this + 0x40);
	}

	bool& NotStarted() {
		return *(bool*)((uintptr_t)this + 0x41);
	}

	int64_t& GuildQuestId() {
		return *(int64_t*)((uintptr_t)this + 0x48);
	}

	float& RewardCoef() {
		return *(float*)((uintptr_t)this + 0x50);
	}

	Il2CppArray<ResourcesComponent::Resource>*& GeneretedResources() {
		return *(Il2CppArray<ResourcesComponent::Resource>**)((uintptr_t)this + 0x58);
	}

	Il2CppArray<ResourcesComponent::Resource>*& GeneretedPremiumResources() {
		return *(Il2CppArray<ResourcesComponent::Resource>**)((uintptr_t)this + 0x60);
	}

};};
