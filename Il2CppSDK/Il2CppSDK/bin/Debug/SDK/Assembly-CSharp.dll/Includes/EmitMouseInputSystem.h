#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EmitMouseInputSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EmitMouseInputSystem"));
	}

	template <typename R = InputContext*> R& _input() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = InputEntity*> R& _leftMouseEntity() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = InputEntity*> R& _rightMouseEntity() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& _clickArea() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	template <typename R = void> R Initialize() {
		return ((R (*)(EmitMouseInputSystem*))(Il2CppBase() + 0x136A66C))(this);
	}
	template <typename R = void> R OnPointerDown(uintptr_t eventData) {
		return ((R (*)(EmitMouseInputSystem*, uintptr_t))(Il2CppBase() + 0x136AA08))(this, eventData);
	}
	template <typename R = void> R OnPointerUp(uintptr_t eventData) {
		return ((R (*)(EmitMouseInputSystem*, uintptr_t))(Il2CppBase() + 0x136AB20))(this, eventData);
	}
	template <typename R = void> R OnDrag(uintptr_t eventData) {
		return ((R (*)(EmitMouseInputSystem*, uintptr_t))(Il2CppBase() + 0x136AC38))(this, eventData);
	}

};

