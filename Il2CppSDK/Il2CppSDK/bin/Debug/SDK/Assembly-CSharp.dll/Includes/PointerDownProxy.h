#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PointerDownProxy
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PointerDownProxy"));
	}

	 Action1uintptr_t>*& PointerDownEvent() {
		return *(Action1uintptr_t>**)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R add_PointerDownEvent(Action1uintptr_t>* value) {
		return ((R (*)(PointerDownProxy*, Action1uintptr_t>*))(Il2CppBase() + 0x15746E0))(this, value);
	}
	template <typename R = void> R remove_PointerDownEvent(Action1uintptr_t>* value) {
		return ((R (*)(PointerDownProxy*, Action1uintptr_t>*))(Il2CppBase() + 0x1574780))(this, value);
	}
	template <typename R = void> R OnPointerDown(uintptr_t eventData) {
		return ((R (*)(PointerDownProxy*, uintptr_t))(Il2CppBase() + 0x1574820))(this, eventData);
	}

};

