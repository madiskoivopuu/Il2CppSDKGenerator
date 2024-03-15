#pragma once
#include <Il2Cpp/Il2Cpp.h>

class QuestsTrackerController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "QuestsTrackerController"));
	}

	template <typename R = uintptr_t> R& _panel() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = QuestTrackerView*> R& _singleQuestViewPrefab() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& _singleSeparator() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = QuestTrackerView*> R& _dailyQuestViewPrefab() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& _dailySeparator() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = QuestTrackerView*> R& _questViewPrefab() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = uintptr_t> R& _questSeparator() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = HUDQuestTrackerButton*> R& _collapseButton() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = HUDQuestTrackerButton*> R& _expandButton() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	 Il2CppList<QuestTrackerView*>*& _singleQuestsViews() {
		return *(Il2CppList<QuestTrackerView*>**)((uintptr_t)this + 0x60);
	}
	 Il2CppList<QuestTrackerView*>*& _dailyQuestsViews() {
		return *(Il2CppList<QuestTrackerView*>**)((uintptr_t)this + 0x68);
	}
	 Il2CppList<QuestTrackerView*>*& _questViews() {
		return *(Il2CppList<QuestTrackerView*>**)((uintptr_t)this + 0x70);
	}
	 Il2CppList<QuestEntity*>*& _currentSingleQuests() {
		return *(Il2CppList<QuestEntity*>**)((uintptr_t)this + 0x78);
	}
	 Il2CppList<QuestEntity*>*& _currentDailyQuests() {
		return *(Il2CppList<QuestEntity*>**)((uintptr_t)this + 0x80);
	}
	 Il2CppList<QuestEntity*>*& _currentOtherQuests() {
		return *(Il2CppList<QuestEntity*>**)((uintptr_t)this + 0x88);
	}
	 HashSet1Il2CppString*>*& _lastQuests() {
		return *(HashSet1Il2CppString*>**)((uintptr_t)this + 0x90);
	}
	template <typename R = IHUDWindow*> R& _window() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = bool> R& temporaryDisabled() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = float> static R& UnhideTime() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = uintptr_t> R& _hidingCoroutine() {
		return *(R*)((uintptr_t)this + 0xA8);
	}
	template <typename R = uintptr_t> R& _canvasGroup() {
		return *(R*)((uintptr_t)this + 0xB0);
	}

	template <typename R = void> R Awake() {
		return ((R (*)(QuestsTrackerController*))(Il2CppBase() + 0x170A364))(this);
	}
	template <typename R = bool> R get_IsExpanded() {
		return ((R (*)(QuestsTrackerController*))(Il2CppBase() + 0x170A658))(this);
	}
	template <typename R = bool> R Containes(Il2CppString* questName) {
		return ((R (*)(QuestsTrackerController*, Il2CppString*))(Il2CppBase() + 0x170A684))(this, questName);
	}
	template <typename R = void> R Init(IHUDWindow* window) {
		return ((R (*)(QuestsTrackerController*, IHUDWindow*))(Il2CppBase() + 0x170A6F4))(this, window);
	}
	template <typename R = bool> R get_Active() {
		return ((R (*)(QuestsTrackerController*))(Il2CppBase() + 0x170A75C))(this);
	}
	template <typename R = void> R set_Active(bool value) {
		return ((R (*)(QuestsTrackerController*, bool))(Il2CppBase() + 0x170A780))(this, value);
	}
	template <typename R = bool> R get_ActiveInHierarchy() {
		return ((R (*)(QuestsTrackerController*))(Il2CppBase() + 0x170A7E4))(this);
	}
	template <typename R = void> R Collapse(bool notSave) {
		return ((R (*)(QuestsTrackerController*, bool))(Il2CppBase() + 0x170A4B0))(this, notSave);
	}
	template <typename R = void> R Expand(bool notSave) {
		return ((R (*)(QuestsTrackerController*, bool))(Il2CppBase() + 0x170A584))(this, notSave);
	}
	template <typename R = void> R ToggleIfNeed() {
		return ((R (*)(QuestsTrackerController*))(Il2CppBase() + 0x170A808))(this);
	}
	template <typename R = void> R UpdateView(AccountEntity* accountEntity) {
		return ((R (*)(QuestsTrackerController*, AccountEntity*))(Il2CppBase() + 0x170A884))(this, accountEntity);
	}
	template <typename R = IQuestTrackerView*> R GetView(Il2CppString* questName) {
		return ((R (*)(QuestsTrackerController*, Il2CppString*))(Il2CppBase() + 0x170B7A8))(this, questName);
	}
	template <typename R = void> R RemoveView(Il2CppString* questName) {
		return ((R (*)(QuestsTrackerController*, Il2CppString*))(Il2CppBase() + 0x170B918))(this, questName);
	}
	template <typename R = void> R UpdateQuests(int64_t ownerId, Il2CppList<QuestTrackerView*>* views, Il2CppList<QuestEntity*>* currentQuests, QuestTrackerView* prefab, uintptr_t bottom) {
		return ((R (*)(QuestsTrackerController*, int64_t, Il2CppList<QuestTrackerView*>*, Il2CppList<QuestEntity*>*, QuestTrackerView*, uintptr_t))(Il2CppBase() + 0x170B1C4))(this, ownerId, views, currentQuests, prefab, bottom);
	}
	template <typename R = void> R OnClickQuest(QuestTrackerView* view) {
		return ((R (*)(QuestsTrackerController*, QuestTrackerView*))(Il2CppBase() + 0x170BBB0))(this, view);
	}
	template <typename R = float> static R get_UnhideTime() {
		return ((R (*)(void *))(Il2CppBase() + 0x170C1EC))(0);
	}
	template <typename R = void> static R set_UnhideTime(float value) {
		return ((R (*)(void *, float))(Il2CppBase() + 0x170C238))(0, value);
	}
	template <typename R = void> R OnEnable() {
		return ((R (*)(QuestsTrackerController*))(Il2CppBase() + 0x170C290))(this);
	}
	template <typename R = void> R Update() {
		return ((R (*)(QuestsTrackerController*))(Il2CppBase() + 0x170C3C0))(this);
	}
	template <typename R = void> R Hide(float time) {
		return ((R (*)(QuestsTrackerController*, float))(Il2CppBase() + 0x170C5C8))(this, time);
	}
	template <typename R = void> R Restore() {
		return ((R (*)(QuestsTrackerController*))(Il2CppBase() + 0x170C6E4))(this);
	}
	template <typename R = void> R Awakeb__18_0() {
		return ((R (*)(QuestsTrackerController*))(Il2CppBase() + 0x170C8B8))(this);
	}
	template <typename R = void> R Awakeb__18_1() {
		return ((R (*)(QuestsTrackerController*))(Il2CppBase() + 0x170C8C0))(this);
	}

};

