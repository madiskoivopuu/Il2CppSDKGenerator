#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "HUDButtonBaseCustomizable" 

class HUDSeasonButton: HUDButtonBaseCustomizable
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDSeasonButton"));
	}

	template <typename T = uintptr_t> T& seasonIcon() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& battlePassIcon() {
		return *(T*)((uintptr_t)this + 0xD0);
	}

	template <typename T = void> T Bind(uintptr_t window) {
		return ((T (*)(HUDSeasonButton*, uintptr_t))(Il2CppBase() + 0x127D5F0))(this, window);
	}
	template <typename T = uintptr_t> T GetActiveSeason(uintptr_t currentSeason, uintptr_t nextSeason) {
		return ((T (*)(HUDSeasonButton*, uintptr_t, uintptr_t))(Il2CppBase() + 0x127D6B4))(this, currentSeason, nextSeason);
	}
	template <typename T = void> T OnClick() {
		return ((T (*)(HUDSeasonButton*))(Il2CppBase() + 0x127D7BC))(this);
	}
	template <typename T = void> T UpdateDraw(float deltaTime) {
		return ((T (*)(HUDSeasonButton*, float))(Il2CppBase() + 0x127DB9C))(this, deltaTime);
	}

};

}
