#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "SlotRoll/Content`1" 

class ManualQuestTrackerView: Content1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ManualQuestTrackerView"));
	}

	template <typename T = uintptr_t> T& _animator() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _button() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _captionText() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _progressText() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& _completedMark() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& _removeDuration() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& _iconPanel() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& _icon() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& _timerPanel() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& _timerText() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& _animatorAwaitable() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = int32_t> T& QuestId() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppString*> T& QuestName() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = void*> T& OnClickEvent() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = int32_t> T& _progress() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = void*> T& _completed() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& DataInstance() {
		return *(T*)((uintptr_t)this + 0x98);
	}

	template <typename T = int32_t> T get_QuestId() {
		return ((T (*)(ManualQuestTrackerView*))(Il2CppBase() + 0x12642D0))(this);
	}
	template <typename T = void> T set_QuestId(int32_t value) {
		return ((T (*)(ManualQuestTrackerView*, int32_t))(Il2CppBase() + 0x12642D8))(this, value);
	}
	template <typename T = Il2CppString*> T get_QuestName() {
		return ((T (*)(ManualQuestTrackerView*))(Il2CppBase() + 0x12642E0))(this);
	}
	template <typename T = void> T set_QuestName(Il2CppString* value) {
		return ((T (*)(ManualQuestTrackerView*, Il2CppString*))(Il2CppBase() + 0x12642E8))(this, value);
	}
	template <typename T = void> T add_OnClickEvent(void* value) {
		return ((T (*)(ManualQuestTrackerView*, void*))(Il2CppBase() + 0x12642F0))(this, value);
	}
	template <typename T = void> T remove_OnClickEvent(void* value) {
		return ((T (*)(ManualQuestTrackerView*, void*))(Il2CppBase() + 0x1264390))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(ManualQuestTrackerView*))(Il2CppBase() + 0x1264430))(this);
	}
	template <typename T = void> T OnClick() {
		return ((T (*)(ManualQuestTrackerView*))(Il2CppBase() + 0x12644CC))(this);
	}
	template <typename T = void> T Initialize(uintptr_t data) {
		return ((T (*)(ManualQuestTrackerView*, uintptr_t))(Il2CppBase() + 0x126452C))(this, data);
	}
	template <typename T = void> T Deinitialize(uintptr_t parent) {
		return ((T (*)(ManualQuestTrackerView*, uintptr_t))(Il2CppBase() + 0x1264B64))(this, parent);
	}
	template <typename T = int32_t> T get_Key() {
		return ((T (*)(ManualQuestTrackerView*))(Il2CppBase() + 0x1264BF0))(this);
	}
	template <typename T = uintptr_t> T GetQuest(int64_t ownerId) {
		return ((T (*)(ManualQuestTrackerView*, int64_t))(Il2CppBase() + 0x1264C0C))(this, ownerId);
	}
	template <typename T = void> T UpdateView(uintptr_t quest, int64_t now) {
		return ((T (*)(ManualQuestTrackerView*, uintptr_t, int64_t))(Il2CppBase() + 0x12645FC))(this, quest, now);
	}
	template <typename T = void> T ShowNotify(Il2CppString* questName, int64_t ownerId) {
		return ((T (*)(ManualQuestTrackerView*, Il2CppString*, int64_t))(Il2CppBase() + 0x1264D30))(this, questName, ownerId);
	}
	template <typename T = uintptr_t> T Notifying(Il2CppString* questName, int64_t ownerId) {
		return ((T (*)(ManualQuestTrackerView*, Il2CppString*, int64_t))(Il2CppBase() + 0x1264D5C))(this, questName, ownerId);
	}
	template <typename T = void> T ShowNew() {
		return ((T (*)(ManualQuestTrackerView*))(Il2CppBase() + 0x1264DF8))(this);
	}
	template <typename T = void> T StartRemove() {
		return ((T (*)(ManualQuestTrackerView*))(Il2CppBase() + 0x1264EBC))(this);
	}
	template <typename T = void> T ShowNew_1(void* onComplete) {
		return ((T (*)(ManualQuestTrackerView*, void*))(Il2CppBase() + 0x1264F84))(this, onComplete);
	}
	template <typename T = void> T StartRemove_1(void* onComplete) {
		return ((T (*)(ManualQuestTrackerView*, void*))(Il2CppBase() + 0x1265084))(this, onComplete);
	}

};

}
