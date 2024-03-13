#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SpectatorClickHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SpectatorClickHandler"));
	}

	template <typename T = SpectatorWindow*> T& _spectatorWindow() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _rect() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& _wasClicked() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& _wasDragged() {
		return *(T*)((uintptr_t)this + 0x31);
	}
	template <typename T = Action1uintptr_t>*> T& OnClick() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T add_OnClick(Action1uintptr_t>* value) {
		return ((T (*)(SpectatorClickHandler*, Action1uintptr_t>*))(Il2CppBase() + 0x1485C28))(this, value);
	}
	template <typename T = void> T remove_OnClick(Action1uintptr_t>* value) {
		return ((T (*)(SpectatorClickHandler*, Action1uintptr_t>*))(Il2CppBase() + 0x1485CC8))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(SpectatorClickHandler*))(Il2CppBase() + 0x1485D68))(this);
	}
	template <typename T = void> T Show(SpectatorWindow* spectatorWindow, uintptr_t spectateRect) {
		return ((T (*)(SpectatorClickHandler*, SpectatorWindow*, uintptr_t))(Il2CppBase() + 0x1486114))(this, spectatorWindow, spectateRect);
	}
	template <typename T = void> T ProcessMouseClick(uintptr_t eventData) {
		return ((T (*)(SpectatorClickHandler*, uintptr_t))(Il2CppBase() + 0x1486164))(this, eventData);
	}
	template <typename T = void> T OnDrag(uintptr_t eventData) {
		return ((T (*)(SpectatorClickHandler*, uintptr_t))(Il2CppBase() + 0x1486290))(this, eventData);
	}
	template <typename T = bool> static T GetWorldPosition(uintptr_t mousePosition, uintptr_t* result) {
		return ((T (*)(void *, uintptr_t, uintptr_t*))(Il2CppBase() + 0x1486564))(0, mousePosition, result);
	}
	template <typename T = void> T Awakeb__7_0(uintptr_t eventData) {
		return ((T (*)(SpectatorClickHandler*, uintptr_t))(Il2CppBase() + 0x1486810))(this, eventData);
	}
	template <typename T = void> T Awakeb__7_1(uintptr_t eventData) {
		return ((T (*)(SpectatorClickHandler*, uintptr_t))(Il2CppBase() + 0x148681C))(this, eventData);
	}

};

