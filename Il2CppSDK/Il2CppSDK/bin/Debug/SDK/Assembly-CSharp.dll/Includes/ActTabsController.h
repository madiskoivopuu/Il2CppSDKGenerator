#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ActTabsController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ActTabsController"));
	}

	template <typename T = uintptr_t> T& _scrollRect() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = ScrollButton*> T& _left() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = ScrollButton*> T& _right() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& _maxVisibleCount() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _content() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = ActTabButton*> T& _tabRefab() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppList<ActTabButton*>*> T& _tabs() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = IActTabsControllerContext*> T& _actQuestsWindow() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(ActTabsController*))(Il2CppBase() + 0x1DB7C8C))(this);
	}
	template <typename T = void> T Init(IActTabsControllerContext* actQuestsWindow, int64_t playerId) {
		return ((T (*)(ActTabsController*, IActTabsControllerContext*, int64_t))(Il2CppBase() + 0x1DB7CC8))(this, actQuestsWindow, playerId);
	}
	template <typename T = void> T OnActTabClick(ActTabButton* tab) {
		return ((T (*)(ActTabsController*, ActTabButton*))(Il2CppBase() + 0x1DB8700))(this, tab);
	}
	template <typename T = bool> T TryShowAct(Il2CppString* name) {
		return ((T (*)(ActTabsController*, Il2CppString*))(Il2CppBase() + 0x1DB89A0))(this, name);
	}
	template <typename T = void> T ShowTab(ActTabButton* activeTab) {
		return ((T (*)(ActTabsController*, ActTabButton*))(Il2CppBase() + 0x1DB879C))(this, activeTab);
	}
	template <typename T = void> T Update() {
		return ((T (*)(ActTabsController*))(Il2CppBase() + 0x1DB8AFC))(this);
	}
	template <typename T = void> T UpdateView(int64_t playerId, bool hasPremium) {
		return ((T (*)(ActTabsController*, int64_t, bool))(Il2CppBase() + 0x1DB8C94))(this, playerId, hasPremium);
	}

};

