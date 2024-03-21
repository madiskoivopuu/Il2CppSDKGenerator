#pragma once

#include "../mscorlib/System/Object.h"


class CartCacheComponent : public Il2CppObject {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CartCacheComponent"));
	}

	int32_t& Level() {
		return *(int32_t*)((uintptr_t)this + 0x10);
	}

	Il2CppArray<ResourcesComponent::Resource>*& Resources() {
		return *(Il2CppArray<ResourcesComponent::Resource>**)((uintptr_t)this + 0x18);
	}

};};
