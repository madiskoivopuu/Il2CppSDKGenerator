#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HUDShowChestMarker
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDShowChestMarker"));
	}

	template <typename T = uintptr_t> T& _button() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _onMarker() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _offMarker() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = IUIWindow*> T& _window() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(HUDShowChestMarker*))(Il2CppBase() + 0x127EC74))(this);
	}
	template <typename T = void> T OnClick() {
		return ((T (*)(HUDShowChestMarker*))(Il2CppBase() + 0x127ED10))(this);
	}
	template <typename T = void> T Bind(IUIWindow* window) {
		return ((T (*)(HUDShowChestMarker*, IUIWindow*))(Il2CppBase() + 0x127EE74))(this, window);
	}
	template <typename T = void> T OnDraw(float detaTime) {
		return ((T (*)(HUDShowChestMarker*, float))(Il2CppBase() + 0x127F060))(this, detaTime);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(HUDShowChestMarker*))(Il2CppBase() + 0x127F2D4))(this);
	}
	template <typename T = void> T Clean() {
		return ((T (*)(HUDShowChestMarker*))(Il2CppBase() + 0x127F3F8))(this);
	}

};

