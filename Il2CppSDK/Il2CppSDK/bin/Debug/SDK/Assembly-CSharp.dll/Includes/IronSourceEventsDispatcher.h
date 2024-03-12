#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IronSourceEventsDispatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IronSourceEventsDispatcher"));
	}

	template <typename T = uintptr_t> static T& instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& ironSourceExecuteOnMainThreadQueue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> static T executeAction(uintptr_t action) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x10D4454))(0, action);
	}
	template <typename T = void> T Update() {
		return ((T (*)(IronSourceEventsDispatcher*))(Il2CppBase() + 0x10D45AC))(this);
	}
	template <typename T = void> T removeFromParent() {
		return ((T (*)(IronSourceEventsDispatcher*))(Il2CppBase() + 0x10D48C4))(this);
	}
	template <typename T = void> static T initialize() {
		return ((T (*)(void *))(Il2CppBase() + 0x10D4954))(0);
	}
	template <typename T = bool> static T isCreated() {
		return ((T (*)(void *))(Il2CppBase() + 0x10D4AA0))(0);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(IronSourceEventsDispatcher*))(Il2CppBase() + 0x10D4B40))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(IronSourceEventsDispatcher*))(Il2CppBase() + 0x10D4BB8))(this);
	}

};

}
