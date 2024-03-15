#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IHealPredictionEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IHealPredictionEntity"));
	}


	template <typename R = HealPredictionComponent*> R get_healPrediction() {
		return ((R (*)(IHealPredictionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasHealPrediction() {
		return ((R (*)(IHealPredictionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddHealPrediction(int32_t newValue) {
		return ((R (*)(IHealPredictionEntity*, int32_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R ReplaceHealPrediction(int32_t newValue) {
		return ((R (*)(IHealPredictionEntity*, int32_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R RemoveHealPrediction() {
		return ((R (*)(IHealPredictionEntity*))(Il2CppBase() + 0x0))(this);
	}

};

