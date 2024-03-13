#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HUDCrouchButton
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDCrouchButton"));
	}

	template <typename T = uintptr_t> T& _button() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _sneakIcon() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _standIcon() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _cdImage() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& _isSneak() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& _isSneakProcessed() {
		return *(T*)((uintptr_t)this + 0x39);
	}
	template <typename T = InputButton*> T& InputButton() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = InputEntity*> T& InputEntity() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = IUIWindow*> T& Window() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Nullable1bool>*> T& _lastGameInputIsEnabled() {
		return *(T*)((uintptr_t)this + 0x58);
	}

	template <typename T = InputButton*> T get_InputButton() {
		return ((T (*)(HUDCrouchButton*))(Il2CppBase() + 0x144F6A8))(this);
	}
	template <typename T = void> T set_InputButton(InputButton* value) {
		return ((T (*)(HUDCrouchButton*, InputButton*))(Il2CppBase() + 0x144F6B0))(this, value);
	}
	template <typename T = InputEntity*> T get_InputEntity() {
		return ((T (*)(HUDCrouchButton*))(Il2CppBase() + 0x144F6B8))(this);
	}
	template <typename T = void> T set_InputEntity(InputEntity* value) {
		return ((T (*)(HUDCrouchButton*, InputEntity*))(Il2CppBase() + 0x144F6C0))(this, value);
	}
	template <typename T = IUIWindow*> T get_Window() {
		return ((T (*)(HUDCrouchButton*))(Il2CppBase() + 0x144F6C8))(this);
	}
	template <typename T = void> T set_Window(IUIWindow* value) {
		return ((T (*)(HUDCrouchButton*, IUIWindow*))(Il2CppBase() + 0x144F6D0))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(HUDCrouchButton*))(Il2CppBase() + 0x144F6D8))(this);
	}
	template <typename T = void> T Bind(IUIWindow* window) {
		return ((T (*)(HUDCrouchButton*, IUIWindow*))(Il2CppBase() + 0x144F774))(this, window);
	}
	template <typename T = void> T OnUpdateInput(float deltaTime) {
		return ((T (*)(HUDCrouchButton*, float))(Il2CppBase() + 0x144FB38))(this, deltaTime);
	}
	template <typename T = bool> T GameInputIsEnabled() {
		return ((T (*)(HUDCrouchButton*))(Il2CppBase() + 0x144FD48))(this);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(HUDCrouchButton*, float))(Il2CppBase() + 0x144FFA4))(this, deltaTime);
	}

};

