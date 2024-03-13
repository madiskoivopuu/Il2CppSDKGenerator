#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DamageAlertHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DamageAlertHelper"));
	}


	template <typename T = DamageAlertWindow*> static T GetDamageAlertWindow(UIWindowsManager* manager) {
		return ((T (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x164A8C4))(0, manager);
	}
	template <typename T = void> static T ApplyDamage(UIWindowsManager* manager, GameEntity* entity) {
		return ((T (*)(void *, UIWindowsManager*, GameEntity*))(Il2CppBase() + 0x164A998))(0, manager, entity);
	}

};

