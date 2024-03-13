#pragma once
#include <Il2Cpp/Il2Cpp.h>

class QuestTrackerView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "QuestTrackerView"));
	}

	template <typename T = uintptr_t> T& _animator() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _button() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _captionText() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _progressText() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _completedMark() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& _removeDuration() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& _iconPanel() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& _icon() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& _timerPanel() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& _timerText() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& QuestId() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppString*> T& QuestName() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Action1QuestTrackerView*>*> T& OnClickEvent() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = int32_t> T& _progress() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Nullable1bool>*> T& _completed() {
		return *(T*)((uintptr_t)this + 0x84);
	}

	template <typename T = int32_t> T get_QuestId() {
		return ((T (*)(QuestTrackerView*))(Il2CppBase() + 0x1705978))(this);
	}
	template <typename T = void> T set_QuestId(int32_t value) {
		return ((T (*)(QuestTrackerView*, int32_t))(Il2CppBase() + 0x1705980))(this, value);
	}
	template <typename T = Il2CppString*> T get_QuestName() {
		return ((T (*)(QuestTrackerView*))(Il2CppBase() + 0x1705988))(this);
	}
	template <typename T = void> T set_QuestName(Il2CppString* value) {
		return ((T (*)(QuestTrackerView*, Il2CppString*))(Il2CppBase() + 0x1705990))(this, value);
	}
	template <typename T = void> T add_OnClickEvent(Action1QuestTrackerView*>* value) {
		return ((T (*)(QuestTrackerView*, Action1QuestTrackerView*>*))(Il2CppBase() + 0x1705998))(this, value);
	}
	template <typename T = void> T remove_OnClickEvent(Action1QuestTrackerView*>* value) {
		return ((T (*)(QuestTrackerView*, Action1QuestTrackerView*>*))(Il2CppBase() + 0x1705A38))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(QuestTrackerView*))(Il2CppBase() + 0x1705AD8))(this);
	}
	template <typename T = void> T OnClick() {
		return ((T (*)(QuestTrackerView*))(Il2CppBase() + 0x1705B74))(this);
	}
	template <typename T = QuestEntity*> T GetQuest(int64_t ownerId) {
		return ((T (*)(QuestTrackerView*, int64_t))(Il2CppBase() + 0x1705BD4))(this, ownerId);
	}
	template <typename T = void> T StartRemove() {
		return ((T (*)(QuestTrackerView*))(Il2CppBase() + 0x1705CF8))(this);
	}
	template <typename T = void> T UpdateView(QuestEntity* quest, int64_t now) {
		return ((T (*)(QuestTrackerView*, QuestEntity*, int64_t))(Il2CppBase() + 0x1705E04))(this, quest, now);
	}
	template <typename T = void> T ShowNotify(Il2CppString* questName) {
		return ((T (*)(QuestTrackerView*, Il2CppString*))(Il2CppBase() + 0x1706374))(this, questName);
	}
	template <typename T = uintptr_t> T Notifying(Il2CppString* questName) {
		return ((T (*)(QuestTrackerView*, Il2CppString*))(Il2CppBase() + 0x17063A0))(this, questName);
	}
	template <typename T = void> T ShowNew() {
		return ((T (*)(QuestTrackerView*))(Il2CppBase() + 0x1706434))(this);
	}

};

