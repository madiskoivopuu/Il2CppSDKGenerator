#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UIViewController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIViewController"));
	}

	template <typename R = uintptr_t> R& _container() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	 Il2CppDictionary<ViewInUI*, UIView*>*& _dict() {
		return *(Il2CppDictionary<ViewInUI*, UIView*>**)((uintptr_t)this + 0x20);
	}
	template <typename R = IUIWindow*> R& Window() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	template <typename R = IUIWindow*> R get_Window() {
		return ((R (*)(UIViewController*))(Il2CppBase() + 0x1531570))(this);
	}
	template <typename R = void> R set_Window(IUIWindow* value) {
		return ((R (*)(UIViewController*, IUIWindow*))(Il2CppBase() + 0x1531578))(this, value);
	}
	template <typename R = void> R Init(IUIWindow* window) {
		return ((R (*)(UIViewController*, IUIWindow*))(Il2CppBase() + 0x1531580))(this, window);
	}
	template <typename R = void> R UpdateView(float deltaTime) {
		return ((R (*)(UIViewController*, float))(Il2CppBase() + 0x1531C40))(this, deltaTime);
	}
	template <typename R = void> R ViewInUI_RemoveEvent(ViewInUI* viewInUI) {
		return ((R (*)(UIViewController*, ViewInUI*))(Il2CppBase() + 0x1531DA8))(this, viewInUI);
	}
	template <typename R = void> R ViewInUI_AddEvent(ViewInUI* viewInUI) {
		return ((R (*)(UIViewController*, ViewInUI*))(Il2CppBase() + 0x1531AE0))(this, viewInUI);
	}
	template <typename R = void> R Clear() {
		return ((R (*)(UIViewController*))(Il2CppBase() + 0x15318F8))(this);
	}
	template <typename R = void> R OnDestroy() {
		return ((R (*)(UIViewController*))(Il2CppBase() + 0x1531ECC))(this);
	}

};

