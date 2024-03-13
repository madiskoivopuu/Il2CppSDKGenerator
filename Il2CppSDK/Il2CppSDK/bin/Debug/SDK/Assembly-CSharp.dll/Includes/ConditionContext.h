#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "DataContext1.h" 

class ConditionContext : public DataContext1<ConditionEntity*>
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
	template <typename T = bool> static T MapPointIsActive(ICommonContexts* world, GameEntity* point) {
		return ((T (*)(void *, ICommonContexts*, GameEntity*))(Il2CppBase() + 0x20AAC48))(0, world, point);
	}
	template <typename T = bool> static T CheckQuestCondition(ICommonContexts* world, ConditionEntity* condition, uintptr_t args) {
		return ((T (*)(void *, ICommonContexts*, ConditionEntity*, uintptr_t))(Il2CppBase() + 0x20AADC0))(0, world, condition, args);
	}
	template <typename T = ConditionEntity*> T GetFailCondition(ICommonContexts* world, Il2CppArray<uintptr_t>* conditionNames, GameEntity* target, GameEntity* source) {
		return ((T (*)(ConditionContext*, ICommonContexts*, Il2CppArray<uintptr_t>*, GameEntity*, GameEntity*))(Il2CppBase() + 0x20AD8FC))(this, world, conditionNames, target, source);
	}
	template <typename T = ConditionEntity*> T GetFailCondition_1(ICommonContexts* world, Il2CppString* conditionName, GameEntity* target, GameEntity* source) {
		return ((T (*)(ConditionContext*, ICommonContexts*, Il2CppString*, GameEntity*, GameEntity*))(Il2CppBase() + 0x20ADAFC))(this, world, conditionName, target, source);
	}
	template <typename T = ConditionEntity*> T GetFailCondition_2(ICommonContexts* world, ConditionEntity* condition, GameEntity* target, GameEntity* source) {
		return ((T (*)(ConditionContext*, ICommonContexts*, ConditionEntity*, GameEntity*, GameEntity*))(Il2CppBase() + 0x20ADB8C))(this, world, condition, target, source);
	}
	template <typename T = ConditionEntity*> T GetFailCondition_3(ICommonContexts* world, ConditionEntity* condition, uintptr_t args) {
		return ((T (*)(ConditionContext*, ICommonContexts*, ConditionEntity*, uintptr_t))(Il2CppBase() + 0x20ADA24))(this, world, condition, args);
	}
	template <typename T = ConditionEntity*> T CheckConditionComponent(ICommonContexts* world, ConditionEntity* condition, int32_t index, uintptr_t args) {
		return ((T (*)(ConditionContext*, ICommonContexts*, ConditionEntity*, int32_t, uintptr_t))(Il2CppBase() + 0x20ADC4C))(this, world, condition, index, args);
	}
	template <typename T = void> T GetFurnitures(ICommonContexts* world, Il2CppString* conditionName, HashSet1Il2CppString*>* result) {
		return ((T (*)(ConditionContext*, ICommonContexts*, Il2CppString*, HashSet1Il2CppString*>*))(Il2CppBase() + 0x20ADF9C))(this, world, conditionName, result);
	}
	template <typename T = bool> T HasHealthCondition(Il2CppString* conditionName) {
		return ((T (*)(ConditionContext*, Il2CppString*))(Il2CppBase() + 0x20AE2A0))(this, conditionName);
	}

};

