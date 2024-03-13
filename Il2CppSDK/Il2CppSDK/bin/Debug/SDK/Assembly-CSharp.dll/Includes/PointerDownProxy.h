#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PointerDownProxy
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PointerDownProxy"));
	}

	template <typename T = Action1uintptr_t>*> T& PointerDownEvent() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T add_PointerDownEvent(Action1uintptr_t>* value) {
		return ((T (*)(PointerDownProxy*, Action1uintptr_t>*))(Il2CppBase() + 0x15746E0))(this, value);
	}
	template <typename T = void> T remove_PointerDownEvent(Action1uintptr_t>* value) {
		return ((T (*)(PointerDownProxy*, Action1uintptr_t>*))(Il2CppBase() + 0x1574780))(this, value);
	}
	template <typename T = void> T OnPointerDown(uintptr_t eventData) {
		return ((T (*)(PointerDownProxy*, uintptr_t))(Il2CppBase() + 0x1574820))(this, eventData);
	}

};

