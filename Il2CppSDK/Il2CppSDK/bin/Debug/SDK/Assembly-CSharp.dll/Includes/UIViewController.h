#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UIViewController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIViewController"));
	}

	template <typename T = uintptr_t> T& _container() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& _dict() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& Window() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = uintptr_t> T get_Window() {
		return ((T (*)(UIViewController*))(Il2CppBase() + 0x1531570))(this);
	}
	template <typename T = void> T set_Window(uintptr_t value) {
		return ((T (*)(UIViewController*, uintptr_t))(Il2CppBase() + 0x1531578))(this, value);
	}
	template <typename T = void> T Init(uintptr_t window) {
		return ((T (*)(UIViewController*, uintptr_t))(Il2CppBase() + 0x1531580))(this, window);
	}
	template <typename T = void> T UpdateView(float deltaTime) {
		return ((T (*)(UIViewController*, float))(Il2CppBase() + 0x1531C40))(this, deltaTime);
	}
	template <typename T = void> T ViewInUI_RemoveEvent(uintptr_t viewInUI) {
		return ((T (*)(UIViewController*, uintptr_t))(Il2CppBase() + 0x1531DA8))(this, viewInUI);
	}
	template <typename T = void> T ViewInUI_AddEvent(uintptr_t viewInUI) {
		return ((T (*)(UIViewController*, uintptr_t))(Il2CppBase() + 0x1531AE0))(this, viewInUI);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(UIViewController*))(Il2CppBase() + 0x15318F8))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(UIViewController*))(Il2CppBase() + 0x1531ECC))(this);
	}

};

}
