#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ToggleSpriteSwap
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ToggleSpriteSwap"));
	}

	template <typename T = uintptr_t> T& targetImage() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& onSprite() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& offSprite() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& isOn() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Action1bool>*> T& onValueChanged() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& button() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = bool> T get_IsOn() {
		return ((T (*)(ToggleSpriteSwap*))(Il2CppBase() + 0x14F1AF0))(this);
	}
	template <typename T = void> T set_IsOn(bool value) {
		return ((T (*)(ToggleSpriteSwap*, bool))(Il2CppBase() + 0x14F1AF8))(this, value);
	}
	template <typename T = void> T add_onValueChanged(Action1bool>* value) {
		return ((T (*)(ToggleSpriteSwap*, Action1bool>*))(Il2CppBase() + 0x14F1BEC))(this, value);
	}
	template <typename T = void> T remove_onValueChanged(Action1bool>* value) {
		return ((T (*)(ToggleSpriteSwap*, Action1bool>*))(Il2CppBase() + 0x14F1C8C))(this, value);
	}
	template <typename T = void> T Initialize(bool value) {
		return ((T (*)(ToggleSpriteSwap*, bool))(Il2CppBase() + 0x14F1D2C))(this, value);
	}
	template <typename T = void> T Start() {
		return ((T (*)(ToggleSpriteSwap*))(Il2CppBase() + 0x14F1D3C))(this);
	}
	template <typename T = void> T OnClick() {
		return ((T (*)(ToggleSpriteSwap*))(Il2CppBase() + 0x14F1E20))(this);
	}
	template <typename T = void> T UpdateValue(bool notifySubscribers) {
		return ((T (*)(ToggleSpriteSwap*, bool))(Il2CppBase() + 0x14F1B08))(this, notifySubscribers);
	}

};

