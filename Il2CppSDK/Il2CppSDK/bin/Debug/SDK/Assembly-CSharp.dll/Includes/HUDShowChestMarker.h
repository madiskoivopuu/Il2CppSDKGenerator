#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HUDShowChestMarker
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDShowChestMarker"));
	}

	template <typename R = uintptr_t> R& _button() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& _onMarker() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& _offMarker() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = IUIWindow*> R& _window() {
		return *(R*)((uintptr_t)this + 0x30);
	}

	template <typename R = void> R Awake() {
		return ((R (*)(HUDShowChestMarker*))(Il2CppBase() + 0x127EC74))(this);
	}
	template <typename R = void> R OnClick() {
		return ((R (*)(HUDShowChestMarker*))(Il2CppBase() + 0x127ED10))(this);
	}
	template <typename R = void> R Bind(IUIWindow* window) {
		return ((R (*)(HUDShowChestMarker*, IUIWindow*))(Il2CppBase() + 0x127EE74))(this, window);
	}
	template <typename R = void> R OnDraw(float detaTime) {
		return ((R (*)(HUDShowChestMarker*, float))(Il2CppBase() + 0x127F060))(this, detaTime);
	}
	template <typename R = void> R OnDestroy() {
		return ((R (*)(HUDShowChestMarker*))(Il2CppBase() + 0x127F2D4))(this);
	}
	template <typename R = void> R Clean() {
		return ((R (*)(HUDShowChestMarker*))(Il2CppBase() + 0x127F3F8))(this);
	}

};

