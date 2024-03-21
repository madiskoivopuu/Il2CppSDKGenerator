#pragma once

#include "../mscorlib/System/ValueType.h"
#include "BossOperationRequestData/BossActions.h"


class BossOperationRequestData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BossOperationRequestData"));
	}

	BossOperationRequestData::BossActions& BossAction() {
		return *(BossOperationRequestData::BossActions*)((uintptr_t)this + 0x0);
	}

	Il2CppString*& BossName() {
		return *(Il2CppString**)((uintptr_t)this + 0x8);
	}

	Il2CppArray<int32_t>*& Ids() {
		return *(Il2CppArray<int32_t>**)((uintptr_t)this + 0x10);
	}

};};
