#pragma once

#include "../mscorlib/System/ValueType.h"


class RavenNestStatsData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RavenNestStatsData"));
	}

	int32_t& TargetId() {
		return *(int32_t*)((uintptr_t)this + 0x0);
	}

	int64_t& LastTime() {
		return *(int64_t*)((uintptr_t)this + 0x8);
	}

	int64_t& LastEndTime() {
		return *(int64_t*)((uintptr_t)this + 0x10);
	}

	Il2CppList<RavenNestStatsComponent::Stat*>*& Stats() {
		return *(Il2CppList<RavenNestStatsComponent::Stat*>**)((uintptr_t)this + 0x18);
	}

};};
