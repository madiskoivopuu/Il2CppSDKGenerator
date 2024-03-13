#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PointerClickProxy
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PointerClickProxy"));
	}

	template <typename T = Action1uintptr_t>*> T& PointerDownEvent() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& isPressed() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& duration() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& MaxDuration() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T add_PointerDownEvent(Action1uintptr_t>* value) {
		return ((T (*)(PointerClickProxy*, Action1uintptr_t>*))(Il2CppBase() + 0x15744C8))(this, value);
	}
	template <typename T = void> T remove_PointerDownEvent(Action1uintptr_t>* value) {
		return ((T (*)(PointerClickProxy*, Action1uintptr_t>*))(Il2CppBase() + 0x1574568))(this, value);
	}
	template <typename T = void> T OnPointerDown(uintptr_t eventData) {
		return ((T (*)(PointerClickProxy*, uintptr_t))(Il2CppBase() + 0x1574608))(this, eventData);
	}
	template <typename T = void> T OnPointerUp(uintptr_t eventData) {
		return ((T (*)(PointerClickProxy*, uintptr_t))(Il2CppBase() + 0x1574614))(this, eventData);
	}
	template <typename T = void> T Update() {
		return ((T (*)(PointerClickProxy*))(Il2CppBase() + 0x157468C))(this);
	}

};

