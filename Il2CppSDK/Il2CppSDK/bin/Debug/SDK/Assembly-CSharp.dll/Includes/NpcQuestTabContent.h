#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "QuestTabContent.h" 

class NpcQuestTabContent : public QuestTabContent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NpcQuestTabContent"));
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
	template <typename T = Il2CppList<QuestEntity*>*> T& quests() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& questsCount() {
		return *(T*)((uintptr_t)this + 0x60);
	}

	template <typename T = Il2CppString*> T get_TabCaption() {
		return ((T (*)(NpcQuestTabContent*))(Il2CppBase() + 0x11D42A0))(this);
	}
	template <typename T = void> T Bind(QuestCategoryView* tabView, TooltipView* tooltipView, GameEntity* avatar, AccountEntity* account) {
		return ((T (*)(NpcQuestTabContent*, QuestCategoryView*, TooltipView*, GameEntity*, AccountEntity*))(Il2CppBase() + 0x11D42E4))(this, tabView, tooltipView, avatar, account);
	}
	template <typename T = ValueTuple2bool, Il2CppString*>*> T GetNotifyCheckResult(AccountEntity* account, int64_t playerId) {
		return ((T (*)(NpcQuestTabContent*, AccountEntity*, int64_t))(Il2CppBase() + 0x11D4804))(this, account, playerId);
	}
	template <typename T = bool> T TryShowQuest(QuestDataEntity* questData) {
		return ((T (*)(NpcQuestTabContent*, QuestDataEntity*))(Il2CppBase() + 0x11D49AC))(this, questData);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime, GameEntity* avatar, AccountEntity* account) {
		return ((T (*)(NpcQuestTabContent*, float, GameEntity*, AccountEntity*))(Il2CppBase() + 0x11D4AE8))(this, deltaTime, avatar, account);
	}

};

