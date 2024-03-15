#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IBuildPlaceEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IBuildPlaceEntity"));
	}


	template <typename R = BuildPlaceComponent*> R get_buildPlace() {
		return ((R (*)(IBuildPlaceEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasBuildPlace() {
		return ((R (*)(IBuildPlaceEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddBuildPlace(Fill* newFill) {
		return ((R (*)(IBuildPlaceEntity*, Fill*))(Il2CppBase() + 0x0))(this, newFill);
	}
	template <typename R = void> R ReplaceBuildPlace(Fill* newFill) {
		return ((R (*)(IBuildPlaceEntity*, Fill*))(Il2CppBase() + 0x0))(this, newFill);
	}
	template <typename R = void> R RemoveBuildPlace() {
		return ((R (*)(IBuildPlaceEntity*))(Il2CppBase() + 0x0))(this);
	}

};

