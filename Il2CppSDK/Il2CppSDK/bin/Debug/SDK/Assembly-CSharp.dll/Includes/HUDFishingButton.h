#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HUDFishingButton
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDFishingButton"));
	}

	template <typename R = uintptr_t> R& _button() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& _ring() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& _chargedMark() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = float> R& _oscillationToScaleCoef() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = InputButton*> R& _inputButton() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = InputEntity*> R& _inputEntity() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = IUIWindow*> R& _window() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	 Nullable1bool>*& _lastGameInputIsEnabled() {
		return *(Nullable1bool>**)((uintptr_t)this + 0x50);
	}

	template <typename R = void> R Awake() {
		return ((R (*)(HUDFishingButton*))(Il2CppBase() + 0x1453054))(this);
	}
	template <typename R = void> R Bind(IUIWindow* window) {
		return ((R (*)(HUDFishingButton*, IUIWindow*))(Il2CppBase() + 0x14530F0))(this, window);
	}
	template <typename R = void> R Unbind() {
		return ((R (*)(HUDFishingButton*))(Il2CppBase() + 0x145339C))(this);
	}
	template <typename R = void> R OnUpdateInput(float deltaTime) {
		return ((R (*)(HUDFishingButton*, float))(Il2CppBase() + 0x1453584))(this, deltaTime);
	}
	template <typename R = bool> R GameInputIsEnabled() {
		return ((R (*)(HUDFishingButton*))(Il2CppBase() + 0x14538E4))(this);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(HUDFishingButton*, float))(Il2CppBase() + 0x1453B40))(this, deltaTime);
	}
	template <typename R = void> R SetEnable(bool value) {
		return ((R (*)(HUDFishingButton*, bool))(Il2CppBase() + 0x1453F80))(this, value);
	}

};

