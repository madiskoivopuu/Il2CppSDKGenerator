#pragma once

#include "../mscorlib/System/Object.h"


class IronSourcePlacement : public Il2CppObject {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IronSourcePlacement"));
	}

	Il2CppString*& rewardName() {
		return *(Il2CppString**)((uintptr_t)this + 0x10);
	}

	int32_t& rewardAmount() {
		return *(int32_t*)((uintptr_t)this + 0x18);
	}

	Il2CppString*& placementName() {
		return *(Il2CppString**)((uintptr_t)this + 0x20);
	}

};};
