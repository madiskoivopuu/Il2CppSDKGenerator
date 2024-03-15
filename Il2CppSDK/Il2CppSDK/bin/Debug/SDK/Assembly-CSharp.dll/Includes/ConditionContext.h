#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "DataContext1.h" 
#include "ConditionEntity.h" 

class ConditionContext : public DataContext1<ConditionEntity*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ConditionContext"));
	}

	template <typename R = Il2CppArray<CheckConditionDelegate*>*> static R& _checkDelegates() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename R = void> R AddEntityIndexes() {
		return ((R (*)(ConditionContext*))(Il2CppBase() + 0x20A8310))(this);
	}
	template <typename R = bool> static R MapPointIsActive(ICommonContexts* world, GameEntity* point) {
		return ((R (*)(void *, ICommonContexts*, GameEntity*))(Il2CppBase() + 0x20AAC48))(0, world, point);
	}
	template <typename R = bool> static R CheckQuestCondition(ICommonContexts* world, ConditionEntity* condition, uintptr_t args) {
		return ((R (*)(void *, ICommonContexts*, ConditionEntity*, uintptr_t))(Il2CppBase() + 0x20AADC0))(0, world, condition, args);
	}
	template <typename R = ConditionEntity*> R GetFailCondition(ICommonContexts* world, Il2CppArray<Il2CppString*>* conditionNames, GameEntity* target, GameEntity* source) {
		return ((R (*)(ConditionContext*, ICommonContexts*, Il2CppArray<Il2CppString*>*, GameEntity*, GameEntity*))(Il2CppBase() + 0x20AD8FC))(this, world, conditionNames, target, source);
	}
	template <typename R = ConditionEntity*> R GetFailCondition_1(ICommonContexts* world, Il2CppString* conditionName, GameEntity* target, GameEntity* source) {
		return ((R (*)(ConditionContext*, ICommonContexts*, Il2CppString*, GameEntity*, GameEntity*))(Il2CppBase() + 0x20ADAFC))(this, world, conditionName, target, source);
	}
	template <typename R = ConditionEntity*> R GetFailCondition_2(ICommonContexts* world, ConditionEntity* condition, GameEntity* target, GameEntity* source) {
		return ((R (*)(ConditionContext*, ICommonContexts*, ConditionEntity*, GameEntity*, GameEntity*))(Il2CppBase() + 0x20ADB8C))(this, world, condition, target, source);
	}
	template <typename R = ConditionEntity*> R GetFailCondition_3(ICommonContexts* world, ConditionEntity* condition, uintptr_t args) {
		return ((R (*)(ConditionContext*, ICommonContexts*, ConditionEntity*, uintptr_t))(Il2CppBase() + 0x20ADA24))(this, world, condition, args);
	}
	template <typename R = ConditionEntity*> R CheckConditionComponent(ICommonContexts* world, ConditionEntity* condition, int32_t index, uintptr_t args) {
		return ((R (*)(ConditionContext*, ICommonContexts*, ConditionEntity*, int32_t, uintptr_t))(Il2CppBase() + 0x20ADC4C))(this, world, condition, index, args);
	}
	template <typename R = void> R GetFurnitures(ICommonContexts* world, Il2CppString* conditionName, HashSet1Il2CppString*>* result) {
		return ((R (*)(ConditionContext*, ICommonContexts*, Il2CppString*, HashSet1Il2CppString*>*))(Il2CppBase() + 0x20ADF9C))(this, world, conditionName, result);
	}
	template <typename R = bool> R HasHealthCondition(Il2CppString* conditionName) {
		return ((R (*)(ConditionContext*, Il2CppString*))(Il2CppBase() + 0x20AE2A0))(this, conditionName);
	}

};

