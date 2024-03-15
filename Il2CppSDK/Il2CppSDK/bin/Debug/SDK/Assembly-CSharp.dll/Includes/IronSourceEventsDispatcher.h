#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IronSourceEventsDispatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IronSourceEventsDispatcher"));
	}

	template <typename R = IronSourceEventsDispatcher*> static R& instance() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static Queue1<uintptr_t>*& ironSourceExecuteOnMainThreadQueue() {
		return *(Queue1<uintptr_t>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename R = void> static R executeAction(uintptr_t action) {
		return ((R (*)(void *, uintptr_t))(Il2CppBase() + 0x10D4454))(0, action);
	}
	template <typename R = void> R Update() {
		return ((R (*)(IronSourceEventsDispatcher*))(Il2CppBase() + 0x10D45AC))(this);
	}
	template <typename R = void> R removeFromParent() {
		return ((R (*)(IronSourceEventsDispatcher*))(Il2CppBase() + 0x10D48C4))(this);
	}
	template <typename R = void> static R initialize() {
		return ((R (*)(void *))(Il2CppBase() + 0x10D4954))(0);
	}
	template <typename R = bool> static R isCreated() {
		return ((R (*)(void *))(Il2CppBase() + 0x10D4AA0))(0);
	}
	template <typename R = void> R Awake() {
		return ((R (*)(IronSourceEventsDispatcher*))(Il2CppBase() + 0x10D4B40))(this);
	}
	template <typename R = void> R OnDisable() {
		return ((R (*)(IronSourceEventsDispatcher*))(Il2CppBase() + 0x10D4BB8))(this);
	}

};

