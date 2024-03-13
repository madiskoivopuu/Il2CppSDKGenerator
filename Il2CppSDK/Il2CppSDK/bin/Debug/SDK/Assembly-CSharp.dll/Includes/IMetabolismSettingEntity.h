#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IMetabolismSettingEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IMetabolismSettingEntity"));
	}


	template <typename T = MetabolismSettingComponent*> T get_metabolismSetting() {
		return ((T (*)(IMetabolismSettingEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasMetabolismSetting() {
		return ((T (*)(IMetabolismSettingEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddMetabolismSetting(float newHungerSpeed, float newThirstSpeed, float newCriticalValue, float newResurrectValue, float newDamage) {
		return ((T (*)(IMetabolismSettingEntity*, float, float, float, float, float))(Il2CppBase() + 0x0))(this, newHungerSpeed, newThirstSpeed, newCriticalValue, newResurrectValue, newDamage);
	}
	template <typename T = void> T ReplaceMetabolismSetting(float newHungerSpeed, float newThirstSpeed, float newCriticalValue, float newResurrectValue, float newDamage) {
		return ((T (*)(IMetabolismSettingEntity*, float, float, float, float, float))(Il2CppBase() + 0x0))(this, newHungerSpeed, newThirstSpeed, newCriticalValue, newResurrectValue, newDamage);
	}
	template <typename T = void> T RemoveMetabolismSetting() {
		return ((T (*)(IMetabolismSettingEntity*))(Il2CppBase() + 0x0))(this);
	}

};

