#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

template <typename T>
class BaseMessageWindow1 : public UIWindow1<T>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BaseMessageWindow`1"));
	}

	template <typename R = uintptr_t> R& Caption() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = uintptr_t> R& Message() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = uintptr_t> R& Button0() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = uintptr_t> R& Button1() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = uintptr_t> R& Button0Text() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = uintptr_t> R& Button1Text() {
		return *(R*)((uintptr_t)this + 0x0);
	}

	template <typename R = void> R OnShow() {
		return ((R (*)(BaseMessageWindow1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R OnClose() {
		return ((R (*)(BaseMessageWindow1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R OnShowb__6_0() {
		return ((R (*)(BaseMessageWindow1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R OnShowb__6_1() {
		return ((R (*)(BaseMessageWindow1*))(Il2CppBase() + 0x0))(this);
	}

};

