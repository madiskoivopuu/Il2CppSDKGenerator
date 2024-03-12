#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "DataContext`1" 

class ConditionContext: DataContext1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ConditionContext"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> static T& _checkDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T AddEntityIndexes() {
		return ((T (*)(ConditionContext*))(Il2CppBase() + 0x20A8310))(this);
	}
	template <typename T = bool> static T MapPointIsActive(uintptr_t world, uintptr_t point) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x20AAC48))(0, world, point);
	}
	template <typename T = bool> static T CheckQuestCondition(uintptr_t world, uintptr_t condition, uintptr_t args) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x20AADC0))(0, world, condition, args);
	}
	template <typename T = uintptr_t> T GetFailCondition(uintptr_t world, Il2CppArray<uintptr_t>* conditionNames, uintptr_t target, uintptr_t source) {
		return ((T (*)(ConditionContext*, uintptr_t, Il2CppArray<uintptr_t>*, uintptr_t, uintptr_t))(Il2CppBase() + 0x20AD8FC))(this, world, conditionNames, target, source);
	}
	template <typename T = uintptr_t> T GetFailCondition_1(uintptr_t world, Il2CppString* conditionName, uintptr_t target, uintptr_t source) {
		return ((T (*)(ConditionContext*, uintptr_t, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x20ADAFC))(this, world, conditionName, target, source);
	}
	template <typename T = uintptr_t> T GetFailCondition_2(uintptr_t world, uintptr_t condition, uintptr_t target, uintptr_t source) {
		return ((T (*)(ConditionContext*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x20ADB8C))(this, world, condition, target, source);
	}
	template <typename T = uintptr_t> T GetFailCondition_3(uintptr_t world, uintptr_t condition, uintptr_t args) {
		return ((T (*)(ConditionContext*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x20ADA24))(this, world, condition, args);
	}
	template <typename T = uintptr_t> T CheckConditionComponent(uintptr_t world, uintptr_t condition, int32_t index, uintptr_t args) {
		return ((T (*)(ConditionContext*, uintptr_t, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x20ADC4C))(this, world, condition, index, args);
	}
	template <typename T = void> T GetFurnitures(uintptr_t world, Il2CppString* conditionName, void* result) {
		return ((T (*)(ConditionContext*, uintptr_t, Il2CppString*, void*))(Il2CppBase() + 0x20ADF9C))(this, world, conditionName, result);
	}
	template <typename T = bool> T HasHealthCondition(Il2CppString* conditionName) {
		return ((T (*)(ConditionContext*, Il2CppString*))(Il2CppBase() + 0x20AE2A0))(this, conditionName);
	}

};

}
