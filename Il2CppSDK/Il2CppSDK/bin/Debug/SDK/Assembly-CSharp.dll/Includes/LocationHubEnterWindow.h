#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class LocationHubEnterWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LocationHubEnterWindow"));
	}

	template <typename R = uintptr_t> R& CloseButton() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& LocationImage() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = uintptr_t> R& CreateLabel() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = uintptr_t> R& CreateButton() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = uintptr_t> R& EnterButton() {
		return *(R*)((uintptr_t)this + 0x98);
	}

	template <typename R = void> R Awake() {
		return ((R (*)(LocationHubEnterWindow*))(Il2CppBase() + 0x17B335C))(this);
	}
	template <typename R = void> R OnShow() {
		return ((R (*)(LocationHubEnterWindow*))(Il2CppBase() + 0x17B3488))(this);
	}
	template <typename R = void> R TryEnterDistrict(bool popular) {
		return ((R (*)(LocationHubEnterWindow*, bool))(Il2CppBase() + 0x17B3A80))(this, popular);
	}
	 ValueTuple2<bool, Il2CppString*>* CheckEnterLocation(GameEntity* avatar, GameEntity* point, LocationEntity* location) {
		return ((ValueTuple2<bool, Il2CppString*>* (*)(LocationHubEnterWindow*, GameEntity*, GameEntity*, LocationEntity*))(Il2CppBase() + 0x17B38F8))(this, avatar, point, location);
	}
	template <typename R = void> R OnError(uintptr_t btn, Il2CppString* error) {
		return ((R (*)(LocationHubEnterWindow*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x17B3E60))(this, btn, error);
	}
	template <typename R = void> R OnClose() {
		return ((R (*)(LocationHubEnterWindow*))(Il2CppBase() + 0x17B3EA0))(this);
	}
	template <typename R = void> R Awakeb__6_0() {
		return ((R (*)(LocationHubEnterWindow*))(Il2CppBase() + 0x17B3F58))(this);
	}
	template <typename R = void> R Awakeb__6_1() {
		return ((R (*)(LocationHubEnterWindow*))(Il2CppBase() + 0x17B3F60))(this);
	}

};

