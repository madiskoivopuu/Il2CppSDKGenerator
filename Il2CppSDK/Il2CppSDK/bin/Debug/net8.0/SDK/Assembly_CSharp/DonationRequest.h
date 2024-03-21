#pragma once

#include "../mscorlib/System/ValueType.h"
#include "PlayerClassProgress.h"


class DonationRequest : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DonationRequest"));
	}

	Il2CppString*& ClassName() {
		return *(Il2CppString**)((uintptr_t)this + 0x0);
	}

	PlayerClassProgress& ProgressType() {
		return *(PlayerClassProgress*)((uintptr_t)this + 0x8);
	}

	Il2CppArray<int32_t>*& Ids() {
		return *(Il2CppArray<int32_t>**)((uintptr_t)this + 0x10);
	}

};};
