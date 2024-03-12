#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow" 

class UIWindow1: UIWindow
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIWindow`1"));
	}

	template <typename T = uintptr_t> T& Context() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = uintptr_t> T get_ContextType() {
		return ((T (*)(UIWindow1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_Context() {
		return ((T (*)(UIWindow1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_Context(uintptr_t value) {
		return ((T (*)(UIWindow1*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = uintptr_t> T GetContext() {
		return ((T (*)(UIWindow1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T Show(uintptr_t layer, uintptr_t context) {
		return ((T (*)(UIWindow1*, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, layer, context);
	}
	template <typename T = void> T Close() {
		return ((T (*)(UIWindow1*))(Il2CppBase() + 0x0))(this);
	}

};

}
