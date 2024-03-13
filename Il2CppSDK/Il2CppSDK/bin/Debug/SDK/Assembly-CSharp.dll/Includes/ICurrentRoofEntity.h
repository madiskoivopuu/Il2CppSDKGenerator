#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ICurrentRoofEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ICurrentRoofEntity"));
	}


	template <typename T = CurrentRoofComponent*> T get_currentRoof() {
		return ((T (*)(ICurrentRoofEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasCurrentRoof() {
		return ((T (*)(ICurrentRoofEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddCurrentRoof(int32_t newIndex) {
		return ((T (*)(ICurrentRoofEntity*, int32_t))(Il2CppBase() + 0x0))(this, newIndex);
	}
	template <typename T = void> T ReplaceCurrentRoof(int32_t newIndex) {
		return ((T (*)(ICurrentRoofEntity*, int32_t))(Il2CppBase() + 0x0))(this, newIndex);
	}
	template <typename T = void> T RemoveCurrentRoof() {
		return ((T (*)(ICurrentRoofEntity*))(Il2CppBase() + 0x0))(this);
	}

};

