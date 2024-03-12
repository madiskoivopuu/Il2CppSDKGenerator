#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow`1" 

class LocationHubEnterWindow: UIWindow1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LocationHubEnterWindow"));
	}

	template <typename T = uintptr_t> T& CloseButton() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& LocationImage() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& CreateLabel() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& CreateButton() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& EnterButton() {
		return *(T*)((uintptr_t)this + 0x98);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(LocationHubEnterWindow*))(Il2CppBase() + 0x17B335C))(this);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(LocationHubEnterWindow*))(Il2CppBase() + 0x17B3488))(this);
	}
	template <typename T = void> T TryEnterDistrict(bool popular) {
		return ((T (*)(LocationHubEnterWindow*, bool))(Il2CppBase() + 0x17B3A80))(this, popular);
	}
	template <typename T = void*> T CheckEnterLocation(uintptr_t avatar, uintptr_t point, uintptr_t location) {
		return ((T (*)(LocationHubEnterWindow*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17B38F8))(this, avatar, point, location);
	}
	template <typename T = void> T OnError(uintptr_t btn, Il2CppString* error) {
		return ((T (*)(LocationHubEnterWindow*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x17B3E60))(this, btn, error);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(LocationHubEnterWindow*))(Il2CppBase() + 0x17B3EA0))(this);
	}
	template <typename T = void> T Awakeb__6_0() {
		return ((T (*)(LocationHubEnterWindow*))(Il2CppBase() + 0x17B3F58))(this);
	}
	template <typename T = void> T Awakeb__6_1() {
		return ((T (*)(LocationHubEnterWindow*))(Il2CppBase() + 0x17B3F60))(this);
	}

};

}
