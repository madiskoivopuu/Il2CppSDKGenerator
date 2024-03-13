#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UIHotKey
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIHotKey"));
	}

	template <typename T = uintptr_t> T& _keyCode() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& Target() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& TargetRectTransform() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& OnClick() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = IUIWindow*> T& _window() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& _add() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = uintptr_t> T get_KeyCode() {
		return ((T (*)(UIHotKey*))(Il2CppBase() + 0x152A6CC))(this);
	}
	template <typename T = uintptr_t> T get_Target() {
		return ((T (*)(UIHotKey*))(Il2CppBase() + 0x152A6D8))(this);
	}
	template <typename T = void> T set_Target(uintptr_t value) {
		return ((T (*)(UIHotKey*, uintptr_t))(Il2CppBase() + 0x152A6E0))(this, value);
	}
	template <typename T = uintptr_t> T get_TargetRectTransform() {
		return ((T (*)(UIHotKey*))(Il2CppBase() + 0x152A6E8))(this);
	}
	template <typename T = void> T set_TargetRectTransform(uintptr_t value) {
		return ((T (*)(UIHotKey*, uintptr_t))(Il2CppBase() + 0x152A6F0))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(UIHotKey*))(Il2CppBase() + 0x152A6F8))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(UIHotKey*))(Il2CppBase() + 0x152A7B4))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(UIHotKey*))(Il2CppBase() + 0x152A7B8))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(UIHotKey*))(Il2CppBase() + 0x152AB74))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(UIHotKey*))(Il2CppBase() + 0x152AF20))(this);
	}

};

