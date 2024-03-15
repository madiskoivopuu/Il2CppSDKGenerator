#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "HUDWindowBase1.h" 

class MapHUDWindow : public HUDWindowBase1<MapHUDDataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MapHUDWindow"));
	}

	template <typename R = HUDEnergyInfo*> R& HUDEnergyInfo() {
		return *(R*)((uintptr_t)this + 0x120);
	}
	template <typename R = HUDGlobalBuffInfo*> R& GlobalBuffInfo() {
		return *(R*)((uintptr_t)this + 0x128);
	}
	template <typename R = TextButtonMonoBehaviour*> R& CurrentLocationButton() {
		return *(R*)((uintptr_t)this + 0x130);
	}
	template <typename R = HUDTradesButton*> R& TradesButton() {
		return *(R*)((uintptr_t)this + 0x138);
	}
	template <typename R = MapEventLocationsWindow*> R& EventWindow() {
		return *(R*)((uintptr_t)this + 0x140);
	}

	template <typename R = void> R OnShow() {
		return ((R (*)(MapHUDWindow*))(Il2CppBase() + 0x126F720))(this);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(MapHUDWindow*, float))(Il2CppBase() + 0x126F8D4))(this, deltaTime);
	}
	template <typename R = void> R CenterViewAtCurrentLocation() {
		return ((R (*)(MapHUDWindow*))(Il2CppBase() + 0x126FDB0))(this);
	}
	template <typename R = void> R BindButtons() {
		return ((R (*)(MapHUDWindow*))(Il2CppBase() + 0x126F7F0))(this);
	}
	template <typename R = void> R UpdatePanels(int64_t now, AccountEntity* account, GameEntity* avatar) {
		return ((R (*)(MapHUDWindow*, int64_t, AccountEntity*, GameEntity*))(Il2CppBase() + 0x126FC08))(this, now, account, avatar);
	}
	template <typename R = void> R OnClose() {
		return ((R (*)(MapHUDWindow*))(Il2CppBase() + 0x126FFE8))(this);
	}

};

