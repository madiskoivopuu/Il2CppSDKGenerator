#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ClassTabButton
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClassTabButton"));
	}

	template <typename T = uintptr_t> T& button() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& icon() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& rarityView() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& active() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& locked() {
		return *(T*)((uintptr_t)this + 0x31);
	}
	template <typename T = uintptr_t> T& notification() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& blueprint() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& isNewGradeActive() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& updateCoroutine() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = ItemEntity*> T& ClassItem() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Action1ClassTabButton*>*> T& ClickEvent() {
		return *(T*)((uintptr_t)this + 0x60);
	}

	template <typename T = ItemEntity*> T get_ClassItem() {
		return ((T (*)(ClassTabButton*))(Il2CppBase() + 0x18F78C8))(this);
	}
	template <typename T = void> T set_ClassItem(ItemEntity* value) {
		return ((T (*)(ClassTabButton*, ItemEntity*))(Il2CppBase() + 0x18F78D0))(this, value);
	}
	template <typename T = void> T add_ClickEvent(Action1ClassTabButton*>* value) {
		return ((T (*)(ClassTabButton*, Action1ClassTabButton*>*))(Il2CppBase() + 0x18F78D8))(this, value);
	}
	template <typename T = void> T remove_ClickEvent(Action1ClassTabButton*>* value) {
		return ((T (*)(ClassTabButton*, Action1ClassTabButton*>*))(Il2CppBase() + 0x18F7978))(this, value);
	}
	template <typename T = bool> T get_Active() {
		return ((T (*)(ClassTabButton*))(Il2CppBase() + 0x18F7A18))(this);
	}
	template <typename T = void> T set_Active(bool value) {
		return ((T (*)(ClassTabButton*, bool))(Il2CppBase() + 0x18F7A20))(this, value);
	}
	template <typename T = bool> T get_Locked() {
		return ((T (*)(ClassTabButton*))(Il2CppBase() + 0x18F7ACC))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(ClassTabButton*))(Il2CppBase() + 0x18F7AD4))(this);
	}
	template <typename T = void> T Bind(ItemEntity* classItem) {
		return ((T (*)(ClassTabButton*, ItemEntity*))(Il2CppBase() + 0x18F7D50))(this, classItem);
	}
	template <typename T = void> T RaseClickEvent() {
		return ((T (*)(ClassTabButton*))(Il2CppBase() + 0x18F7E4C))(this);
	}
	template <typename T = void> T SetActive(bool isActive) {
		return ((T (*)(ClassTabButton*, bool))(Il2CppBase() + 0x18F7A44))(this, isActive);
	}
	template <typename T = void> T SetLocked(bool isLocked) {
		return ((T (*)(ClassTabButton*, bool))(Il2CppBase() + 0x18F7FE4))(this, isLocked);
	}
	template <typename T = void> T UpdateView(int64_t playerId) {
		return ((T (*)(ClassTabButton*, int64_t))(Il2CppBase() + 0x18F7FF0))(this, playerId);
	}
	template <typename T = uintptr_t> T UpdateCoriutine() {
		return ((T (*)(ClassTabButton*))(Il2CppBase() + 0x18F7F6C))(this);
	}
	template <typename T = void> T UpdateNotification(AccountEntity* account) {
		return ((T (*)(ClassTabButton*, AccountEntity*))(Il2CppBase() + 0x18F81A0))(this, account);
	}

};

