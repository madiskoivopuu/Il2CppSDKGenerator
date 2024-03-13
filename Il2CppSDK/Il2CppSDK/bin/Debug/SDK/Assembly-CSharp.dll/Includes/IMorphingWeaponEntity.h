#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IMorphingWeaponEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IMorphingWeaponEntity"));
	}


	template <typename T = MorphingWeaponComponent*> T get_morphingWeapon() {
		return ((T (*)(IMorphingWeaponEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasMorphingWeapon() {
		return ((T (*)(IMorphingWeaponEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddMorphingWeapon(ItemConditionComponent* newItemCondition, Il2CppString* newName) {
		return ((T (*)(IMorphingWeaponEntity*, ItemConditionComponent*, Il2CppString*))(Il2CppBase() + 0x0))(this, newItemCondition, newName);
	}
	template <typename T = void> T ReplaceMorphingWeapon(ItemConditionComponent* newItemCondition, Il2CppString* newName) {
		return ((T (*)(IMorphingWeaponEntity*, ItemConditionComponent*, Il2CppString*))(Il2CppBase() + 0x0))(this, newItemCondition, newName);
	}
	template <typename T = void> T RemoveMorphingWeapon() {
		return ((T (*)(IMorphingWeaponEntity*))(Il2CppBase() + 0x0))(this);
	}

};

