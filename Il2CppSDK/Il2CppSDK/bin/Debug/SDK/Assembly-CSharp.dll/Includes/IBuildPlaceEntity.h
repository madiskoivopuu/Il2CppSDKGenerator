#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IBuildPlaceEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IBuildPlaceEntity"));
	}


	template <typename T = uintptr_t> T get_buildPlace() {
		return ((T (*)(IBuildPlaceEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasBuildPlace() {
		return ((T (*)(IBuildPlaceEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddBuildPlace(uintptr_t newFill) {
		return ((T (*)(IBuildPlaceEntity*, uintptr_t))(Il2CppBase() + 0x0))(this, newFill);
	}
	template <typename T = void> T ReplaceBuildPlace(uintptr_t newFill) {
		return ((T (*)(IBuildPlaceEntity*, uintptr_t))(Il2CppBase() + 0x0))(this, newFill);
	}
	template <typename T = void> T RemoveBuildPlace() {
		return ((T (*)(IBuildPlaceEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
