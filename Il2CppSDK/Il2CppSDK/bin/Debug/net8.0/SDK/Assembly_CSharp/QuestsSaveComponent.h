#pragma once

#include "../mscorlib/System/Object.h"


class QuestsSaveComponent : public Il2CppObject {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "QuestsSaveComponent"));
	}

	int32_t& Version() {
		return *(int32_t*)((uintptr_t)this + 0x10);
	}

	Il2CppArray<QuestsSaveComponent::Item*>*& Data() {
		return *(Il2CppArray<QuestsSaveComponent::Item*>**)((uintptr_t)this + 0x18);
	}

};};
