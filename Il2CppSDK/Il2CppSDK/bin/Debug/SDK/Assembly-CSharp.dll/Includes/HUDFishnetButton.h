#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HUDFishnetButton
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDFishnetButton"));
	}

	template <typename R = uintptr_t> R& _button() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& _icon() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& _countText() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& _grayMaterial() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = IUIWindow*> R& _window() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = ItemEntity*> R& _item() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	 Nullable1int32_t>*& _count() {
		return *(Nullable1int32_t>**)((uintptr_t)this + 0x48);
	}
	template <typename R = float> R& _pressedTime() {
		return *(R*)((uintptr_t)this + 0x50);
	}

	template <typename R = void> R Bind(IUIWindow* window) {
		return ((R (*)(HUDFishnetButton*, IUIWindow*))(Il2CppBase() + 0x1453FF4))(this, window);
	}
	template <typename R = void> R Unbind() {
		return ((R (*)(HUDFishnetButton*))(Il2CppBase() + 0x1454138))(this);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(HUDFishnetButton*, float))(Il2CppBase() + 0x145425C))(this, deltaTime);
	}
	template <typename R = void> R OnClick() {
		return ((R (*)(HUDFishnetButton*))(Il2CppBase() + 0x14545BC))(this);
	}
	template <typename R = void> R SetEnable(bool value) {
		return ((R (*)(HUDFishnetButton*, bool))(Il2CppBase() + 0x1454558))(this, value);
	}
	template <typename R = void> R OnPointerDown(uintptr_t eventData) {
		return ((R (*)(HUDFishnetButton*, uintptr_t))(Il2CppBase() + 0x1454888))(this, eventData);
	}
	template <typename R = void> R Update() {
		return ((R (*)(HUDFishnetButton*))(Il2CppBase() + 0x1454AD8))(this);
	}
	template <typename R = void> R OnPointerUp(uintptr_t eventData) {
		return ((R (*)(HUDFishnetButton*, uintptr_t))(Il2CppBase() + 0x1454E04))(this, eventData);
	}
	template <typename R = bool> R HideTooltip() {
		return ((R (*)(HUDFishnetButton*))(Il2CppBase() + 0x14548B4))(this);
	}
	template <typename R = void> R ShowTooltip() {
		return ((R (*)(HUDFishnetButton*))(Il2CppBase() + 0x1454B7C))(this);
	}

};

