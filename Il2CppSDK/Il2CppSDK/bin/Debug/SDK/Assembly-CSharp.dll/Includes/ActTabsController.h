#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ActTabsController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ActTabsController"));
	}

	template <typename R = uintptr_t> R& _scrollRect() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = ScrollButton*> R& _left() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = ScrollButton*> R& _right() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> R& _maxVisibleCount() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& _content() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = ActTabButton*> R& _tabRefab() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	 Il2CppList<ActTabButton*>*& _tabs() {
		return *(Il2CppList<ActTabButton*>**)((uintptr_t)this + 0x48);
	}
	template <typename R = IActTabsControllerContext*> R& _actQuestsWindow() {
		return *(R*)((uintptr_t)this + 0x50);
	}

	template <typename R = void> R Awake() {
		return ((R (*)(ActTabsController*))(Il2CppBase() + 0x1DB7C8C))(this);
	}
	template <typename R = void> R Init(IActTabsControllerContext* actQuestsWindow, int64_t playerId) {
		return ((R (*)(ActTabsController*, IActTabsControllerContext*, int64_t))(Il2CppBase() + 0x1DB7CC8))(this, actQuestsWindow, playerId);
	}
	template <typename R = void> R OnActTabClick(ActTabButton* tab) {
		return ((R (*)(ActTabsController*, ActTabButton*))(Il2CppBase() + 0x1DB8700))(this, tab);
	}
	template <typename R = bool> R TryShowAct(Il2CppString* name) {
		return ((R (*)(ActTabsController*, Il2CppString*))(Il2CppBase() + 0x1DB89A0))(this, name);
	}
	template <typename R = void> R ShowTab(ActTabButton* activeTab) {
		return ((R (*)(ActTabsController*, ActTabButton*))(Il2CppBase() + 0x1DB879C))(this, activeTab);
	}
	template <typename R = void> R Update() {
		return ((R (*)(ActTabsController*))(Il2CppBase() + 0x1DB8AFC))(this);
	}
	template <typename R = void> R UpdateView(int64_t playerId, bool hasPremium) {
		return ((R (*)(ActTabsController*, int64_t, bool))(Il2CppBase() + 0x1DB8C94))(this, playerId, hasPremium);
	}

};

