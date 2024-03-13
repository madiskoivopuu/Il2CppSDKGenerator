#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ITimeOutExitDecPercentEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ITimeOutExitDecPercentEntity"));
	}


	template <typename T = TimeOutExitDecPercentComponent*> T get_timeOutExitDecPercent() {
		return ((T (*)(ITimeOutExitDecPercentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasTimeOutExitDecPercent() {
		return ((T (*)(ITimeOutExitDecPercentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddTimeOutExitDecPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ITimeOutExitDecPercentEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceTimeOutExitDecPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ITimeOutExitDecPercentEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveTimeOutExitDecPercent() {
		return ((T (*)(ITimeOutExitDecPercentEntity*))(Il2CppBase() + 0x0))(this);
	}

};

