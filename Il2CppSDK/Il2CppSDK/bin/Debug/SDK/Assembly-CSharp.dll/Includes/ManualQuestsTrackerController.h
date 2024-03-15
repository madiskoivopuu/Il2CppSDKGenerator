#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ManualQuestsTrackerController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ManualQuestsTrackerController"));
	}

	template <typename R = uintptr_t> R& _panel() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = ManualQuestTrackerView*> R& _singleQuestViewPrefab() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& _singleSeparator() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = ManualQuestTrackerView*> R& _dailyQuestViewPrefab() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& _dailySeparator() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = ManualQuestTrackerView*> R& _questViewPrefab() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = uintptr_t> R& _questSeparator() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = uintptr_t> R& _collapseButton() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = uintptr_t> R& _expandButton() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	 Il2CppList<Slot1<Data*>*>*& slots() {
		return *(Il2CppList<Slot1<Data*>*>**)((uintptr_t)this + 0x60);
	}
	template <typename R = QuestsSlotRoll*> R& slotRoll() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	 HashSet1<Il2CppString*>*& _lastQuests() {
		return *(HashSet1<Il2CppString*>**)((uintptr_t)this + 0x70);
	}
	template <typename R = Il2CppString*> static R& TutorialTag() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = IHUDWindow*> R& _window() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = bool> R& temporaryDisabled() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	 Il2CppDictionary<int32_t, Content1<Data*>*>*& contentPrefabs() {
		return *(Il2CppDictionary<int32_t, Content1<Data*>*>**)((uintptr_t)this + 0x88);
	}
	template <typename R = float> static R& UnhideTime() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = uintptr_t> R& _canvasGroup() {
		return *(R*)((uintptr_t)this + 0x90);
	}

	template <typename R = void> R Awake() {
		return ((R (*)(ManualQuestsTrackerController*))(Il2CppBase() + 0x1265674))(this);
	}
	template <typename R = void> R OnDestroy() {
		return ((R (*)(ManualQuestsTrackerController*))(Il2CppBase() + 0x1265974))(this);
	}
	template <typename R = bool> R get_IsExpanded() {
		return ((R (*)(ManualQuestsTrackerController*))(Il2CppBase() + 0x12659F0))(this);
	}
	template <typename R = bool> R Containes(Il2CppString* questName) {
		return ((R (*)(ManualQuestsTrackerController*, Il2CppString*))(Il2CppBase() + 0x1265A1C))(this, questName);
	}
	template <typename R = void> R Init(IHUDWindow* window) {
		return ((R (*)(ManualQuestsTrackerController*, IHUDWindow*))(Il2CppBase() + 0x1265A8C))(this, window);
	}
	template <typename R = bool> R get_Active() {
		return ((R (*)(ManualQuestsTrackerController*))(Il2CppBase() + 0x1265F44))(this);
	}
	template <typename R = void> R set_Active(bool value) {
		return ((R (*)(ManualQuestsTrackerController*, bool))(Il2CppBase() + 0x1265F68))(this, value);
	}
	template <typename R = bool> R get_ActiveInHierarchy() {
		return ((R (*)(ManualQuestsTrackerController*))(Il2CppBase() + 0x1265FCC))(this);
	}
	template <typename R = void> R Collapse(bool notSave) {
		return ((R (*)(ManualQuestsTrackerController*, bool))(Il2CppBase() + 0x126580C))(this, notSave);
	}
	template <typename R = void> R Expand(bool notSave) {
		return ((R (*)(ManualQuestsTrackerController*, bool))(Il2CppBase() + 0x12658C0))(this, notSave);
	}
	template <typename R = void> R ToggleIfNeed() {
		return ((R (*)(ManualQuestsTrackerController*))(Il2CppBase() + 0x1265FF0))(this);
	}
	template <typename R = void> R UpdateView(AccountEntity* accountEntity) {
		return ((R (*)(ManualQuestsTrackerController*, AccountEntity*))(Il2CppBase() + 0x126606C))(this, accountEntity);
	}
	template <typename R = IQuestTrackerView*> R GetView(Il2CppString* questName) {
		return ((R (*)(ManualQuestsTrackerController*, Il2CppString*))(Il2CppBase() + 0x1266950))(this, questName);
	}
	template <typename R = void> R RemoveView(Il2CppString* questName) {
		return ((R (*)(ManualQuestsTrackerController*, Il2CppString*))(Il2CppBase() + 0x126696C))(this, questName);
	}
	template <typename R = void> R UpdateQuestsNew(int64_t ownerId, Il2CppList<QuestEntity*>* currentQuests, uintptr_t bottom) {
		return ((R (*)(ManualQuestsTrackerController*, int64_t, Il2CppList<QuestEntity*>*, uintptr_t))(Il2CppBase() + 0x12668E0))(this, ownerId, currentQuests, bottom);
	}
	template <typename R = void> R OnClickQuest(ManualQuestTrackerView* view) {
		return ((R (*)(ManualQuestsTrackerController*, ManualQuestTrackerView*))(Il2CppBase() + 0x1266988))(this, view);
	}
	template <typename R = float> static R get_UnhideTime() {
		return ((R (*)(void *))(Il2CppBase() + 0x12671B4))(0);
	}
	template <typename R = void> static R set_UnhideTime(float value) {
		return ((R (*)(void *, float))(Il2CppBase() + 0x1267200))(0, value);
	}
	template <typename R = void> R OnEnable() {
		return ((R (*)(ManualQuestsTrackerController*))(Il2CppBase() + 0x1267258))(this);
	}
	template <typename R = void> R Update() {
		return ((R (*)(ManualQuestsTrackerController*))(Il2CppBase() + 0x1267388))(this);
	}
	template <typename R = void> R Hide(float time) {
		return ((R (*)(ManualQuestsTrackerController*, float))(Il2CppBase() + 0x1267590))(this, time);
	}
	template <typename R = void> R Restore() {
		return ((R (*)(ManualQuestsTrackerController*))(Il2CppBase() + 0x12676AC))(this);
	}
	template <typename R = void> R Awakeb__16_0() {
		return ((R (*)(ManualQuestsTrackerController*))(Il2CppBase() + 0x1267720))(this);
	}
	template <typename R = void> R Awakeb__16_1() {
		return ((R (*)(ManualQuestsTrackerController*))(Il2CppBase() + 0x1267728))(this);
	}

};

