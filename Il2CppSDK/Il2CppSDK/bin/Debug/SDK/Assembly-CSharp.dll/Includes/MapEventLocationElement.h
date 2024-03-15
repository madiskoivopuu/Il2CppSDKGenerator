#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MapEventLocationElement
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MapEventLocationElement"));
	}

	template <typename R = uintptr_t> R& _locationImage() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& _caption() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& _description() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& _button() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& _firstSeenSign() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& _canvasGroup() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = uintptr_t> R& _panel() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = uintptr_t> R& _innerElement() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = float> R& _animationTime() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = float> R& _defaultHeight() {
		return *(R*)((uintptr_t)this + 0x5C);
	}
	template <typename R = UIWindow*> R& _window() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = uintptr_t> R& _container() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = int32_t> R& pointId() {
		return *(R*)((uintptr_t)this + 0x70);
	}
	template <typename R = Il2CppString*> R& pointBlueprint() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	 Action2<int32_t, Il2CppString*>*& OnPointRemoved() {
		return *(Action2<int32_t, Il2CppString*>**)((uintptr_t)this + 0x80);
	}
	template <typename R = bool> R& IsShowAnimation() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = bool> R& IsHideAnimation() {
		return *(R*)((uintptr_t)this + 0x89);
	}

	template <typename R = bool> R get_IsShowAnimation() {
		return ((R (*)(MapEventLocationElement*))(Il2CppBase() + 0x126C26C))(this);
	}
	template <typename R = void> R set_IsShowAnimation(bool value) {
		return ((R (*)(MapEventLocationElement*, bool))(Il2CppBase() + 0x126C274))(this, value);
	}
	template <typename R = bool> R get_IsHideAnimation() {
		return ((R (*)(MapEventLocationElement*))(Il2CppBase() + 0x126C280))(this);
	}
	template <typename R = void> R set_IsHideAnimation(bool value) {
		return ((R (*)(MapEventLocationElement*, bool))(Il2CppBase() + 0x126C288))(this, value);
	}
	template <typename R = void> R Awake() {
		return ((R (*)(MapEventLocationElement*))(Il2CppBase() + 0x126C294))(this);
	}
	template <typename R = void> R Bind(UIWindow* window, GameEntity* point, uintptr_t container, Action2<int32_t, Il2CppString*>* onPointRemoved) {
		return ((R (*)(MapEventLocationElement*, UIWindow*, GameEntity*, uintptr_t, Action2<int32_t, Il2CppString*>*))(Il2CppBase() + 0x126C330))(this, window, point, container, onPointRemoved);
	}
	template <typename R = void> R OnDisable() {
		return ((R (*)(MapEventLocationElement*))(Il2CppBase() + 0x126C750))(this);
	}
	template <typename R = void> R SetUpView(GameEntity* point) {
		return ((R (*)(MapEventLocationElement*, GameEntity*))(Il2CppBase() + 0x126C464))(this, point);
	}
	template <typename R = void> R OnButtonClick() {
		return ((R (*)(MapEventLocationElement*))(Il2CppBase() + 0x126C84C))(this);
	}
	template <typename R = void> R OnDraw(float deltaTime) {
		return ((R (*)(MapEventLocationElement*, float))(Il2CppBase() + 0x126CAA4))(this, deltaTime);
	}
	template <typename R = void> R Show() {
		return ((R (*)(MapEventLocationElement*))(Il2CppBase() + 0x126D098))(this);
	}
	template <typename R = void> R Hide() {
		return ((R (*)(MapEventLocationElement*))(Il2CppBase() + 0x126CE88))(this);
	}
	template <typename R = void> R UpdateLayout() {
		return ((R (*)(MapEventLocationElement*))(Il2CppBase() + 0x126D254))(this);
	}
	template <typename R = void> R Showb__29_0() {
		return ((R (*)(MapEventLocationElement*))(Il2CppBase() + 0x126D2D0))(this);
	}

};

