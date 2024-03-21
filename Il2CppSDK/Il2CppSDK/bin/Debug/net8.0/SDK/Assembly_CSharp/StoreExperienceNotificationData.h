#pragma once

#include "../mscorlib/System/ValueType.h"


class StoreExperienceNotificationData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StoreExperienceNotificationData"));
	}

	int64_t& ProductDataId() {
		return *(int64_t*)((uintptr_t)this + 0x0);
	}

	uint32_t& ExpValue() {
		return *(uint32_t*)((uintptr_t)this + 0x8);
	}

};};
