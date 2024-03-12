#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Stabs {

class ITweenValue
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Stabs", "ITweenValue"));
	}


	template <typename T = void> T TweenValue(float floatPercentage) {
		return ((T (*)(ITweenValue*, float))(Il2CppBase() + 0x0))(this, floatPercentage);
	}
	template <typename T = bool> T get_ignoreTimeScale() {
		return ((T (*)(ITweenValue*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = float> T get_duration() {
		return ((T (*)(ITweenValue*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T ValidTarget() {
		return ((T (*)(ITweenValue*))(Il2CppBase() + 0x0))(this);
	}

};

}
