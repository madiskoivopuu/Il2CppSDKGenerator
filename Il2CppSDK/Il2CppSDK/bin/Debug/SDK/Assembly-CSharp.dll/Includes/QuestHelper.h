#pragma once
#include <Il2Cpp/Il2Cpp.h>

class QuestHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "QuestHelper"));
	}


	template <typename T = bool> static T HasTriggerPlayerClassProgress(uintptr_t questData, uintptr_t progressType) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1C35F08))(0, questData, progressType);
	}
	template <typename T = float> static T GetProgressMultiplier(uintptr_t questData, uintptr_t world, uintptr_t target) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1C35F60))(0, questData, world, target);
	}
	template <typename T = float> static T GetProgressMultiplierByTags(uintptr_t questData, uintptr_t target) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1C35FC0))(0, questData, target);
	}
	template <typename T = float> static T GetProgressMultiplierByCondition(uintptr_t questData, uintptr_t world, uintptr_t target) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1C36270))(0, questData, world, target);
	}
	template <typename T = int32_t> static T GetRewardCount(uintptr_t quest, Il2CppString* resourceName, bool withPremium, bool withMainServer) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, bool, bool))(Il2CppBase() + 0x1C362EC))(0, quest, resourceName, withPremium, withMainServer);
	}
	template <typename T = bool> static T CheckAutoActivate(uintptr_t questData, uintptr_t world, uintptr_t player, int32_t level) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x1C36678))(0, questData, world, player, level);
	}
	template <typename T = bool> static T NeedNotifyOnFail(uintptr_t questEntity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1C36808))(0, questEntity);
	}
	template <typename T = bool> static T IsMainActQuest(uintptr_t questData) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1C36860))(0, questData);
	}
	template <typename T = bool> static T CanClaimReward(uintptr_t questEntity, bool hasPremium) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x1C368CC))(0, questEntity, hasPremium);
	}
	template <typename T = bool> static T CanTracking(uintptr_t questEntity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1C36940))(0, questEntity);
	}
	template <typename T = bool> static T RewardIsEmpty(uintptr_t questEntity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1C369B0))(0, questEntity);
	}
	template <typename T = void*> static T IsQuestTrackedAndComplete(uintptr_t questEntity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1C36A64))(0, questEntity);
	}
	template <typename T = void*> static T IsUntrackableQuestTrackedAndComplete(uintptr_t questEntity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1C36B24))(0, questEntity);
	}
	template <typename T = bool> static T IsClassLearned(uintptr_t classEntity, int64_t playerId, uintptr_t contexts) {
		return ((T (*)(void *, uintptr_t, int64_t, uintptr_t))(Il2CppBase() + 0x1C36BA8))(0, classEntity, playerId, contexts);
	}
	template <typename T = bool> static T IsClassBlocked(uintptr_t classItem, uintptr_t account, int64_t playerId, uintptr_t contexts) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int64_t, uintptr_t))(Il2CppBase() + 0x1C36CC8))(0, classItem, account, playerId, contexts);
	}

};

}
