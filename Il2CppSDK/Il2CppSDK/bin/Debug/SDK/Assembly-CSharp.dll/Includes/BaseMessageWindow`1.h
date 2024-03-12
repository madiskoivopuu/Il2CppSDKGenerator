#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow`1" 

class BaseMessageWindow1: UIWindow1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BaseMessageWindow`1"));
	}

	template <typename T = uintptr_t> T& Caption() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& Message() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& Button0() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& Button1() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& Button0Text() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& Button1Text() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = void> T OnShow() {
		return ((T (*)(BaseMessageWindow1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(BaseMessageWindow1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T OnShowb__6_0() {
		return ((T (*)(BaseMessageWindow1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T OnShowb__6_1() {
		return ((T (*)(BaseMessageWindow1*))(Il2CppBase() + 0x0))(this);
	}

};

}
