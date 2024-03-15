#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ToggleSpriteSwap
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ToggleSpriteSwap"));
	}

	template <typename R = uintptr_t> R& targetImage() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& onSprite() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& offSprite() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = bool> R& isOn() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	 Action1bool>*& onValueChanged() {
		return *(Action1bool>**)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& button() {
		return *(R*)((uintptr_t)this + 0x40);
	}

	template <typename R = bool> R get_IsOn() {
		return ((R (*)(ToggleSpriteSwap*))(Il2CppBase() + 0x14F1AF0))(this);
	}
	template <typename R = void> R set_IsOn(bool value) {
		return ((R (*)(ToggleSpriteSwap*, bool))(Il2CppBase() + 0x14F1AF8))(this, value);
	}
	template <typename R = void> R add_onValueChanged(Action1bool>* value) {
		return ((R (*)(ToggleSpriteSwap*, Action1bool>*))(Il2CppBase() + 0x14F1BEC))(this, value);
	}
	template <typename R = void> R remove_onValueChanged(Action1bool>* value) {
		return ((R (*)(ToggleSpriteSwap*, Action1bool>*))(Il2CppBase() + 0x14F1C8C))(this, value);
	}
	template <typename R = void> R Initialize(bool value) {
		return ((R (*)(ToggleSpriteSwap*, bool))(Il2CppBase() + 0x14F1D2C))(this, value);
	}
	template <typename R = void> R Start() {
		return ((R (*)(ToggleSpriteSwap*))(Il2CppBase() + 0x14F1D3C))(this);
	}
	template <typename R = void> R OnClick() {
		return ((R (*)(ToggleSpriteSwap*))(Il2CppBase() + 0x14F1E20))(this);
	}
	template <typename R = void> R UpdateValue(bool notifySubscribers) {
		return ((R (*)(ToggleSpriteSwap*, bool))(Il2CppBase() + 0x14F1B08))(this, notifySubscribers);
	}

};

