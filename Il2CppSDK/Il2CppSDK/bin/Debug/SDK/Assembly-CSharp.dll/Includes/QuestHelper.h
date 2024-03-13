#pragma once
#include <Il2Cpp/Il2Cpp.h>

class QuestHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "QuestHelper"));
	}


	template <typename T = bool> static T HasTriggerPlayerClassProgress(QuestDataEntity* questData, PlayerClassProgress* progressType) {
		return ((T (*)(void *, QuestDataEntity*, PlayerClassProgress*))(Il2CppBase() + 0x1C35F08))(0, questData, progressType);
	}
	template <typename T = float> static T GetProgressMultiplier(QuestDataEntity* questData, ICommonContexts* world, GameEntity* target) {
		return ((T (*)(void *, QuestDataEntity*, ICommonContexts*, GameEntity*))(Il2CppBase() + 0x1C35F60))(0, questData, world, target);
	}
	template <typename T = float> static T GetProgressMultiplierByTags(QuestDataEntity* questData, GameEntity* target) {
		return ((T (*)(void *, QuestDataEntity*, GameEntity*))(Il2CppBase() + 0x1C35FC0))(0, questData, target);
	}
	template <typename T = float> static T GetProgressMultiplierByCondition(QuestDataEntity* questData, ICommonContexts* world, GameEntity* target) {
		return ((T (*)(void *, QuestDataEntity*, ICommonContexts*, GameEntity*))(Il2CppBase() + 0x1C36270))(0, questData, world, target);
	}
	template <typename T = int32_t> static T GetRewardCount(QuestEntity* quest, Il2CppString* resourceName, bool withPremium, bool withMainServer) {
		return ((T (*)(void *, QuestEntity*, Il2CppString*, bool, bool))(Il2CppBase() + 0x1C362EC))(0, quest, resourceName, withPremium, withMainServer);
	}
	template <typename T = bool> static T CheckAutoActivate(QuestDataEntity* questData, ICommonContexts* world, GameEntity* player, int32_t level) {
		return ((T (*)(void *, QuestDataEntity*, ICommonContexts*, GameEntity*, int32_t))(Il2CppBase() + 0x1C36678))(0, questData, world, player, level);
	}
	template <typename T = bool> static T NeedNotifyOnFail(QuestEntity* questEntity) {
		return ((T (*)(void *, QuestEntity*))(Il2CppBase() + 0x1C36808))(0, questEntity);
	}
	template <typename T = bool> static T IsMainActQuest(QuestDataEntity* questData) {
		return ((T (*)(void *, QuestDataEntity*))(Il2CppBase() + 0x1C36860))(0, questData);
	}
	template <typename T = bool> static T CanClaimReward(QuestEntity* questEntity, bool hasPremium) {
		return ((T (*)(void *, QuestEntity*, bool))(Il2CppBase() + 0x1C368CC))(0, questEntity, hasPremium);
	}
	template <typename T = bool> static T CanTracking(QuestEntity* questEntity) {
		return ((T (*)(void *, QuestEntity*))(Il2CppBase() + 0x1C36940))(0, questEntity);
	}
	template <typename T = bool> static T RewardIsEmpty(QuestEntity* questEntity) {
		return ((T (*)(void *, QuestEntity*))(Il2CppBase() + 0x1C369B0))(0, questEntity);
	}
	template <typename T = ValueTuple2bool, bool>*> static T IsQuestTrackedAndComplete(QuestEntity* questEntity) {
		return ((T (*)(void *, QuestEntity*))(Il2CppBase() + 0x1C36A64))(0, questEntity);
	}
	template <typename T = ValueTuple2bool, bool>*> static T IsUntrackableQuestTrackedAndComplete(QuestEntity* questEntity) {
		return ((T (*)(void *, QuestEntity*))(Il2CppBase() + 0x1C36B24))(0, questEntity);
	}
	template <typename T = bool> static T IsClassLearned(ItemEntity* classEntity, int64_t playerId, ICommonContexts* contexts) {
		return ((T (*)(void *, ItemEntity*, int64_t, ICommonContexts*))(Il2CppBase() + 0x1C36BA8))(0, classEntity, playerId, contexts);
	}
	template <typename T = bool> static T IsClassBlocked(ItemEntity* classItem, AccountEntity* account, int64_t playerId, ICommonContexts* contexts) {
		return ((T (*)(void *, ItemEntity*, AccountEntity*, int64_t, ICommonContexts*))(Il2CppBase() + 0x1C36CC8))(0, classItem, account, playerId, contexts);
	}

};

