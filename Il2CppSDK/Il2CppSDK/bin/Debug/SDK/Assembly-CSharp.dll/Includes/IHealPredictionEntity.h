#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IHealPredictionEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IHealPredictionEntity"));
	}


	template <typename T = uintptr_t> T get_healPrediction() {
		return ((T (*)(IHealPredictionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasHealPrediction() {
		return ((T (*)(IHealPredictionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddHealPrediction(int32_t newValue) {
		return ((T (*)(IHealPredictionEntity*, int32_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T ReplaceHealPrediction(int32_t newValue) {
		return ((T (*)(IHealPredictionEntity*, int32_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T RemoveHealPrediction() {
		return ((T (*)(IHealPredictionEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
