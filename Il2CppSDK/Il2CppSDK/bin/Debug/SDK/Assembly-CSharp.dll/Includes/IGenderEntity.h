#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IGenderEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IGenderEntity"));
	}


	template <typename T = uintptr_t> T get_gender() {
		return ((T (*)(IGenderEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasGender() {
		return ((T (*)(IGenderEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddGender(uintptr_t newType) {
		return ((T (*)(IGenderEntity*, uintptr_t))(Il2CppBase() + 0x0))(this, newType);
	}
	template <typename T = void> T ReplaceGender(uintptr_t newType) {
		return ((T (*)(IGenderEntity*, uintptr_t))(Il2CppBase() + 0x0))(this, newType);
	}
	template <typename T = void> T RemoveGender() {
		return ((T (*)(IGenderEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
