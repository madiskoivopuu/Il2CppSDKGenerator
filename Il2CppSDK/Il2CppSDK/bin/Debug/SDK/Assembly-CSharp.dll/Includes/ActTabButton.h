#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ActTabButton
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ActTabButton"));
	}

	template <typename T = uintptr_t> T& _button() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& ActiveView() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& UnactiveView() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& _active() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& _locked() {
		return *(T*)((uintptr_t)this + 0x31);
	}
	template <typename T = uintptr_t> T& _currentView() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = void*> T& ClickEvent() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& _notificationsCount() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& QuestData() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppString*> T& QuestName() {
		return *(T*)((uintptr_t)this + 0x58);
	}

	template <typename T = void> T add_ClickEvent(void* value) {
		return ((T (*)(ActTabButton*, void*))(Il2CppBase() + 0x18F553C))(this, value);
	}
	template <typename T = void> T remove_ClickEvent(void* value) {
		return ((T (*)(ActTabButton*, void*))(Il2CppBase() + 0x18F55DC))(this, value);
	}
	template <typename T = bool> T get_Active() {
		return ((T (*)(ActTabButton*))(Il2CppBase() + 0x18F567C))(this);
	}
	template <typename T = void> T set_Active(bool value) {
		return ((T (*)(ActTabButton*, bool))(Il2CppBase() + 0x18F5684))(this, value);
	}
	template <typename T = bool> T get_Locked() {
		return ((T (*)(ActTabButton*))(Il2CppBase() + 0x18F5734))(this);
	}
	template <typename T = void> T set_Locked(bool value) {
		return ((T (*)(ActTabButton*, bool))(Il2CppBase() + 0x18F573C))(this, value);
	}
	template <typename T = int32_t> T get_NotificationsCount() {
		return ((T (*)(ActTabButton*))(Il2CppBase() + 0x18F583C))(this);
	}
	template <typename T = void> T set_NotificationsCount(int32_t value) {
		return ((T (*)(ActTabButton*, int32_t))(Il2CppBase() + 0x18F5844))(this, value);
	}
	template <typename T = uintptr_t> T get_QuestData() {
		return ((T (*)(ActTabButton*))(Il2CppBase() + 0x18F58D4))(this);
	}
	template <typename T = void> T set_QuestData(uintptr_t value) {
		return ((T (*)(ActTabButton*, uintptr_t))(Il2CppBase() + 0x18F58DC))(this, value);
	}
	template <typename T = Il2CppString*> T get_QuestName() {
		return ((T (*)(ActTabButton*))(Il2CppBase() + 0x18F58E4))(this);
	}
	template <typename T = void> T set_QuestName(Il2CppString* value) {
		return ((T (*)(ActTabButton*, Il2CppString*))(Il2CppBase() + 0x18F58EC))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(ActTabButton*))(Il2CppBase() + 0x18F58F4))(this);
	}
	template <typename T = void> T RaseClickEvent() {
		return ((T (*)(ActTabButton*))(Il2CppBase() + 0x18F59CC))(this);
	}
	template <typename T = void> T SetActive(bool active) {
		return ((T (*)(ActTabButton*, bool))(Il2CppBase() + 0x18F56A8))(this, active);
	}
	template <typename T = void> T SetLocked(bool locked, uintptr_t view) {
		return ((T (*)(ActTabButton*, bool, uintptr_t))(Il2CppBase() + 0x18F57B0))(this, locked, view);
	}
	template <typename T = void> T SetNotificationsCount(int32_t count, uintptr_t view) {
		return ((T (*)(ActTabButton*, int32_t, uintptr_t))(Il2CppBase() + 0x18F5884))(this, count, view);
	}
	template <typename T = void> T Init(uintptr_t questData) {
		return ((T (*)(ActTabButton*, uintptr_t))(Il2CppBase() + 0x18F5A2C))(this, questData);
	}
	template <typename T = void> T UpdateView(int64_t playerId, bool hasPremium) {
		return ((T (*)(ActTabButton*, int64_t, bool))(Il2CppBase() + 0x18F5B70))(this, playerId, hasPremium);
	}

};

}
