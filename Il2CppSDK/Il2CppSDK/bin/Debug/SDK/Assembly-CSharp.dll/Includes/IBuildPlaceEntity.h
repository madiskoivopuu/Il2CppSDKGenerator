#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IBuildPlaceEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IBuildPlaceEntity"));
	}


	template <typename T = BuildPlaceComponent*> T get_buildPlace() {
		return ((T (*)(IBuildPlaceEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasBuildPlace() {
		return ((T (*)(IBuildPlaceEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddBuildPlace(Fill* newFill) {
		return ((T (*)(IBuildPlaceEntity*, Fill*))(Il2CppBase() + 0x0))(this, newFill);
	}
	template <typename T = void> T ReplaceBuildPlace(Fill* newFill) {
		return ((T (*)(IBuildPlaceEntity*, Fill*))(Il2CppBase() + 0x0))(this, newFill);
	}
	template <typename T = void> T RemoveBuildPlace() {
		return ((T (*)(IBuildPlaceEntity*))(Il2CppBase() + 0x0))(this);
	}

};

