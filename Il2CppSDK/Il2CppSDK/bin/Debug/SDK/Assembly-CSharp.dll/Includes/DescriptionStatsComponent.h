#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DescriptionStatsComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DescriptionStatsComponent"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& Values() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(DescriptionStatsComponent*, Il2CppObject*))(Il2CppBase() + 0xEBA4F4))(this, target);
	}

};

