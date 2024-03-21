#pragma once

#include "../mscorlib/System/Object.h"
#include "BPRewardsComponent/Reward.h"
#include "CurrencyType.h"


class BPRewardsComponent : public Il2CppObject {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BPRewardsComponent"));
	}

	Il2CppDictionary<CurrencyType, BPRewardsComponent::Reward>*& Dictionary() {
		return *(Il2CppDictionary<CurrencyType, BPRewardsComponent::Reward>**)((uintptr_t)this + 0x10);
	}

};};
