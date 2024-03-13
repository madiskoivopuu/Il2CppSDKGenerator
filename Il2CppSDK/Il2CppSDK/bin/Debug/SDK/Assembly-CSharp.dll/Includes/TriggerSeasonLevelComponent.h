#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TriggerSeasonLevelComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TriggerSeasonLevelComponent"));
	}

	template <typename T = int32_t> T& SeasonOrder() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& Claimed() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(TriggerSeasonLevelComponent*, Il2CppObject*))(Il2CppBase() + 0x1525AD8))(this, target);
	}

};

