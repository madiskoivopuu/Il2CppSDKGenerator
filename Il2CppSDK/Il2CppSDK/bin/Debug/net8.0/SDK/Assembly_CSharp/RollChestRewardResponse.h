#pragma once

#include "../mscorlib/System/ValueType.h"
#include "ServiceMessage.h"


class RollChestRewardResponse : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RollChestRewardResponse"));
	}

	ServiceMessage& Result() {
		return *(ServiceMessage*)((uintptr_t)this + 0x0);
	}

	Il2CppList<ResourcesComponent::Resource>*& List() {
		return *(Il2CppList<ResourcesComponent::Resource>**)((uintptr_t)this + 0x8);
	}

};};
