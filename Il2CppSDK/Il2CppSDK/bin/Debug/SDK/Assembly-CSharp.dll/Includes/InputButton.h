#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InputButton
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InputButton"));
	}

	template <typename R = bool> R& IsPressed() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	 Nullable1<int32_t>*& _fingerId() {
		return *(Nullable1<int32_t>**)((uintptr_t)this + 0x1C);
	}
	template <typename R = int32_t> R& _lastPressedFrame() {
		return *(R*)((uintptr_t)this + 0x24);
	}
	template <typename R = int32_t> R& _lastReleasedFrame() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	 Predicate1<uintptr_t>*& onPointerDown() {
		return *(Predicate1<uintptr_t>**)((uintptr_t)this + 0x30);
	}
	 Action1<uintptr_t>*& onPointerUp() {
		return *(Action1<uintptr_t>**)((uintptr_t)this + 0x38);
	}
	 Action1<uintptr_t>*& onDrag() {
		return *(Action1<uintptr_t>**)((uintptr_t)this + 0x40);
	}
	template <typename R = uintptr_t> R& _button() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = uintptr_t> R& Target() {
		return *(R*)((uintptr_t)this + 0x50);
	}

	template <typename R = bool> R get_IsPressed() {
		return ((R (*)(InputButton*))(Il2CppBase() + 0x1E41864))(this);
	}
	template <typename R = void> R set_IsPressed(bool value) {
		return ((R (*)(InputButton*, bool))(Il2CppBase() + 0x1E4186C))(this, value);
	}
	template <typename R = uintptr_t> R get_Target() {
		return ((R (*)(InputButton*))(Il2CppBase() + 0x1E41878))(this);
	}
	template <typename R = void> R set_Target(uintptr_t value) {
		return ((R (*)(InputButton*, uintptr_t))(Il2CppBase() + 0x1E41880))(this, value);
	}
	template <typename R = bool> R get_IsGamePad() {
		return ((R (*)(InputButton*))(Il2CppBase() + 0x1E41888))(this);
	}
	template <typename R = void> R Awake() {
		return ((R (*)(InputButton*))(Il2CppBase() + 0x1E418F8))(this);
	}
	template <typename R = void> R OnPointerDown(uintptr_t eventData) {
		return ((R (*)(InputButton*, uintptr_t))(Il2CppBase() + 0x1E41984))(this, eventData);
	}
	template <typename R = void> R OnPointerUp(uintptr_t eventData) {
		return ((R (*)(InputButton*, uintptr_t))(Il2CppBase() + 0x1E41A48))(this, eventData);
	}
	template <typename R = void> R OnDrag(uintptr_t eventData) {
		return ((R (*)(InputButton*, uintptr_t))(Il2CppBase() + 0x1E41AD8))(this, eventData);
	}
	template <typename R = void> R OnDisable() {
		return ((R (*)(InputButton*))(Il2CppBase() + 0x1E41B50))(this);
	}
	template <typename R = bool> R get_GetButton() {
		return ((R (*)(InputButton*))(Il2CppBase() + 0x1E41B60))(this);
	}
	template <typename R = bool> R get_GetButtonDown() {
		return ((R (*)(InputButton*))(Il2CppBase() + 0x1E41C0C))(this);
	}
	template <typename R = bool> R get_GetButtonUp() {
		return ((R (*)(InputButton*))(Il2CppBase() + 0x1E41CD0))(this);
	}
	template <typename R = void> R Update() {
		return ((R (*)(InputButton*))(Il2CppBase() + 0x1E41D94))(this);
	}

};

