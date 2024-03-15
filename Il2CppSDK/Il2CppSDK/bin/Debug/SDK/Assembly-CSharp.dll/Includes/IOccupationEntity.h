#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IOccupationEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IOccupationEntity"));
	}


	template <typename R = OccupationComponent*> R get_occupation() {
		return ((R (*)(IOccupationEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasOccupation() {
		return ((R (*)(IOccupationEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddOccupation(OccupationType newType) {
		return ((R (*)(IOccupationEntity*, OccupationType))(Il2CppBase() + 0x0))(this, newType);
	}
	template <typename R = void> R ReplaceOccupation(OccupationType newType) {
		return ((R (*)(IOccupationEntity*, OccupationType))(Il2CppBase() + 0x0))(this, newType);
	}
	template <typename R = void> R RemoveOccupation() {
		return ((R (*)(IOccupationEntity*))(Il2CppBase() + 0x0))(this);
	}

};

