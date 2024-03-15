#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MinimapLabelView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MinimapLabelView"));
	}

	template <typename R = uintptr_t> R& _spriteRenderer() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	 Nullable1uintptr_t>*& _fixedRotation() {
		return *(Nullable1uintptr_t>**)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& _currentSprite() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& _anticipatedSprite() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& _minimapSwitchCoroutine() {
		return *(R*)((uintptr_t)this + 0x40);
	}

	template <typename R = bool> R get_InTransition() {
		return ((R (*)(MinimapLabelView*))(Il2CppBase() + 0x12D343C))(this);
	}
	template <typename R = uintptr_t> R get_CurrentSprite() {
		return ((R (*)(MinimapLabelView*))(Il2CppBase() + 0x12D344C))(this);
	}
	template <typename R = void> R set_CurrentSprite(uintptr_t value) {
		return ((R (*)(MinimapLabelView*, uintptr_t))(Il2CppBase() + 0x12D3454))(this, value);
	}
	template <typename R = uintptr_t> R get_AnticipatedSprite() {
		return ((R (*)(MinimapLabelView*))(Il2CppBase() + 0x12D34A0))(this);
	}
	template <typename R = void> R set_AnticipatedSprite(uintptr_t value) {
		return ((R (*)(MinimapLabelView*, uintptr_t))(Il2CppBase() + 0x12D34A8))(this, value);
	}
	 Nullable1uintptr_t>* get_FixedRotation() {
		return ((Nullable1uintptr_t>* (*)(MinimapLabelView*))(Il2CppBase() + 0x12D36A8))(this);
	}
	template <typename R = void> R set_FixedRotation(Nullable1uintptr_t>* value) {
		return ((R (*)(MinimapLabelView*, Nullable1uintptr_t>*))(Il2CppBase() + 0x12D36B4))(this, value);
	}
	template <typename R = void> R Awake() {
		return ((R (*)(MinimapLabelView*))(Il2CppBase() + 0x12D3778))(this);
	}
	template <typename R = uintptr_t> R MinimapSwitchCoroutine() {
		return ((R (*)(MinimapLabelView*))(Il2CppBase() + 0x12D3630))(this);
	}
	template <typename R = void> R OnEnable() {
		return ((R (*)(MinimapLabelView*))(Il2CppBase() + 0x12D3840))(this);
	}
	template <typename R = void> R OnDisable() {
		return ((R (*)(MinimapLabelView*))(Il2CppBase() + 0x12D38FC))(this);
	}
	template <typename R = void> R LateUpdate() {
		return ((R (*)(MinimapLabelView*))(Il2CppBase() + 0x12D395C))(this);
	}

};

