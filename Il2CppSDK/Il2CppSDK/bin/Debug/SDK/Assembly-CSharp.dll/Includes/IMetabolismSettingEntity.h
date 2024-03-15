#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IMetabolismSettingEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IMetabolismSettingEntity"));
	}


	template <typename R = MetabolismSettingComponent*> R get_metabolismSetting() {
		return ((R (*)(IMetabolismSettingEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasMetabolismSetting() {
		return ((R (*)(IMetabolismSettingEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddMetabolismSetting(float newHungerSpeed, float newThirstSpeed, float newCriticalValue, float newResurrectValue, float newDamage) {
		return ((R (*)(IMetabolismSettingEntity*, float, float, float, float, float))(Il2CppBase() + 0x0))(this, newHungerSpeed, newThirstSpeed, newCriticalValue, newResurrectValue, newDamage);
	}
	template <typename R = void> R ReplaceMetabolismSetting(float newHungerSpeed, float newThirstSpeed, float newCriticalValue, float newResurrectValue, float newDamage) {
		return ((R (*)(IMetabolismSettingEntity*, float, float, float, float, float))(Il2CppBase() + 0x0))(this, newHungerSpeed, newThirstSpeed, newCriticalValue, newResurrectValue, newDamage);
	}
	template <typename R = void> R RemoveMetabolismSetting() {
		return ((R (*)(IMetabolismSettingEntity*))(Il2CppBase() + 0x0))(this);
	}

};

