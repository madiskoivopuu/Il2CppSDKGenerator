#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IDelayEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IDelayEntity"));
	}


	template <typename R = DelayComponent*> R get_delay() {
		return ((R (*)(IDelayEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasDelay() {
		return ((R (*)(IDelayEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddDelay(float newValue) {
		return ((R (*)(IDelayEntity*, float))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R ReplaceDelay(float newValue) {
		return ((R (*)(IDelayEntity*, float))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R RemoveDelay() {
		return ((R (*)(IDelayEntity*))(Il2CppBase() + 0x0))(this);
	}

};

