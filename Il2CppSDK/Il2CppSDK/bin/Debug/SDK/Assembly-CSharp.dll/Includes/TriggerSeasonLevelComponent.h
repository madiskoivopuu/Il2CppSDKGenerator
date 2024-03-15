#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TriggerSeasonLevelComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TriggerSeasonLevelComponent"));
	}

	template <typename R = int32_t> R& SeasonOrder() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = bool> R& Claimed() {
		return *(R*)((uintptr_t)this + 0x14);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(TriggerSeasonLevelComponent*, Il2CppObject*))(Il2CppBase() + 0x1525AD8))(this, target);
	}

};

