#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "QuestTabContent" 

class NpcQuestTabContent: QuestTabContent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NpcQuestTabContent"));
	}

	template <typename T = uintptr_t> T& questsContainer() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& questViewPrefab() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& questsScroll() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& quests() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& questsCount() {
		return *(T*)((uintptr_t)this + 0x60);
	}

	template <typename T = Il2CppString*> T get_TabCaption() {
		return ((T (*)(NpcQuestTabContent*))(Il2CppBase() + 0x11D42A0))(this);
	}
	template <typename T = void> T Bind(uintptr_t tabView, uintptr_t tooltipView, uintptr_t avatar, uintptr_t account) {
		return ((T (*)(NpcQuestTabContent*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x11D42E4))(this, tabView, tooltipView, avatar, account);
	}
	template <typename T = void*> T GetNotifyCheckResult(uintptr_t account, int64_t playerId) {
		return ((T (*)(NpcQuestTabContent*, uintptr_t, int64_t))(Il2CppBase() + 0x11D4804))(this, account, playerId);
	}
	template <typename T = bool> T TryShowQuest(uintptr_t questData) {
		return ((T (*)(NpcQuestTabContent*, uintptr_t))(Il2CppBase() + 0x11D49AC))(this, questData);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime, uintptr_t avatar, uintptr_t account) {
		return ((T (*)(NpcQuestTabContent*, float, uintptr_t, uintptr_t))(Il2CppBase() + 0x11D4AE8))(this, deltaTime, avatar, account);
	}

};

}
