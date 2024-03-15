#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StatusBarHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StatusBarHelper"));
	}


	template <typename R = StatusNameShow> static R GetStatusNameShow(GameEntity* entity) {
		return ((R (*)(void *, GameEntity*))(Il2CppBase() + 0x1490A78))(0, entity);
	}
	template <typename R = float> static R HPBarShowDuration(GameEntity* entity) {
		return ((R (*)(void *, GameEntity*))(Il2CppBase() + 0x1490AC4))(0, entity);
	}
	template <typename R = bool> static R ShowInfoBar(GameEntity* entity) {
		return ((R (*)(void *, GameEntity*))(Il2CppBase() + 0x1490B0C))(0, entity);
	}
	template <typename R = bool> static R ShowHealthCount(GameEntity* entity) {
		return ((R (*)(void *, GameEntity*))(Il2CppBase() + 0x1490B60))(0, entity);
	}
	template <typename R = uintptr_t> static R GetHelthBarColor(GameEntity* entity, uintptr_t defaultColor, AccountEntity* ownerAccount) {
		return ((R (*)(void *, GameEntity*, uintptr_t, AccountEntity*))(Il2CppBase() + 0x1490BB4))(0, entity, defaultColor, ownerAccount);
	}

};

