#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ActTabButton
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ActTabButton"));
	}

	template <typename R = uintptr_t> R& _button() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = View*> R& ActiveView() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = View*> R& UnactiveView() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = bool> R& _active() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = bool> R& _locked() {
		return *(R*)((uintptr_t)this + 0x31);
	}
	template <typename R = View*> R& _currentView() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	 Action1<ActTabButton*>*& ClickEvent() {
		return *(Action1<ActTabButton*>**)((uintptr_t)this + 0x40);
	}
	template <typename R = int32_t> R& _notificationsCount() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = QuestDataEntity*> R& QuestData() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = Il2CppString*> R& QuestName() {
		return *(R*)((uintptr_t)this + 0x58);
	}

	template <typename R = void> R add_ClickEvent(Action1<ActTabButton*>* value) {
		return ((R (*)(ActTabButton*, Action1<ActTabButton*>*))(Il2CppBase() + 0x18F553C))(this, value);
	}
	template <typename R = void> R remove_ClickEvent(Action1<ActTabButton*>* value) {
		return ((R (*)(ActTabButton*, Action1<ActTabButton*>*))(Il2CppBase() + 0x18F55DC))(this, value);
	}
	template <typename R = bool> R get_Active() {
		return ((R (*)(ActTabButton*))(Il2CppBase() + 0x18F567C))(this);
	}
	template <typename R = void> R set_Active(bool value) {
		return ((R (*)(ActTabButton*, bool))(Il2CppBase() + 0x18F5684))(this, value);
	}
	template <typename R = bool> R get_Locked() {
		return ((R (*)(ActTabButton*))(Il2CppBase() + 0x18F5734))(this);
	}
	template <typename R = void> R set_Locked(bool value) {
		return ((R (*)(ActTabButton*, bool))(Il2CppBase() + 0x18F573C))(this, value);
	}
	template <typename R = int32_t> R get_NotificationsCount() {
		return ((R (*)(ActTabButton*))(Il2CppBase() + 0x18F583C))(this);
	}
	template <typename R = void> R set_NotificationsCount(int32_t value) {
		return ((R (*)(ActTabButton*, int32_t))(Il2CppBase() + 0x18F5844))(this, value);
	}
	template <typename R = QuestDataEntity*> R get_QuestData() {
		return ((R (*)(ActTabButton*))(Il2CppBase() + 0x18F58D4))(this);
	}
	template <typename R = void> R set_QuestData(QuestDataEntity* value) {
		return ((R (*)(ActTabButton*, QuestDataEntity*))(Il2CppBase() + 0x18F58DC))(this, value);
	}
	template <typename R = Il2CppString*> R get_QuestName() {
		return ((R (*)(ActTabButton*))(Il2CppBase() + 0x18F58E4))(this);
	}
	template <typename R = void> R set_QuestName(Il2CppString* value) {
		return ((R (*)(ActTabButton*, Il2CppString*))(Il2CppBase() + 0x18F58EC))(this, value);
	}
	template <typename R = void> R Awake() {
		return ((R (*)(ActTabButton*))(Il2CppBase() + 0x18F58F4))(this);
	}
	template <typename R = void> R RaseClickEvent() {
		return ((R (*)(ActTabButton*))(Il2CppBase() + 0x18F59CC))(this);
	}
	template <typename R = void> R SetActive(bool active) {
		return ((R (*)(ActTabButton*, bool))(Il2CppBase() + 0x18F56A8))(this, active);
	}
	template <typename R = void> R SetLocked(bool locked, View* view) {
		return ((R (*)(ActTabButton*, bool, View*))(Il2CppBase() + 0x18F57B0))(this, locked, view);
	}
	template <typename R = void> R SetNotificationsCount(int32_t count, View* view) {
		return ((R (*)(ActTabButton*, int32_t, View*))(Il2CppBase() + 0x18F5884))(this, count, view);
	}
	template <typename R = void> R Init(QuestDataEntity* questData) {
		return ((R (*)(ActTabButton*, QuestDataEntity*))(Il2CppBase() + 0x18F5A2C))(this, questData);
	}
	template <typename R = void> R UpdateView(int64_t playerId, bool hasPremium) {
		return ((R (*)(ActTabButton*, int64_t, bool))(Il2CppBase() + 0x18F5B70))(this, playerId, hasPremium);
	}

};

