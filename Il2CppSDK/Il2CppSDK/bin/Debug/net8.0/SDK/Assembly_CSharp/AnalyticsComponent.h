#pragma once

#include "../mscorlib/System/Object.h"
#include "AnalyticsTypes.h"


class AnalyticsComponent : public Il2CppObject {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AnalyticsComponent"));
	}

	AnalyticsTypes& Type() {
		return *(AnalyticsTypes*)((uintptr_t)this + 0x10);
	}

	Il2CppString*& Param() {
		return *(Il2CppString**)((uintptr_t)this + 0x18);
	}

};};
