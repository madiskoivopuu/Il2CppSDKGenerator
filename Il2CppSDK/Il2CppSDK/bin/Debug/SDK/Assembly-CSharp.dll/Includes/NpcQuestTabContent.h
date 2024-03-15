#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "QuestTabContent.h" 

class NpcQuestTabContent : public QuestTabContent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NpcQuestTabContent"));
	}

	template <typename R = uintptr_t> R& questsContainer() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = ActQuestViewNew*> R& questViewPrefab() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = uintptr_t> R& questsScroll() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	 Il2CppList<QuestEntity*>*& quests() {
		return *(Il2CppList<QuestEntity*>**)((uintptr_t)this + 0x58);
	}
	template <typename R = int32_t> R& questsCount() {
		return *(R*)((uintptr_t)this + 0x60);
	}

	template <typename R = Il2CppString*> R get_TabCaption() {
		return ((R (*)(NpcQuestTabContent*))(Il2CppBase() + 0x11D42A0))(this);
	}
	template <typename R = void> R Bind(QuestCategoryView* tabView, TooltipView* tooltipView, GameEntity* avatar, AccountEntity* account) {
		return ((R (*)(NpcQuestTabContent*, QuestCategoryView*, TooltipView*, GameEntity*, AccountEntity*))(Il2CppBase() + 0x11D42E4))(this, tabView, tooltipView, avatar, account);
	}
	 ValueTuple2<bool, Il2CppString*>* GetNotifyCheckResult(AccountEntity* account, int64_t playerId) {
		return ((ValueTuple2<bool, Il2CppString*>* (*)(NpcQuestTabContent*, AccountEntity*, int64_t))(Il2CppBase() + 0x11D4804))(this, account, playerId);
	}
	template <typename R = bool> R TryShowQuest(QuestDataEntity* questData) {
		return ((R (*)(NpcQuestTabContent*, QuestDataEntity*))(Il2CppBase() + 0x11D49AC))(this, questData);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime, GameEntity* avatar, AccountEntity* account) {
		return ((R (*)(NpcQuestTabContent*, float, GameEntity*, AccountEntity*))(Il2CppBase() + 0x11D4AE8))(this, deltaTime, avatar, account);
	}

};

