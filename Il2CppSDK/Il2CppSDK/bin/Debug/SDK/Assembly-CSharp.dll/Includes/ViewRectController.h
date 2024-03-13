#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ViewRectController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ViewRectController"));
	}

	template <typename T = ViewRectSettings*> T& _settings() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _rectTransform() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& _screenHeight() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& _screenWidth() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = ViewRect*> T& _viewRect() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = ViewRectSettings*> T get_Settings() {
		return ((T (*)(ViewRectController*))(Il2CppBase() + 0x15CCD5C))(this);
	}
	template <typename T = void> T set_Settings(ViewRectSettings* value) {
		return ((T (*)(ViewRectController*, ViewRectSettings*))(Il2CppBase() + 0x15CCD64))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(ViewRectController*))(Il2CppBase() + 0x15CCF64))(this);
	}
	template <typename T = void> T UpdateSize() {
		return ((T (*)(ViewRectController*))(Il2CppBase() + 0x15CCE1C))(this);
	}
	template <typename T = void> T UpdateDebugSize() {
		return ((T (*)(ViewRectController*))(Il2CppBase() + 0x15CD06C))(this);
	}
	template <typename T = void> T ResetSize() {
		return ((T (*)(ViewRectController*))(Il2CppBase() + 0x15CD44C))(this);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(ViewRectController*))(Il2CppBase() + 0x15CD52C))(this);
	}

};

