#pragma once

#include "../mscorlib/System/ValueType.h"


class OpenInventoryContainerResult : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OpenInventoryContainerResult"));
	}

	Il2CppString*& Key() {
		return *(Il2CppString**)((uintptr_t)this + 0x0);
	}

	Il2CppArray<ResourcesComponent::Resource>*& Resources() {
		return *(Il2CppArray<ResourcesComponent::Resource>**)((uintptr_t)this + 0x8);
	}

	Il2CppString*& ErrorMsg() {
		return *(Il2CppString**)((uintptr_t)this + 0x10);
	}

	Il2CppString*& AnalyticName() {
		return *(Il2CppString**)((uintptr_t)this + 0x18);
	}

};};
