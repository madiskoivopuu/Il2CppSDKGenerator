#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UIHotKey
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIHotKey"));
	}

	template <typename R = uintptr_t> R& _keyCode() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& Target() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& TargetRectTransform() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& OnClick() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = IUIWindow*> R& _window() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = bool> R& _add() {
		return *(R*)((uintptr_t)this + 0x40);
	}

	template <typename R = uintptr_t> R get_KeyCode() {
		return ((R (*)(UIHotKey*))(Il2CppBase() + 0x152A6CC))(this);
	}
	template <typename R = uintptr_t> R get_Target() {
		return ((R (*)(UIHotKey*))(Il2CppBase() + 0x152A6D8))(this);
	}
	template <typename R = void> R set_Target(uintptr_t value) {
		return ((R (*)(UIHotKey*, uintptr_t))(Il2CppBase() + 0x152A6E0))(this, value);
	}
	template <typename R = uintptr_t> R get_TargetRectTransform() {
		return ((R (*)(UIHotKey*))(Il2CppBase() + 0x152A6E8))(this);
	}
	template <typename R = void> R set_TargetRectTransform(uintptr_t value) {
		return ((R (*)(UIHotKey*, uintptr_t))(Il2CppBase() + 0x152A6F0))(this, value);
	}
	template <typename R = void> R Awake() {
		return ((R (*)(UIHotKey*))(Il2CppBase() + 0x152A6F8))(this);
	}
	template <typename R = void> R Start() {
		return ((R (*)(UIHotKey*))(Il2CppBase() + 0x152A7B4))(this);
	}
	template <typename R = void> R OnEnable() {
		return ((R (*)(UIHotKey*))(Il2CppBase() + 0x152A7B8))(this);
	}
	template <typename R = void> R OnDisable() {
		return ((R (*)(UIHotKey*))(Il2CppBase() + 0x152AB74))(this);
	}
	template <typename R = void> R OnDestroy() {
		return ((R (*)(UIHotKey*))(Il2CppBase() + 0x152AF20))(this);
	}

};

