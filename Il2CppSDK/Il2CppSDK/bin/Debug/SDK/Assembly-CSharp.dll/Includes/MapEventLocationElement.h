#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MapEventLocationElement
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MapEventLocationElement"));
	}

	template <typename T = uintptr_t> T& _locationImage() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _caption() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _description() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _button() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _firstSeenSign() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& _canvasGroup() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& _panel() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& _innerElement() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& _animationTime() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> T& _defaultHeight() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& _window() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& _container() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> T& pointId() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppString*> T& pointBlueprint() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = void*> T& OnPointRemoved() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = bool> T& IsShowAnimation() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = bool> T& IsHideAnimation() {
		return *(T*)((uintptr_t)this + 0x89);
	}

	template <typename T = bool> T get_IsShowAnimation() {
		return ((T (*)(MapEventLocationElement*))(Il2CppBase() + 0x126C26C))(this);
	}
	template <typename T = void> T set_IsShowAnimation(bool value) {
		return ((T (*)(MapEventLocationElement*, bool))(Il2CppBase() + 0x126C274))(this, value);
	}
	template <typename T = bool> T get_IsHideAnimation() {
		return ((T (*)(MapEventLocationElement*))(Il2CppBase() + 0x126C280))(this);
	}
	template <typename T = void> T set_IsHideAnimation(bool value) {
		return ((T (*)(MapEventLocationElement*, bool))(Il2CppBase() + 0x126C288))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(MapEventLocationElement*))(Il2CppBase() + 0x126C294))(this);
	}
	template <typename T = void> T Bind(uintptr_t window, uintptr_t point, uintptr_t container, void* onPointRemoved) {
		return ((T (*)(MapEventLocationElement*, uintptr_t, uintptr_t, uintptr_t, void*))(Il2CppBase() + 0x126C330))(this, window, point, container, onPointRemoved);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(MapEventLocationElement*))(Il2CppBase() + 0x126C750))(this);
	}
	template <typename T = void> T SetUpView(uintptr_t point) {
		return ((T (*)(MapEventLocationElement*, uintptr_t))(Il2CppBase() + 0x126C464))(this, point);
	}
	template <typename T = void> T OnButtonClick() {
		return ((T (*)(MapEventLocationElement*))(Il2CppBase() + 0x126C84C))(this);
	}
	template <typename T = void> T OnDraw(float deltaTime) {
		return ((T (*)(MapEventLocationElement*, float))(Il2CppBase() + 0x126CAA4))(this, deltaTime);
	}
	template <typename T = void> T Show() {
		return ((T (*)(MapEventLocationElement*))(Il2CppBase() + 0x126D098))(this);
	}
	template <typename T = void> T Hide() {
		return ((T (*)(MapEventLocationElement*))(Il2CppBase() + 0x126CE88))(this);
	}
	template <typename T = void> T UpdateLayout() {
		return ((T (*)(MapEventLocationElement*))(Il2CppBase() + 0x126D254))(this);
	}
	template <typename T = void> T Showb__29_0() {
		return ((T (*)(MapEventLocationElement*))(Il2CppBase() + 0x126D2D0))(this);
	}

};

}
