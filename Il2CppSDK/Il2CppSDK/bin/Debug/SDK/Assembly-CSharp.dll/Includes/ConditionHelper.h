#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ConditionHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ConditionHelper"));
	}


	template <typename T = bool> static T CheckItemCondition(uintptr_t itemConditionEntity, uintptr_t itemEntity) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x20BD714))(0, itemConditionEntity, itemEntity);
	}
	template <typename T = bool> static T CheckQuestStatus(uintptr_t quest, uintptr_t world, uintptr_t owner, uintptr_t status, uintptr_t source) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x20AAFFC))(0, quest, world, owner, status, source);
	}
	template <typename T = bool> static T CheckQuestsStatusAllWithTag(uintptr_t world, uintptr_t owner, uintptr_t status, Il2CppString* tag, uintptr_t source) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x20AB36C))(0, world, owner, status, tag, source);
	}
	template <typename T = bool> static T CheckQuestsStatusAnyWithTag(uintptr_t world, uintptr_t owner, uintptr_t status, Il2CppString* tag, uintptr_t source) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x20AC5F0))(0, world, owner, status, tag, source);
	}
	template <typename T = void*> static T CheckCondition(uintptr_t world, Il2CppString* conditionName) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x20BDA50))(0, world, conditionName);
	}
	template <typename T = void*> static T CheckActiveCondition(uintptr_t entity, uintptr_t world, int32_t targetId) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x20BDC30))(0, entity, world, targetId);
	}
	template <typename T = void*> static T CheckActiveCondition_1(uintptr_t entity, uintptr_t world, int64_t playerId) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int64_t))(Il2CppBase() + 0x20BDFF4))(0, entity, world, playerId);
	}
	template <typename T = void*> static T CheckActiveCondition_2(uintptr_t entity, uintptr_t world, uintptr_t target) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x20BDDCC))(0, entity, world, target);
	}
	template <typename T = void*> static T CheckChargedCondition(uintptr_t skill, uintptr_t world, uintptr_t target) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x20BE4EC))(0, skill, world, target);
	}
	template <typename T = void*> static T CheckConditions(uintptr_t target, uintptr_t world, Il2CppArray<uintptr_t>* conditions, uintptr_t source) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x20BE380))(0, target, world, conditions, source);
	}
	template <typename T = void*> static T CheckCondition_1(uintptr_t target, uintptr_t world, uintptr_t condition, uintptr_t source) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x20BE5BC))(0, target, world, condition, source);
	}
	template <typename T = void*> static T CheckCondition_2(uintptr_t target, uintptr_t world, Il2CppString* conditionName, uintptr_t source) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x20BE190))(0, target, world, conditionName, source);
	}
	template <typename T = void*> static T CheckEnterCondition(uintptr_t entity, uintptr_t world, uintptr_t actor) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x20BE71C))(0, entity, world, actor);
	}
	template <typename T = void*> static T CheckExitCondition(uintptr_t locationEntity, uintptr_t world, uintptr_t actor) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x20BEAD0))(0, locationEntity, world, actor);
	}
	template <typename T = void*> static T CheckShowCondition(uintptr_t showConditionEntity, uintptr_t world, uintptr_t actor) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x20BEC48))(0, showConditionEntity, world, actor);
	}
	template <typename T = void*> static T CheckStartCondition(uintptr_t entity, uintptr_t world, uintptr_t target, uintptr_t source) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x20BD864))(0, entity, world, target, source);
	}
	template <typename T = void*> static T CheckRecipeCondition(uintptr_t entity, uintptr_t world, uintptr_t actor) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x20BEE80))(0, entity, world, actor);
	}
	template <typename T = void*> static T CheckFurnitureCondition(uintptr_t world, Il2CppString* conditionName, uintptr_t actor) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x20BF3A8))(0, world, conditionName, actor);
	}

};

}
