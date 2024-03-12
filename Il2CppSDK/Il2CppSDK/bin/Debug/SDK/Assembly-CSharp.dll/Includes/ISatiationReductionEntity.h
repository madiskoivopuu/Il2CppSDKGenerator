#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ISatiationReductionEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ISatiationReductionEntity"));
	}


	template <typename T = uintptr_t> T get_satiationReduction() {
		return ((T (*)(ISatiationReductionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasSatiationReduction() {
		return ((T (*)(ISatiationReductionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddSatiationReduction(float newValue, uintptr_t newGroup) {
		return ((T (*)(ISatiationReductionEntity*, float, uintptr_t))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceSatiationReduction(float newValue, uintptr_t newGroup) {
		return ((T (*)(ISatiationReductionEntity*, float, uintptr_t))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveSatiationReduction() {
		return ((T (*)(ISatiationReductionEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
