#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ButtonHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ButtonHelper"));
	}

	template <typename R = uintptr_t> R& ActionButton() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& Selected() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> R& Index() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = bool> R& IsLocked() {
		return *(R*)((uintptr_t)this + 0x2C);
	}
	 Action1ButtonHelper*>*& OnButtonClicked() {
		return *(Action1ButtonHelper*>**)((uintptr_t)this + 0x30);
	}

	template <typename R = bool> R get_IsLocked() {
		return ((R (*)(ButtonHelper*))(Il2CppBase() + 0x15B15C4))(this);
	}
	template <typename R = void> R set_IsLocked(bool value) {
		return ((R (*)(ButtonHelper*, bool))(Il2CppBase() + 0x15B15CC))(this, value);
	}
	template <typename R = void> R add_OnButtonClicked(Action1ButtonHelper*>* value) {
		return ((R (*)(ButtonHelper*, Action1ButtonHelper*>*))(Il2CppBase() + 0x15B15D8))(this, value);
	}
	template <typename R = void> R remove_OnButtonClicked(Action1ButtonHelper*>* value) {
		return ((R (*)(ButtonHelper*, Action1ButtonHelper*>*))(Il2CppBase() + 0x15B1678))(this, value);
	}
	template <typename R = void> R Awake() {
		return ((R (*)(ButtonHelper*))(Il2CppBase() + 0x15B1718))(this);
	}
	template <typename R = void> R Select() {
		return ((R (*)(ButtonHelper*))(Il2CppBase() + 0x15B17B4))(this);
	}
	template <typename R = void> R Deselect() {
		return ((R (*)(ButtonHelper*))(Il2CppBase() + 0x15B17F8))(this);
	}
	template <typename R = void> R SetSelectedActivity(bool active) {
		return ((R (*)(ButtonHelper*, bool))(Il2CppBase() + 0x15B17BC))(this, active);
	}
	template <typename R = void> R OnHomeButtonClick() {
		return ((R (*)(ButtonHelper*))(Il2CppBase() + 0x15B1800))(this);
	}

};

