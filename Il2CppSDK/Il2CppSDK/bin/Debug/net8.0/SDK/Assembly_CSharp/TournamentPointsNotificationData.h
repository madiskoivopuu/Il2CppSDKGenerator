#pragma once

#include "../mscorlib/System/ValueType.h"


class TournamentPointsNotificationData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TournamentPointsNotificationData"));
	}

	int32_t& Points() {
		return *(int32_t*)((uintptr_t)this + 0x0);
	}

};};
