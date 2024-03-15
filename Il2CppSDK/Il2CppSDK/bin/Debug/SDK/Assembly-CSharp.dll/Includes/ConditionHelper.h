#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ConditionHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ConditionHelper"));
	}


	template <typename R = bool> static R CheckItemCondition(IItemConditionEntity* itemConditionEntity, ItemEntity* itemEntity) {
		return ((R (*)(void *, IItemConditionEntity*, ItemEntity*))(Il2CppBase() + 0x20BD714))(0, itemConditionEntity, itemEntity);
	}
	template <typename R = bool> static R CheckQuestStatus(QuestEntity* quest, ICommonContexts* world, GameEntity* owner, QuestStatus status, GameEntity* source) {
		return ((R (*)(void *, QuestEntity*, ICommonContexts*, GameEntity*, QuestStatus, GameEntity*))(Il2CppBase() + 0x20AAFFC))(0, quest, world, owner, status, source);
	}
	template <typename R = bool> static R CheckQuestsStatusAllWithTag(ICommonContexts* world, GameEntity* owner, QuestStatus status, Il2CppString* tag, GameEntity* source) {
		return ((R (*)(void *, ICommonContexts*, GameEntity*, QuestStatus, Il2CppString*, GameEntity*))(Il2CppBase() + 0x20AB36C))(0, world, owner, status, tag, source);
	}
	template <typename R = bool> static R CheckQuestsStatusAnyWithTag(ICommonContexts* world, GameEntity* owner, QuestStatus status, Il2CppString* tag, GameEntity* source) {
		return ((R (*)(void *, ICommonContexts*, GameEntity*, QuestStatus, Il2CppString*, GameEntity*))(Il2CppBase() + 0x20AC5F0))(0, world, owner, status, tag, source);
	}
	 static ValueTuple2<bool, Il2CppString*>* CheckCondition(ICommonContexts* world, Il2CppString* conditionName) {
		return ((ValueTuple2<bool, Il2CppString*>* (*)(void *, ICommonContexts*, Il2CppString*))(Il2CppBase() + 0x20BDA50))(0, world, conditionName);
	}
	 static ValueTuple2<bool, Il2CppString*>* CheckActiveCondition(IActiveConditionEntity* entity, ICommonContexts* world, int32_t targetId) {
		return ((ValueTuple2<bool, Il2CppString*>* (*)(void *, IActiveConditionEntity*, ICommonContexts*, int32_t))(Il2CppBase() + 0x20BDC30))(0, entity, world, targetId);
	}
	 static ValueTuple2<bool, Il2CppString*>* CheckActiveCondition_1(IActiveConditionEntity* entity, ICommonContexts* world, int64_t playerId) {
		return ((ValueTuple2<bool, Il2CppString*>* (*)(void *, IActiveConditionEntity*, ICommonContexts*, int64_t))(Il2CppBase() + 0x20BDFF4))(0, entity, world, playerId);
	}
	 static ValueTuple2<bool, Il2CppString*>* CheckActiveCondition_2(IActiveConditionEntity* entity, ICommonContexts* world, GameEntity* target) {
		return ((ValueTuple2<bool, Il2CppString*>* (*)(void *, IActiveConditionEntity*, ICommonContexts*, GameEntity*))(Il2CppBase() + 0x20BDDCC))(0, entity, world, target);
	}
	 static ValueTuple2<bool, Il2CppString*>* CheckChargedCondition(ItemEntity* skill, ICommonContexts* world, GameEntity* target) {
		return ((ValueTuple2<bool, Il2CppString*>* (*)(void *, ItemEntity*, ICommonContexts*, GameEntity*))(Il2CppBase() + 0x20BE4EC))(0, skill, world, target);
	}
	 static ValueTuple2<bool, Il2CppString*>* CheckConditions(GameEntity* target, ICommonContexts* world, Il2CppArray<Il2CppString*>* conditions, GameEntity* source) {
		return ((ValueTuple2<bool, Il2CppString*>* (*)(void *, GameEntity*, ICommonContexts*, Il2CppArray<Il2CppString*>*, GameEntity*))(Il2CppBase() + 0x20BE380))(0, target, world, conditions, source);
	}
	 static ValueTuple2<bool, Il2CppString*>* CheckCondition_1(GameEntity* target, ICommonContexts* world, ConditionEntity* condition, GameEntity* source) {
		return ((ValueTuple2<bool, Il2CppString*>* (*)(void *, GameEntity*, ICommonContexts*, ConditionEntity*, GameEntity*))(Il2CppBase() + 0x20BE5BC))(0, target, world, condition, source);
	}
	 static ValueTuple2<bool, Il2CppString*>* CheckCondition_2(GameEntity* target, ICommonContexts* world, Il2CppString* conditionName, GameEntity* source) {
		return ((ValueTuple2<bool, Il2CppString*>* (*)(void *, GameEntity*, ICommonContexts*, Il2CppString*, GameEntity*))(Il2CppBase() + 0x20BE190))(0, target, world, conditionName, source);
	}
	 static ValueTuple4<bool, Il2CppString*, Il2CppString*, bool>* CheckEnterCondition(IEnterConditionEntity* entity, ICommonContexts* world, GameEntity* actor) {
		return ((ValueTuple4<bool, Il2CppString*, Il2CppString*, bool>* (*)(void *, IEnterConditionEntity*, ICommonContexts*, GameEntity*))(Il2CppBase() + 0x20BE71C))(0, entity, world, actor);
	}
	 static ValueTuple2<bool, Il2CppString*>* CheckExitCondition(LocationEntity* locationEntity, ICommonContexts* world, GameEntity* actor) {
		return ((ValueTuple2<bool, Il2CppString*>* (*)(void *, LocationEntity*, ICommonContexts*, GameEntity*))(Il2CppBase() + 0x20BEAD0))(0, locationEntity, world, actor);
	}
	 static ValueTuple2<bool, Il2CppString*>* CheckShowCondition(IShowConditionEntity* showConditionEntity, ICommonContexts* world, GameEntity* actor) {
		return ((ValueTuple2<bool, Il2CppString*>* (*)(void *, IShowConditionEntity*, ICommonContexts*, GameEntity*))(Il2CppBase() + 0x20BEC48))(0, showConditionEntity, world, actor);
	}
	 static ValueTuple2<bool, Il2CppString*>* CheckStartCondition(IStartConditionEntity* entity, ICommonContexts* world, GameEntity* target, GameEntity* source) {
		return ((ValueTuple2<bool, Il2CppString*>* (*)(void *, IStartConditionEntity*, ICommonContexts*, GameEntity*, GameEntity*))(Il2CppBase() + 0x20BD864))(0, entity, world, target, source);
	}
	 static ValueTuple2<bool, Il2CppString*>* CheckRecipeCondition(RecipeEntity* entity, ICommonContexts* world, GameEntity* actor) {
		return ((ValueTuple2<bool, Il2CppString*>* (*)(void *, RecipeEntity*, ICommonContexts*, GameEntity*))(Il2CppBase() + 0x20BEE80))(0, entity, world, actor);
	}
	 static ValueTuple2<bool, Il2CppString*>* CheckFurnitureCondition(ICommonContexts* world, Il2CppString* conditionName, GameEntity* actor) {
		return ((ValueTuple2<bool, Il2CppString*>* (*)(void *, ICommonContexts*, Il2CppString*, GameEntity*))(Il2CppBase() + 0x20BF3A8))(0, world, conditionName, actor);
	}

};

