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
	template <typename T = Il2CppDictionary<ViewInUI*, UIView*>*> T& _dict() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = IUIWindow*> T& Window() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = IUIWindow*> T get_Window() {
		return ((T (*)(UIViewController*))(Il2CppBase() + 0x1531570))(this);
	}
	template <typename T = void> T set_Window(IUIWindow* value) {
		return ((T (*)(UIViewController*, IUIWindow*))(Il2CppBase() + 0x1531578))(this, value);
	}
	template <typename T = void> T Init(IUIWindow* window) {
		return ((T (*)(UIViewController*, IUIWindow*))(Il2CppBase() + 0x1531580))(this, window);
	}
	template <typename T = void> T UpdateView(float deltaTime) {
		return ((T (*)(UIViewController*, float))(Il2CppBase() + 0x1531C40))(this, deltaTime);
	}
	template <typename T = void> T ViewInUI_RemoveEvent(ViewInUI* viewInUI) {
		return ((T (*)(UIViewController*, ViewInUI*))(Il2CppBase() + 0x1531DA8))(this, viewInUI);
	}
	template <typename T = void> T ViewInUI_AddEvent(ViewInUI* viewInUI) {
		return ((T (*)(UIViewController*, ViewInUI*))(Il2CppBase() + 0x1531AE0))(this, viewInUI);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(UIViewController*))(Il2CppBase() + 0x15318F8))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(UIViewController*))(Il2CppBase() + 0x1531ECC))(this);
	}

};

