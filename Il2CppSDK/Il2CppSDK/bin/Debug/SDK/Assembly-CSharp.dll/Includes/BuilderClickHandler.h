#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BuilderClickHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BuilderClickHandler"));
	}

	template <typename T = uintptr_t> T& _builderWindow() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& _wasClicked() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& _wasDragged() {
		return *(T*)((uintptr_t)this + 0x21);
	}
	template <typename T = void*> T& OnClick() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T add_OnClick(void* value) {
		return ((T (*)(BuilderClickHandler*, void*))(Il2CppBase() + 0x15A731C))(this, value);
	}
	template <typename T = void> T remove_OnClick(void* value) {
		return ((T (*)(BuilderClickHandler*, void*))(Il2CppBase() + 0x15A73BC))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(BuilderClickHandler*))(Il2CppBase() + 0x15A745C))(this);
	}
	template <typename T = void> T Show(uintptr_t builderWindow) {
		return ((T (*)(BuilderClickHandler*, uintptr_t))(Il2CppBase() + 0x15A7808))(this, builderWindow);
	}
	template <typename T = void> T ProcessMouseClick(uintptr_t eventData) {
		return ((T (*)(BuilderClickHandler*, uintptr_t))(Il2CppBase() + 0x15A7810))(this, eventData);
	}
	template <typename T = void> T OnDrag(uintptr_t eventData) {
		return ((T (*)(BuilderClickHandler*, uintptr_t))(Il2CppBase() + 0x15A793C))(this, eventData);
	}
	template <typename T = bool> static T GetWorldPosition(Il2CppVector2 mousePosition, uintptr_t* result) {
		return ((T (*)(void *, Il2CppVector2, uintptr_t*))(Il2CppBase() + 0x15A7B98))(0, mousePosition, result);
	}
	template <typename T = void> T Awakeb__6_0(uintptr_t eventData) {
		return ((T (*)(BuilderClickHandler*, uintptr_t))(Il2CppBase() + 0x15A7E44))(this, eventData);
	}
	template <typename T = void> T Awakeb__6_1(uintptr_t eventData) {
		return ((T (*)(BuilderClickHandler*, uintptr_t))(Il2CppBase() + 0x15A7E50))(this, eventData);
	}

};

}
