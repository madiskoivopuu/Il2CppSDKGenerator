#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "Content1.h" 

class ManualQuestTrackerView : public Content1<Data*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ManualQuestTrackerView"));
	}

	template <typename R = uintptr_t> R& _animator() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& _button() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& _captionText() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& _progressText() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& _completedMark() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = float> R& _removeDuration() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = uintptr_t> R& _iconPanel() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = uintptr_t> R& _icon() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = uintptr_t> R& _timerPanel() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = uintptr_t> R& _timerText() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = AsyncAnimations::AnimatorAwaitable*> R& _animatorAwaitable() {
		return *(R*)((uintptr_t)this + 0x70);
	}
	template <typename R = int32_t> R& QuestId() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = Il2CppString*> R& QuestName() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	 Action1ManualQuestTrackerView*>*& OnClickEvent() {
		return *(Action1ManualQuestTrackerView*>**)((uintptr_t)this + 0x88);
	}
	template <typename R = int32_t> R& _progress() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	 Nullable1bool>*& _completed() {
		return *(Nullable1bool>**)((uintptr_t)this + 0x94);
	}
	template <typename R = Data*> R& DataInstance() {
		return *(R*)((uintptr_t)this + 0x98);
	}

	template <typename R = int32_t> R get_QuestId() {
		return ((R (*)(ManualQuestTrackerView*))(Il2CppBase() + 0x12642D0))(this);
	}
	template <typename R = void> R set_QuestId(int32_t value) {
		return ((R (*)(ManualQuestTrackerView*, int32_t))(Il2CppBase() + 0x12642D8))(this, value);
	}
	template <typename R = Il2CppString*> R get_QuestName() {
		return ((R (*)(ManualQuestTrackerView*))(Il2CppBase() + 0x12642E0))(this);
	}
	template <typename R = void> R set_QuestName(Il2CppString* value) {
		return ((R (*)(ManualQuestTrackerView*, Il2CppString*))(Il2CppBase() + 0x12642E8))(this, value);
	}
	template <typename R = void> R add_OnClickEvent(Action1ManualQuestTrackerView*>* value) {
		return ((R (*)(ManualQuestTrackerView*, Action1ManualQuestTrackerView*>*))(Il2CppBase() + 0x12642F0))(this, value);
	}
	template <typename R = void> R remove_OnClickEvent(Action1ManualQuestTrackerView*>* value) {
		return ((R (*)(ManualQuestTrackerView*, Action1ManualQuestTrackerView*>*))(Il2CppBase() + 0x1264390))(this, value);
	}
	template <typename R = void> R Awake() {
		return ((R (*)(ManualQuestTrackerView*))(Il2CppBase() + 0x1264430))(this);
	}
	template <typename R = void> R OnClick() {
		return ((R (*)(ManualQuestTrackerView*))(Il2CppBase() + 0x12644CC))(this);
	}
	template <typename R = void> R Initialize(Data* data) {
		return ((R (*)(ManualQuestTrackerView*, Data*))(Il2CppBase() + 0x126452C))(this, data);
	}
	template <typename R = void> R Deinitialize(uintptr_t parent) {
		return ((R (*)(ManualQuestTrackerView*, uintptr_t))(Il2CppBase() + 0x1264B64))(this, parent);
	}
	template <typename R = int32_t> R get_Key() {
		return ((R (*)(ManualQuestTrackerView*))(Il2CppBase() + 0x1264BF0))(this);
	}
	template <typename R = QuestEntity*> R GetQuest(int64_t ownerId) {
		return ((R (*)(ManualQuestTrackerView*, int64_t))(Il2CppBase() + 0x1264C0C))(this, ownerId);
	}
	template <typename R = void> R UpdateView(QuestEntity* quest, int64_t now) {
		return ((R (*)(ManualQuestTrackerView*, QuestEntity*, int64_t))(Il2CppBase() + 0x12645FC))(this, quest, now);
	}
	template <typename R = void> R ShowNotify(Il2CppString* questName, int64_t ownerId) {
		return ((R (*)(ManualQuestTrackerView*, Il2CppString*, int64_t))(Il2CppBase() + 0x1264D30))(this, questName, ownerId);
	}
	template <typename R = uintptr_t> R Notifying(Il2CppString* questName, int64_t ownerId) {
		return ((R (*)(ManualQuestTrackerView*, Il2CppString*, int64_t))(Il2CppBase() + 0x1264D5C))(this, questName, ownerId);
	}
	template <typename R = void> R ShowNew() {
		return ((R (*)(ManualQuestTrackerView*))(Il2CppBase() + 0x1264DF8))(this);
	}
	template <typename R = void> R StartRemove() {
		return ((R (*)(ManualQuestTrackerView*))(Il2CppBase() + 0x1264EBC))(this);
	}
	template <typename R = void> R ShowNew_1(Action1Content1Data*>*>* onComplete) {
		return ((R (*)(ManualQuestTrackerView*, Action1Content1Data*>*>*))(Il2CppBase() + 0x1264F84))(this, onComplete);
	}
	template <typename R = void> R StartRemove_1(Action1Content1Data*>*>* onComplete) {
		return ((R (*)(ManualQuestTrackerView*, Action1Content1Data*>*>*))(Il2CppBase() + 0x1265084))(this, onComplete);
	}

};

