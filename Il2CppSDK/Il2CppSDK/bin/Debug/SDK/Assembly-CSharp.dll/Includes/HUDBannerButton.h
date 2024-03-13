#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HUDBannerButton
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDBannerButton"));
	}

	template <typename T = uintptr_t> T& _button() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = IUIWindow*> T& _window() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(HUDBannerButton*))(Il2CppBase() + 0x144B1E8))(this);
	}
	template <typename T = void> T Bind(IUIWindow* window) {
		return ((T (*)(HUDBannerButton*, IUIWindow*))(Il2CppBase() + 0x144B284))(this, window);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(HUDBannerButton*, float))(Il2CppBase() + 0x144B474))(this, deltaTime);
	}
	template <typename T = void> T OnClick() {
		return ((T (*)(HUDBannerButton*))(Il2CppBase() + 0x144B75C))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(HUDBannerButton*))(Il2CppBase() + 0x144B888))(this);
	}

};

