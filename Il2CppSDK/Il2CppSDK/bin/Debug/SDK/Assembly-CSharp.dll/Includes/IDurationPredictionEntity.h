#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IDurationPredictionEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IDurationPredictionEntity"));
	}


	template <typename T = bool> T get_isDurationPrediction() {
		return ((T (*)(IDurationPredictionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_isDurationPrediction(bool value) {
		return ((T (*)(IDurationPredictionEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

}
