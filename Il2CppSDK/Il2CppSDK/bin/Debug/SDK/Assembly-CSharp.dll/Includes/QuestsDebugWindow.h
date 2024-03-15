#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class QuestsDebugWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "QuestsDebugWindow"));
	}

	template <typename R = uintptr_t> R& _closeButton() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& _questsContainer() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = QuestDebugView*> R& _questViewPrefab() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = uintptr_t> R& _filterInputField() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = uintptr_t> R& _partialSearchToggle() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	 Il2CppList<QuestDebugView*>*& _quests() {
		return *(Il2CppList<QuestDebugView*>**)((uintptr_t)this + 0xA0);
	}
	 Il2CppList<QuestEntity*>*& _buffer() {
		return *(Il2CppList<QuestEntity*>**)((uintptr_t)this + 0xA8);
	}
	template <typename R = Il2CppString*> R& currentFilter() {
		return *(R*)((uintptr_t)this + 0xB0);
	}
	template <typename R = bool> R& needPartial() {
		return *(R*)((uintptr_t)this + 0xB8);
	}

	template <typename R = void> R Awake() {
		return ((R (*)(QuestsDebugWindow*))(Il2CppBase() + 0x1707448))(this);
	}
	template <typename R = void> R OnShow() {
		return ((R (*)(QuestsDebugWindow*))(Il2CppBase() + 0x17075EC))(this);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(QuestsDebugWindow*, float))(Il2CppBase() + 0x1707774))(this, deltaTime);
	}
	template <typename R = bool> R IsNeedToShow(Il2CppString* questName) {
		return ((R (*)(QuestsDebugWindow*, Il2CppString*))(Il2CppBase() + 0x1707E30))(this, questName);
	}
	template <typename R = void> R Awakeb__10_0(Il2CppString* text) {
		return ((R (*)(QuestsDebugWindow*, Il2CppString*))(Il2CppBase() + 0x1708014))(this, text);
	}
	template <typename R = void> R Awakeb__10_1(bool value) {
		return ((R (*)(QuestsDebugWindow*, bool))(Il2CppBase() + 0x170801C))(this, value);
	}

};

