#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StatusBarHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StatusBarHelper"));
	}


	template <typename T = StatusNameShow*> static T GetStatusNameShow(GameEntity* entity) {
		return ((T (*)(void *, GameEntity*))(Il2CppBase() + 0x1490A78))(0, entity);
	}
	template <typename T = float> static T HPBarShowDuration(GameEntity* entity) {
		return ((T (*)(void *, GameEntity*))(Il2CppBase() + 0x1490AC4))(0, entity);
	}
	template <typename T = bool> static T ShowInfoBar(GameEntity* entity) {
		return ((T (*)(void *, GameEntity*))(Il2CppBase() + 0x1490B0C))(0, entity);
	}
	template <typename T = bool> static T ShowHealthCount(GameEntity* entity) {
		return ((T (*)(void *, GameEntity*))(Il2CppBase() + 0x1490B60))(0, entity);
	}
	template <typename T = uintptr_t> static T GetHelthBarColor(GameEntity* entity, uintptr_t defaultColor, AccountEntity* ownerAccount) {
		return ((T (*)(void *, GameEntity*, uintptr_t, AccountEntity*))(Il2CppBase() + 0x1490BB4))(0, entity, defaultColor, ownerAccount);
	}

};

