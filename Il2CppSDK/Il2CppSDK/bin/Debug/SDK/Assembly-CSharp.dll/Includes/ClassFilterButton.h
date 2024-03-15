#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ClassFilterButton
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClassFilterButton"));
	}

	template <typename R = uintptr_t> R& _button() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& _icon() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& _filterName() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = Il2CppString*> R& _filterKey() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& _notificationMarker() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& _enabledColor() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = uintptr_t> R& _disabledColor() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = bool> R& _isActive() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = int32_t> R& _notSeenCount() {
		return *(R*)((uintptr_t)this + 0x64);
	}
	 Action1<ClassFilterButton*>*& OnButtonClick() {
		return *(Action1<ClassFilterButton*>**)((uintptr_t)this + 0x68);
	}

	template <typename R = bool> R get_IsActive() {
		return ((R (*)(ClassFilterButton*))(Il2CppBase() + 0x1599670))(this);
	}
	template <typename R = Il2CppString*> R get_FilterName() {
		return ((R (*)(ClassFilterButton*))(Il2CppBase() + 0x1599678))(this);
	}
	template <typename R = void> R add_OnButtonClick(Action1<ClassFilterButton*>* value) {
		return ((R (*)(ClassFilterButton*, Action1<ClassFilterButton*>*))(Il2CppBase() + 0x1599680))(this, value);
	}
	template <typename R = void> R remove_OnButtonClick(Action1<ClassFilterButton*>* value) {
		return ((R (*)(ClassFilterButton*, Action1<ClassFilterButton*>*))(Il2CppBase() + 0x1599720))(this, value);
	}
	template <typename R = void> R Awake() {
		return ((R (*)(ClassFilterButton*))(Il2CppBase() + 0x15997C0))(this);
	}
	template <typename R = void> R OnClick() {
		return ((R (*)(ClassFilterButton*))(Il2CppBase() + 0x1599A98))(this);
	}
	template <typename R = void> R UpdateView() {
		return ((R (*)(ClassFilterButton*))(Il2CppBase() + 0x1599864))(this);
	}
	template <typename R = void> R UpdateNotification(bool isOn) {
		return ((R (*)(ClassFilterButton*, bool))(Il2CppBase() + 0x1599B40))(this, isOn);
	}

};

