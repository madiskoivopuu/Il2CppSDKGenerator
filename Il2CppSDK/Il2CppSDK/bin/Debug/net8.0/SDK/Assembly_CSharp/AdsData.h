#pragma once

#include "../mscorlib/System/ValueType.h"
#include "AdsActor.h"


class AdsData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AdsData"));
	}

	Il2CppString*& Action() {
		return *(Il2CppString**)((uintptr_t)this + 0x0);
	}

	AdsActor& Actor() {
		return *(AdsActor*)((uintptr_t)this + 0x8);
	}

	Il2CppString*& Reason() {
		return *(Il2CppString**)((uintptr_t)this + 0x10);
	}

};};
