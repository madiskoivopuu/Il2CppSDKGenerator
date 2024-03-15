#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IApplyLevelCapUpEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IApplyLevelCapUpEntity"));
	}


	template <typename R = ApplyLevelCapUpComponent*> R get_applyLevelCapUp() {
		return ((R (*)(IApplyLevelCapUpEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasApplyLevelCapUp() {
		return ((R (*)(IApplyLevelCapUpEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddApplyLevelCapUp(int32_t newValue) {
		return ((R (*)(IApplyLevelCapUpEntity*, int32_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R ReplaceApplyLevelCapUp(int32_t newValue) {
		return ((R (*)(IApplyLevelCapUpEntity*, int32_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R RemoveApplyLevelCapUp() {
		return ((R (*)(IApplyLevelCapUpEntity*))(Il2CppBase() + 0x0))(this);
	}

};

