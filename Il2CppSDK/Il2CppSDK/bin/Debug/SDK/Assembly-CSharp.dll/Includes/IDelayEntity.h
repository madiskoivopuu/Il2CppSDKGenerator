#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IDelayEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IDelayEntity"));
	}


	template <typename T = uintptr_t> T get_delay() {
		return ((T (*)(IDelayEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasDelay() {
		return ((T (*)(IDelayEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddDelay(float newValue) {
		return ((T (*)(IDelayEntity*, float))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T ReplaceDelay(float newValue) {
		return ((T (*)(IDelayEntity*, float))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T RemoveDelay() {
		return ((T (*)(IDelayEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
