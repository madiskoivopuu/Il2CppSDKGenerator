#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IMorphingWeaponEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IMorphingWeaponEntity"));
	}


	template <typename R = MorphingWeaponComponent*> R get_morphingWeapon() {
		return ((R (*)(IMorphingWeaponEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasMorphingWeapon() {
		return ((R (*)(IMorphingWeaponEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddMorphingWeapon(ItemConditionComponent* newItemCondition, Il2CppString* newName) {
		return ((R (*)(IMorphingWeaponEntity*, ItemConditionComponent*, Il2CppString*))(Il2CppBase() + 0x0))(this, newItemCondition, newName);
	}
	template <typename R = void> R ReplaceMorphingWeapon(ItemConditionComponent* newItemCondition, Il2CppString* newName) {
		return ((R (*)(IMorphingWeaponEntity*, ItemConditionComponent*, Il2CppString*))(Il2CppBase() + 0x0))(this, newItemCondition, newName);
	}
	template <typename R = void> R RemoveMorphingWeapon() {
		return ((R (*)(IMorphingWeaponEntity*))(Il2CppBase() + 0x0))(this);
	}

};

