#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MinimapLabelView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MinimapLabelView"));
	}

	template <typename T = uintptr_t> T& _spriteRenderer() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Nullable1uintptr_t>*> T& _fixedRotation() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _currentSprite() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _anticipatedSprite() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& _minimapSwitchCoroutine() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = bool> T get_InTransition() {
		return ((T (*)(MinimapLabelView*))(Il2CppBase() + 0x12D343C))(this);
	}
	template <typename T = uintptr_t> T get_CurrentSprite() {
		return ((T (*)(MinimapLabelView*))(Il2CppBase() + 0x12D344C))(this);
	}
	template <typename T = void> T set_CurrentSprite(uintptr_t value) {
		return ((T (*)(MinimapLabelView*, uintptr_t))(Il2CppBase() + 0x12D3454))(this, value);
	}
	template <typename T = uintptr_t> T get_AnticipatedSprite() {
		return ((T (*)(MinimapLabelView*))(Il2CppBase() + 0x12D34A0))(this);
	}
	template <typename T = void> T set_AnticipatedSprite(uintptr_t value) {
		return ((T (*)(MinimapLabelView*, uintptr_t))(Il2CppBase() + 0x12D34A8))(this, value);
	}
	template <typename T = Nullable1uintptr_t>*> T get_FixedRotation() {
		return ((T (*)(MinimapLabelView*))(Il2CppBase() + 0x12D36A8))(this);
	}
	template <typename T = void> T set_FixedRotation(Nullable1uintptr_t>* value) {
		return ((T (*)(MinimapLabelView*, Nullable1uintptr_t>*))(Il2CppBase() + 0x12D36B4))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(MinimapLabelView*))(Il2CppBase() + 0x12D3778))(this);
	}
	template <typename T = uintptr_t> T MinimapSwitchCoroutine() {
		return ((T (*)(MinimapLabelView*))(Il2CppBase() + 0x12D3630))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(MinimapLabelView*))(Il2CppBase() + 0x12D3840))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(MinimapLabelView*))(Il2CppBase() + 0x12D38FC))(this);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(MinimapLabelView*))(Il2CppBase() + 0x12D395C))(this);
	}

};

