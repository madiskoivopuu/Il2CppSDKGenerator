#pragma once
#include <Il2Cpp/Il2Cpp.h>

class QuestsTrackerController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "QuestsTrackerController"));
	}

	template <typename T = uintptr_t> T& _panel() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _singleQuestViewPrefab() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _singleSeparator() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _dailyQuestViewPrefab() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _dailySeparator() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& _questViewPrefab() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& _questSeparator() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& _collapseButton() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& _expandButton() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _singleQuestsViews() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _dailyQuestsViews() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _questViews() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _currentSingleQuests() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _currentDailyQuests() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _currentOtherQuests() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = void*> T& _lastQuests() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& _window() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = bool> T& temporaryDisabled() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = float> static T& UnhideTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& _hidingCoroutine() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& _canvasGroup() {
		return *(T*)((uintptr_t)this + 0xB0);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(QuestsTrackerController*))(Il2CppBase() + 0x170A364))(this);
	}
	template <typename T = bool> T get_IsExpanded() {
		return ((T (*)(QuestsTrackerController*))(Il2CppBase() + 0x170A658))(this);
	}
	template <typename T = bool> T Containes(Il2CppString* questName) {
		return ((T (*)(QuestsTrackerController*, Il2CppString*))(Il2CppBase() + 0x170A684))(this, questName);
	}
	template <typename T = void> T Init(uintptr_t window) {
		return ((T (*)(QuestsTrackerController*, uintptr_t))(Il2CppBase() + 0x170A6F4))(this, window);
	}
	template <typename T = bool> T get_Active() {
		return ((T (*)(QuestsTrackerController*))(Il2CppBase() + 0x170A75C))(this);
	}
	template <typename T = void> T set_Active(bool value) {
		return ((T (*)(QuestsTrackerController*, bool))(Il2CppBase() + 0x170A780))(this, value);
	}
	template <typename T = bool> T get_ActiveInHierarchy() {
		return ((T (*)(QuestsTrackerController*))(Il2CppBase() + 0x170A7E4))(this);
	}
	template <typename T = void> T Collapse(bool notSave) {
		return ((T (*)(QuestsTrackerController*, bool))(Il2CppBase() + 0x170A4B0))(this, notSave);
	}
	template <typename T = void> T Expand(bool notSave) {
		return ((T (*)(QuestsTrackerController*, bool))(Il2CppBase() + 0x170A584))(this, notSave);
	}
	template <typename T = void> T ToggleIfNeed() {
		return ((T (*)(QuestsTrackerController*))(Il2CppBase() + 0x170A808))(this);
	}
	template <typename T = void> T UpdateView(uintptr_t accountEntity) {
		return ((T (*)(QuestsTrackerController*, uintptr_t))(Il2CppBase() + 0x170A884))(this, accountEntity);
	}
	template <typename T = uintptr_t> T GetView(Il2CppString* questName) {
		return ((T (*)(QuestsTrackerController*, Il2CppString*))(Il2CppBase() + 0x170B7A8))(this, questName);
	}
	template <typename T = void> T RemoveView(Il2CppString* questName) {
		return ((T (*)(QuestsTrackerController*, Il2CppString*))(Il2CppBase() + 0x170B918))(this, questName);
	}
	template <typename T = void> T UpdateQuests(int64_t ownerId, Il2CppList<uintptr_t>* views, Il2CppList<uintptr_t>* currentQuests, uintptr_t prefab, uintptr_t bottom) {
		return ((T (*)(QuestsTrackerController*, int64_t, Il2CppList<uintptr_t>*, Il2CppList<uintptr_t>*, uintptr_t, uintptr_t))(Il2CppBase() + 0x170B1C4))(this, ownerId, views, currentQuests, prefab, bottom);
	}
	template <typename T = void> T OnClickQuest(uintptr_t view) {
		return ((T (*)(QuestsTrackerController*, uintptr_t))(Il2CppBase() + 0x170BBB0))(this, view);
	}
	template <typename T = float> static T get_UnhideTime() {
		return ((T (*)(void *))(Il2CppBase() + 0x170C1EC))(0);
	}
	template <typename T = void> static T set_UnhideTime(float value) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x170C238))(0, value);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(QuestsTrackerController*))(Il2CppBase() + 0x170C290))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(QuestsTrackerController*))(Il2CppBase() + 0x170C3C0))(this);
	}
	template <typename T = void> T Hide(float time) {
		return ((T (*)(QuestsTrackerController*, float))(Il2CppBase() + 0x170C5C8))(this, time);
	}
	template <typename T = void> T Restore() {
		return ((T (*)(QuestsTrackerController*))(Il2CppBase() + 0x170C6E4))(this);
	}
	template <typename T = void> T Awakeb__18_0() {
		return ((T (*)(QuestsTrackerController*))(Il2CppBase() + 0x170C8B8))(this);
	}
	template <typename T = void> T Awakeb__18_1() {
		return ((T (*)(QuestsTrackerController*))(Il2CppBase() + 0x170C8C0))(this);
	}

};

}
