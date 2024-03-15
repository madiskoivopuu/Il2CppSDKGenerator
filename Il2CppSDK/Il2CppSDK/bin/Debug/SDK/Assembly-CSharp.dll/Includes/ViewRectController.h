#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ViewRectController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ViewRectController"));
	}

	template <typename R = ViewRectSettings*> R& _settings() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& _rectTransform() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = float> R& _screenHeight() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = float> R& _screenWidth() {
		return *(R*)((uintptr_t)this + 0x2C);
	}
	template <typename R = ViewRect*> R& _viewRect() {
		return *(R*)((uintptr_t)this + 0x30);
	}

	template <typename R = ViewRectSettings*> R get_Settings() {
		return ((R (*)(ViewRectController*))(Il2CppBase() + 0x15CCD5C))(this);
	}
	template <typename R = void> R set_Settings(ViewRectSettings* value) {
		return ((R (*)(ViewRectController*, ViewRectSettings*))(Il2CppBase() + 0x15CCD64))(this, value);
	}
	template <typename R = void> R Awake() {
		return ((R (*)(ViewRectController*))(Il2CppBase() + 0x15CCF64))(this);
	}
	template <typename R = void> R UpdateSize() {
		return ((R (*)(ViewRectController*))(Il2CppBase() + 0x15CCE1C))(this);
	}
	template <typename R = void> R UpdateDebugSize() {
		return ((R (*)(ViewRectController*))(Il2CppBase() + 0x15CD06C))(this);
	}
	template <typename R = void> R ResetSize() {
		return ((R (*)(ViewRectController*))(Il2CppBase() + 0x15CD44C))(this);
	}
	template <typename R = void> R LateUpdate() {
		return ((R (*)(ViewRectController*))(Il2CppBase() + 0x15CD52C))(this);
	}

};

