#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ITimeOutExitDecPercentEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ITimeOutExitDecPercentEntity"));
	}


	template <typename R = TimeOutExitDecPercentComponent*> R get_timeOutExitDecPercent() {
		return ((R (*)(ITimeOutExitDecPercentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasTimeOutExitDecPercent() {
		return ((R (*)(ITimeOutExitDecPercentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddTimeOutExitDecPercent(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ITimeOutExitDecPercentEntity*, float, ModifierGroup))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceTimeOutExitDecPercent(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ITimeOutExitDecPercentEntity*, float, ModifierGroup))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveTimeOutExitDecPercent() {
		return ((R (*)(ITimeOutExitDecPercentEntity*))(Il2CppBase() + 0x0))(this);
	}

};

