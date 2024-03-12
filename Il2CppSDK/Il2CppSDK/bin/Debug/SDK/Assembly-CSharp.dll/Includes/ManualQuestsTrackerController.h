#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ManualQuestsTrackerController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ManualQuestsTrackerController"));
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
	template <typename T = Il2CppList<void*>*> T& slots() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& slotRoll() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = void*> T& _lastQuests() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppString*> static T& TutorialTag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& _window() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = bool> T& temporaryDisabled() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppDictionary<int32_t, void*>*> T& contentPrefabs() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = float> static T& UnhideTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& _canvasGroup() {
		return *(T*)((uintptr_t)this + 0x90);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(ManualQuestsTrackerController*))(Il2CppBase() + 0x1265674))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(ManualQuestsTrackerController*))(Il2CppBase() + 0x1265974))(this);
	}
	template <typename T = bool> T get_IsExpanded() {
		return ((T (*)(ManualQuestsTrackerController*))(Il2CppBase() + 0x12659F0))(this);
	}
	template <typename T = bool> T Containes(Il2CppString* questName) {
		return ((T (*)(ManualQuestsTrackerController*, Il2CppString*))(Il2CppBase() + 0x1265A1C))(this, questName);
	}
	template <typename T = void> T Init(uintptr_t window) {
		return ((T (*)(ManualQuestsTrackerController*, uintptr_t))(Il2CppBase() + 0x1265A8C))(this, window);
	}
	template <typename T = bool> T get_Active() {
		return ((T (*)(ManualQuestsTrackerController*))(Il2CppBase() + 0x1265F44))(this);
	}
	template <typename T = void> T set_Active(bool value) {
		return ((T (*)(ManualQuestsTrackerController*, bool))(Il2CppBase() + 0x1265F68))(this, value);
	}
	template <typename T = bool> T get_ActiveInHierarchy() {
		return ((T (*)(ManualQuestsTrackerController*))(Il2CppBase() + 0x1265FCC))(this);
	}
	template <typename T = void> T Collapse(bool notSave) {
		return ((T (*)(ManualQuestsTrackerController*, bool))(Il2CppBase() + 0x126580C))(this, notSave);
	}
	template <typename T = void> T Expand(bool notSave) {
		return ((T (*)(ManualQuestsTrackerController*, bool))(Il2CppBase() + 0x12658C0))(this, notSave);
	}
	template <typename T = void> T ToggleIfNeed() {
		return ((T (*)(ManualQuestsTrackerController*))(Il2CppBase() + 0x1265FF0))(this);
	}
	template <typename T = void> T UpdateView(uintptr_t accountEntity) {
		return ((T (*)(ManualQuestsTrackerController*, uintptr_t))(Il2CppBase() + 0x126606C))(this, accountEntity);
	}
	template <typename T = uintptr_t> T GetView(Il2CppString* questName) {
		return ((T (*)(ManualQuestsTrackerController*, Il2CppString*))(Il2CppBase() + 0x1266950))(this, questName);
	}
	template <typename T = void> T RemoveView(Il2CppString* questName) {
		return ((T (*)(ManualQuestsTrackerController*, Il2CppString*))(Il2CppBase() + 0x126696C))(this, questName);
	}
	template <typename T = void> T UpdateQuestsNew(int64_t ownerId, Il2CppList<uintptr_t>* currentQuests, uintptr_t bottom) {
		return ((T (*)(ManualQuestsTrackerController*, int64_t, Il2CppList<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x12668E0))(this, ownerId, currentQuests, bottom);
	}
	template <typename T = void> T OnClickQuest(uintptr_t view) {
		return ((T (*)(ManualQuestsTrackerController*, uintptr_t))(Il2CppBase() + 0x1266988))(this, view);
	}
	template <typename T = float> static T get_UnhideTime() {
		return ((T (*)(void *))(Il2CppBase() + 0x12671B4))(0);
	}
	template <typename T = void> static T set_UnhideTime(float value) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x1267200))(0, value);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(ManualQuestsTrackerController*))(Il2CppBase() + 0x1267258))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(ManualQuestsTrackerController*))(Il2CppBase() + 0x1267388))(this);
	}
	template <typename T = void> T Hide(float time) {
		return ((T (*)(ManualQuestsTrackerController*, float))(Il2CppBase() + 0x1267590))(this, time);
	}
	template <typename T = void> T Restore() {
		return ((T (*)(ManualQuestsTrackerController*))(Il2CppBase() + 0x12676AC))(this);
	}
	template <typename T = void> T Awakeb__16_0() {
		return ((T (*)(ManualQuestsTrackerController*))(Il2CppBase() + 0x1267720))(this);
	}
	template <typename T = void> T Awakeb__16_1() {
		return ((T (*)(ManualQuestsTrackerController*))(Il2CppBase() + 0x1267728))(this);
	}

};

}
