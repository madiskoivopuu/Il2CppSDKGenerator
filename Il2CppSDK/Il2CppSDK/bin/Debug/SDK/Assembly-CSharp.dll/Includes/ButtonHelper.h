#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ButtonHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ButtonHelper"));
	}

	template <typename T = uintptr_t> T& ActionButton() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& Selected() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& Index() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& IsLocked() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Action1ButtonHelper*>*> T& OnButtonClicked() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = bool> T get_IsLocked() {
		return ((T (*)(ButtonHelper*))(Il2CppBase() + 0x15B15C4))(this);
	}
	template <typename T = void> T set_IsLocked(bool value) {
		return ((T (*)(ButtonHelper*, bool))(Il2CppBase() + 0x15B15CC))(this, value);
	}
	template <typename T = void> T add_OnButtonClicked(Action1ButtonHelper*>* value) {
		return ((T (*)(ButtonHelper*, Action1ButtonHelper*>*))(Il2CppBase() + 0x15B15D8))(this, value);
	}
	template <typename T = void> T remove_OnButtonClicked(Action1ButtonHelper*>* value) {
		return ((T (*)(ButtonHelper*, Action1ButtonHelper*>*))(Il2CppBase() + 0x15B1678))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(ButtonHelper*))(Il2CppBase() + 0x15B1718))(this);
	}
	template <typename T = void> T Select() {
		return ((T (*)(ButtonHelper*))(Il2CppBase() + 0x15B17B4))(this);
	}
	template <typename T = void> T Deselect() {
		return ((T (*)(ButtonHelper*))(Il2CppBase() + 0x15B17F8))(this);
	}
	template <typename T = void> T SetSelectedActivity(bool active) {
		return ((T (*)(ButtonHelper*, bool))(Il2CppBase() + 0x15B17BC))(this, active);
	}
	template <typename T = void> T OnHomeButtonClick() {
		return ((T (*)(ButtonHelper*))(Il2CppBase() + 0x15B1800))(this);
	}

};

