#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "QuestTabContent.h" 

class OtherQuestTabContent : public QuestTabContent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OtherQuestTabContent"));
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
	template <typename R = int32_t> R& questsCount() {
		return *(R*)((uintptr_t)this + 0x58);
	}

	template <typename R = Il2CppString*> R get_TabCaption() {
		return ((R (*)(OtherQuestTabContent*))(Il2CppBase() + 0x11E4F34))(this);
	}
	template <typename R = void> R Bind(QuestCategoryView* tabView, TooltipView* tooltipView, GameEntity* avatar, AccountEntity* account) {
		return ((R (*)(OtherQuestTabContent*, QuestCategoryView*, TooltipView*, GameEntity*, AccountEntity*))(Il2CppBase() + 0x11E4F78))(this, tabView, tooltipView, avatar, account);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime, GameEntity* avatar, AccountEntity* account) {
		return ((R (*)(OtherQuestTabContent*, float, GameEntity*, AccountEntity*))(Il2CppBase() + 0x11E5B38))(this, deltaTime, avatar, account);
	}
	template <typename R = bool> R TryShowQuest(QuestDataEntity* questData) {
		return ((R (*)(OtherQuestTabContent*, QuestDataEntity*))(Il2CppBase() + 0x11E5C58))(this, questData);
	}
	template <typename R = Il2CppArray<QuestEntity*>*> R GetOtherQuests(int64_t playerId) {
		return ((R (*)(OtherQuestTabContent*, int64_t))(Il2CppBase() + 0x11E592C))(this, playerId);
	}
	template <typename R = Il2CppArray<QuestEntity*>*> R GetSeasonQuests(int64_t playerId) {
		return ((R (*)(OtherQuestTabContent*, int64_t))(Il2CppBase() + 0x11E54E4))(this, playerId);
	}
	template <typename R = Il2CppArray<QuestEntity*>*> R GetNpcQuests(int64_t playerId) {
		return ((R (*)(OtherQuestTabContent*, int64_t))(Il2CppBase() + 0x11E5708))(this, playerId);
	}

};

