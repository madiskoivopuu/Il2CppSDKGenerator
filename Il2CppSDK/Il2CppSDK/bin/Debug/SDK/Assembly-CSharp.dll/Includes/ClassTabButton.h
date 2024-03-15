#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ClassTabButton
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClassTabButton"));
	}

	template <typename R = uintptr_t> R& button() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& icon() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& rarityView() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = bool> R& active() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = bool> R& locked() {
		return *(R*)((uintptr_t)this + 0x31);
	}
	template <typename R = uintptr_t> R& notification() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = Il2CppString*> R& blueprint() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = bool> R& isNewGradeActive() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = uintptr_t> R& updateCoroutine() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = ItemEntity*> R& ClassItem() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	 Action1ClassTabButton*>*& ClickEvent() {
		return *(Action1ClassTabButton*>**)((uintptr_t)this + 0x60);
	}

	template <typename R = ItemEntity*> R get_ClassItem() {
		return ((R (*)(ClassTabButton*))(Il2CppBase() + 0x18F78C8))(this);
	}
	template <typename R = void> R set_ClassItem(ItemEntity* value) {
		return ((R (*)(ClassTabButton*, ItemEntity*))(Il2CppBase() + 0x18F78D0))(this, value);
	}
	template <typename R = void> R add_ClickEvent(Action1ClassTabButton*>* value) {
		return ((R (*)(ClassTabButton*, Action1ClassTabButton*>*))(Il2CppBase() + 0x18F78D8))(this, value);
	}
	template <typename R = void> R remove_ClickEvent(Action1ClassTabButton*>* value) {
		return ((R (*)(ClassTabButton*, Action1ClassTabButton*>*))(Il2CppBase() + 0x18F7978))(this, value);
	}
	template <typename R = bool> R get_Active() {
		return ((R (*)(ClassTabButton*))(Il2CppBase() + 0x18F7A18))(this);
	}
	template <typename R = void> R set_Active(bool value) {
		return ((R (*)(ClassTabButton*, bool))(Il2CppBase() + 0x18F7A20))(this, value);
	}
	template <typename R = bool> R get_Locked() {
		return ((R (*)(ClassTabButton*))(Il2CppBase() + 0x18F7ACC))(this);
	}
	template <typename R = void> R Awake() {
		return ((R (*)(ClassTabButton*))(Il2CppBase() + 0x18F7AD4))(this);
	}
	template <typename R = void> R Bind(ItemEntity* classItem) {
		return ((R (*)(ClassTabButton*, ItemEntity*))(Il2CppBase() + 0x18F7D50))(this, classItem);
	}
	template <typename R = void> R RaseClickEvent() {
		return ((R (*)(ClassTabButton*))(Il2CppBase() + 0x18F7E4C))(this);
	}
	template <typename R = void> R SetActive(bool isActive) {
		return ((R (*)(ClassTabButton*, bool))(Il2CppBase() + 0x18F7A44))(this, isActive);
	}
	template <typename R = void> R SetLocked(bool isLocked) {
		return ((R (*)(ClassTabButton*, bool))(Il2CppBase() + 0x18F7FE4))(this, isLocked);
	}
	template <typename R = void> R UpdateView(int64_t playerId) {
		return ((R (*)(ClassTabButton*, int64_t))(Il2CppBase() + 0x18F7FF0))(this, playerId);
	}
	template <typename R = uintptr_t> R UpdateCoriutine() {
		return ((R (*)(ClassTabButton*))(Il2CppBase() + 0x18F7F6C))(this);
	}
	template <typename R = void> R UpdateNotification(AccountEntity* account) {
		return ((R (*)(ClassTabButton*, AccountEntity*))(Il2CppBase() + 0x18F81A0))(this, account);
	}

};

