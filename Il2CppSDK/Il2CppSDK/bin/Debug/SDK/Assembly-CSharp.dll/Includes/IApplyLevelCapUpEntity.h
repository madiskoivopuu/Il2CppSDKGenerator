#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IApplyLevelCapUpEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IApplyLevelCapUpEntity"));
	}


	template <typename T = ApplyLevelCapUpComponent*> T get_applyLevelCapUp() {
		return ((T (*)(IApplyLevelCapUpEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasApplyLevelCapUp() {
		return ((T (*)(IApplyLevelCapUpEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddApplyLevelCapUp(int32_t newValue) {
		return ((T (*)(IApplyLevelCapUpEntity*, int32_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T ReplaceApplyLevelCapUp(int32_t newValue) {
		return ((T (*)(IApplyLevelCapUpEntity*, int32_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T RemoveApplyLevelCapUp() {
		return ((T (*)(IApplyLevelCapUpEntity*))(Il2CppBase() + 0x0))(this);
	}

};

