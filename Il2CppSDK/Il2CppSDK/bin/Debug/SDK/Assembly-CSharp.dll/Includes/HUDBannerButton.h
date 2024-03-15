#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HUDBannerButton
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDBannerButton"));
	}

	template <typename R = uintptr_t> R& _button() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = IUIWindow*> R& _window() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R Awake() {
		return ((R (*)(HUDBannerButton*))(Il2CppBase() + 0x144B1E8))(this);
	}
	template <typename R = void> R Bind(IUIWindow* window) {
		return ((R (*)(HUDBannerButton*, IUIWindow*))(Il2CppBase() + 0x144B284))(this, window);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(HUDBannerButton*, float))(Il2CppBase() + 0x144B474))(this, deltaTime);
	}
	template <typename R = void> R OnClick() {
		return ((R (*)(HUDBannerButton*))(Il2CppBase() + 0x144B75C))(this);
	}
	template <typename R = void> R OnDestroy() {
		return ((R (*)(HUDBannerButton*))(Il2CppBase() + 0x144B888))(this);
	}

};

