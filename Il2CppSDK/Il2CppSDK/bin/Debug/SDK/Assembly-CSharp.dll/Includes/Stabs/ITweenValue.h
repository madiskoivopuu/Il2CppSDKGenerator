#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Stabs {

class ITweenValue
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Stabs", "ITweenValue"));
	}


	template <typename R = void> R TweenValue(float floatPercentage) {
		return ((R (*)(ITweenValue*, float))(Il2CppBase() + 0x0))(this, floatPercentage);
	}
	template <typename R = bool> R get_ignoreTimeScale() {
		return ((R (*)(ITweenValue*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = float> R get_duration() {
		return ((R (*)(ITweenValue*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R ValidTarget() {
		return ((R (*)(ITweenValue*))(Il2CppBase() + 0x0))(this);
	}

};

}
