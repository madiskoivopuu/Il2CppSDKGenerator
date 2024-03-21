#pragma once

#include "../mscorlib/System/ValueType.h"
#include "ExchangeRequests/ExchangeType.h"


class ExchangeRequests : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ExchangeRequests"));
	}

	ExchangeRequests::ExchangeType& Type() {
		return *(ExchangeRequests::ExchangeType*)((uintptr_t)this + 0x0);
	}

	Il2CppArray<int32_t>*& Ids() {
		return *(Il2CppArray<int32_t>**)((uintptr_t)this + 0x8);
	}

	int32_t& RewardSlotId() {
		return *(int32_t*)((uintptr_t)this + 0x10);
	}

	Il2CppArray<ResourcesComponent::Resource>*& Resources() {
		return *(Il2CppArray<ResourcesComponent::Resource>**)((uintptr_t)this + 0x18);
	}

};};
