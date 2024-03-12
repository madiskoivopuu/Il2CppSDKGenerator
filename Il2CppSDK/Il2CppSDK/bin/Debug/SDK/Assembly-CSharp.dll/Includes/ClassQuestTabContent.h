#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "QuestTabContent" 

class ClassQuestTabContent: QuestTabContent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClassQuestTabContent"));
	}

	template <typename T = uintptr_t> T& tabsController() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& questsScroll() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& selectedClassIcon() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& selectedClassRarity() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& selectedClassName() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& lockedAnimator() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& grayScaleMaterial() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& simpleMaterial() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = int32_t> T& questsCount() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = int32_t> T& ActiveTabIndex() {
		return *(T*)((uintptr_t)this + 0x84);
	}

	template <typename T = Il2CppString*> T get_TabCaption() {
		return ((T (*)(ClassQuestTabContent*))(Il2CppBase() + 0x159AC3C))(this);
	}
	template <typename T = void> T Bind(uintptr_t tabView, uintptr_t tooltipView, uintptr_t avatar, uintptr_t account) {
		return ((T (*)(ClassQuestTabContent*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x159AC80))(this, tabView, tooltipView, avatar, account);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime, uintptr_t avatar, uintptr_t account) {
		return ((T (*)(ClassQuestTabContent*, float, uintptr_t, uintptr_t))(Il2CppBase() + 0x159AD60))(this, deltaTime, avatar, account);
	}
	template <typename T = void*> T GetNotifyCheckResult(uintptr_t account, int64_t playerId) {
		return ((T (*)(ClassQuestTabContent*, uintptr_t, int64_t))(Il2CppBase() + 0x159AEF0))(this, account, playerId);
	}
	template <typename T = void> T OnTabSelected() {
		return ((T (*)(ClassQuestTabContent*))(Il2CppBase() + 0x159AFC4))(this);
	}
	template <typename T = int32_t> T get_ActiveTabIndex() {
		return ((T (*)(ClassQuestTabContent*))(Il2CppBase() + 0x159B86C))(this);
	}
	template <typename T = void> T set_ActiveTabIndex(int32_t value) {
		return ((T (*)(ClassQuestTabContent*, int32_t))(Il2CppBase() + 0x159B874))(this, value);
	}
	template <typename T = void> T ShowClass(uintptr_t classItem, bool isLocked) {
		return ((T (*)(ClassQuestTabContent*, uintptr_t, bool))(Il2CppBase() + 0x159B010))(this, classItem, isLocked);
	}
	template <typename T = bool> T TryShowQuest(uintptr_t questData) {
		return ((T (*)(ClassQuestTabContent*, uintptr_t))(Il2CppBase() + 0x159B87C))(this, questData);
	}

};

}
