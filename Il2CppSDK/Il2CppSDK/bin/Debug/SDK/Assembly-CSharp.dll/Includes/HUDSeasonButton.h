#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "HUDButtonBaseCustomizable.h" 

class HUDSeasonButton : public HUDButtonBaseCustomizable
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDSeasonButton"));
	}

	template <typename R = uintptr_t> R& seasonIcon() {
		return *(R*)((uintptr_t)this + 0xC8);
	}
	template <typename R = uintptr_t> R& battlePassIcon() {
		return *(R*)((uintptr_t)this + 0xD0);
	}

	template <typename R = void> R Bind(IHUDWindow* window) {
		return ((R (*)(HUDSeasonButton*, IHUDWindow*))(Il2CppBase() + 0x127D5F0))(this, window);
	}
	template <typename R = SeasonEntity*> R GetActiveSeason(SeasonEntity* currentSeason, SeasonEntity* nextSeason) {
		return ((R (*)(HUDSeasonButton*, SeasonEntity*, SeasonEntity*))(Il2CppBase() + 0x127D6B4))(this, currentSeason, nextSeason);
	}
	template <typename R = void> R OnClick() {
		return ((R (*)(HUDSeasonButton*))(Il2CppBase() + 0x127D7BC))(this);
	}
	template <typename R = void> R UpdateDraw(float deltaTime) {
		return ((R (*)(HUDSeasonButton*, float))(Il2CppBase() + 0x127DB9C))(this, deltaTime);
	}

};

