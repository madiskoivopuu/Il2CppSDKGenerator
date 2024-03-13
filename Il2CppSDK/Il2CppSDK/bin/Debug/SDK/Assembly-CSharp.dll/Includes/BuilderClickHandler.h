#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BuilderClickHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BuilderClickHandler"));
	}

	template <typename T = BuilderWindow*> T& _builderWindow() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& _wasClicked() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& _wasDragged() {
		return *(T*)((uintptr_t)this + 0x21);
	}
	template <typename T = Action1uintptr_t>*> T& OnClick() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T add_OnClick(Action1uintptr_t>* value) {
		return ((T (*)(BuilderClickHandler*, Action1uintptr_t>*))(Il2CppBase() + 0x15A731C))(this, value);
	}
	template <typename T = void> T remove_OnClick(Action1uintptr_t>* value) {
		return ((T (*)(BuilderClickHandler*, Action1uintptr_t>*))(Il2CppBase() + 0x15A73BC))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(BuilderClickHandler*))(Il2CppBase() + 0x15A745C))(this);
	}
	template <typename T = void> T Show(BuilderWindow* builderWindow) {
		return ((T (*)(BuilderClickHandler*, BuilderWindow*))(Il2CppBase() + 0x15A7808))(this, builderWindow);
	}
	template <typename T = void> T ProcessMouseClick(uintptr_t eventData) {
		return ((T (*)(BuilderClickHandler*, uintptr_t))(Il2CppBase() + 0x15A7810))(this, eventData);
	}
	template <typename T = void> T OnDrag(uintptr_t eventData) {
		return ((T (*)(BuilderClickHandler*, uintptr_t))(Il2CppBase() + 0x15A793C))(this, eventData);
	}
	template <typename T = bool> static T GetWorldPosition(uintptr_t mousePosition, uintptr_t* result) {
		return ((T (*)(void *, uintptr_t, uintptr_t*))(Il2CppBase() + 0x15A7B98))(0, mousePosition, result);
	}
	template <typename T = void> T Awakeb__6_0(uintptr_t eventData) {
		return ((T (*)(BuilderClickHandler*, uintptr_t))(Il2CppBase() + 0x15A7E44))(this, eventData);
	}
	template <typename T = void> T Awakeb__6_1(uintptr_t eventData) {
		return ((T (*)(BuilderClickHandler*, uintptr_t))(Il2CppBase() + 0x15A7E50))(this, eventData);
	}

};

