#pragma once

#include "../mscorlib/System/ValueType.h"


class BossOpenStateData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BossOpenStateData"));
	}

	int32_t& Id() {
		return *(int32_t*)((uintptr_t)this + 0x0);
	}

	int32_t& OpenPortalProgress() {
		return *(int32_t*)((uintptr_t)this + 0x4);
	}

	bool& IsPortalOpen() {
		return *(bool*)((uintptr_t)this + 0x8);
	}

	Il2CppString*& CurrentOpenBoss() {
		return *(Il2CppString**)((uintptr_t)this + 0x10);
	}

	Il2CppArray<BossOpenStateComponent::BossState>*& States() {
		return *(Il2CppArray<BossOpenStateComponent::BossState>**)((uintptr_t)this + 0x18);
	}

};};
