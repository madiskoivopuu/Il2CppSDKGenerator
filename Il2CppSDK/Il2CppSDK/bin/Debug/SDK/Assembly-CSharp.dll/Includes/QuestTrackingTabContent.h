#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "QuestTabContent" 

class QuestTrackingTabContent: QuestTabContent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "QuestTrackingTabContent"));
	}

	template <typename T = uintptr_t> T& questsContainer() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& questViewPrefab() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& trackedQuests() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = Il2CppString*> T get_TabCaption() {
		return ((T (*)(QuestTrackingTabContent*))(Il2CppBase() + 0x1706510))(this);
	}
	template <typename T = void> T Bind(uintptr_t tabView, uintptr_t tooltipView, uintptr_t avatar, uintptr_t account) {
		return ((T (*)(QuestTrackingTabContent*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1706554))(this, tabView, tooltipView, avatar, account);
	}
	template <typename T = void> T UpdateView(uintptr_t avatar) {
		return ((T (*)(QuestTrackingTabContent*, uintptr_t))(Il2CppBase() + 0x170683C))(this, avatar);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime, uintptr_t avatar, uintptr_t account) {
		return ((T (*)(QuestTrackingTabContent*, float, uintptr_t, uintptr_t))(Il2CppBase() + 0x17071C8))(this, deltaTime, avatar, account);
	}

};

}
