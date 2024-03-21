#pragma once

#include "../mscorlib/System/ValueType.h"
#include "NotifyQuestPhase.h"


class NotifyQuestData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NotifyQuestData"));
	}

	Il2CppString*& Name() {
		return *(Il2CppString**)((uintptr_t)this + 0x0);
	}

	NotifyQuestPhase& Phase() {
		return *(NotifyQuestPhase*)((uintptr_t)this + 0x8);
	}

};};
