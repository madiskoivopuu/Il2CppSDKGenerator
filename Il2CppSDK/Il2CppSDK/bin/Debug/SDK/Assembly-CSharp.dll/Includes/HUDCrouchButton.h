#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HUDCrouchButton
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDCrouchButton"));
	}

	template <typename R = uintptr_t> R& _button() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& _sneakIcon() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& _standIcon() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& _cdImage() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = bool> R& _isSneak() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = bool> R& _isSneakProcessed() {
		return *(R*)((uintptr_t)this + 0x39);
	}
	template <typename R = InputButton*> R& InputButton() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = InputEntity*> R& InputEntity() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = IUIWindow*> R& Window() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	 Nullable1<bool>*& _lastGameInputIsEnabled() {
		return *(Nullable1<bool>**)((uintptr_t)this + 0x58);
	}

	template <typename R = InputButton*> R get_InputButton() {
		return ((R (*)(HUDCrouchButton*))(Il2CppBase() + 0x144F6A8))(this);
	}
	template <typename R = void> R set_InputButton(InputButton* value) {
		return ((R (*)(HUDCrouchButton*, InputButton*))(Il2CppBase() + 0x144F6B0))(this, value);
	}
	template <typename R = InputEntity*> R get_InputEntity() {
		return ((R (*)(HUDCrouchButton*))(Il2CppBase() + 0x144F6B8))(this);
	}
	template <typename R = void> R set_InputEntity(InputEntity* value) {
		return ((R (*)(HUDCrouchButton*, InputEntity*))(Il2CppBase() + 0x144F6C0))(this, value);
	}
	template <typename R = IUIWindow*> R get_Window() {
		return ((R (*)(HUDCrouchButton*))(Il2CppBase() + 0x144F6C8))(this);
	}
	template <typename R = void> R set_Window(IUIWindow* value) {
		return ((R (*)(HUDCrouchButton*, IUIWindow*))(Il2CppBase() + 0x144F6D0))(this, value);
	}
	template <typename R = void> R Awake() {
		return ((R (*)(HUDCrouchButton*))(Il2CppBase() + 0x144F6D8))(this);
	}
	template <typename R = void> R Bind(IUIWindow* window) {
		return ((R (*)(HUDCrouchButton*, IUIWindow*))(Il2CppBase() + 0x144F774))(this, window);
	}
	template <typename R = void> R OnUpdateInput(float deltaTime) {
		return ((R (*)(HUDCrouchButton*, float))(Il2CppBase() + 0x144FB38))(this, deltaTime);
	}
	template <typename R = bool> R GameInputIsEnabled() {
		return ((R (*)(HUDCrouchButton*))(Il2CppBase() + 0x144FD48))(this);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(HUDCrouchButton*, float))(Il2CppBase() + 0x144FFA4))(this, deltaTime);
	}

};

