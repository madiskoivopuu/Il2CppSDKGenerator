#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IArmingRunesEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IArmingRunesEntity"));
	}


	template <typename R = ArmingRunesComponent*> R get_armingRunes() {
		return ((R (*)(IArmingRunesEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasArmingRunes() {
		return ((R (*)(IArmingRunesEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddArmingRunes(Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(IArmingRunesEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x0))(this, newNames);
	}
	template <typename R = void> R ReplaceArmingRunes(Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(IArmingRunesEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x0))(this, newNames);
	}
	template <typename R = void> R RemoveArmingRunes() {
		return ((R (*)(IArmingRunesEntity*))(Il2CppBase() + 0x0))(this);
	}

};

