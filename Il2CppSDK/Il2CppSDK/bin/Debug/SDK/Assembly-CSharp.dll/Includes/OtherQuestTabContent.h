#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "QuestTabContent.h" 

class OtherQuestTabContent : public QuestTabContent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OtherQuestTabContent"));
	}

	template <typename T = uintptr_t> T& questsContainer() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = ActQuestViewNew*> T& questViewPrefab() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& questsScroll() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& questsCount() {
		return *(T*)((uintptr_t)this + 0x58);
	}

	template <typename T = Il2CppString*> T get_TabCaption() {
		return ((T (*)(OtherQuestTabContent*))(Il2CppBase() + 0x11E4F34))(this);
	}
	template <typename T = void> T Bind(QuestCategoryView* tabView, TooltipView* tooltipView, GameEntity* avatar, AccountEntity* account) {
		return ((T (*)(OtherQuestTabContent*, QuestCategoryView*, TooltipView*, GameEntity*, AccountEntity*))(Il2CppBase() + 0x11E4F78))(this, tabView, tooltipView, avatar, account);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime, GameEntity* avatar, AccountEntity* account) {
		return ((T (*)(OtherQuestTabContent*, float, GameEntity*, AccountEntity*))(Il2CppBase() + 0x11E5B38))(this, deltaTime, avatar, account);
	}
	template <typename T = bool> T TryShowQuest(QuestDataEntity* questData) {
		return ((T (*)(OtherQuestTabContent*, QuestDataEntity*))(Il2CppBase() + 0x11E5C58))(this, questData);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetOtherQuests(int64_t playerId) {
		return ((T (*)(OtherQuestTabContent*, int64_t))(Il2CppBase() + 0x11E592C))(this, playerId);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetSeasonQuests(int64_t playerId) {
		return ((T (*)(OtherQuestTabContent*, int64_t))(Il2CppBase() + 0x11E54E4))(this, playerId);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetNpcQuests(int64_t playerId) {
		return ((T (*)(OtherQuestTabContent*, int64_t))(Il2CppBase() + 0x11E5708))(this, playerId);
	}

};

