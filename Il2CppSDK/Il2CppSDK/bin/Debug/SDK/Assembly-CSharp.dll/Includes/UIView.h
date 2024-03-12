#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UIView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIView"));
	}

	template <typename T = uintptr_t> T& _rectTransform() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _text() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _icon() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppVector3> T& _offset() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _controller() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T Init(uintptr_t controller, uintptr_t target) {
		return ((T (*)(UIView*, uintptr_t, uintptr_t))(Il2CppBase() + 0x152CC20))(this, controller, target);
	}
	template <typename T = void> T UpdateView(uintptr_t target) {
		return ((T (*)(UIView*, uintptr_t))(Il2CppBase() + 0x152CE1C))(this, target);
	}

};

}
