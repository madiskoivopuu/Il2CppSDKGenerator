#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PointerClickProxy
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PointerClickProxy"));
	}

	 Action1uintptr_t>*& PointerDownEvent() {
		return *(Action1uintptr_t>**)((uintptr_t)this + 0x18);
	}
	template <typename R = bool> R& isPressed() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = float> R& duration() {
		return *(R*)((uintptr_t)this + 0x24);
	}
	template <typename R = float> R& MaxDuration() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	template <typename R = void> R add_PointerDownEvent(Action1uintptr_t>* value) {
		return ((R (*)(PointerClickProxy*, Action1uintptr_t>*))(Il2CppBase() + 0x15744C8))(this, value);
	}
	template <typename R = void> R remove_PointerDownEvent(Action1uintptr_t>* value) {
		return ((R (*)(PointerClickProxy*, Action1uintptr_t>*))(Il2CppBase() + 0x1574568))(this, value);
	}
	template <typename R = void> R OnPointerDown(uintptr_t eventData) {
		return ((R (*)(PointerClickProxy*, uintptr_t))(Il2CppBase() + 0x1574608))(this, eventData);
	}
	template <typename R = void> R OnPointerUp(uintptr_t eventData) {
		return ((R (*)(PointerClickProxy*, uintptr_t))(Il2CppBase() + 0x1574614))(this, eventData);
	}
	template <typename R = void> R Update() {
		return ((R (*)(PointerClickProxy*))(Il2CppBase() + 0x157468C))(this);
	}

};

