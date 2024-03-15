#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ICurrentRoofEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ICurrentRoofEntity"));
	}


	template <typename R = CurrentRoofComponent*> R get_currentRoof() {
		return ((R (*)(ICurrentRoofEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasCurrentRoof() {
		return ((R (*)(ICurrentRoofEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddCurrentRoof(int32_t newIndex) {
		return ((R (*)(ICurrentRoofEntity*, int32_t))(Il2CppBase() + 0x0))(this, newIndex);
	}
	template <typename R = void> R ReplaceCurrentRoof(int32_t newIndex) {
		return ((R (*)(ICurrentRoofEntity*, int32_t))(Il2CppBase() + 0x0))(this, newIndex);
	}
	template <typename R = void> R RemoveCurrentRoof() {
		return ((R (*)(ICurrentRoofEntity*))(Il2CppBase() + 0x0))(this);
	}

};

