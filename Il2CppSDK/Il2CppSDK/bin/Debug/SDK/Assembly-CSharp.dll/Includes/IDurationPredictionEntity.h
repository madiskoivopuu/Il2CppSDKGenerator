#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IDurationPredictionEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IDurationPredictionEntity"));
	}


	template <typename R = bool> R get_isDurationPrediction() {
		return ((R (*)(IDurationPredictionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R set_isDurationPrediction(bool value) {
		return ((R (*)(IDurationPredictionEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

