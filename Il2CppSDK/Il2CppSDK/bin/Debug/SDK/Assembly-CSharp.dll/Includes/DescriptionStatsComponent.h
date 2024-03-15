#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DescriptionStatsComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DescriptionStatsComponent"));
	}

	template <typename R = Il2CppArray<PlayerStatType>*> R& Values() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(DescriptionStatsComponent*, Il2CppObject*))(Il2CppBase() + 0xEBA4F4))(this, target);
	}

};

