#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ConditionHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ConditionHelper"));
	}


	template <typename T = bool> static T CheckItemCondition(IItemConditionEntity* itemConditionEntity, ItemEntity* itemEntity) {
		return ((T (*)(void *, IItemConditionEntity*, ItemEntity*))(Il2CppBase() + 0x20BD714))(0, itemConditionEntity, itemEntity);
	}
	template <typename T = bool> static T CheckQuestStatus(QuestEntity* quest, ICommonContexts* world, GameEntity* owner, QuestStatus* status, GameEntity* source) {
		return ((T (*)(void *, QuestEntity*, ICommonContexts*, GameEntity*, QuestStatus*, GameEntity*))(Il2CppBase() + 0x20AAFFC))(0, quest, world, owner, status, source);
	}
	template <typename T = bool> static T CheckQuestsStatusAllWithTag(ICommonContexts* world, GameEntity* owner, QuestStatus* status, Il2CppString* tag, GameEntity* source) {
		return ((T (*)(void *, ICommonContexts*, GameEntity*, QuestStatus*, Il2CppString*, GameEntity*))(Il2CppBase() + 0x20AB36C))(0, world, owner, status, tag, source);
	}
	template <typename T = bool> static T CheckQuestsStatusAnyWithTag(ICommonContexts* world, GameEntity* owner, QuestStatus* status, Il2CppString* tag, GameEntity* source) {
		return ((T (*)(void *, ICommonContexts*, GameEntity*, QuestStatus*, Il2CppString*, GameEntity*))(Il2CppBase() + 0x20AC5F0))(0, world, owner, status, tag, source);
	}
	template <typename T = ValueTuple2bool, Il2CppString*>*> static T CheckCondition(ICommonContexts* world, Il2CppString* conditionName) {
		return ((T (*)(void *, ICommonContexts*, Il2CppString*))(Il2CppBase() + 0x20BDA50))(0, world, conditionName);
	}
	template <typename T = ValueTuple2bool, Il2CppString*>*> static T CheckActiveCondition(IActiveConditionEntity* entity, ICommonContexts* world, int32_t targetId) {
		return ((T (*)(void *, IActiveConditionEntity*, ICommonContexts*, int32_t))(Il2CppBase() + 0x20BDC30))(0, entity, world, targetId);
	}
	template <typename T = ValueTuple2bool, Il2CppString*>*> static T CheckActiveCondition_1(IActiveConditionEntity* entity, ICommonContexts* world, int64_t playerId) {
		return ((T (*)(void *, IActiveConditionEntity*, ICommonContexts*, int64_t))(Il2CppBase() + 0x20BDFF4))(0, entity, world, playerId);
	}
	template <typename T = ValueTuple2bool, Il2CppString*>*> static T CheckActiveCondition_2(IActiveConditionEntity* entity, ICommonContexts* world, GameEntity* target) {
		return ((T (*)(void *, IActiveConditionEntity*, ICommonContexts*, GameEntity*))(Il2CppBase() + 0x20BDDCC))(0, entity, world, target);
	}
	template <typename T = ValueTuple2bool, Il2CppString*>*> static T CheckChargedCondition(ItemEntity* skill, ICommonContexts* world, GameEntity* target) {
		return ((T (*)(void *, ItemEntity*, ICommonContexts*, GameEntity*))(Il2CppBase() + 0x20BE4EC))(0, skill, world, target);
	}
	template <typename T = ValueTuple2bool, Il2CppString*>*> static T CheckConditions(GameEntity* target, ICommonContexts* world, Il2CppArray<uintptr_t>* conditions, GameEntity* source) {
		return ((T (*)(void *, GameEntity*, ICommonContexts*, Il2CppArray<uintptr_t>*, GameEntity*))(Il2CppBase() + 0x20BE380))(0, target, world, conditions, source);
	}
	template <typename T = ValueTuple2bool, Il2CppString*>*> static T CheckCondition_1(GameEntity* target, ICommonContexts* world, ConditionEntity* condition, GameEntity* source) {
		return ((T (*)(void *, GameEntity*, ICommonContexts*, ConditionEntity*, GameEntity*))(Il2CppBase() + 0x20BE5BC))(0, target, world, condition, source);
	}
	template <typename T = ValueTuple2bool, Il2CppString*>*> static T CheckCondition_2(GameEntity* target, ICommonContexts* world, Il2CppString* conditionName, GameEntity* source) {
		return ((T (*)(void *, GameEntity*, ICommonContexts*, Il2CppString*, GameEntity*))(Il2CppBase() + 0x20BE190))(0, target, world, conditionName, source);
	}
	template <typename T = ValueTuple4bool, Il2CppString*, Il2CppString*, bool>*> static T CheckEnterCondition(IEnterConditionEntity* entity, ICommonContexts* world, GameEntity* actor) {
		return ((T (*)(void *, IEnterConditionEntity*, ICommonContexts*, GameEntity*))(Il2CppBase() + 0x20BE71C))(0, entity, world, actor);
	}
	template <typename T = ValueTuple2bool, Il2CppString*>*> static T CheckExitCondition(LocationEntity* locationEntity, ICommonContexts* world, GameEntity* actor) {
		return ((T (*)(void *, LocationEntity*, ICommonContexts*, GameEntity*))(Il2CppBase() + 0x20BEAD0))(0, locationEntity, world, actor);
	}
	template <typename T = ValueTuple2bool, Il2CppString*>*> static T CheckShowCondition(IShowConditionEntity* showConditionEntity, ICommonContexts* world, GameEntity* actor) {
		return ((T (*)(void *, IShowConditionEntity*, ICommonContexts*, GameEntity*))(Il2CppBase() + 0x20BEC48))(0, showConditionEntity, world, actor);
	}
	template <typename T = ValueTuple2bool, Il2CppString*>*> static T CheckStartCondition(IStartConditionEntity* entity, ICommonContexts* world, GameEntity* target, GameEntity* source) {
		return ((T (*)(void *, IStartConditionEntity*, ICommonContexts*, GameEntity*, GameEntity*))(Il2CppBase() + 0x20BD864))(0, entity, world, target, source);
	}
	template <typename T = ValueTuple2bool, Il2CppString*>*> static T CheckRecipeCondition(RecipeEntity* entity, ICommonContexts* world, GameEntity* actor) {
		return ((T (*)(void *, RecipeEntity*, ICommonContexts*, GameEntity*))(Il2CppBase() + 0x20BEE80))(0, entity, world, actor);
	}
	template <typename T = ValueTuple2bool, Il2CppString*>*> static T CheckFurnitureCondition(ICommonContexts* world, Il2CppString* conditionName, GameEntity* actor) {
		return ((T (*)(void *, ICommonContexts*, Il2CppString*, GameEntity*))(Il2CppBase() + 0x20BF3A8))(0, world, conditionName, actor);
	}

};

