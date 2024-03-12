#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HUDFishnetButton
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDFishnetButton"));
	}

	template <typename T = uintptr_t> T& _button() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _icon() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _countText() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _grayMaterial() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _window() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& _item() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = void*> T& _count() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& _pressedTime() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = void> T Bind(uintptr_t window) {
		return ((T (*)(HUDFishnetButton*, uintptr_t))(Il2CppBase() + 0x1453FF4))(this, window);
	}
	template <typename T = void> T Unbind() {
		return ((T (*)(HUDFishnetButton*))(Il2CppBase() + 0x1454138))(this);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(HUDFishnetButton*, float))(Il2CppBase() + 0x145425C))(this, deltaTime);
	}
	template <typename T = void> T OnClick() {
		return ((T (*)(HUDFishnetButton*))(Il2CppBase() + 0x14545BC))(this);
	}
	template <typename T = void> T SetEnable(bool value) {
		return ((T (*)(HUDFishnetButton*, bool))(Il2CppBase() + 0x1454558))(this, value);
	}
	template <typename T = void> T OnPointerDown(uintptr_t eventData) {
		return ((T (*)(HUDFishnetButton*, uintptr_t))(Il2CppBase() + 0x1454888))(this, eventData);
	}
	template <typename T = void> T Update() {
		return ((T (*)(HUDFishnetButton*))(Il2CppBase() + 0x1454AD8))(this);
	}
	template <typename T = void> T OnPointerUp(uintptr_t eventData) {
		return ((T (*)(HUDFishnetButton*, uintptr_t))(Il2CppBase() + 0x1454E04))(this, eventData);
	}
	template <typename T = bool> T HideTooltip() {
		return ((T (*)(HUDFishnetButton*))(Il2CppBase() + 0x14548B4))(this);
	}
	template <typename T = void> T ShowTooltip() {
		return ((T (*)(HUDFishnetButton*))(Il2CppBase() + 0x1454B7C))(this);
	}

};

}
