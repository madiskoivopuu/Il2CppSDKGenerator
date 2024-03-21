#pragma once

#include "../mscorlib/System/ValueType.h"


class ManualQuestTrackingOrderData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ManualQuestTrackingOrderData"));
	}

	Il2CppString*& Quests() {
		return *(Il2CppString**)((uintptr_t)this + 0x0);
	}

	int32_t& Count() {
		return *(int32_t*)((uintptr_t)this + 0x8);
	}

};};
