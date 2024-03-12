#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ISneakBackstabEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ISneakBackstabEntity"));
	}


	template <typename T = uintptr_t> T get_sneakBackstab() {
		return ((T (*)(ISneakBackstabEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasSneakBackstab() {
		return ((T (*)(ISneakBackstabEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddSneakBackstab(float newValue, uintptr_t newGroup) {
		return ((T (*)(ISneakBackstabEntity*, float, uintptr_t))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceSneakBackstab(float newValue, uintptr_t newGroup) {
		return ((T (*)(ISneakBackstabEntity*, float, uintptr_t))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveSneakBackstab() {
		return ((T (*)(ISneakBackstabEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
