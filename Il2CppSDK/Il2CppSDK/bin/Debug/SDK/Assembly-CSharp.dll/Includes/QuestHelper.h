#pragma once
#include <Il2Cpp/Il2Cpp.h>

class QuestHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "QuestHelper"));
	}


	template <typename R = bool> static R HasTriggerPlayerClassProgress(QuestDataEntity* questData, PlayerClassProgress progressType) {
		return ((R (*)(void *, QuestDataEntity*, PlayerClassProgress))(Il2CppBase() + 0x1C35F08))(0, questData, progressType);
	}
	template <typename R = float> static R GetProgressMultiplier(QuestDataEntity* questData, ICommonContexts* world, GameEntity* target) {
		return ((R (*)(void *, QuestDataEntity*, ICommonContexts*, GameEntity*))(Il2CppBase() + 0x1C35F60))(0, questData, world, target);
	}
	template <typename R = float> static R GetProgressMultiplierByTags(QuestDataEntity* questData, GameEntity* target) {
		return ((R (*)(void *, QuestDataEntity*, GameEntity*))(Il2CppBase() + 0x1C35FC0))(0, questData, target);
	}
	template <typename R = float> static R GetProgressMultiplierByCondition(QuestDataEntity* questData, ICommonContexts* world, GameEntity* target) {
		return ((R (*)(void *, QuestDataEntity*, ICommonContexts*, GameEntity*))(Il2CppBase() + 0x1C36270))(0, questData, world, target);
	}
	template <typename R = int32_t> static R GetRewardCount(QuestEntity* quest, Il2CppString* resourceName, bool withPremium, bool withMainServer) {
		return ((R (*)(void *, QuestEntity*, Il2CppString*, bool, bool))(Il2CppBase() + 0x1C362EC))(0, quest, resourceName, withPremium, withMainServer);
	}
	template <typename R = bool> static R CheckAutoActivate(QuestDataEntity* questData, ICommonContexts* world, GameEntity* player, int32_t level) {
		return ((R (*)(void *, QuestDataEntity*, ICommonContexts*, GameEntity*, int32_t))(Il2CppBase() + 0x1C36678))(0, questData, world, player, level);
	}
	template <typename R = bool> static R NeedNotifyOnFail(QuestEntity* questEntity) {
		return ((R (*)(void *, QuestEntity*))(Il2CppBase() + 0x1C36808))(0, questEntity);
	}
	template <typename R = bool> static R IsMainActQuest(QuestDataEntity* questData) {
		return ((R (*)(void *, QuestDataEntity*))(Il2CppBase() + 0x1C36860))(0, questData);
	}
	template <typename R = bool> static R CanClaimReward(QuestEntity* questEntity, bool hasPremium) {
		return ((R (*)(void *, QuestEntity*, bool))(Il2CppBase() + 0x1C368CC))(0, questEntity, hasPremium);
	}
	template <typename R = bool> static R CanTracking(QuestEntity* questEntity) {
		return ((R (*)(void *, QuestEntity*))(Il2CppBase() + 0x1C36940))(0, questEntity);
	}
	template <typename R = bool> static R RewardIsEmpty(QuestEntity* questEntity) {
		return ((R (*)(void *, QuestEntity*))(Il2CppBase() + 0x1C369B0))(0, questEntity);
	}
	 static ValueTuple2<bool, bool>* IsQuestTrackedAndComplete(QuestEntity* questEntity) {
		return ((ValueTuple2<bool, bool>* (*)(void *, QuestEntity*))(Il2CppBase() + 0x1C36A64))(0, questEntity);
	}
	 static ValueTuple2<bool, bool>* IsUntrackableQuestTrackedAndComplete(QuestEntity* questEntity) {
		return ((ValueTuple2<bool, bool>* (*)(void *, QuestEntity*))(Il2CppBase() + 0x1C36B24))(0, questEntity);
	}
	template <typename R = bool> static R IsClassLearned(ItemEntity* classEntity, int64_t playerId, ICommonContexts* contexts) {
		return ((R (*)(void *, ItemEntity*, int64_t, ICommonContexts*))(Il2CppBase() + 0x1C36BA8))(0, classEntity, playerId, contexts);
	}
	template <typename R = bool> static R IsClassBlocked(ItemEntity* classItem, AccountEntity* account, int64_t playerId, ICommonContexts* contexts) {
		return ((R (*)(void *, ItemEntity*, AccountEntity*, int64_t, ICommonContexts*))(Il2CppBase() + 0x1C36CC8))(0, classItem, account, playerId, contexts);
	}

};

