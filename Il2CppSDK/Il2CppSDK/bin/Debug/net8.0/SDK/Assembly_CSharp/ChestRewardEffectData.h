#pragma once

#include "../mscorlib/System/ValueType.h"
#include "Rarity.h"


class ChestRewardEffectData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChestRewardEffectData"));
	}

	int32_t& TargetId() {
		return *(int32_t*)((uintptr_t)this + 0x0);
	}

	Il2CppString*& EffectName() {
		return *(Il2CppString**)((uintptr_t)this + 0x8);
	}

	Il2CppString*& IconName() {
		return *(Il2CppString**)((uintptr_t)this + 0x10);
	}

	Rarity& Rarity() {
		return *(Rarity*)((uintptr_t)this + 0x18);
	}

};};
