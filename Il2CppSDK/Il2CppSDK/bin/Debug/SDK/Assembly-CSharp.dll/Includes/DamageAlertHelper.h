#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DamageAlertHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DamageAlertHelper"));
	}


	template <typename R = DamageAlertWindow*> static R GetDamageAlertWindow(UIWindowsManager* manager) {
		return ((R (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x164A8C4))(0, manager);
	}
	template <typename R = void> static R ApplyDamage(UIWindowsManager* manager, GameEntity* entity) {
		return ((R (*)(void *, UIWindowsManager*, GameEntity*))(Il2CppBase() + 0x164A998))(0, manager, entity);
	}

};

