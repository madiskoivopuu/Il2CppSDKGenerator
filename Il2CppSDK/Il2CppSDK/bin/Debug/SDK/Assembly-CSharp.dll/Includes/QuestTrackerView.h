#pragma once
#include <Il2Cpp/Il2Cpp.h>

class QuestTrackerView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "QuestTrackerView"));
	}

	template <typename R = uintptr_t> R& _animator() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& _button() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& _captionText() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& _progressText() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& _completedMark() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = float> R& _removeDuration() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = uintptr_t> R& _iconPanel() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = uintptr_t> R& _icon() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = uintptr_t> R& _timerPanel() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = uintptr_t> R& _timerText() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = int32_t> R& QuestId() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = Il2CppString*> R& QuestName() {
		return *(R*)((uintptr_t)this + 0x70);
	}
	 Action1<QuestTrackerView*>*& OnClickEvent() {
		return *(Action1<QuestTrackerView*>**)((uintptr_t)this + 0x78);
	}
	template <typename R = int32_t> R& _progress() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	 Nullable1<bool>*& _completed() {
		return *(Nullable1<bool>**)((uintptr_t)this + 0x84);
	}

	template <typename R = int32_t> R get_QuestId() {
		return ((R (*)(QuestTrackerView*))(Il2CppBase() + 0x1705978))(this);
	}
	template <typename R = void> R set_QuestId(int32_t value) {
		return ((R (*)(QuestTrackerView*, int32_t))(Il2CppBase() + 0x1705980))(this, value);
	}
	template <typename R = Il2CppString*> R get_QuestName() {
		return ((R (*)(QuestTrackerView*))(Il2CppBase() + 0x1705988))(this);
	}
	template <typename R = void> R set_QuestName(Il2CppString* value) {
		return ((R (*)(QuestTrackerView*, Il2CppString*))(Il2CppBase() + 0x1705990))(this, value);
	}
	template <typename R = void> R add_OnClickEvent(Action1<QuestTrackerView*>* value) {
		return ((R (*)(QuestTrackerView*, Action1<QuestTrackerView*>*))(Il2CppBase() + 0x1705998))(this, value);
	}
	template <typename R = void> R remove_OnClickEvent(Action1<QuestTrackerView*>* value) {
		return ((R (*)(QuestTrackerView*, Action1<QuestTrackerView*>*))(Il2CppBase() + 0x1705A38))(this, value);
	}
	template <typename R = void> R Awake() {
		return ((R (*)(QuestTrackerView*))(Il2CppBase() + 0x1705AD8))(this);
	}
	template <typename R = void> R OnClick() {
		return ((R (*)(QuestTrackerView*))(Il2CppBase() + 0x1705B74))(this);
	}
	template <typename R = QuestEntity*> R GetQuest(int64_t ownerId) {
		return ((R (*)(QuestTrackerView*, int64_t))(Il2CppBase() + 0x1705BD4))(this, ownerId);
	}
	template <typename R = void> R StartRemove() {
		return ((R (*)(QuestTrackerView*))(Il2CppBase() + 0x1705CF8))(this);
	}
	template <typename R = void> R UpdateView(QuestEntity* quest, int64_t now) {
		return ((R (*)(QuestTrackerView*, QuestEntity*, int64_t))(Il2CppBase() + 0x1705E04))(this, quest, now);
	}
	template <typename R = void> R ShowNotify(Il2CppString* questName) {
		return ((R (*)(QuestTrackerView*, Il2CppString*))(Il2CppBase() + 0x1706374))(this, questName);
	}
	template <typename R = uintptr_t> R Notifying(Il2CppString* questName) {
		return ((R (*)(QuestTrackerView*, Il2CppString*))(Il2CppBase() + 0x17063A0))(this, questName);
	}
	template <typename R = void> R ShowNew() {
		return ((R (*)(QuestTrackerView*))(Il2CppBase() + 0x1706434))(this);
	}

};

