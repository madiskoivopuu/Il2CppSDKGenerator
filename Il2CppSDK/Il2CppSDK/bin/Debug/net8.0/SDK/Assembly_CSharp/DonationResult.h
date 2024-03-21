#pragma once

#include "../mscorlib/System/ValueType.h"
#include "PlayerClassProgress.h"


class DonationResult : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DonationResult"));
	}

	PlayerClassProgress& ProgressType() {
		return *(PlayerClassProgress*)((uintptr_t)this + 0x0);
	}

	int32_t& BaseAddPoints() {
		return *(int32_t*)((uintptr_t)this + 0x4);
	}

	bool& SuperProc() {
		return *(bool*)((uintptr_t)this + 0x8);
	}

	int32_t& ProcPoints() {
		return *(int32_t*)((uintptr_t)this + 0xC);
	}

	int32_t& NewPoints() {
		return *(int32_t*)((uintptr_t)this + 0x10);
	}

};};
