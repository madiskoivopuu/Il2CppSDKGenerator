#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SpectatorClickHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SpectatorClickHandler"));
	}

	template <typename R = SpectatorWindow*> R& _spectatorWindow() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& _rect() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = bool> R& _wasClicked() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = bool> R& _wasDragged() {
		return *(R*)((uintptr_t)this + 0x31);
	}
	 Action1uintptr_t>*& OnClick() {
		return *(Action1uintptr_t>**)((uintptr_t)this + 0x38);
	}

	template <typename R = void> R add_OnClick(Action1uintptr_t>* value) {
		return ((R (*)(SpectatorClickHandler*, Action1uintptr_t>*))(Il2CppBase() + 0x1485C28))(this, value);
	}
	template <typename R = void> R remove_OnClick(Action1uintptr_t>* value) {
		return ((R (*)(SpectatorClickHandler*, Action1uintptr_t>*))(Il2CppBase() + 0x1485CC8))(this, value);
	}
	template <typename R = void> R Awake() {
		return ((R (*)(SpectatorClickHandler*))(Il2CppBase() + 0x1485D68))(this);
	}
	template <typename R = void> R Show(SpectatorWindow* spectatorWindow, uintptr_t spectateRect) {
		return ((R (*)(SpectatorClickHandler*, SpectatorWindow*, uintptr_t))(Il2CppBase() + 0x1486114))(this, spectatorWindow, spectateRect);
	}
	template <typename R = void> R ProcessMouseClick(uintptr_t eventData) {
		return ((R (*)(SpectatorClickHandler*, uintptr_t))(Il2CppBase() + 0x1486164))(this, eventData);
	}
	template <typename R = void> R OnDrag(uintptr_t eventData) {
		return ((R (*)(SpectatorClickHandler*, uintptr_t))(Il2CppBase() + 0x1486290))(this, eventData);
	}
	template <typename R = bool> static R GetWorldPosition(uintptr_t mousePosition, uintptr_t* result) {
		return ((R (*)(void *, uintptr_t, uintptr_t*))(Il2CppBase() + 0x1486564))(0, mousePosition, result);
	}
	template <typename R = void> R Awakeb__7_0(uintptr_t eventData) {
		return ((R (*)(SpectatorClickHandler*, uintptr_t))(Il2CppBase() + 0x1486810))(this, eventData);
	}
	template <typename R = void> R Awakeb__7_1(uintptr_t eventData) {
		return ((R (*)(SpectatorClickHandler*, uintptr_t))(Il2CppBase() + 0x148681C))(this, eventData);
	}

};

