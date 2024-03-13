#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IOccupationEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IOccupationEntity"));
	}


	template <typename T = OccupationComponent*> T get_occupation() {
		return ((T (*)(IOccupationEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasOccupation() {
		return ((T (*)(IOccupationEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddOccupation(OccupationType* newType) {
		return ((T (*)(IOccupationEntity*, OccupationType*))(Il2CppBase() + 0x0))(this, newType);
	}
	template <typename T = void> T ReplaceOccupation(OccupationType* newType) {
		return ((T (*)(IOccupationEntity*, OccupationType*))(Il2CppBase() + 0x0))(this, newType);
	}
	template <typename T = void> T RemoveOccupation() {
		return ((T (*)(IOccupationEntity*))(Il2CppBase() + 0x0))(this);
	}

};

