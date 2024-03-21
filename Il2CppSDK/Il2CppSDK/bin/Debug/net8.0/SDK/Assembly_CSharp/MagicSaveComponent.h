#pragma once

#include "../mscorlib/System/Object.h"


class MagicSaveComponent : public Il2CppObject {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MagicSaveComponent"));
	}

	Il2CppArray<MagicSaveComponent::Item*>*& Items() {
		return *(Il2CppArray<MagicSaveComponent::Item*>**)((uintptr_t)this + 0x10);
	}

	bool& Riding() {
		return *(bool*)((uintptr_t)this + 0x18);
	}

};};
