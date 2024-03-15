#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow.h" 

template <typename T>
class UIWindow1 : public UIWindow
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIWindow`1"));
	}

	 T& Context() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename R = uintptr_t> R get_ContextType() {
		return ((R (*)(UIWindow1*))(Il2CppBase() + 0x0))(this);
	}
	 T get_Context() {
		return ((T (*)(UIWindow1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R set_Context(T value) {
		return ((R (*)(UIWindow1*, T))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = IUIWindowContext*> R GetContext() {
		return ((R (*)(UIWindow1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R Show(IUIWindowsLayer* layer, IUIWindowContext* context) {
		return ((R (*)(UIWindow1*, IUIWindowsLayer*, IUIWindowContext*))(Il2CppBase() + 0x0))(this, layer, context);
	}
	template <typename R = void> R Close() {
		return ((R (*)(UIWindow1*))(Il2CppBase() + 0x0))(this);
	}

};

