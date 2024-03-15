#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ISneakBackstabEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ISneakBackstabEntity"));
	}


	template <typename R = SneakBackstabComponent*> R get_sneakBackstab() {
		return ((R (*)(ISneakBackstabEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasSneakBackstab() {
		return ((R (*)(ISneakBackstabEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddSneakBackstab(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ISneakBackstabEntity*, float, ModifierGroup))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceSneakBackstab(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ISneakBackstabEntity*, float, ModifierGroup))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveSneakBackstab() {
		return ((R (*)(ISneakBackstabEntity*))(Il2CppBase() + 0x0))(this);
	}

};

