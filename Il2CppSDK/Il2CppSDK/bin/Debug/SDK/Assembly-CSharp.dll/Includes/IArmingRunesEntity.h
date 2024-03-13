#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IArmingRunesEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IArmingRunesEntity"));
	}


	template <typename T = ArmingRunesComponent*> T get_armingRunes() {
		return ((T (*)(IArmingRunesEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasArmingRunes() {
		return ((T (*)(IArmingRunesEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddArmingRunes(Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(IArmingRunesEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, newNames);
	}
	template <typename T = void> T ReplaceArmingRunes(Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(IArmingRunesEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, newNames);
	}
	template <typename T = void> T RemoveArmingRunes() {
		return ((T (*)(IArmingRunesEntity*))(Il2CppBase() + 0x0))(this);
	}

};

