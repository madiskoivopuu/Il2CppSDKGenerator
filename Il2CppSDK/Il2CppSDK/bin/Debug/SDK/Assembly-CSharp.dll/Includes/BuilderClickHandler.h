#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BuilderClickHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BuilderClickHandler"));
	}

	template <typename R = BuilderWindow*> R& _builderWindow() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = bool> R& _wasClicked() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = bool> R& _wasDragged() {
		return *(R*)((uintptr_t)this + 0x21);
	}
	 Action1uintptr_t>*& OnClick() {
		return *(Action1uintptr_t>**)((uintptr_t)this + 0x28);
	}

	template <typename R = void> R add_OnClick(Action1uintptr_t>* value) {
		return ((R (*)(BuilderClickHandler*, Action1uintptr_t>*))(Il2CppBase() + 0x15A731C))(this, value);
	}
	template <typename R = void> R remove_OnClick(Action1uintptr_t>* value) {
		return ((R (*)(BuilderClickHandler*, Action1uintptr_t>*))(Il2CppBase() + 0x15A73BC))(this, value);
	}
	template <typename R = void> R Awake() {
		return ((R (*)(BuilderClickHandler*))(Il2CppBase() + 0x15A745C))(this);
	}
	template <typename R = void> R Show(BuilderWindow* builderWindow) {
		return ((R (*)(BuilderClickHandler*, BuilderWindow*))(Il2CppBase() + 0x15A7808))(this, builderWindow);
	}
	template <typename R = void> R ProcessMouseClick(uintptr_t eventData) {
		return ((R (*)(BuilderClickHandler*, uintptr_t))(Il2CppBase() + 0x15A7810))(this, eventData);
	}
	template <typename R = void> R OnDrag(uintptr_t eventData) {
		return ((R (*)(BuilderClickHandler*, uintptr_t))(Il2CppBase() + 0x15A793C))(this, eventData);
	}
	template <typename R = bool> static R GetWorldPosition(uintptr_t mousePosition, uintptr_t* result) {
		return ((R (*)(void *, uintptr_t, uintptr_t*))(Il2CppBase() + 0x15A7B98))(0, mousePosition, result);
	}
	template <typename R = void> R Awakeb__6_0(uintptr_t eventData) {
		return ((R (*)(BuilderClickHandler*, uintptr_t))(Il2CppBase() + 0x15A7E44))(this, eventData);
	}
	template <typename R = void> R Awakeb__6_1(uintptr_t eventData) {
		return ((R (*)(BuilderClickHandler*, uintptr_t))(Il2CppBase() + 0x15A7E50))(this, eventData);
	}

};

